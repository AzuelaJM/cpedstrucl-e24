#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

class samteng{
	private:
struct Node{
	int data;
	Node *next;
	Node *back;
}*q,*top=NULL,*bottom=NULL,*temp;
	public:
	int push(int n){
		if (top==NULL){
				q=new Node;
				q->data=n;
				q->next=NULL;
				q->back=NULL;
				top=q;
				bottom=q;
				return 0;
			}
		q=new Node;
		q->data=n;
		q->next=NULL;
		q->back=top;
		top->next=q;
		top=q;
	}
	void pop(){
		if (top!=NULL){
			temp=top;
			top=top->back;
			cout << temp->data << " Dequeued";
			delete temp;
		}
		else
		cout <<"Queue is empty";
	}
	int display(){
		if (top==NULL){
		cout << "\nQueue is empty ";
		return 0;
		}
		q=top;
		while (q!=NULL){
			cout << q->data << " ";
			q=q->back;
		}
	}
	
};
int main(){
	samteng noding;
	int choice,val;
	while(1){
		system("cls");
		cout <<"Menu " <<endl
			 <<"========================"<<endl
			 <<"[1] Push "<<endl
			 <<"[2] Pop "<<endl
			 <<"[3] Display "<<endl
			 <<"[4] Exit " <<endl
			 <<"========================"<<endl;
		cin >> choice;
		switch(choice){
			case 1:
				cout << "Enter number: ";
				cin >> val;
				noding.push(val);
				break;
			case 2:
				noding.pop();
				getch();
				break;
			case 3:
				noding.display();
				getch();
				break;
			case 4:
				exit(1);	
		}
	}
}
