## Installation
Drag and drop DINPUT8.dll inside the `Dishonored2` folder (where `Dishonored2.exe` is).

## Things to note
Certain features look like they have been disabled. Godmode, infinite coin, debug drawing mostly do not seem to work. I might be missing something, maybe changing a 0 to a 1 will make them work, it needs investigating.

## Command list
```
addarrow - adds a debug arrow
addClamp - adds to a cvar, with clamping
addline - adds a debug line
addWrap - adds to a cvar, with wrapping
Ansel_PlayerVisible - Shows/hides the player for Nvidia Ansel
ark_settings_save - Save settings
arkBind - binds a command to a key
arkBindSecondary - binds a command to a key
arkIggySubtitleLevel - Setup a subtitles display level. 0 = none; 1 = main only; 2 all
arkListBindings - lists key bindings
arkSwitchToBindingSet - select the current bind set
arkSwitchToDefaultBindingSet - select the default bind set
arkUnbind - unbinds any command from a key
arkUnbindAll - unbinds any commands from all the binding sets
arkUnbindCurrentSet - unbinds any commands from the current binding set
arkUnbindJoypad - unbinds any command from a joypad buttons
arkUnbindKeyboard - unbinds any command from a keyboard keys
arkUnbindMouse - unbinds any command from the mouse
blinkline - blinks a debug line
buddha - Toggle buddha mode on player / NPCs
campaign - loads a map via mapinfo decl
clear - clears the console
clearDebugPoints - empties the list of debug points
clearHistory - Clears the console history
clearLights - clears all lights
colorGradingShot - Takes a screenshot with the color grading inset
con_unwatch - removes the specified console watch. Specify 'all' to remove all watches
con_watch - adds a new console watch - displays per frame results of console var/function printed output
copy - copy a file
cubeshot - takes an shot a cubmap
cvar_resetcheats - defaulting all cheats/canreset cvars
cvar_restart - restarts the cvar system, defaulting all cvars
cvarAdd - adds a value to a cvar
cvarMultiply - multiplies a cvar by a value
cvarRandom - sets a cvar to a random value
cvarsModified - reports cvars modified since the last call
damage - apply damage to an entity
debugEntityByName - debug entity by name
deleteGenerated - deletes the generated path
dir - lists a folder
dirtree - lists a folder with subfolders
disconnect - disconnects from a game
echo - prints text
entityListenerStats - stats of entity listener
envshot - takes an environment shot
exec - executes a config file
exit - exits the game
find - finds all system elements containing the given search string
gameError - causes a game error
getviewpos - prints the current view position
god - Toggle god mode on player / NPCs
history - Displays the console command history
idStudio - design studio for the game
killEntity - removes the entity with the given name. 'kill entityname' removes that single entity, 'kill all entityname' removes all entities matching the class
leaveGame - disconnects from a game
leaveGameToMainMenu - Loads the main menu
listCmds - lists commands
listCvars - lists cvars
listDecls - lists all decls
listImages - lists images
listLines - lists all debug lines
listModels - lists all models
LoadGame - Quick load, or load the specified slot number
makeDeclTree - Generates declTree
map - loads a combo map
nextActiveAI - move debug target to the next active (alive and not hidden) monster
nextAI - move debug target to the next monster
parse - prints tokenized string
path - lists search paths
playEvents - playEvents <name> playback sys events F12 will stop playback
popDebugPoint - removes a debug point from the list of debug points
popLight - removes the last created light
prevAI - move debug target to the prev monster
print - Prints the arguments to the console
pushDebugPoint - adds a debug point to the list of debug points
quit - quits the game
randomTest - superficial test of random number generators
rawscreenshot - takes a screenshot
recordEvents - recordEvents <name> start recording sys events
reexportDecls - reparses and saves decls of a specific type
reloadEntity - reloads the specified entity
reloadModels - reloads models
reloadTextLanguage - reload language dict
removeline - removes a debug line
reset - resets a cvar to its default value
resetViewParms - Resets the current view renderParms
RestartFromCheckpoint - Restart from the last save
RestartFromMemoryCheckpoint - Restart from the last memory checkpoint
restartmap - restarts the current map
restartmaphere - restarts the current map and teleports the player back to the current position
rp - Displays or modifies a renderparm
SaveGame - Quick save
scheduleVideo - Schedules the video so it starts next frame
screenshot - takes a screenshot
setviewpos - sets the current view position
stripStrings - strip strings containing the specified substring or prefix
teleport - teleports the player to an entity location
TestFx - tests a fx impact
testImage - displays the given image centered on screen
testStatsBegin - starts a test session for recording stats
testStatsEnd - ends a test session for recording stats and exits the game
toggle - toggles a cvar
touchDecl - reparses a decl
trigger - triggers an entity
unregisterDeclFolder - unregister a decl folder
vid_restart - resizes/fullscreens the game window
vstr - inserts the current value of a cvar as command text
wait - delays remaining buffered commands one or more frames
where - prints the current view position
writeConfig - writes a config file
writeEntitiesFile - writes out a production build .entities file for the specified map
writeEntitiesFileWithError - writes out a production build .entities file for the specified map
writeImage - Writes a tga for a given image
```

## Cvar list
see [cvars.md](cvars.md)
