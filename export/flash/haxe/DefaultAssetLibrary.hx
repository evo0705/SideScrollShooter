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
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_pixelart_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_pixelmix_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_space_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_visitor2_ttf);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_arial_ttf);
		
		#end
		
		#if flash
		
		className.set ("assets/data/data-goes-here.txt", __ASSET__assets_data_data_goes_here_txt);
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		className.set ("assets/data/level-0001.oel", __ASSET__assets_data_level_0001_oel);
		type.set ("assets/data/level-0001.oel", AssetType.TEXT);
		className.set ("assets/data/level-0001.tmx", __ASSET__assets_data_level_0001_tmx);
		type.set ("assets/data/level-0001.tmx", AssetType.TEXT);
		className.set ("assets/data/level-0002.tmx", __ASSET__assets_data_level_0002_tmx);
		type.set ("assets/data/level-0002.tmx", AssetType.TEXT);
		className.set ("assets/data/map1.oep", __ASSET__assets_data_map1_oep);
		type.set ("assets/data/map1.oep", AssetType.TEXT);
		className.set ("assets/data/stage.oep", __ASSET__assets_data_stage_oep);
		type.set ("assets/data/stage.oep", AssetType.TEXT);
		className.set ("assets/fonts/pixelart.ttf", __ASSET__assets_fonts_pixelart_ttf);
		type.set ("assets/fonts/pixelart.ttf", AssetType.FONT);
		className.set ("assets/fonts/pixelmix.ttf", __ASSET__assets_fonts_pixelmix_ttf);
		type.set ("assets/fonts/pixelmix.ttf", AssetType.FONT);
		className.set ("assets/fonts/space.ttf", __ASSET__assets_fonts_space_ttf);
		type.set ("assets/fonts/space.ttf", AssetType.FONT);
		className.set ("assets/fonts/visitor2.ttf", __ASSET__assets_fonts_visitor2_ttf);
		type.set ("assets/fonts/visitor2.ttf", AssetType.FONT);
		className.set ("assets/images/bar-32-6.png", __ASSET__assets_images_bar_32_6_png);
		type.set ("assets/images/bar-32-6.png", AssetType.IMAGE);
		className.set ("assets/images/bar-64-8.png", __ASSET__assets_images_bar_64_8_png);
		type.set ("assets/images/bar-64-8.png", AssetType.IMAGE);
		className.set ("assets/images/bar-battery.png", __ASSET__assets_images_bar_battery_png);
		type.set ("assets/images/bar-battery.png", AssetType.IMAGE);
		className.set ("assets/images/bar-exp.png", __ASSET__assets_images_bar_exp_png);
		type.set ("assets/images/bar-exp.png", AssetType.IMAGE);
		className.set ("assets/images/bar-health.png", __ASSET__assets_images_bar_health_png);
		type.set ("assets/images/bar-health.png", AssetType.IMAGE);
		className.set ("assets/images/bricks.png", __ASSET__assets_images_bricks_png);
		type.set ("assets/images/bricks.png", AssetType.IMAGE);
		className.set ("assets/images/bullet-0001.png", __ASSET__assets_images_bullet_0001_png);
		type.set ("assets/images/bullet-0001.png", AssetType.IMAGE);
		className.set ("assets/images/bullet-0002.ase", __ASSET__assets_images_bullet_0002_ase);
		type.set ("assets/images/bullet-0002.ase", AssetType.BINARY);
		className.set ("assets/images/bullet-0002.png", __ASSET__assets_images_bullet_0002_png);
		type.set ("assets/images/bullet-0002.png", AssetType.IMAGE);
		className.set ("assets/images/buttonLeft.png", __ASSET__assets_images_buttonleft_png);
		type.set ("assets/images/buttonLeft.png", AssetType.IMAGE);
		className.set ("assets/images/buttonRight.png", __ASSET__assets_images_buttonright_png);
		type.set ("assets/images/buttonRight.png", AssetType.IMAGE);
		className.set ("assets/images/char-0001.png", __ASSET__assets_images_char_0001_png);
		type.set ("assets/images/char-0001.png", AssetType.IMAGE);
		className.set ("assets/images/dpad.ase", __ASSET__assets_images_dpad_ase);
		type.set ("assets/images/dpad.ase", AssetType.BINARY);
		className.set ("assets/images/dpad.png", __ASSET__assets_images_dpad_png);
		type.set ("assets/images/dpad.png", AssetType.IMAGE);
		className.set ("assets/images/dpadA.ase", __ASSET__assets_images_dpada_ase);
		type.set ("assets/images/dpadA.ase", AssetType.BINARY);
		className.set ("assets/images/dpadA.png", __ASSET__assets_images_dpada_png);
		type.set ("assets/images/dpadA.png", AssetType.IMAGE);
		className.set ("assets/images/dpadB.ase", __ASSET__assets_images_dpadb_ase);
		type.set ("assets/images/dpadB.ase", AssetType.BINARY);
		className.set ("assets/images/dpadB.png", __ASSET__assets_images_dpadb_png);
		type.set ("assets/images/dpadB.png", AssetType.IMAGE);
		className.set ("assets/images/dpadleft.ase", __ASSET__assets_images_dpadleft_ase);
		type.set ("assets/images/dpadleft.ase", AssetType.BINARY);
		className.set ("assets/images/dpadleft.png", __ASSET__assets_images_dpadleft_png);
		type.set ("assets/images/dpadleft.png", AssetType.IMAGE);
		className.set ("assets/images/dpadright.ase", __ASSET__assets_images_dpadright_ase);
		type.set ("assets/images/dpadright.ase", AssetType.BINARY);
		className.set ("assets/images/dpadright.png", __ASSET__assets_images_dpadright_png);
		type.set ("assets/images/dpadright.png", AssetType.IMAGE);
		className.set ("assets/images/enemy-0001.png", __ASSET__assets_images_enemy_0001_png);
		type.set ("assets/images/enemy-0001.png", AssetType.IMAGE);
		className.set ("assets/images/floor-0001.png", __ASSET__assets_images_floor_0001_png);
		type.set ("assets/images/floor-0001.png", AssetType.IMAGE);
		className.set ("assets/images/gibs-0001.png", __ASSET__assets_images_gibs_0001_png);
		type.set ("assets/images/gibs-0001.png", AssetType.IMAGE);
		className.set ("assets/images/gibs.png", __ASSET__assets_images_gibs_png);
		type.set ("assets/images/gibs.png", AssetType.IMAGE);
		className.set ("assets/images/images-go-here.txt", __ASSET__assets_images_images_go_here_txt);
		type.set ("assets/images/images-go-here.txt", AssetType.TEXT);
		className.set ("assets/images/level.png", __ASSET__assets_images_level_png);
		type.set ("assets/images/level.png", AssetType.IMAGE);
		className.set ("assets/images/Sprite-0002.png", __ASSET__assets_images_sprite_0002_png);
		type.set ("assets/images/Sprite-0002.png", AssetType.IMAGE);
		className.set ("assets/images/stage1.oep", __ASSET__assets_images_stage1_oep);
		type.set ("assets/images/stage1.oep", AssetType.TEXT);
		className.set ("assets/images/tiles-0001.ase", __ASSET__assets_images_tiles_0001_ase);
		type.set ("assets/images/tiles-0001.ase", AssetType.BINARY);
		className.set ("assets/images/tiles-0001.png", __ASSET__assets_images_tiles_0001_png);
		type.set ("assets/images/tiles-0001.png", AssetType.IMAGE);
		className.set ("assets/images/tree-0001.png", __ASSET__assets_images_tree_0001_png);
		type.set ("assets/images/tree-0001.png", AssetType.IMAGE);
		className.set ("assets/music/bgm-0001.ogg", __ASSET__assets_music_bgm_0001_ogg);
		type.set ("assets/music/bgm-0001.ogg", AssetType.SOUND);
		className.set ("assets/music/bgm-0002.ogg", __ASSET__assets_music_bgm_0002_ogg);
		type.set ("assets/music/bgm-0002.ogg", AssetType.SOUND);
		className.set ("assets/music/chase.ogg", __ASSET__assets_music_chase_ogg);
		type.set ("assets/music/chase.ogg", AssetType.SOUND);
		className.set ("assets/music/fairy.ogg", __ASSET__assets_music_fairy_ogg);
		type.set ("assets/music/fairy.ogg", AssetType.SOUND);
		className.set ("assets/music/fairyland.ogg", __ASSET__assets_music_fairyland_ogg);
		type.set ("assets/music/fairyland.ogg", AssetType.SOUND);
		className.set ("assets/music/music-goes-here.txt", __ASSET__assets_music_music_goes_here_txt);
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		className.set ("assets/music/time-break.ogg", __ASSET__assets_music_time_break_ogg);
		type.set ("assets/music/time-break.ogg", AssetType.SOUND);
		className.set ("assets/sounds/gun-0001.ogg", __ASSET__assets_sounds_gun_0001_ogg);
		type.set ("assets/sounds/gun-0001.ogg", AssetType.SOUND);
		className.set ("assets/sounds/gun-0002.ogg", __ASSET__assets_sounds_gun_0002_ogg);
		type.set ("assets/sounds/gun-0002.ogg", AssetType.SOUND);
		className.set ("assets/sounds/gun-0003.ogg", __ASSET__assets_sounds_gun_0003_ogg);
		type.set ("assets/sounds/gun-0003.ogg", AssetType.SOUND);
		className.set ("assets/sounds/jump-0001.ogg", __ASSET__assets_sounds_jump_0001_ogg);
		type.set ("assets/sounds/jump-0001.ogg", AssetType.SOUND);
		className.set ("assets/sounds/sounds-go-here.txt", __ASSET__assets_sounds_sounds_go_here_txt);
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		className.set ("assets/sounds/step-0001.ogg", __ASSET__assets_sounds_step_0001_ogg);
		type.set ("assets/sounds/step-0001.ogg", AssetType.SOUND);
		className.set ("assets/sounds/step-0002.ogg", __ASSET__assets_sounds_step_0002_ogg);
		type.set ("assets/sounds/step-0002.ogg", AssetType.SOUND);
		className.set ("assets/sounds/walk-0001.ogg", __ASSET__assets_sounds_walk_0001_ogg);
		type.set ("assets/sounds/walk-0001.ogg", AssetType.SOUND);
		className.set ("assets/sounds/walk-0002.ogg", __ASSET__assets_sounds_walk_0002_ogg);
		type.set ("assets/sounds/walk-0002.ogg", AssetType.SOUND);
		className.set ("assets/sounds/beep.mp3", __ASSET__assets_sounds_beep_mp3);
		type.set ("assets/sounds/beep.mp3", AssetType.MUSIC);
		className.set ("assets/sounds/flixel.mp3", __ASSET__assets_sounds_flixel_mp3);
		type.set ("assets/sounds/flixel.mp3", AssetType.MUSIC);
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
		id = "assets/fonts/pixelart.ttf";
		className.set (id, __ASSET__assets_fonts_pixelart_ttf);
		
		type.set (id, AssetType.FONT);
		id = "assets/fonts/pixelmix.ttf";
		className.set (id, __ASSET__assets_fonts_pixelmix_ttf);
		
		type.set (id, AssetType.FONT);
		id = "assets/fonts/space.ttf";
		className.set (id, __ASSET__assets_fonts_space_ttf);
		
		type.set (id, AssetType.FONT);
		id = "assets/fonts/visitor2.ttf";
		className.set (id, __ASSET__assets_fonts_visitor2_ttf);
		
		type.set (id, AssetType.FONT);
		id = "assets/images/bar-32-6.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bar-64-8.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bar-battery.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bar-exp.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bar-health.png";
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
		id = "assets/sounds/beep.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/flixel.mp3";
		path.set (id, id);
		
		type.set (id, AssetType.MUSIC);
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
		
		className.set ("assets/data/data-goes-here.txt", __ASSET__assets_data_data_goes_here_txt);
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		
		className.set ("assets/data/level-0001.oel", __ASSET__assets_data_level_0001_oel);
		type.set ("assets/data/level-0001.oel", AssetType.TEXT);
		
		className.set ("assets/data/level-0001.tmx", __ASSET__assets_data_level_0001_tmx);
		type.set ("assets/data/level-0001.tmx", AssetType.TEXT);
		
		className.set ("assets/data/level-0002.tmx", __ASSET__assets_data_level_0002_tmx);
		type.set ("assets/data/level-0002.tmx", AssetType.TEXT);
		
		className.set ("assets/data/map1.oep", __ASSET__assets_data_map1_oep);
		type.set ("assets/data/map1.oep", AssetType.TEXT);
		
		className.set ("assets/data/stage.oep", __ASSET__assets_data_stage_oep);
		type.set ("assets/data/stage.oep", AssetType.TEXT);
		
		className.set ("assets/fonts/pixelart.ttf", __ASSET__assets_fonts_pixelart_ttf);
		type.set ("assets/fonts/pixelart.ttf", AssetType.FONT);
		
		className.set ("assets/fonts/pixelmix.ttf", __ASSET__assets_fonts_pixelmix_ttf);
		type.set ("assets/fonts/pixelmix.ttf", AssetType.FONT);
		
		className.set ("assets/fonts/space.ttf", __ASSET__assets_fonts_space_ttf);
		type.set ("assets/fonts/space.ttf", AssetType.FONT);
		
		className.set ("assets/fonts/visitor2.ttf", __ASSET__assets_fonts_visitor2_ttf);
		type.set ("assets/fonts/visitor2.ttf", AssetType.FONT);
		
		className.set ("assets/images/bar-32-6.png", __ASSET__assets_images_bar_32_6_png);
		type.set ("assets/images/bar-32-6.png", AssetType.IMAGE);
		
		className.set ("assets/images/bar-64-8.png", __ASSET__assets_images_bar_64_8_png);
		type.set ("assets/images/bar-64-8.png", AssetType.IMAGE);
		
		className.set ("assets/images/bar-battery.png", __ASSET__assets_images_bar_battery_png);
		type.set ("assets/images/bar-battery.png", AssetType.IMAGE);
		
		className.set ("assets/images/bar-exp.png", __ASSET__assets_images_bar_exp_png);
		type.set ("assets/images/bar-exp.png", AssetType.IMAGE);
		
		className.set ("assets/images/bar-health.png", __ASSET__assets_images_bar_health_png);
		type.set ("assets/images/bar-health.png", AssetType.IMAGE);
		
		className.set ("assets/images/bricks.png", __ASSET__assets_images_bricks_png);
		type.set ("assets/images/bricks.png", AssetType.IMAGE);
		
		className.set ("assets/images/bullet-0001.png", __ASSET__assets_images_bullet_0001_png);
		type.set ("assets/images/bullet-0001.png", AssetType.IMAGE);
		
		className.set ("assets/images/bullet-0002.ase", __ASSET__assets_images_bullet_0002_ase);
		type.set ("assets/images/bullet-0002.ase", AssetType.BINARY);
		
		className.set ("assets/images/bullet-0002.png", __ASSET__assets_images_bullet_0002_png);
		type.set ("assets/images/bullet-0002.png", AssetType.IMAGE);
		
		className.set ("assets/images/buttonLeft.png", __ASSET__assets_images_buttonleft_png);
		type.set ("assets/images/buttonLeft.png", AssetType.IMAGE);
		
		className.set ("assets/images/buttonRight.png", __ASSET__assets_images_buttonright_png);
		type.set ("assets/images/buttonRight.png", AssetType.IMAGE);
		
		className.set ("assets/images/char-0001.png", __ASSET__assets_images_char_0001_png);
		type.set ("assets/images/char-0001.png", AssetType.IMAGE);
		
		className.set ("assets/images/dpad.ase", __ASSET__assets_images_dpad_ase);
		type.set ("assets/images/dpad.ase", AssetType.BINARY);
		
		className.set ("assets/images/dpad.png", __ASSET__assets_images_dpad_png);
		type.set ("assets/images/dpad.png", AssetType.IMAGE);
		
		className.set ("assets/images/dpadA.ase", __ASSET__assets_images_dpada_ase);
		type.set ("assets/images/dpadA.ase", AssetType.BINARY);
		
		className.set ("assets/images/dpadA.png", __ASSET__assets_images_dpada_png);
		type.set ("assets/images/dpadA.png", AssetType.IMAGE);
		
		className.set ("assets/images/dpadB.ase", __ASSET__assets_images_dpadb_ase);
		type.set ("assets/images/dpadB.ase", AssetType.BINARY);
		
		className.set ("assets/images/dpadB.png", __ASSET__assets_images_dpadb_png);
		type.set ("assets/images/dpadB.png", AssetType.IMAGE);
		
		className.set ("assets/images/dpadleft.ase", __ASSET__assets_images_dpadleft_ase);
		type.set ("assets/images/dpadleft.ase", AssetType.BINARY);
		
		className.set ("assets/images/dpadleft.png", __ASSET__assets_images_dpadleft_png);
		type.set ("assets/images/dpadleft.png", AssetType.IMAGE);
		
		className.set ("assets/images/dpadright.ase", __ASSET__assets_images_dpadright_ase);
		type.set ("assets/images/dpadright.ase", AssetType.BINARY);
		
		className.set ("assets/images/dpadright.png", __ASSET__assets_images_dpadright_png);
		type.set ("assets/images/dpadright.png", AssetType.IMAGE);
		
		className.set ("assets/images/enemy-0001.png", __ASSET__assets_images_enemy_0001_png);
		type.set ("assets/images/enemy-0001.png", AssetType.IMAGE);
		
		className.set ("assets/images/floor-0001.png", __ASSET__assets_images_floor_0001_png);
		type.set ("assets/images/floor-0001.png", AssetType.IMAGE);
		
		className.set ("assets/images/gibs-0001.png", __ASSET__assets_images_gibs_0001_png);
		type.set ("assets/images/gibs-0001.png", AssetType.IMAGE);
		
		className.set ("assets/images/gibs.png", __ASSET__assets_images_gibs_png);
		type.set ("assets/images/gibs.png", AssetType.IMAGE);
		
		className.set ("assets/images/images-go-here.txt", __ASSET__assets_images_images_go_here_txt);
		type.set ("assets/images/images-go-here.txt", AssetType.TEXT);
		
		className.set ("assets/images/level.png", __ASSET__assets_images_level_png);
		type.set ("assets/images/level.png", AssetType.IMAGE);
		
		className.set ("assets/images/Sprite-0002.png", __ASSET__assets_images_sprite_0002_png);
		type.set ("assets/images/Sprite-0002.png", AssetType.IMAGE);
		
		className.set ("assets/images/stage1.oep", __ASSET__assets_images_stage1_oep);
		type.set ("assets/images/stage1.oep", AssetType.TEXT);
		
		className.set ("assets/images/tiles-0001.ase", __ASSET__assets_images_tiles_0001_ase);
		type.set ("assets/images/tiles-0001.ase", AssetType.BINARY);
		
		className.set ("assets/images/tiles-0001.png", __ASSET__assets_images_tiles_0001_png);
		type.set ("assets/images/tiles-0001.png", AssetType.IMAGE);
		
		className.set ("assets/images/tree-0001.png", __ASSET__assets_images_tree_0001_png);
		type.set ("assets/images/tree-0001.png", AssetType.IMAGE);
		
		className.set ("assets/music/bgm-0001.ogg", __ASSET__assets_music_bgm_0001_ogg);
		type.set ("assets/music/bgm-0001.ogg", AssetType.SOUND);
		
		className.set ("assets/music/bgm-0002.ogg", __ASSET__assets_music_bgm_0002_ogg);
		type.set ("assets/music/bgm-0002.ogg", AssetType.SOUND);
		
		className.set ("assets/music/chase.ogg", __ASSET__assets_music_chase_ogg);
		type.set ("assets/music/chase.ogg", AssetType.SOUND);
		
		className.set ("assets/music/fairy.ogg", __ASSET__assets_music_fairy_ogg);
		type.set ("assets/music/fairy.ogg", AssetType.SOUND);
		
		className.set ("assets/music/fairyland.ogg", __ASSET__assets_music_fairyland_ogg);
		type.set ("assets/music/fairyland.ogg", AssetType.SOUND);
		
		className.set ("assets/music/music-goes-here.txt", __ASSET__assets_music_music_goes_here_txt);
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		
		className.set ("assets/music/time-break.ogg", __ASSET__assets_music_time_break_ogg);
		type.set ("assets/music/time-break.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/gun-0001.ogg", __ASSET__assets_sounds_gun_0001_ogg);
		type.set ("assets/sounds/gun-0001.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/gun-0002.ogg", __ASSET__assets_sounds_gun_0002_ogg);
		type.set ("assets/sounds/gun-0002.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/gun-0003.ogg", __ASSET__assets_sounds_gun_0003_ogg);
		type.set ("assets/sounds/gun-0003.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/jump-0001.ogg", __ASSET__assets_sounds_jump_0001_ogg);
		type.set ("assets/sounds/jump-0001.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/sounds-go-here.txt", __ASSET__assets_sounds_sounds_go_here_txt);
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		
		className.set ("assets/sounds/step-0001.ogg", __ASSET__assets_sounds_step_0001_ogg);
		type.set ("assets/sounds/step-0001.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/step-0002.ogg", __ASSET__assets_sounds_step_0002_ogg);
		type.set ("assets/sounds/step-0002.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/walk-0001.ogg", __ASSET__assets_sounds_walk_0001_ogg);
		type.set ("assets/sounds/walk-0001.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/walk-0002.ogg", __ASSET__assets_sounds_walk_0002_ogg);
		type.set ("assets/sounds/walk-0002.ogg", AssetType.SOUND);
		
		className.set ("assets/sounds/beep.mp3", __ASSET__assets_sounds_beep_mp3);
		type.set ("assets/sounds/beep.mp3", AssetType.MUSIC);
		
		className.set ("assets/sounds/flixel.mp3", __ASSET__assets_sounds_flixel_mp3);
		type.set ("assets/sounds/flixel.mp3", AssetType.MUSIC);
		
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
			#elseif (ios || tvos)
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
								
								#if (ios || tvos)
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

@:keep @:bind #if display private #end class __ASSET__assets_data_data_goes_here_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_data_level_0001_oel extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_data_level_0001_tmx extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_data_level_0002_tmx extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_data_map1_oep extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_data_stage_oep extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_pixelart_ttf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_pixelmix_ttf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_space_ttf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_visitor2_ttf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__assets_images_bar_32_6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_bar_64_8_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_bar_battery_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_bar_exp_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_bar_health_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_bricks_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_bullet_0001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_bullet_0002_ase extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_images_bullet_0002_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_buttonleft_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_buttonright_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_char_0001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_dpad_ase extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_images_dpad_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_dpada_ase extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_images_dpada_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_dpadb_ase extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_images_dpadb_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_dpadleft_ase extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_images_dpadleft_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_dpadright_ase extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_images_dpadright_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_enemy_0001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_floor_0001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_gibs_0001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_gibs_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_images_go_here_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_images_level_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_sprite_0002_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_stage1_oep extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_images_tiles_0001_ase extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_images_tiles_0001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_tree_0001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_music_bgm_0001_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_music_bgm_0002_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_music_chase_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_music_fairy_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_music_fairyland_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_music_music_goes_here_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_music_time_break_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_gun_0001_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_gun_0002_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_gun_0003_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_jump_0001_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_step_0001_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_step_0002_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_walk_0001_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_walk_0002_ogg extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_beep_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_flixel_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_nokiafc22_ttf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_arial_ttf extends flash.text.Font { }


#elseif html5







@:keep #if display private #end class __ASSET__assets_fonts_pixelart_ttf extends lime.text.Font { public function new () { super (); name = "Pixel-Art Regular"; } } 
@:keep #if display private #end class __ASSET__assets_fonts_pixelmix_ttf extends lime.text.Font { public function new () { super (); name = "pixelmix Regular"; } } 
@:keep #if display private #end class __ASSET__assets_fonts_space_ttf extends lime.text.Font { public function new () { super (); name = "PirulenRg-Regular"; } } 
@:keep #if display private #end class __ASSET__assets_fonts_visitor2_ttf extends lime.text.Font { public function new () { super (); name = "Visitor TT2 BRK"; } } 



















































@:keep #if display private #end class __ASSET__assets_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { super (); name = "Nokia Cellphone FC Small"; } } 
@:keep #if display private #end class __ASSET__assets_fonts_arial_ttf extends lime.text.Font { public function new () { super (); name = "Arial"; } } 


#else



#if (windows || mac || linux || cpp)


@:file("assets/data/data-goes-here.txt") #if display private #end class __ASSET__assets_data_data_goes_here_txt extends lime.utils.ByteArray {}
@:file("assets/data/level-0001.oel") #if display private #end class __ASSET__assets_data_level_0001_oel extends lime.utils.ByteArray {}
@:file("assets/data/level-0001.tmx") #if display private #end class __ASSET__assets_data_level_0001_tmx extends lime.utils.ByteArray {}
@:file("assets/data/level-0002.tmx") #if display private #end class __ASSET__assets_data_level_0002_tmx extends lime.utils.ByteArray {}
@:file("assets/data/map1.oep") #if display private #end class __ASSET__assets_data_map1_oep extends lime.utils.ByteArray {}
@:file("assets/data/stage.oep") #if display private #end class __ASSET__assets_data_stage_oep extends lime.utils.ByteArray {}
@:font("assets/fonts/pixelart.ttf") #if display private #end class __ASSET__assets_fonts_pixelart_ttf extends lime.text.Font {}
@:font("assets/fonts/pixelmix.ttf") #if display private #end class __ASSET__assets_fonts_pixelmix_ttf extends lime.text.Font {}
@:font("assets/fonts/space.ttf") #if display private #end class __ASSET__assets_fonts_space_ttf extends lime.text.Font {}
@:font("assets/fonts/visitor2.ttf") #if display private #end class __ASSET__assets_fonts_visitor2_ttf extends lime.text.Font {}
@:image("assets/images/bar-32-6.png") #if display private #end class __ASSET__assets_images_bar_32_6_png extends lime.graphics.Image {}
@:image("assets/images/bar-64-8.png") #if display private #end class __ASSET__assets_images_bar_64_8_png extends lime.graphics.Image {}
@:image("assets/images/bar-battery.png") #if display private #end class __ASSET__assets_images_bar_battery_png extends lime.graphics.Image {}
@:image("assets/images/bar-exp.png") #if display private #end class __ASSET__assets_images_bar_exp_png extends lime.graphics.Image {}
@:image("assets/images/bar-health.png") #if display private #end class __ASSET__assets_images_bar_health_png extends lime.graphics.Image {}
@:image("assets/images/bricks.png") #if display private #end class __ASSET__assets_images_bricks_png extends lime.graphics.Image {}
@:image("assets/images/bullet-0001.png") #if display private #end class __ASSET__assets_images_bullet_0001_png extends lime.graphics.Image {}
@:file("assets/images/bullet-0002.ase") #if display private #end class __ASSET__assets_images_bullet_0002_ase extends lime.utils.ByteArray {}
@:image("assets/images/bullet-0002.png") #if display private #end class __ASSET__assets_images_bullet_0002_png extends lime.graphics.Image {}
@:image("assets/images/buttonLeft.png") #if display private #end class __ASSET__assets_images_buttonleft_png extends lime.graphics.Image {}
@:image("assets/images/buttonRight.png") #if display private #end class __ASSET__assets_images_buttonright_png extends lime.graphics.Image {}
@:image("assets/images/char-0001.png") #if display private #end class __ASSET__assets_images_char_0001_png extends lime.graphics.Image {}
@:file("assets/images/dpad.ase") #if display private #end class __ASSET__assets_images_dpad_ase extends lime.utils.ByteArray {}
@:image("assets/images/dpad.png") #if display private #end class __ASSET__assets_images_dpad_png extends lime.graphics.Image {}
@:file("assets/images/dpadA.ase") #if display private #end class __ASSET__assets_images_dpada_ase extends lime.utils.ByteArray {}
@:image("assets/images/dpadA.png") #if display private #end class __ASSET__assets_images_dpada_png extends lime.graphics.Image {}
@:file("assets/images/dpadB.ase") #if display private #end class __ASSET__assets_images_dpadb_ase extends lime.utils.ByteArray {}
@:image("assets/images/dpadB.png") #if display private #end class __ASSET__assets_images_dpadb_png extends lime.graphics.Image {}
@:file("assets/images/dpadleft.ase") #if display private #end class __ASSET__assets_images_dpadleft_ase extends lime.utils.ByteArray {}
@:image("assets/images/dpadleft.png") #if display private #end class __ASSET__assets_images_dpadleft_png extends lime.graphics.Image {}
@:file("assets/images/dpadright.ase") #if display private #end class __ASSET__assets_images_dpadright_ase extends lime.utils.ByteArray {}
@:image("assets/images/dpadright.png") #if display private #end class __ASSET__assets_images_dpadright_png extends lime.graphics.Image {}
@:image("assets/images/enemy-0001.png") #if display private #end class __ASSET__assets_images_enemy_0001_png extends lime.graphics.Image {}
@:image("assets/images/floor-0001.png") #if display private #end class __ASSET__assets_images_floor_0001_png extends lime.graphics.Image {}
@:image("assets/images/gibs-0001.png") #if display private #end class __ASSET__assets_images_gibs_0001_png extends lime.graphics.Image {}
@:image("assets/images/gibs.png") #if display private #end class __ASSET__assets_images_gibs_png extends lime.graphics.Image {}
@:file("assets/images/images-go-here.txt") #if display private #end class __ASSET__assets_images_images_go_here_txt extends lime.utils.ByteArray {}
@:image("assets/images/level.png") #if display private #end class __ASSET__assets_images_level_png extends lime.graphics.Image {}
@:image("assets/images/Sprite-0002.png") #if display private #end class __ASSET__assets_images_sprite_0002_png extends lime.graphics.Image {}
@:file("assets/images/stage1.oep") #if display private #end class __ASSET__assets_images_stage1_oep extends lime.utils.ByteArray {}
@:file("assets/images/tiles-0001.ase") #if display private #end class __ASSET__assets_images_tiles_0001_ase extends lime.utils.ByteArray {}
@:image("assets/images/tiles-0001.png") #if display private #end class __ASSET__assets_images_tiles_0001_png extends lime.graphics.Image {}
@:image("assets/images/tree-0001.png") #if display private #end class __ASSET__assets_images_tree_0001_png extends lime.graphics.Image {}
@:file("assets/music/bgm-0001.ogg") #if display private #end class __ASSET__assets_music_bgm_0001_ogg extends lime.utils.ByteArray {}
@:file("assets/music/bgm-0002.ogg") #if display private #end class __ASSET__assets_music_bgm_0002_ogg extends lime.utils.ByteArray {}
@:file("assets/music/chase.ogg") #if display private #end class __ASSET__assets_music_chase_ogg extends lime.utils.ByteArray {}
@:file("assets/music/fairy.ogg") #if display private #end class __ASSET__assets_music_fairy_ogg extends lime.utils.ByteArray {}
@:file("assets/music/fairyland.ogg") #if display private #end class __ASSET__assets_music_fairyland_ogg extends lime.utils.ByteArray {}
@:file("assets/music/music-goes-here.txt") #if display private #end class __ASSET__assets_music_music_goes_here_txt extends lime.utils.ByteArray {}
@:file("assets/music/time-break.ogg") #if display private #end class __ASSET__assets_music_time_break_ogg extends lime.utils.ByteArray {}
@:file("assets/sounds/gun-0001.ogg") #if display private #end class __ASSET__assets_sounds_gun_0001_ogg extends lime.utils.ByteArray {}
@:file("assets/sounds/gun-0002.ogg") #if display private #end class __ASSET__assets_sounds_gun_0002_ogg extends lime.utils.ByteArray {}
@:file("assets/sounds/gun-0003.ogg") #if display private #end class __ASSET__assets_sounds_gun_0003_ogg extends lime.utils.ByteArray {}
@:file("assets/sounds/jump-0001.ogg") #if display private #end class __ASSET__assets_sounds_jump_0001_ogg extends lime.utils.ByteArray {}
@:file("assets/sounds/sounds-go-here.txt") #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends lime.utils.ByteArray {}
@:file("assets/sounds/step-0001.ogg") #if display private #end class __ASSET__assets_sounds_step_0001_ogg extends lime.utils.ByteArray {}
@:file("assets/sounds/step-0002.ogg") #if display private #end class __ASSET__assets_sounds_step_0002_ogg extends lime.utils.ByteArray {}
@:file("assets/sounds/walk-0001.ogg") #if display private #end class __ASSET__assets_sounds_walk_0001_ogg extends lime.utils.ByteArray {}
@:file("assets/sounds/walk-0002.ogg") #if display private #end class __ASSET__assets_sounds_walk_0002_ogg extends lime.utils.ByteArray {}
@:file("C:/HaxeToolkit/haxe/lib/flixel/3,3,11/assets/sounds/beep.mp3") #if display private #end class __ASSET__assets_sounds_beep_mp3 extends lime.utils.ByteArray {}
@:file("C:/HaxeToolkit/haxe/lib/flixel/3,3,11/assets/sounds/flixel.mp3") #if display private #end class __ASSET__assets_sounds_flixel_mp3 extends lime.utils.ByteArray {}
@:font("C:/HaxeToolkit/haxe/lib/flixel/3,3,11/assets/fonts/nokiafc22.ttf") #if display private #end class __ASSET__assets_fonts_nokiafc22_ttf extends lime.text.Font {}
@:font("C:/HaxeToolkit/haxe/lib/flixel/3,3,11/assets/fonts/arial.ttf") #if display private #end class __ASSET__assets_fonts_arial_ttf extends lime.text.Font {}



#end
#end

#if (openfl && !flash)
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_pixelart_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__assets_fonts_pixelart_ttf (); src = font.src; name = font.name; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_pixelmix_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__assets_fonts_pixelmix_ttf (); src = font.src; name = font.name; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_space_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__assets_fonts_space_ttf (); src = font.src; name = font.name; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_visitor2_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__assets_fonts_visitor2_ttf (); src = font.src; name = font.name; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__assets_fonts_nokiafc22_ttf (); src = font.src; name = font.name; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_arial_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__assets_fonts_arial_ttf (); src = font.src; name = font.name; super (); }}

#end

#end