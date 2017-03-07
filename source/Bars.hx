package;

import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.ui.FlxBar;
import flixel.util.FlxPoint;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Graphics;
import openfl.geom.Matrix;

/**
 * ...
 * @author Samuel Lee
 */
enum BarType {
	Health;
	Battery;
	EXP;
	AMMO;
}
class Bars extends FlxGroup
{
	
	private var _bar:FlxSprite;
	private var _barVal:FlxBar;
	private var _parentRef:Player;
	private var _text:FlxText;
	private var _max:Float = 1;
	private var _type:BarType;

	public function new(P:Player, Bar:BarType, X:Float, Y:Float, Max:Float) 
	{
		super();
		_parentRef = P;
		_type = Bar;
		_bar = new FlxSprite(X, Y);
		_bar.scrollFactor.set(0, 0);
		add(_bar);
		
		if (Bar==Health) {
			_bar.loadGraphic("assets/images/bar-v-32-8.png", true, 32, 8);
			_barVal = new FlxBar(X + 2, Y + 2, FlxBar.FILL_LEFT_TO_RIGHT, 28, 4, null, "", 0, Max);
			_barVal.createImageBar(null, "assets/images/bar-health.png", 0x00);
		}else if (Bar == Battery) {
			_bar.loadGraphic("assets/images/bar-v-32-8.png", true, 32, 8);
			_barVal = new FlxBar(X + 2, Y + 2, FlxBar.FILL_LEFT_TO_RIGHT, 28, 4, null, "", 0, Max);
			_barVal.createImageBar(null, "assets/images/bar-battery.png", 0x00);
		}else if (Bar==EXP){
			_bar.loadGraphic("assets/images/bar-32-6.png", true, 32, 6);
			_barVal = new FlxBar(X + 2, Y + 1, FlxBar.FILL_LEFT_TO_RIGHT, 28, 4, null, "", 0, Max);
			_barVal.createImageBar(null, "assets/images/bar-exp.png", 0x00);
		}else if (Bar == AMMO) {
			_bar.visible = false;
			_barVal = new FlxBar(X + 2, Y + 2, FlxBar.FILL_LEFT_TO_RIGHT, 0, 4, null, "", 0, Max);
			_barVal.visible = false;
		}
		_barVal.scrollFactor.set(0, 0);
		_barVal.currentValue = Max;
		add(_barVal);
		
		_text = new FlxText(_bar.x + _bar.width, _bar.y, 600, "");
		_text.setFormat(AssetPaths.normal__ttf);
		_text.alignment = "left";
		_text.size = 40;
		_text.borderStyle = FlxText.BORDER_OUTLINE;
		_text.scrollFactor.set(0, 0);
		_text.scale.set(0.25, 0.25);
		_text.offset.set(220, 12);
		if (Bar == AMMO) {
			_text.offset.set(222, 12);
		}
		add(_text);
	}

	override public function update():Void {
		super.update();
	}
	
	public function setCurrentValue(Value:Float, ?Label:String):Void {
		_barVal.currentValue = Value;
		_barVal.update();
		_text.text = (Label != null ? Label + " " : "") + Std.string(Value) + " / " + Std.string(_max);
	}
	
	public function setMaxValue(Value:Float):Void {
		_barVal.setRange(0, Value);
		_barVal.update();
		_max = Value;
		_text.text = _barVal.currentValue + (_type != AMMO ? " / " + Std.string(Value) : "");
	}
}