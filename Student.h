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
				gotoxy(30,7); 	std::cout << "斃様様様様様様様様様騨様様様様様様様様様様様様様与" ;
				gotoxy(30,8); 	std::cout << "?       Nom         ?                            ?" ;
				gotoxy(30,9); 	std::cout << "団陳陳陳陳陳陳陳陳陳田陳陳陳陳陳陳陳陳陳陳陳陳陳調" ;
				gotoxy(30,10);	printf("?     Prenom        ?                            ?");
				gotoxy(30,11);	printf("斥様様様様様様様様様鼠様様様様様様様様様様様様様踊");
				
				gotoxy(30,12);	printf("斃様様様様様様様様様騨様様様様様様様様様様様様様与");
				gotoxy(30,13);	printf("?     Adresse       ?                            ?");
				gotoxy(30,14);	printf("団陳陳陳陳陳陳陳陳陳田陳陳陳陳陳陳陳陳陳陳陳陳陳調");
				gotoxy(30,15);	printf("?     Profession    ?                            ?");
				gotoxy(30,16);	printf("斥様様様様様様様様様鼠様様様様様様様様様様様様様踊");
				
				gotoxy(30,17);	printf("斃様様様様様様様様様騨様様様様様様様様様様様様様与");
				gotoxy(30,18);	printf("?       Pays        ?                            ?");
				gotoxy(30,19);	printf("団陳陳陳陳陳陳陳陳陳田陳陳陳陳陳陳陳陳陳陳陳陳陳調");
				gotoxy(30,20);	printf("?        Tel	  ?                            ?");
				gotoxy(30,21);	printf("斥様様様様様様様様様鼠様様様様様様様様様様様様様踊");
				
				gotoxy(30,22);	printf("斃様様様様様様様様様騨様様様様様様様様様様様様様与");
				gotoxy(30,23);	printf("?       Numero      ?                            ?");
				gotoxy(30,24);	printf("斥様様様様様様様様様鼠様様様様様様様様様様様様様踊");
		}
};
