package;

/**
 * ...
 * @author 
 */
class Environment
{
	
	public var gravity:Float;
	public var player:Player;

	public function new(?Gravity:Float = 600, ?ThisPlayer:Player) 
	{
		// init default Environment
		gravity = Gravity;
		player = ThisPlayer;
	}
	
}