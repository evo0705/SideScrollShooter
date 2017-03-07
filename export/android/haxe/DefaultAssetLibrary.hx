#if !lime_hybrid


package;


import haxe.Timer;
import haxe.Unserializer;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.MovieClip;
import openfl.events.Event;
import openfl.text.Font;
import openfl.media.Sound;
import openfl.net.URLRequest;
import openfl.utils.ByteArray;
import openfl.Assets;

#if neko
import neko.vm.Deque;
import neko.vm.Thread;
#elseif cpp
import cpp.vm.Deque;
import cpp.vm.Thread;
#end

#if sys
import sys.FileSystem;
#end

#if ios
import openfl._legacy.utils.SystemPath;
#end


@:access(openfl.media.Sound)
class DefaultAssetLibrary extends AssetLibrary {
	
	
	private static var loaded = 0;
	private static var loading = 0;
	private static var workerIncomingQueue = new Deque<Dynamic> ();
	private static var workerResult = new Deque<Dynamic> ();
	private static var workerThread:Thread;
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		
		
		
		
		
		
		
		Font.registerFont (__ASSET__assets_fonts_normal_ttf);
		Font.registerFont (__ASSET__assets_fonts_pixelart_ttf);
		Font.registerFont (__ASSET__assets_fonts_pixelmix_ttf);
		Font.registerFont (__ASSET__assets_fonts_space_ttf);
		Font.registerFont (__ASSET__assets_fonts_visitor2_ttf);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		Font.registerFont (__ASSET__assets_fonts_nokiafc22_ttf);
		Font.registerFont (__ASSET__assets_fonts_arial_ttf);
		
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		className.set ("assets/fonts/nokiafc22.ttf", __ASSET__assets_fonts_nokiafc22_ttf);
		type.set ("assets/fonts/nokiafc22.ttf", AssetType.FONT);
		
		className.set ("assets/fonts/arial.ttf", __ASSET__assets_fonts_arial_ttf);
		type.set ("assets/fonts/arial.ttf", AssetType.FONT);
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		
	}
	
	
	public override function exists (id:String, type:AssetType):Bool {
		
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == type || ((type == SOUND || type == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			if (type == BINARY || type == null || (assetType == BINARY && type == TEXT)) {
				
				return true;
				
			}
			
		}
		
		return false;
		
	}
	
	
	public override function getBitmapData (id:String):BitmapData {
		
		if (className.exists (id)) {
			
			return cast (Type.createInstance (className.get (id), []), BitmapData);
			
		} else {
			
			return BitmapData.load (path.get (id));
			
		}
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		if (className.exists (id)) {
			
			return cast (Type.createInstance (className.get (id), []), ByteArray);
			
		} else {
			
			return ByteArray.readFile (path.get (id));
			
		}
		
	}
	
	
	public override function getFont (id:String):Font {
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			Font.registerFont (fontClass);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return new Font (path.get (id));
			
		}
		
	}
	
	
	public override function getMusic (id:String):Sound {
		
		if (className.exists (id)) {
			
			return cast (Type.createInstance (className.get (id), []), Sound);
			
		} else {
			
			return new Sound (new URLRequest (path.get (id)), null, true);
			
		}
		
	}
	
	
	public override function getPath (id:String):String {
		
		#if ios
		
		return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		#else
		
		return path.get (id);
		
		#end
		
	}
	
	
	public override function getSound (id:String):Sound {
		
		if (className.exists (id)) {
			
			return cast (Type.createInstance (className.get (id), []), Sound);
			
		} else {
			
			return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
			
		}
		
	}
	
	
	public override function getText (id:String):String {
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
	}
	
	
	public override function isLocal (id:String, type:AssetType):Bool {
		
		return true;
		
	}
	
	
	public override function list (type:AssetType):Array<String> {
		
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (type == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadBitmapData (id:String, handler:BitmapData -> Void):Void {
		
		__load (getBitmapData, id, handler);
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		__load (getBytes, id, handler);
		
	}
	
	
	public override function loadFont (id:String, handler:Font -> Void):Void {
		
		__load (getFont, id, handler);
		
	}
	
	
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								path.set (asset.id, asset.path);
								type.set (asset.id, Type.createEnum (AssetType, asset.type));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	
	
	public override function loadMusic (id:String, handler:Sound -> Void):Void {
		
		__load (getMusic, id, handler);
		
	}
	
	
	public override function loadSound (id:String, handler:Sound -> Void):Void {
		
		__load (getSound, id, handler);
		
	}
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
	}
	
	
	private static function __doWork ():Void {
		
		while (true) {
			
			var message = workerIncomingQueue.pop (true);
			
			if (message == "WORK") {
				
				var getMethod = workerIncomingQueue.pop (true);
				var id = workerIncomingQueue.pop (true);
				var handler = workerIncomingQueue.pop (true);
				
				var data = getMethod (id);
				workerResult.add ("RESULT");
				workerResult.add (data);
				workerResult.add (handler);
				
			} else if (message == "EXIT") {
				
				break;
				
			}
			
		}
		
	}
	
	
	private inline function __load<T> (getMethod:String->T, id:String, handler:T->Void):Void {
		
		workerIncomingQueue.add ("WORK");
		workerIncomingQueue.add (getMethod);
		workerIncomingQueue.add (id);
		workerIncomingQueue.add (handler);
		
		loading++;
		
	}
	
	
	public static function __poll ():Void {
		
		if (loading > loaded) {
			
			if (workerThread == null) {
				
				workerThread = Thread.create (__doWork);
				
			}
			
			var message = workerResult.pop (false);
			
			while (message == "RESULT") {
				
				loaded++;
				
				var data = workerResult.pop (true);
				var handler = workerResult.pop (true);
				
				if (handler != null) {
					
					handler (data);
					
				}
				
				message = workerResult.pop (false);
				
			}
			
		} else {
			
			if (workerThread != null) {
				
				workerIncomingQueue.add ("EXIT");
				workerThread = null;
				
			}
			
		}
		
	}
	
	
}


#if (windows || mac || linux)


@:font("C:/Users/Samuel/windows/flixel/3,3,11/assets/fonts/nokiafc22.ttf") @:keep #if display private #end class __ASSET__assets_fonts_nokiafc22_ttf extends flash.text.Font {}
@:font("C:/Users/Samuel/windows/flixel/3,3,11/assets/fonts/arial.ttf") @:keep #if display private #end class __ASSET__assets_fonts_arial_ttf extends flash.text.Font {}



@:keep class __ASSET__assets_fonts_normal_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/normal.ttf"; fontName = "Visitor TT2 BRK"; }}
@:keep class __ASSET__assets_fonts_pixelart_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/pixelart.ttf"; fontName = "Pixel-Art Regular"; }}
@:keep class __ASSET__assets_fonts_pixelmix_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/pixelmix.ttf"; fontName = "pixelmix Regular"; }}
@:keep class __ASSET__assets_fonts_space_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/space.ttf"; fontName = "PirulenRg-Regular"; }}
@:keep class __ASSET__assets_fonts_visitor2_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/visitor2.ttf"; fontName = "Visitor TT2 BRK"; }}


#else


class __ASSET__assets_fonts_normal_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/normal.ttf"; fontName = "Visitor TT2 BRK";  }}
class __ASSET__assets_fonts_pixelart_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/pixelart.ttf"; fontName = "Pixel-Art Regular";  }}
class __ASSET__assets_fonts_pixelmix_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/pixelmix.ttf"; fontName = "pixelmix Regular";  }}
class __ASSET__assets_fonts_space_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/space.ttf"; fontName = "PirulenRg-Regular";  }}
class __ASSET__assets_fonts_visitor2_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/visitor2.ttf"; fontName = "Visitor TT2 BRK";  }}
class __ASSET__assets_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/nokiafc22.ttf"; fontName = "Nokia Cellphone FC Small";  }}
class __ASSET__assets_fonts_arial_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/arial.ttf"; fontName = "Arial";  }}


#end


#else


package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Future;
import lime.app.Preloader;
import lime.app.Promise;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.text.Font;
import lime.utils.ByteArray;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if (js && html5)
import lime.net.URLLoader;
import lime.net.URLRequest;
#elseif flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.events.IOErrorEvent;
import flash.events.ProgressEvent;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if (openfl && !flash)
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_normal_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_pixelart_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_pixelmix_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_space_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_visitor2_ttf);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_arial_ttf);
		
		#end
		
		#if flash
		
		path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		path.set ("assets/data/level-0001.oel", "assets/data/level-0001.oel");
		type.set ("assets/data/level-0001.oel", AssetType.TEXT);
		path.set ("assets/data/level-0001.tmx", "assets/data/level-0001.tmx");
		type.set ("assets/data/level-0001.tmx", AssetType.TEXT);
		path.set ("assets/data/level-0002.tmx", "assets/data/level-0002.tmx");
		type.set ("assets/data/level-0002.tmx", AssetType.TEXT);
		path.set ("assets/data/map1.oep", "assets/data/map1.oep");
		type.set ("assets/data/map1.oep", AssetType.TEXT);
		path.set ("assets/data/stage.oep", "assets/data/stage.oep");
		type.set ("assets/data/stage.oep", AssetType.TEXT);
		path.set ("assets/fonts/normal.ttf", "assets/fonts/normal.ttf");
		type.set ("assets/fonts/normal.ttf", AssetType.FONT);
		path.set ("assets/fonts/pixelart.ttf", "assets/fonts/pixelart.ttf");
		type.set ("assets/fonts/pixelart.ttf", AssetType.FONT);
		path.set ("assets/fonts/pixelmix.ttf", "assets/fonts/pixelmix.ttf");
		type.set ("assets/fonts/pixelmix.ttf", AssetType.FONT);
		path.set ("assets/fonts/space.ttf", "assets/fonts/space.ttf");
		type.set ("assets/fonts/space.ttf", AssetType.FONT);
		path.set ("assets/fonts/visitor2.ttf", "assets/fonts/visitor2.ttf");
		type.set ("assets/fonts/visitor2.ttf", AssetType.FONT);
		path.set ("assets/images/bar-32-6.png", "assets/images/bar-32-6.png");
		type.set ("assets/images/bar-32-6.png", AssetType.IMAGE);
		path.set ("assets/images/bar-64-8.png", "assets/images/bar-64-8.png");
		type.set ("assets/images/bar-64-8.png", AssetType.IMAGE);
		path.set ("assets/images/bar-battery-sheet.png", "assets/images/bar-battery-sheet.png");
		type.set ("assets/images/bar-battery-sheet.png", AssetType.IMAGE);
		path.set ("assets/images/bar-battery.png", "assets/images/bar-battery.png");
		type.set ("assets/images/bar-battery.png", AssetType.IMAGE);
		path.set ("assets/images/bar-exp.png", "assets/images/bar-exp.png");
		type.set ("assets/images/bar-exp.png", AssetType.IMAGE);
		path.set ("assets/images/bar-health-sheet.png", "assets/images/bar-health-sheet.png");
		type.set ("assets/images/bar-health-sheet.png", AssetType.IMAGE);
		path.set ("assets/images/bar-health.png", "assets/images/bar-health.png");
		type.set ("assets/images/bar-health.png", AssetType.IMAGE);
		path.set ("assets/images/bar-v-32-8-sheet.png", "assets/images/bar-v-32-8-sheet.png");
		type.set ("assets/images/bar-v-32-8-sheet.png", AssetType.IMAGE);
		path.set ("assets/images/bar-v-32-8.png", "assets/images/bar-v-32-8.png");
		type.set ("assets/images/bar-v-32-8.png", AssetType.IMAGE);
		path.set ("assets/images/bar-v-64-8.png", "assets/images/bar-v-64-8.png");
		type.set ("assets/images/bar-v-64-8.png", AssetType.IMAGE);
		path.set ("assets/images/bars.png", "assets/images/bars.png");
		type.set ("assets/images/bars.png", AssetType.IMAGE);
		path.set ("assets/images/batterybar.png", "assets/images/batterybar.png");
		type.set ("assets/images/batterybar.png", AssetType.IMAGE);
		path.set ("assets/images/bricks.png", "assets/images/bricks.png");
		type.set ("assets/images/bricks.png", AssetType.IMAGE);
		path.set ("assets/images/bullet-0001.png", "assets/images/bullet-0001.png");
		type.set ("assets/images/bullet-0001.png", AssetType.IMAGE);
		path.set ("assets/images/bullet-0002.ase", "assets/images/bullet-0002.ase");
		type.set ("assets/images/bullet-0002.ase", AssetType.BINARY);
		path.set ("assets/images/bullet-0002.png", "assets/images/bullet-0002.png");
		type.set ("assets/images/bullet-0002.png", AssetType.IMAGE);
		path.set ("assets/images/bullet-0003.ase", "assets/images/bullet-0003.ase");
		type.set ("assets/images/bullet-0003.ase", AssetType.BINARY);
		path.set ("assets/images/bullet-0003.png", "assets/images/bullet-0003.png");
		type.set ("assets/images/bullet-0003.png", AssetType.IMAGE);
		path.set ("assets/images/buttonLeft.png", "assets/images/buttonLeft.png");
		type.set ("assets/images/buttonLeft.png", AssetType.IMAGE);
		path.set ("assets/images/buttonRight.png", "assets/images/buttonRight.png");
		type.set ("assets/images/buttonRight.png", AssetType.IMAGE);
		path.set ("assets/images/char-0001.png", "assets/images/char-0001.png");
		type.set ("assets/images/char-0001.png", AssetType.IMAGE);
		path.set ("assets/images/dpad.ase", "assets/images/dpad.ase");
		type.set ("assets/images/dpad.ase", AssetType.BINARY);
		path.set ("assets/images/dpad.png", "assets/images/dpad.png");
		type.set ("assets/images/dpad.png", AssetType.IMAGE);
		path.set ("assets/images/dpadA.ase", "assets/images/dpadA.ase");
		type.set ("assets/images/dpadA.ase", AssetType.BINARY);
		path.set ("assets/images/dpadA.png", "assets/images/dpadA.png");
		type.set ("assets/images/dpadA.png", AssetType.IMAGE);
		path.set ("assets/images/dpadB.ase", "assets/images/dpadB.ase");
		type.set ("assets/images/dpadB.ase", AssetType.BINARY);
		path.set ("assets/images/dpadB.png", "assets/images/dpadB.png");
		type.set ("assets/images/dpadB.png", AssetType.IMAGE);
		path.set ("assets/images/dpadleft.ase", "assets/images/dpadleft.ase");
		type.set ("assets/images/dpadleft.ase", AssetType.BINARY);
		path.set ("assets/images/dpadleft.png", "assets/images/dpadleft.png");
		type.set ("assets/images/dpadleft.png", AssetType.IMAGE);
		path.set ("assets/images/dpadright.ase", "assets/images/dpadright.ase");
		type.set ("assets/images/dpadright.ase", AssetType.BINARY);
		path.set ("assets/images/dpadright.png", "assets/images/dpadright.png");
		type.set ("assets/images/dpadright.png", AssetType.IMAGE);
		path.set ("assets/images/emptybar.png", "assets/images/emptybar.png");
		type.set ("assets/images/emptybar.png", AssetType.IMAGE);
		path.set ("assets/images/enemy-0001.png", "assets/images/enemy-0001.png");
		type.set ("assets/images/enemy-0001.png", AssetType.IMAGE);
		path.set ("assets/images/floor-0001.png", "assets/images/floor-0001.png");
		type.set ("assets/images/floor-0001.png", AssetType.IMAGE);
		path.set ("assets/images/gibs-0001.png", "assets/images/gibs-0001.png");
		type.set ("assets/images/gibs-0001.png", AssetType.IMAGE);
		path.set ("assets/images/gibs.png", "assets/images/gibs.png");
		type.set ("assets/images/gibs.png", AssetType.IMAGE);
		path.set ("assets/images/gun-0001.ase", "assets/images/gun-0001.ase");
		type.set ("assets/images/gun-0001.ase", AssetType.BINARY);
		path.set ("assets/images/gun-0001.png", "assets/images/gun-0001.png");
		type.set ("assets/images/gun-0001.png", AssetType.IMAGE);
		path.set ("assets/images/healthbar.png", "assets/images/healthbar.png");
		type.set ("assets/images/healthbar.png", AssetType.IMAGE);
		path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
		type.set ("assets/images/images-go-here.txt", AssetType.TEXT);
		path.set ("assets/images/level.png", "assets/images/level.png");
		type.set ("assets/images/level.png", AssetType.IMAGE);
		path.set ("assets/images/Sprite-0002.png", "assets/images/Sprite-0002.png");
		type.set ("assets/images/Sprite-0002.png", AssetType.IMAGE);
		path.set ("assets/images/stage1.oep", "assets/images/stage1.oep");
		type.set ("assets/images/stage1.oep", AssetType.TEXT);
		path.set ("assets/images/tiles-0001.ase", "assets/images/tiles-0001.ase");
		type.set ("assets/images/tiles-0001.ase", AssetType.BINARY);
		path.set ("assets/images/tiles-0001.png", "assets/images/tiles-0001.png");
		type.set ("assets/images/tiles-0001.png", AssetType.IMAGE);
		path.set ("assets/images/tree-0001.png", "assets/images/tree-0001.png");
		type.set ("assets/images/tree-0001.png", AssetType.IMAGE);
		path.set ("assets/music/bgm-0001.ogg", "assets/music/bgm-0001.ogg");
		type.set ("assets/music/bgm-0001.ogg", AssetType.SOUND);
		path.set ("assets/music/bgm-0002.ogg", "assets/music/bgm-0002.ogg");
		type.set ("assets/music/bgm-0002.ogg", AssetType.SOUND);
		path.set ("assets/music/chase.ogg", "assets/music/chase.ogg");
		type.set ("assets/music/chase.ogg", AssetType.SOUND);
		path.set ("assets/music/fairy.ogg", "assets/music/fairy.ogg");
		type.set ("assets/music/fairy.ogg", AssetType.SOUND);
		path.set ("assets/music/fairyland.ogg", "assets/music/fairyland.ogg");
		type.set ("assets/music/fairyland.ogg", AssetType.SOUND);
		path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		path.set ("assets/music/time-break.ogg", "assets/music/time-break.ogg");
		type.set ("assets/music/time-break.ogg", AssetType.SOUND);
		path.set ("assets/sounds/gun-0001.ogg", "assets/sounds/gun-0001.ogg");
		type.set ("assets/sounds/gun-0001.ogg", AssetType.SOUND);
		path.set ("assets/sounds/gun-0002.ogg", "assets/sounds/gun-0002.ogg");
		type.set ("assets/sounds/gun-0002.ogg", AssetType.SOUND);
		path.set ("assets/sounds/gun-0003.ogg", "assets/sounds/gun-0003.ogg");
		type.set ("assets/sounds/gun-0003.ogg", AssetType.SOUND);
		path.set ("assets/sounds/jump-0001.ogg", "assets/sounds/jump-0001.ogg");
		type.set ("assets/sounds/jump-0001.ogg", AssetType.SOUND);
		path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		path.set ("assets/sounds/step-0001.ogg", "assets/sounds/step-0001.ogg");
		type.set ("assets/sounds/step-0001.ogg", AssetType.SOUND);
		path.set ("assets/sounds/step-0002.ogg", "assets/sounds/step-0002.ogg");
		type.set ("assets/sounds/step-0002.ogg", AssetType.SOUND);
		path.set ("assets/sounds/walk-0001.ogg", "assets/sounds/walk-0001.ogg");
		type.set ("assets/sounds/walk-0001.ogg", AssetType.SOUND);
		path.set ("assets/sounds/walk-0002.ogg", "assets/sounds/walk-0002.ogg");
		type.set ("assets/sounds/walk-0002.ogg", AssetType.SOUND);
		path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
		type.set ("assets/sounds/beep.ogg", AssetType.SOUND);
		path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
		type.set ("assets/sounds/flixel.ogg", AssetType.SOUND);
		className.set ("assets/fonts/nokiafc22.ttf", __ASSET__assets_fonts_nokiafc22_ttf);
		type.set ("assets/fonts/nokiafc22.ttf", AssetType.FONT);
		className.set ("assets/fonts/arial.ttf", __ASSET__assets_fonts_arial_ttf);
		type.set ("assets/fonts/arial.ttf", AssetType.FONT);
		
		
		#elseif html5
		
		var id;
		id = "assets/data/data-goes-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/data/level-0001.oel";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/data/level-0001.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/data/level-0002.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/data/map1.oep";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/data/stage.oep";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/fonts/normal.ttf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "assets/fonts/pixelart.ttf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "assets/fonts/pixelmix.ttf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "assets/fonts/space.ttf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "assets/fonts/visitor2.ttf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "assets/images/bar-32-6.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bar-64-8.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bar-battery-sheet.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bar-battery.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bar-exp.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bar-health-sheet.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bar-health.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bar-v-32-8-sheet.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bar-v-32-8.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bar-v-64-8.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bars.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/batterybar.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bricks.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bullet-0001.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bullet-0002.ase";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/images/bullet-0002.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bullet-0003.ase";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/images/bullet-0003.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/buttonLeft.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/buttonRight.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/char-0001.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/dpad.ase";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/images/dpad.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/dpadA.ase";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/images/dpadA.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/dpadB.ase";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/images/dpadB.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/dpadleft.ase";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/images/dpadleft.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/dpadright.ase";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/images/dpadright.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/emptybar.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enemy-0001.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/floor-0001.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/gibs-0001.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/gibs.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/gun-0001.ase";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/images/gun-0001.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/healthbar.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/images-go-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/images/level.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/Sprite-0002.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/stage1.oep";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/images/tiles-0001.ase";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/images/tiles-0001.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/tree-0001.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/music/bgm-0001.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/music/bgm-0002.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/music/chase.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/music/fairy.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/music/fairyland.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/music/music-goes-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/music/time-break.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/gun-0001.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/gun-0002.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/gun-0003.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/jump-0001.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/sounds-go-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/sounds/step-0001.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/step-0002.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/walk-0001.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/walk-0002.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/beep.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/flixel.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/fonts/nokiafc22.ttf";
		className.set (id, __ASSET__assets_fonts_nokiafc22_ttf);
		
		type.set (id, AssetType.FONT);
		id = "assets/fonts/arial.ttf";
		className.set (id, __ASSET__assets_fonts_arial_ttf);
		
		type.set (id, AssetType.FONT);
		
		
		var assetsPrefix = null;
		if (ApplicationMain.config != null && Reflect.hasField (ApplicationMain.config, "assetsPrefix")) {
			assetsPrefix = ApplicationMain.config.assetsPrefix;
		}
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		className.set ("assets/fonts/normal.ttf", __ASSET__assets_fonts_normal_ttf);
		type.set ("assets/fonts/normal.ttf", AssetType.FONT);
		
		className.set ("assets/fonts/pixelart.ttf", __ASSET__assets_fonts_pixelart_ttf);
		type.set ("assets/fonts/pixelart.ttf", AssetType.FONT);
		
		className.set ("assets/fonts/pixelmix.ttf", __ASSET__assets_fonts_pixelmix_ttf);
		type.set ("assets/fonts/pixelmix.ttf", AssetType.FONT);
		
		className.set ("assets/fonts/space.ttf", __ASSET__assets_fonts_space_ttf);
		type.set ("assets/fonts/space.ttf", AssetType.FONT);
		
		className.set ("assets/fonts/visitor2.ttf", __ASSET__assets_fonts_visitor2_ttf);
		type.set ("assets/fonts/visitor2.ttf", AssetType.FONT);
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		className.set ("assets/fonts/nokiafc22.ttf", __ASSET__assets_fonts_nokiafc22_ttf);
		type.set ("assets/fonts/nokiafc22.ttf", AssetType.FONT);
		
		className.set ("assets/fonts/arial.ttf", __ASSET__assets_fonts_arial_ttf);
		type.set ("assets/fonts/arial.ttf", AssetType.FONT);
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						onChange.dispatch ();
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), ByteArray));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return cast (Type.createInstance (className.get (id), []), ByteArray);
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return bitmapData.getPixels (bitmapData.rect);
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif html5
		
		var bytes:ByteArray = null;
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var data = loader.data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var bytes:ByteArray = null;
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var data = loader.data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String):Future<AudioBuffer> {
		
		var promise = new Promise<AudioBuffer> ();
		
		#if (flash)
		
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				promise.complete (audioBuffer);
				
			});
			soundLoader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			soundLoader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getAudioBuffer (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<AudioBuffer> (function () return getAudioBuffer (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadBytes (id:String):Future<ByteArray> {
		
		var promise = new Promise<ByteArray> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				promise.complete (bytes);
				
			});
			loader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.dataFormat = BINARY;
			loader.onComplete.add (function (_):Void {
				
				promise.complete (loader.data);
				
			});
			loader.onProgress.add (function (_, loaded, total) {
				
				if (total == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (loaded / total);
					
				}
				
			});
			loader.onIOError.add (function (_, e) {
				
				promise.error (e);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<ByteArray> (function () return getBytes (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadImage (id:String):Future<Image> {
		
		var promise = new Promise<Image> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				promise.complete (Image.fromBitmapData (bitmapData));
				
			});
			loader.contentLoaderInfo.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.contentLoaderInfo.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var image = new js.html.Image ();
			image.onload = function (_):Void {
				
				promise.complete (Image.fromImageElement (image));
				
			}
			image.onerror = promise.error;
			image.src = path.get (id);
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Image> (function () return getImage (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = ByteArray.readFile ("../Resources/manifest");
			#elseif ios
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if ios
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadText (id:String):Future<String> {
		
		var promise = new Promise<String> ();
		
		#if html5
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.onComplete.add (function (_):Void {
				
				promise.complete (loader.data);
				
			});
			loader.onProgress.add (function (_, loaded, total) {
				
				if (total == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (loaded / total);
					
				}
				
			});
			loader.onIOError.add (function (_, msg) promise.error (msg));
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getText (id));
			
		}
		
		#else
		
		promise.completeWith (loadBytes (id).then (function (bytes) {
			
			return new Future<String> (function () {
				
				if (bytes == null) {
					
					return null;
					
				} else {
					
					return bytes.readUTFBytes (bytes.length);
					
				}
				
			});
			
		}));
		
		#end
		
		return promise.future;
		
	}
	
	
}


#if !display
#if flash












































































@:keep @:bind #if display private #end class __ASSET__assets_fonts_nokiafc22_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_arial_ttf extends null { }


#elseif html5







@:keep #if display private #end class __ASSET__assets_fonts_normal_ttf extends lime.text.Font { public function new () { super (); name = "Visitor TT2 BRK"; } } 
@:keep #if display private #end class __ASSET__assets_fonts_pixelart_ttf extends lime.text.Font { public function new () { super (); name = "Pixel-Art Regular"; } } 
@:keep #if display private #end class __ASSET__assets_fonts_pixelmix_ttf extends lime.text.Font { public function new () { super (); name = "pixelmix Regular"; } } 
@:keep #if display private #end class __ASSET__assets_fonts_space_ttf extends lime.text.Font { public function new () { super (); name = "PirulenRg-Regular"; } } 
@:keep #if display private #end class __ASSET__assets_fonts_visitor2_ttf extends lime.text.Font { public function new () { super (); name = "Visitor TT2 BRK"; } } 
































































@:keep #if display private #end class __ASSET__assets_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { super (); name = "Nokia Cellphone FC Small"; } } 
@:keep #if display private #end class __ASSET__assets_fonts_arial_ttf extends lime.text.Font { public function new () { super (); name = "Arial"; } } 


#else

@:keep #if display private #end class __ASSET__assets_fonts_normal_ttf extends lime.text.Font { public function new () { __fontPath = #if ios "assets/" + #end "assets/fonts/normal.ttf"; name = "Visitor TT2 BRK"; super (); }}
@:keep #if display private #end class __ASSET__assets_fonts_pixelart_ttf extends lime.text.Font { public function new () { __fontPath = #if ios "assets/" + #end "assets/fonts/pixelart.ttf"; name = "Pixel-Art Regular"; super (); }}
@:keep #if display private #end class __ASSET__assets_fonts_pixelmix_ttf extends lime.text.Font { public function new () { __fontPath = #if ios "assets/" + #end "assets/fonts/pixelmix.ttf"; name = "pixelmix Regular"; super (); }}
@:keep #if display private #end class __ASSET__assets_fonts_space_ttf extends lime.text.Font { public function new () { __fontPath = #if ios "assets/" + #end "assets/fonts/space.ttf"; name = "PirulenRg-Regular"; super (); }}
@:keep #if display private #end class __ASSET__assets_fonts_visitor2_ttf extends lime.text.Font { public function new () { __fontPath = #if ios "assets/" + #end "assets/fonts/visitor2.ttf"; name = "Visitor TT2 BRK"; super (); }}


#if (windows || mac || linux || cpp)


@:font("C:/Users/Samuel/windows/flixel/3,3,11/assets/fonts/nokiafc22.ttf") #if display private #end class __ASSET__assets_fonts_nokiafc22_ttf extends lime.text.Font {}
@:font("C:/Users/Samuel/windows/flixel/3,3,11/assets/fonts/arial.ttf") #if display private #end class __ASSET__assets_fonts_arial_ttf extends lime.text.Font {}



#end
#end

#if (openfl && !flash)
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_normal_ttf extends openfl.text.Font { public function new () { __fontPath = #if ios "assets/" + #end "assets/fonts/normal.ttf"; name = "Visitor TT2 BRK"; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_pixelart_ttf extends openfl.text.Font { public function new () { __fontPath = #if ios "assets/" + #end "assets/fonts/pixelart.ttf"; name = "Pixel-Art Regular"; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_pixelmix_ttf extends openfl.text.Font { public function new () { __fontPath = #if ios "assets/" + #end "assets/fonts/pixelmix.ttf"; name = "pixelmix Regular"; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_space_ttf extends openfl.text.Font { public function new () { __fontPath = #if ios "assets/" + #end "assets/fonts/space.ttf"; name = "PirulenRg-Regular"; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_visitor2_ttf extends openfl.text.Font { public function new () { __fontPath = #if ios "assets/" + #end "assets/fonts/visitor2.ttf"; name = "Visitor TT2 BRK"; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__assets_fonts_nokiafc22_ttf (); src = font.src; name = font.name; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_arial_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__assets_fonts_arial_ttf (); src = font.src; name = font.name; super (); }}

#end

#end


#end