package;

import flixel.FlxG;
import flixel.FlxGame;
import flixel.FlxState;
import flixel.text.FlxText;

class PlayState extends FlxState
{
	var player:Player;

	//escape
	var escapeKey:Bool;

	
	override public function create()
	{
		//add player
		player = new Player(60,60);
		add(player);
		super.create();
	}

	override public function update(elapsed:Float)
	{
		escapeKey = FlxG.keys.anyPressed([ESCAPE]);

		super.update(elapsed);
	}
}
