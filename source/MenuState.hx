import flixel.FlxG;
import flixel.FlxState;
import flixel.ui.FlxButton;

class MenuState extends FlxState{
	var playButton:FlxButton;
	
	///my functions///////
	function clickPlay()
	{
		FlxG.switchState(new PlayState());
	}
	/////////////////////



	override public function create()
	{
		//On button press, go to the Playstate.hx scene
		playButton = new FlxButton(0,0,"Play",clickPlay);
		add(playButton);
		playButton.screenCenter(); 


		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}

}