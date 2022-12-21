class Student{
	private:
		int counter = 0;
		int id;
		std::string name;
		std::string phone;
		std::string email;
	public:
		Student(){}
		Student(std::string name,std::string phone,std::string email){
			id = counter++;
			name = name;
			phone = phone;
			email = email;
		}
		void addStudent(){
				system("cls");
				gotoxy(30,7); 	std::cout << "ฺอออออออออออออออออออยออออออออออออออออออออออออออออฟ" ;
				gotoxy(30,8); 	std::cout << "ณ       Nom         ณ                            ณ" ;
				gotoxy(30,9); 	std::cout << "รฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤด" ;
				gotoxy(30,10);	printf("ณ     Prenom        ณ                            ณ");
				gotoxy(30,11);	printf("ภอออออออออออออออออออมออออออออออออออออออออออออออออู");
				
				gotoxy(30,12);	printf("ฺอออออออออออออออออออยออออออออออออออออออออออออออออฟ");
				gotoxy(30,13);	printf("ณ     Adresse       ณ                            ณ");
				gotoxy(30,14);	printf("รฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤด");
				gotoxy(30,15);	printf("ณ     Profession    ณ                            ณ");
				gotoxy(30,16);	printf("ภอออออออออออออออออออมออออออออออออออออออออออออออออู");
				
				gotoxy(30,17);	printf("ฺอออออออออออออออออออยออออออออออออออออออออออออออออฟ");
				gotoxy(30,18);	printf("ณ       Pays        ณ                            ณ");
				gotoxy(30,19);	printf("รฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤลฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤด");
				gotoxy(30,20);	printf("ณ        Tel	  ณ                            ณ");
				gotoxy(30,21);	printf("ภอออออออออออออออออออมออออออออออออออออออออออออออออู");
				
				gotoxy(30,22);	printf("ฺอออออออออออออออออออยออออออออออออออออออออออออออออฟ");
				gotoxy(30,23);	printf("ณ       Numero      ณ                            ณ");
				gotoxy(30,24);	printf("ภอออออออออออออออออออมออออออออออออออออออออออออออออู");
		}
};
