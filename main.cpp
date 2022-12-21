#include <iostream>
#include <string>
#include <conio.h> 
#include <Windows.h>
#include "functions.h" 
using namespace std;
 
int main(int argc, char** argv) {
	int choice;   
	system("title Students CRUD");
	textcolor(5);    
	MaximizeOutputWindow(); 
	rect(50,4,80,2); 
	gotoxy(90,4);  
	textcolor(7);
	cout << "Students Management (C++ Language)";
	textcolor(5);     
	rect(160,30,20,6); 
	menu(choice);
     
	getch();
	return 0;
}
