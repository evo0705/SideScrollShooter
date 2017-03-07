package;

import flixel.text.FlxText;
import haxe.Timer;
import openfl.display.FPS;
import openfl.events.Event;
import openfl.system.System;

class FPS extends FlxText
{
	private var times:Array<Float>;
	private var memPeak:Float = 0;

	public function new(inX:Float = 10.0, inY:Float = 10.0, inCol:Int = 0xFFFFFFFF) 
	{
		super();
		setFormat(AssetPaths.normal__ttf);
		borderStyle = FlxText.BORDER_OUTLINE;
		
		x = inX;
		y = inY;
		
		text = "FPS: ";
		alignment = "left";
		size = 12;
		
		times = [];
		width = 150;
		height = 70;
	}
	
	override public function update():Void
	{
		var now = Timer.stamp();
		times.push(now);
		
		while (times[0] < now - 1)
			times.shift();
			
		var mem:Float = Math.round(System.totalMemory / 1024 / 1024 * 100)/100;
		if (mem > memPeak) memPeak = mem;
		
		if (visible)
		{	
			text = times.length + " :FPS\n" + mem + " MB :MEM\n" + memPeak + " MB :Peak";	
		}
		
		updateHitbox();
		super.update();
	}	
	
}