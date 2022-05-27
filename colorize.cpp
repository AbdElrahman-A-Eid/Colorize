#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

using namespace std;

/*
 Author: AbdElrahman Eid
 Github: AbdElrahman-A-Eid
*/

void gotoxy(int column, int line)
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(
        GetStdHandle( STD_OUTPUT_HANDLE ),
        coord
    );
}

void setColor(char* textType)
{
    HANDLE console_color;
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);

    int colorID;
    int i = 0;
    switch(tolower(textType[i]))
    {
    case 'l':
        i++;
        switch(tolower(textType[i]))
        {
        case 'b':
            colorID = 1;
            break;
        case 'g':
            colorID = 2;
            break;
        case 'c':
            colorID = 3;
            break;
        case 'r':
            colorID = 4;
            break;
        case 'p':
            colorID = 5;
            break;
        case 'y':
            colorID = 6;
            break;
        case 'w':
            colorID = 7;
            break;
        }
        break;
    case 'b':
        colorID = 9;
        break;
    case 'g':
        colorID = 10;
        break;
    case 'c':
        colorID = 11;
        break;
    case 'r':
        colorID = 12;
        break;
    case 'p':
        colorID = 13;
        break;
    case 'y':
        colorID = 14;
        break;
    case 'w':
        colorID = 15;
        break;
    }

    SetConsoleTextAttribute(console_color, colorID);

}

void setColor(char* textType, int column, int line)
{
    HANDLE console_color;
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);

    int colorID;
    int i = 0;
    switch(tolower(textType[i]))
    {
    case 'l':
        i++;
        switch(tolower(textType[i]))
        {
        case 'b':
            colorID = 1;
            break;
        case 'g':
            colorID = 2;
            break;
        case 'c':
            colorID = 3;
            break;
        case 'r':
            colorID = 4;
            break;
        case 'p':
            colorID = 5;
            break;
        case 'y':
            colorID = 6;
            break;
        case 'w':
            colorID = 7;
            break;
        }
        break;
    case 'b':
        colorID = 9;
        break;
    case 'g':
        colorID = 10;
        break;
    case 'c':
        colorID = 11;
        break;
    case 'r':
        colorID = 12;
        break;
    case 'p':
        colorID = 13;
        break;
    case 'y':
        colorID = 14;
        break;
    case 'w':
        colorID = 15;
        break;
    }

    gotoxy(column, line);
    SetConsoleTextAttribute(console_color, colorID);

}
