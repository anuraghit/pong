# Pong
<img width="520" alt="Capture" src="https://user-images.githubusercontent.com/57986981/166132118-9d93de14-1e0a-4183-b7a8-31dbbbd72bac.PNG">

Hotkeys
--------
- "Esc" for exit from the game
- "Enter" for start the game
- "Right arrow" / "Left arrow" for moving bat in right or left direction
- "score and no of lives" showing in the top right corner

Requirements
------------
- Visual Studio(2022)
- C++17
- SFML 2.4.2 (x32 version)

How to build 
------------
After opening the project in Visual Studio, go to "Project -> Timber properties...":
1) Select "All configurations" in "Configuration" section and change from x64 to x86.
2) In "C/C++ -> General -> Additional include directories" section append the "include" directory of SFML library
3) In "Linker -> General -> Additional library directories" section append the "lib" directory of SFML library
4) Select "Debug" in "Configuration" section
5) Append the string (without quotes) "sfml-graphics-d.lib;sfml-window-d.lib;sfml-system-d.lib;sfml-network-d.lib;sfml-audio-d.lib;" at the beginning of the
"Linker -> Input -> Additional dependencies" section
6) Select "Release" in "Configuration" section
7) Append the string (without quotes) "sfml-graphics.lib;sfml-window.lib;sfml-system.lib;sfml-network.lib;sfml-audio.lib;" at the beginning of the
"Linker -> Input -> Additional dependencies" section
