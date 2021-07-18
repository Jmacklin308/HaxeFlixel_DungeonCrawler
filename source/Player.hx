package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.system.FlxSplash;
import flixel.util.FlxColor;
import haxe.Json;
import openfl.display.Sprite;

class Player extends FlxSprite
{
	static inline var SPEED:Float = 200;

	var spriteFramerate = 10;


	public function new(x:Float = 0, y:Float  = 0)
	{
		super(x,y); // call FlxSprite constructor and pass in x and y


		///////Player animation & sprites/////////////////////
		// load the spritesheet
		loadGraphic(AssetPaths.player_spritesheet__png, true, 1360, 26);

		//---------------idle animations--------------------

		// idle right
		animation.add("idle_right", [for (i in 67 - 1...88 + 1) i], spriteFramerate, true);

		// idle left
		animation.add("idle_left", [for (i in 45 - 1...66 + 1) i], spriteFramerate, true);

		// idle up left
		animation.add("idle_up_left", [for (i in 89 - 1...110 + 1) i], spriteFramerate, true);

		// idle up right
		animation.add("idle_up_right", [for (i in 111 - 1...132 + 1) i], spriteFramerate,
			true);

		// Idle down left
		animation.add("idle_down_left", [for (i in 1 - 1...22 + 1) i], spriteFramerate,
			true);

		// idle down right
		animation.add("idle_down_right", [for (i in 23 - 1...44 + 1) i], spriteFramerate,
			true);

		//---------------running animations--------------------

		// running right
		animation.add("running_left", [for (i in 149 - 1...56 + 1) i], spriteFramerate, true);

		animation.add("running_right", [for (i in 157 - 1...164 + 1) i], spriteFramerate, true);

		// running down
		animation.add("running_down_left", [for (i in 133 - 1...140 + 1) i], spriteFramerate, true);

		animation.add("running_down_right", [for (i in 141 - 1...148 + 1) i], spriteFramerate, true);

		// running up
		animation.add("running_up_right", [for (i in 173 - 1...180 + 1) i], spriteFramerate, true);

		animation.add("running_up_left", [for (i in 165 - 1...172 + 1) i], spriteFramerate, true);

		//////////////////////////////////////////////


		//Natural player slowdown
		drag.x = drag.y = 1600;
	}

	//on update
	function updateMovment()
	{
		//control cond.
		var up:Bool = false;
		var down:Bool = false;
		var left:Bool = false;
		var right:Bool = false;

		//check input
		up = FlxG.keys.anyPressed([UP, W]);
		down = FlxG.keys.anyPressed([DOWN, S]);
		left = FlxG.keys.anyPressed([LEFT, A]);
		right = FlxG.keys.anyPressed([RIGHT, D]);

		//cancel out input
		if (up && down)
			up = down = false;
		if (left && right)
			left = right = false;
		
		//if moving
		if (up || down || left || right)
		{
			//region Angle and facing direction-------------------
			//set angle and facing direction (for sprites)
			var newAngle:Float = 0;
			if (up)
			{
				newAngle = -90;
				if (left)
					{
						newAngle -= 45;
					}
				else if (right)
					{
						newAngle += 45;
				}
				facing = FlxObject.UP;
			}
			else if (down)
			{
				newAngle = 90;
				if (left)
				{
					newAngle += 45;
				}
				else if (right)
				{
					newAngle -= 45;
				}
				facing = FlxObject.DOWN;
			}
			else if (left)
				{
				newAngle = 180;
				facing = FlxObject.LEFT;
				}
			else if (right)
				{
				newAngle = 0;
				facing = FlxObject.RIGHT;
				}
			//endregion

			// calculate velocity with direction
			velocity.set(SPEED, 0); // 0 is direction
			velocity.rotate(FlxPoint.weak(0, 0), newAngle); // like point direction in gms

		}
		// if we are moving change the sprites according to the direction
		if ((velocity.x != 0 || velocity.y != 0) && touching == FlxObject.NONE)
		{
			switch (facing)
			{
				case FlxObject.LEFT:
					animation.play("running_left");
				case FlxObject.RIGHT:
					animation.play("running_right");
				case FlxObject.DOWN:
					animation.play("running_down_right");
				case FlxObject.UP:
					animation.play("running_up_right");
			}
		}
		else
		{
			animation.play("idle_right");
		}



	}


	override function update(elapsed:Float) 
	{
		updateMovment(); // call our movement
		super.update(elapsed); //update the frame
	}
}