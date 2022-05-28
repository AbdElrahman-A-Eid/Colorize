# Colorize
Simple C++ Windows Console Coloring and Cursor Positioning Module Created as a part of C++ Course at ITI AI-Pro

## Included Libraries
- `iostream`
- `stdlib.h`
- `windows.h`
- `conio.h`
- `string.h`

## How to use the module
1. Copy `colorize.h` file to the `Headers` folder in your project.
2. Copy `colorize.cpp` file to the `Sources` folder in your project.
3. Include the module using `#include "colorize.h"`
4. Colorize your console output with `setColor()`

## Arguments
| Argument | Type   | Meaning                                                       |
|:----------:|:--------:|---------------------------------------------------------------|
| textType | String | Specify the color name (see the color names below).           |
| column   | int    | Specify the column no. (starting at 0) to move the cursor to. |
| line     | int    | Specify the line no. (starting at 0) to move the cursor to.   |

## Color Names
The following colors can be passed to `textType` (case insensitive):
| Key | Color Name   | Key | Color Name |
|:-----:|:--------------:|:-----:|:------------:|
| LB  | Light Blue   | B   | Blue       |
| LG  | Light Green  | G   | Green      |
| LC  | Light Cyan   | C   | Cyan       |
| LR  | Light Red    | R   | Red        |
| LP  | Light Purple | P   | Purple     |
| LY  | Light Yellow | Y   | Yellow     |
| LW  | Light White  | W   | White      |

## Sample Screenshot
![Sample Screenshot](https://drive.google.com/uc?export=view&id=19p-pdpkL_HaVJpaAG5SBgCNX8glXY-n4)
