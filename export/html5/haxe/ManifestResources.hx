package;


import haxe.io.Bytes;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		#end

		var data, manifest, library, bundle;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		data = '{"name":null,"assets":"aoy4:pathy34:assets%2Fdata%2Fdata-goes-here.txty4:sizezy4:typey4:TEXTy2:idR1y7:preloadtgoR0y41:assets%2Fimages%2Fplayer_spritesheet.jsonR2i53532R3R4R5R7R6tgoR0y40:assets%2Fimages%2Fplayer_spritesheet.pngR2i6050R3y5:IMAGER5R8R6tgoR0y39:assets%2Fimages%2Fspr_bullet_strip2.pngR2i133R3R9R5R10R6tgoR0y35:assets%2Fimages%2Fspr_crosshair.pngR2i418R3R9R5R11R6tgoR0y30:assets%2Fimages%2Fspr_dirt.pngR2i281R3R9R5R12R6tgoR0y30:assets%2Fimages%2Fspr_lava.pngR2i368R3R9R5R13R6tgoR0y28:assets%2Fimages%2Fspr_mg.pngR2i162R3R9R5R14R6tgoR0y55:assets%2Fimages%2Fspr_player_idle_down_left_strip22.pngR2i574R3R9R5R15R6tgoR0y56:assets%2Fimages%2Fspr_player_idle_down_right_strip22.pngR2i556R3R9R5R16R6tgoR0y50:assets%2Fimages%2Fspr_player_idle_left_strip22.pngR2i544R3R9R5R17R6tgoR0y51:assets%2Fimages%2Fspr_player_idle_right_strip22.pngR2i544R3R9R5R18R6tgoR0y53:assets%2Fimages%2Fspr_player_idle_up_left_strip22.pngR2i453R3R9R5R19R6tgoR0y54:assets%2Fimages%2Fspr_player_idle_up_right_strip22.pngR2i456R3R9R5R20R6tgoR0y57:assets%2Fimages%2Fspr_player_running_down_left_strip8.pngR2i522R3R9R5R21R6tgoR0y58:assets%2Fimages%2Fspr_player_running_down_right_strip8.pngR2i526R3R9R5R22R6tgoR0y52:assets%2Fimages%2Fspr_player_running_left_strip8.pngR2i652R3R9R5R23R6tgoR0y53:assets%2Fimages%2Fspr_player_running_right_strip8.pngR2i662R3R9R5R24R6tgoR0y55:assets%2Fimages%2Fspr_player_running_up_left_strip8.pngR2i488R3R9R5R25R6tgoR0y56:assets%2Fimages%2Fspr_player_running_up_right_strip8.pngR2i490R3R9R5R26R6tgoR0y47:assets%2Fimages%2Fspr_round_pounder_strip14.pngR2i838R3R9R5R27R6tgoR0y38:assets%2Fimages%2Fspr_wall_strip10.pngR2i315R3R9R5R28R6tgoR0y36:assets%2Fmusic%2Fmusic-goes-here.txtR2zR3R4R5R29R6tgoR0y36:assets%2Fsounds%2Fsounds-go-here.txtR2zR3R4R5R30R6tgoR2i2114R3y5:MUSICR5y26:flixel%2Fsounds%2Fbeep.mp3y9:pathGroupaR32y26:flixel%2Fsounds%2Fbeep.ogghR6tgoR2i39706R3R31R5y28:flixel%2Fsounds%2Fflixel.mp3R33aR35y28:flixel%2Fsounds%2Fflixel.ogghR6tgoR2i5794R3y5:SOUNDR5R34R33aR32R34hgoR2i33629R3R37R5R36R33aR35R36hgoR2i15744R3y4:FONTy9:classNamey35:__ASSET__flixel_fonts_nokiafc22_ttfR5y30:flixel%2Ffonts%2Fnokiafc22.ttfR6tgoR2i29724R3R38R39y36:__ASSET__flixel_fonts_monsterrat_ttfR5y31:flixel%2Ffonts%2Fmonsterrat.ttfR6tgoR0y33:flixel%2Fimages%2Fui%2Fbutton.pngR2i519R3R9R5R44R6tgoR0y36:flixel%2Fimages%2Flogo%2Fdefault.pngR2i3280R3R9R5R45R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_player_spritesheet_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_player_spritesheet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spr_bullet_strip2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spr_crosshair_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spr_dirt_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spr_lava_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spr_mg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_idle_down_left_strip22_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_idle_down_right_strip22_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_idle_left_strip22_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_idle_right_strip22_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_idle_up_left_strip22_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_idle_up_right_strip22_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_running_down_left_strip8_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_running_down_right_strip8_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_running_left_strip8_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_running_right_strip8_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_running_up_left_strip8_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_running_up_right_strip8_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spr_round_pounder_strip14_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_spr_wall_strip10_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_music_goes_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:file("assets/data/data-goes-here.txt") @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/images/player_spritesheet.json") @:noCompletion #if display private #end class __ASSET__assets_images_player_spritesheet_json extends haxe.io.Bytes {}
@:keep @:image("assets/images/player_spritesheet.png") @:noCompletion #if display private #end class __ASSET__assets_images_player_spritesheet_png extends lime.graphics.Image {}
@:keep @:image("assets/images/spr_bullet_strip2.png") @:noCompletion #if display private #end class __ASSET__assets_images_spr_bullet_strip2_png extends lime.graphics.Image {}
@:keep @:image("assets/images/spr_crosshair.png") @:noCompletion #if display private #end class __ASSET__assets_images_spr_crosshair_png extends lime.graphics.Image {}
@:keep @:image("assets/images/spr_dirt.png") @:noCompletion #if display private #end class __ASSET__assets_images_spr_dirt_png extends lime.graphics.Image {}
@:keep @:image("assets/images/spr_lava.png") @:noCompletion #if display private #end class __ASSET__assets_images_spr_lava_png extends lime.graphics.Image {}
@:keep @:image("assets/images/spr_mg.png") @:noCompletion #if display private #end class __ASSET__assets_images_spr_mg_png extends lime.graphics.Image {}
@:keep @:image("assets/images/spr_player_idle_down_left_strip22.png") @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_idle_down_left_strip22_png extends lime.graphics.Image {}
@:keep @:image("assets/images/spr_player_idle_down_right_strip22.png") @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_idle_down_right_strip22_png extends lime.graphics.Image {}
@:keep @:image("assets/images/spr_player_idle_left_strip22.png") @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_idle_left_strip22_png extends lime.graphics.Image {}
@:keep @:image("assets/images/spr_player_idle_right_strip22.png") @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_idle_right_strip22_png extends lime.graphics.Image {}
@:keep @:image("assets/images/spr_player_idle_up_left_strip22.png") @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_idle_up_left_strip22_png extends lime.graphics.Image {}
@:keep @:image("assets/images/spr_player_idle_up_right_strip22.png") @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_idle_up_right_strip22_png extends lime.graphics.Image {}
@:keep @:image("assets/images/spr_player_running_down_left_strip8.png") @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_running_down_left_strip8_png extends lime.graphics.Image {}
@:keep @:image("assets/images/spr_player_running_down_right_strip8.png") @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_running_down_right_strip8_png extends lime.graphics.Image {}
@:keep @:image("assets/images/spr_player_running_left_strip8.png") @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_running_left_strip8_png extends lime.graphics.Image {}
@:keep @:image("assets/images/spr_player_running_right_strip8.png") @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_running_right_strip8_png extends lime.graphics.Image {}
@:keep @:image("assets/images/spr_player_running_up_left_strip8.png") @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_running_up_left_strip8_png extends lime.graphics.Image {}
@:keep @:image("assets/images/spr_player_running_up_right_strip8.png") @:noCompletion #if display private #end class __ASSET__assets_images_spr_player_running_up_right_strip8_png extends lime.graphics.Image {}
@:keep @:image("assets/images/spr_round_pounder_strip14.png") @:noCompletion #if display private #end class __ASSET__assets_images_spr_round_pounder_strip14_png extends lime.graphics.Image {}
@:keep @:image("assets/images/spr_wall_strip10.png") @:noCompletion #if display private #end class __ASSET__assets_images_spr_wall_strip10_png extends lime.graphics.Image {}
@:keep @:file("assets/music/music-goes-here.txt") @:noCompletion #if display private #end class __ASSET__assets_music_music_goes_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/sounds-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,9,0/assets/sounds/beep.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,9,0/assets/sounds/flixel.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,9,0/assets/sounds/beep.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,9,0/assets/sounds/flixel.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends haxe.io.Bytes {}
@:keep @:font("export/html5/obj/webfont/nokiafc22.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("export/html5/obj/webfont/monsterrat.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/4,9,0/assets/images/ui/button.png") @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/4,9,0/assets/images/logo/default.png") @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22"; #else ascender = 2048; descender = -512; height = 2816; numGlyphs = 172; underlinePosition = -640; underlineThickness = 256; unitsPerEM = 2048; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat"; #else ascender = 968; descender = -251; height = 1219; numGlyphs = 263; underlinePosition = -150; underlineThickness = 50; unitsPerEM = 1000; #end name = "Monsterrat"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#end

#end
#end

#end
