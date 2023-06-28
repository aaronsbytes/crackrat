<div align="center">

```c#
 $$$$$$\                               $$\       $$$$$$$\             $$\     
$$  __$$\                              $$ |      $$  __$$\            $$ |    
$$ /  \__| $$$$$$\  $$$$$$\   $$$$$$$\ $$ |  $$\ $$ |  $$ | $$$$$$\ $$$$$$\   
$$ |      $$  __$$\ \____$$\ $$  _____|$$ | $$  |$$$$$$$  | \____$$\\_$$  _|  
$$ |      $$ |  \__|$$$$$$$ |$$ /      $$$$$$  / $$  __$$<  $$$$$$$ | $$ |    
$$ |  $$\ $$ |     $$  __$$ |$$ |      $$  _$$<  $$ |  $$ |$$  __$$ | $$ |$$\ 
\$$$$$$  |$$ |     \$$$$$$$ |\$$$$$$$\ $$ | \$$\ $$ |  $$ |\$$$$$$$ | \$$$$  |
 \______/ \__|      \_______| \_______|\__|  \__|\__|  \__| \_______|  \____/ 
                         Stealthy USB keystroke power.       by NeuroException
```
[About](#about) | [Examples](#examples)
</div>

### About
CrackRat is a personal project that transforms an Arduino USB into a BadUSB. The focus is on automation and a user-friendly experience, with a goal of making payload creation as straightforward and intuitive as possible.

### Why?
This project was created as an opportunity for me to learn some Arduino basics and to alleviate boredom. Undoubtedly, there are far superior projects available. Nevertheless, the learning experience was enjoyable.

### Disclaimer
This software is for educational purposes only. The author does not support or condone illegal activities. The author is not liable for unauthorized usage, and users assume all risks. By downloading and using this software, users agree to this disclaimer.

### Libraries
[HID-Project](https://github.com/NicoHood/HID) by [NicoHood](https://github.com/NicoHood)

### Examples

The speed is set to double the default, but can be adjusted for slower computers, including values below 1.0.
```c
speed = 2.0; // This is a speed multiplier. Default value is 1.0.
```
<br/>

This executes PowerShell. The boolean value at the end determines whether it happens with or without administrative privileges.
```c
execute("powershell", true);
```
<br/>

This closes the currently focused window by executing the keyboard shortcut Alt+F4.
```c
close_window();
```

<br/>

This function presses the left arrow key followed by the enter key to bypass the uac prompt.
```c
uac_yes();
```

<br/>

This opens Notepad, writes the requested text, and saves the file under the desired file name.
```c
drop_hint("Hello World!", "Readme.txt");
```
