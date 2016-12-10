//Azuela - Bello
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
void strcpy(char *a, char *b);
void strcat(char *a, char *b);
void strrev(char *a, char *b);
void strcmp(char *a, char *b);

int main(){
	int choice=0;
	char fMessage[10],sMessage[10],holder[10];
	cout <<"Enter first message: ";
	gets(fMessage);
	cout <<"Enter second message: ";
	gets(sMessage);
	getch();
	system("cls");
	
	while (1){
	cout << "Message 1: " << fMessage << endl;
	cout << "Message 2: " << sMessage << endl << endl;
	cout <<"[1]STRCAT \n"
		 <<"[2]STRCPY \n"
		 <<"[3]STRREV \n"
		 <<"[4]STRCMP \n"
		 <<"[5]EXIT \n"
		 <<"====================\n";
	cout <<"Choice: ";
	
	cin >> choice;
	
	switch (choice){
		case 1: strcat(fMessage,sMessage);break;
		case 2: strcpy(holder,sMessage);{
			cout << holder;
			getch();
			break;
		}
		case 3: strrev(fMessage,sMessage);break;
		case 4: strcmp(fMessage,sMessage);break;
		case 5: exit(1);break;
		default:break;
	}
	system ("cls");
	}
	

}

void strcat(char *a, char *b){
	while (*a!='\0'){
		cout <<*a;
		*a++;
	}
	while (*b!='\0'){
		cout <<*b;
		*b++;
	}
	getch();
}

void strcpy(char *a, char *b){
	while (*a++=*b++);
}

void strrev(char *a, char *b){
int i=0;
	while (*a!='\0'){
		*a++;
		i++;
		if (*a=='\0')
		{
			while (i>-1)
			{
				if (*a=='\0'){
				}
				else
				cout <<*a;
			*a--;
			i--;
			}
			break;
			
		}
	}
	i=0;
	cout << '\n';
	while (*b!='\0'){
		
		*b++;
		i++;
		if (*b=='\0')
		{
			while (i>-1)
			{
				if (*b=='\0'){
				}
				else
				cout <<*b;
				*b--;
				i--;
			}
			break;
			
		}
	}
	getch();
}

void strcmp(char *a, char *b){
	int value=0;
	while (*a!='\0'||*b!='\0'){
		if (*a>*b)
		{
			value=1;
			break;
		}
		
		if (*a<*b)
		{
			value=-1;
			break;
		}
		
		*a++;
		*b++;
	}

	if (value==0)
	cout << "Equal";
	else if(value==1)
	cout << "Messsage 1 is greater than Message 2";
	else
	cout << "Message 2 is greater than Message 1";
	getch();
}
