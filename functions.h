
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
class Student{
	private:
		int counter = 0;
		int id; 
		std::string name;
		std::string phone;
		std::string email;
	public:
		Student(){
			id = 0;
			name = "";
			phone = "";
			email = "";
		}
		Student(std::string name,std::string phone,std::string email){
			id = counter++;
			name = name;
			phone = phone;
			email = email;
		}
		void addStudent(){							
				rect(19,1,125,9); 
				textcolor(7);
				gotoxy(130, 10);
				std::cout << "Add Student ";
				textcolor(5);
				gotoxy(110,12);	std::cout << "ÚÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÂÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¿" ;
				gotoxy(110,13);	std::cout << "³    First Name     ³                            ³" ;
				gotoxy(110,14);	std::cout << "ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´" ;
				gotoxy(110,15);	std::cout << "³    Last Name      ³                            ³" ;
				gotoxy(110,16);	std::cout << "ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´" ;
				gotoxy(110,17);	std::cout << "³     Age           ³                            ³" ;
				gotoxy(110,18);	std::cout << "ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´" ;
				gotoxy(110,19);	std::cout << "³     Phone         ³                            ³" ;
				gotoxy(110,20);	std::cout << "ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´" ;
				gotoxy(110,21);	std::cout << "³     Email         ³                            ³" ;
				gotoxy(110,22);	std::cout << "ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´" ;
				gotoxy(110,23);	std::cout << "³     Code          ³                            ³" ;
				gotoxy(110,24);	std::cout << "ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´" ;
				gotoxy(110,25);	std::cout << "³     Country       ³                            ³" ;
				gotoxy(110,26);	std::cout << "ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´" ;
				gotoxy(110,27);	std::cout << "³     City          ³                            ³" ;
				gotoxy(110,28);	std::cout << "ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´" ;
				gotoxy(110,29);	std::cout << "³     Zip code      ³                            ³" ;
				gotoxy(110,30);	std::cout << "ÀÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÁÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÙ" ;
				
		}
};
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
	do{
	
	std::cin >> choice;
	
	switch(choice)
	{
		case 1:
			{
				Student *s = new Student();
				s->addStudent();
			}
	}
	}while(choice < 0 || choice > 6);
	
}


