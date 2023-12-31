# This Version of the Project is now Deprecated
This is the old version of the Mega Blaster Project. Please visit this repo for the latest and greatest Mega Blaster 2 source material
https://github.com/AidanHockey5/MegaBlaster2


# Mega Blaster

See this project in action here: https://www.youtube.com/watch?v=WoAp2-gWaLM

For more information, visit: http://www.aidanlawrence.com/megablaster-hardware-sega-genesis-video-game-music-player/

This project is a hardware Video Game Music (VGM) player that uses a genuine YM2612 synthesizer chip + SN76489AN PSG. 
This project is driven by an STM32 "Blue Pill" board, chosen for it's ample speed, I/O, and best of all, price!

Included in this repository is the source code for the project, all of the schematic files, and a completed 
Ki-CAD printed circuit board /w Gerber files. Feel free to produce your own board!

![PCB](http://www.aidanlawrence.com/wp-content/uploads/2018/05/Thumbnail-1024x576.jpg)

# Information about the main sound chips and VGM

The YM2612 is a 6-channel FM synthesizer IC that was most prominently featured in the Sega Genesis (AKA Megadrive) home video game console. The YM2612 was also featured in the FM-Towns home computer and the Sega C2 Arcade System.
The YM2612 also had a CMOS alias that is functionally identical named the YM3438.
The SN76489 is a 3-channel + 1 noise channel programmable sound generator (PSG) that was popular with several early video game systems and home computers.
Most notably, the SN76489 was featured in the Sega Master system, the predecessor to the Genesis. To allow for backwards compatibility, Sega included a clone of the SN76489 in their new Genesis consoles.
Programmers and sound designers could leverage the SN76489 to add three more square wave channels to the YM2612's 6-channels of FM synth, creating 9 channels + 1 noise channels in total.
While this player was designed with the Genesis in mind, it can play back any VGM files designed for the Master System, FM-Towns PC, C2 machine, or any other machine that used the YM2612/YM3438 and/or the SN76489.
This project synthesizes music from .VGM files in real time on genuine hardware. There is no emulation here.

VGM stands for Video Game Music, and it is a 44.1KHz logging format that stores real soundchip register information. My player will parse these files and send the data to the appropriate chips. You can learn more about the VGM file format here: http://www.smspower.org/Music/VGMFileFormat

http://www.smspower.org/uploads/Music/vgmspec170.txt?sid=58da937e68300c059412b536d4db2ca0

# SD Card Information
This project is built for full-sized SD cards, but you may use adapters to fit your desired card. You must format your SD card to Fat32 in order for this device to work correctly. Your SD card must only contain uncompressed .vgm files. VGZ FILES WILL NOT WORK! You may download .vgz files and use [7zip](http://www.7-zip.org/download.html) to extract the uncompressed file out of them. Vgm files on the SD card do not need to have the .vgm extension. As long as they contain valid, uncompressed vgm data, they will be read by the program regardless of their name.
You can find VGM files by Googling "myGameName VGM," or by checking out sites like http://vgmrips.net/packs/

# Control Over Serial
You can use a serial connection to control playback features. The commands are as follows:

Command | Result
------------ | -------------
\+ | Next Track
\- | Previous Track
\* | Random Track
\/ | Toggle Shuffle Mode
\. | Toggle Song Looping
r: | Request song
? | What song is playing?
\! | Toggle the OLED display

A song request is formatted as follows: ```r:mySongFile.vgm```
Once a song request is sent through the serial console, an attempt will be made to open that song file. The file must exist on the SD card, and spelling/capitalization must be correct.
Need an easy-to-use serial console? [I've made one here.](https://github.com/AidanHockey5/OpenArduinoSerialConsole)

# Schematic
![Schematic](https://raw.githubusercontent.com/AidanHockey5/STM32_VGM_Player_YM2612_SN76489/master/Schematics/STM32_MegaBlaster/STM32_MegaBlaster.png)

[PDF](https://github.com/AidanHockey5/STM32_VGM_Player_YM2612_SN76489/raw/master/Schematics/STM32_MegaBlaster/STM32_MegaBlaster.pdf)

[Bill Of Materials (BOM)](https://github.com/AidanHockey5/STM32_VGM_Player_YM2612_SN76489/tree/master/Schematics/STM32_MegaBlaster/BOM)

# Interactive Assembly Guide
[You can view the interactive guide here.](https://www.aidanlawrence.com/wp-content/uploads/2018/09/ibom.html)

Courtesy of the stellar KiCAD plugin, [Interactive HTML BOM](https://github.com/openscopeproject/InteractiveHtmlBom)

Use this guide to help you assemble the Mega Blaster. Hover your cursor over the list of parts and this web page will show you where to place each component. I have included the source HTML file under the [Schematic's BOM folder](https://github.com/AidanHockey5/STM32_VGM_Player_YM2612_SN76489/tree/master/Schematics/STM32_MegaBlaster/BOM) for local viewing. 

# Programming

Programming must be done through the built-in serial port. YOU CAN NOT USE AN STLINK FOR PROGRAMMING.

You have two programming options: Using the flashing tool OR flashing from source.

[DOWNLOAD THE FLASHING TOOL HERE](https://www.aidanlawrence.com/tools/ee/megablaster/MegaFlasher_MB.zip)

Windows users can just use the pre-compiled Flash.exe program to skip worrying about Python installs or dependancies.
All other operating system users can simply run the Flash.py script using Python 3.0+.

Read the Readme file included with the tool for usage instructions and python dependancies.

I have also made a quick video guide on how to program the MegaBlaster from source. It's pretty simple!

https://youtu.be/sSx3_d5n6gs

1) Set the "Bluepill" left jumper to the '1' position.
2) Turn on the MegaBlaster
3) Hit the reset button on the Bluepill board.
4) Open the source code in Visual Studio Code /w the PlatformIO extension.
5) Upload the code using the upload button on the bottom ribbon.
6) Replace the jumper on the Bluepill board to it's original '0' position.

Link to VS Code: https://code.visualstudio.com/

PlatformIO install guide: http://docs.platformio.org/en/latest/ide/vscode.html#installation 

PlatformIO Not finding your serial port? Try opening up your Platformio.ini file and adding the following lines:
```
upload_port = COMX

upload_protocol = serial
```

(Make sure to change 'X' to the number of your COM port that the MegaBlaster is connected to. (I.E. COM4, COM8, COM10, etc.)

# KiCad
The schematic and PCB of this project was made in a nightly version of KiCad 5, specifically, 5.0.0 RC2 (dev-493-gd776eaca8)
Since then, the project has been migrated to KiCAD 5 stable.
Please download the latest stable release of KiCAD 5 here: http://kicad-pcb.org/download/

# YM3438 Support
After a little tinkering, I've managed to get a YM3438 working as a replacement for the YM2612. For those that don't know, the YM3438 is functionally equivalent to the YM2612, but is made using a CMOS process. The YM3438 is pin-compatible but it is not a drop-in replacement since the output impedance is significantly higher. Fortunately, all you need to do to get a YM3438 to work is mod a couple resistors.


Resistor Number | Replace with
------------ | -------------
R7 | LEAVE UNPOPULATED
R8 | LEAVE UNPOPULATED
R6 | 1.2K
R9 | 100K
R10 | 100K
R27 | 33K
R30 | 33K
R28 | 150K
R29 | 150K


WARNING! The final sound output volume will be SIGNIFICANTLY HIGHER with this setup. Be sure to start your YM3438 MegaBlaster at the lowest possible volume before turning on the device and slowly increase the volume to prevent equipment damage and or hearing damage.

Why replace the YM2612 with a YM3438? Well, for one, the YM3438 runs very cool while the YM2612s typically get screaming hot during normal operation. The sound quality is also slightly altered with FM synths typically sounding a little more 'sterile' compared to the YM2612's characteristic grit. PCM sample quality is also significantly improved. Later revisions of the Sega Genesis used an ASIC YM3438 instead of a discrete YM2612, so some users may be more familiar with the likes of the YM3438 than the YM2612. It's all personal preference really.

You can see a YM2612/YM3438 comparison video here: https://www.youtube.com/watch?v=jMHRtriv1wM
