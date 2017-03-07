package menus;

import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.ui.FlxButton;
import flixel.FlxG;

/**
 * ...
 * @author Samuel Lee
 */
class PauseMenu extends FlxGroup
{
	
	public var pauseButton:FlxButton;
	public var resumeButton:FlxButton;
	public var mainMenuButton:FlxButton;
	public var isShowing:Bool = false;
	private var _overlay:FlxSprite;
	
	private var group:FlxGroup;
	
	public function new() 
	{
		super();
		
		_overlay = new FlxSprite(0, 0);
		_overlay.makeGraphic(FlxG.width, FlxG.height, 0x55000000);
		_overlay.scrollFactor.set(0, 0);
		
		pauseButton = new FlxButton(FlxG.width - 48, 0);
		pauseButton.loadGraphic("assets/images/dpadA.png", false, 48, 48);
		pauseButton.scrollFactor.set(0, 0);
		pauseButton.onDown.callback = pauseOnDown;
		
		resumeButton = new FlxButton(FlxG.width / 2 - 48, FlxG.height / 2 - 24);
		resumeButton.loadGraphic("assets/images/dpadA.png", false, 48, 48);
		resumeButton.scrollFactor.set(0, 0);
		resumeButton.onDown.callback = resumeOnDown;
		
		mainMenuButton = new FlxButton(resumeButton.x + resumeButton.width + 10, FlxG.height / 2 - 24);
		mainMenuButton.loadGraphic("assets/images/dpadA.png", false, 48, 48);
		mainMenuButton.scrollFactor.set(0, 0);
		
		add(pauseButton);
		
		group = new FlxGroup();
		group.add(_overlay);
		group.add(resumeButton);
		group.add(mainMenuButton);
		group.visible = false;
		add(group);
	}
	
	override public function update() {
		super.update();	
		
	}
	
	function pauseOnDown():Void {	
		isShowing = true;
        group.visible = true;
		pauseButton.visible = false;
    }
	
	function resumeOnDown():Void {	
		isShowing = false;
        group.visible = false;
		pauseButton.visible = true;
    }
}