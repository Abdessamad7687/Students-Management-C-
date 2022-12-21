
void MaximizeOutputWindow(void)
{
    HWND consoleWindow = GetConsoleWindow(); 
    ShowWindow(consoleWindow, SW_MAXIMIZE);
}

void textcolor(unsigned short color)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon,color);
}

int wherey()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

    return csbi.dwCursorPosition.Y;
}

void gotoxy(int x, int y)
{
    COORD pos = { x, y };

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void rect(int width, int height, int x, int y)
{
    int i,j;

    gotoxy(x,y);
    //Top
    printf("\xDA");
    for(i=0; i<width; i++)
        printf("\xC4");
    printf("\xBF\n");

    gotoxy(x,wherey());
    //Left and Right
    for(i=0; i<height; i++)
    {
        printf("\xB3");
        for(j=0; j<width; j++)
            printf(" ");
        printf("\xB3\n");

        gotoxy(x,wherey());
    }

    //Bottom
    printf("\xC0");
    for(i=0; i<width; i++)
        printf("\xC4");
    printf("\xD9");
}
int GetFontSize(HANDLE windowHandle, COORD *size)
{
    CONSOLE_FONT_INFOEX font = { sizeof(CONSOLE_FONT_INFOEX) };

    if (!GetCurrentConsoleFontEx(windowHandle, 0, &font)) return 0;

    *size = font.dwFontSize;

    return 1;
}
int SetFontSize(HANDLE windowHandle, COORD size)
{
    CONSOLE_FONT_INFOEX font = { sizeof(CONSOLE_FONT_INFOEX) };

    if (!GetCurrentConsoleFontEx(windowHandle, 0, &font)) return 0;

    font.dwFontSize = size;

    if (!SetCurrentConsoleFontEx(windowHandle, 0, &font)) return 0;

    return 1;
}


void FontSize(short _size)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD size;

    if (GetFontSize(h, &size))
    {
        size.Y = (_size);
        SetFontSize(h, size);
    }
}

int menu(int choice)
{
	rect(32,18,25,8); 
	textcolor(7);
	
	gotoxy(30,10);
	textcolor(5);
	std::cout << "1-";
	textcolor(7);
	std::cout << " Add new student ";
	
	gotoxy(30,13);
	textcolor(5);
	std::cout << "2-";
	textcolor(7);
	std::cout << " Display all students ";
	
	gotoxy(30,16);
	textcolor(5);
	std::cout << "3-";
	textcolor(7);
	std::cout << " Search ";
	
	gotoxy(30,19);
	textcolor(5);
	std::cout << "4-";
	textcolor(7);
	std::cout << " Update student ";
	
	gotoxy(30,22);
	textcolor(5);
	std::cout << "5-";
	textcolor(7);
	std::cout << " Delete student ";
	
	gotoxy(30,25);
	textcolor(5);
	std::cout << "6-";
	textcolor(7);
	std::cout << " Exit ";
	
	textcolor(5);
	rect(32,1,25,30);
	gotoxy(33,31);
	textcolor(7);
	std::cout << "Enter a choice: ";
	textcolor(5);
	std::cin >> choice;
	
}


