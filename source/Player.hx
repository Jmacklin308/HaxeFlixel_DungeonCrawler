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

	// player animations
	var spr_idle_right:FlxSprite;
	var spr_idle_left:FlxSprite;
	var spr_idle_down_right:FlxSprite;
	var spr_idle_down_left:FlxSprite;
	var spr_idle_up_right:FlxSprite;
	var spr_idle_up_left:FlxSprite;

	var spr_running_right:FlxSprite;
	var spr_running_left:FlxSprite;
	var spr_running_down_right:FlxSprite;
	var spr_running_down_left:FlxSprite;
	var spr_running_up_right:FlxSprite;
	var spr_running_up_left:FlxSprite;

	public function new(x:Float = 0, y:Float  = 0)
	{
		super(x,y); // call FlxSprite constructor and pass in x and y


		///////Player animation & sprites/////////////////////
		//---------------idle animations--------------------

		// idle right
		spr_idle_right.loadGraphic(AssetPaths.spr_player_idle_right_strip22__png, true, 16, 24);
		spr_idle_right.animation.add("idle_right", [0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21], spriteFramerate, true);

		// idle left
		spr_idle_left.loadGraphic(AssetPaths.spr_player_idle_left_strip22__png, true, 16, 24);
		spr_idle_left.animation.add("idle_left", [0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21], spriteFramerate, true);

		// idle up left
		spr_idle_up_left.loadGraphic(AssetPaths.spr_player_idle_up_left_strip22__png, true, 16, 24);
		spr_idle_up_left.animation.add("idle_up_left", [0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21], spriteFramerate, true);

		// idle up right
		spr_idle_up_right.loadGraphic(AssetPaths.spr_player_idle_up_right_strip22__png, true, 16, 24);
		spr_idle_up_right.animation.add("idle_up_right", [0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21], spriteFramerate,
			true);

		// Idle down left
		spr_idle_down_left.loadGraphic(AssetPaths.spr_player_idle_down_left_strip22__png, true, 16, 24);
		spr_idle_down_left.animation.add("idle_down_left", [0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21], spriteFramerate,
			true);

		// idle down right
		spr_idle_down_right.loadGraphic(AssetPaths.spr_player_idle_down_right_strip22__png, true, 16, 24);
		spr_idle_down_right.animation.add("idle_down_right", [0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21], spriteFramerate,
			true);

		//---------------running animations--------------------

		//running right
		spr_running_left.loadGraphic(AssetPaths.spr_player_running_left_strip8__png, true, 16, 26);
		spr_running_left.animation.add("running_left", [0, 1, 2, 3, 4, 5, 6, 7], spriteFramerate, true);

		spr_running_right.loadGraphic(AssetPaths.spr_player_running_right_strip8__png, true, 16, 26);
		spr_running_right.animation.add("running_right", [0, 1, 2, 3, 4, 5, 6, 7], spriteFramerate, true);

		// running down
		spr_running_down_left.loadGraphic(AssetPaths.spr_player_running_down_left_strip8__png, true, 16, 26);
		spr_running_down_left.animation.add("running_down_left", [0, 1, 2, 3, 4, 5, 6, 7], spriteFramerate, true);

		spr_running_down_right.loadGraphic(AssetPaths.spr_player_running_down_right_strip8__png, true, 16, 26);
		spr_running_down_right.animation.add("running_down_right", [0, 1, 2, 3, 4, 5, 6, 7], spriteFramerate, true);

		// running up
		spr_running_up_right.loadGraphic(AssetPaths.spr_player_running_up_right_strip8__png, true, 16, 26);
		spr_running_up_right.animation.add("running_up_right", [0, 1, 2, 3, 4, 5, 6, 7], spriteFramerate, true);

		spr_running_up_left.loadGraphic(AssetPaths.spr_player_running_up_left_strip8__png, true, 16, 26);
		spr_running_up_left.animation.add("running_up_left", [0, 1, 2, 3, 4, 5, 6, 7], spriteFramerate, true);

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

			//if player is moving change animation
			if ((velocity.x != 0 || velocity.y != 0) && touching == FlxObject.NONE)
			{
				animation.play("running_right");
			}

			if (velocity.x == 0 || velocity.y == 0)
			{
				animation.play("idle_left");
			}
		}
	}


	override function update(elapsed:Float) 
	{
		updateMovment(); // call our movement
		super.update(elapsed); //update the frame
	}
}