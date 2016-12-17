#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

class LinkedList{
    struct Node {
        int x;
        Node *next;
    };

public:
    LinkedList(){
        head = NULL; // set head to NULL
    }

    void addValue(int val){
        Node *n = new Node();   
        n->x = val;             
        n->next = head;         
                               
        head = n;              
    }

    int popValue(){
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
        
    }
    
    int display(){
    	node = head;
    	while(node!=NULL)
    	{
      	  cout << node->x << " ";
      	  node=node ->next;
  	    }
    }

private:
    Node *head,*node; 
};

int main() {
	int choice=0,nPush=0;
    LinkedList list;
    
	while (1){
	system ("cls");
	cout << "Menu" << endl
		 << "==================" << endl
		 <<"[1] Insert into Linked list" << endl
		 <<"[2] Pop" << endl
		 <<"[3] Exit" << endl
		 <<"[4] Display" << endl
		 << "==================" << endl
		 <<"Choice: ";
	cin >> choice; 
	
	switch (choice){
		case 1:
			int num;
			cout << "Enter number: ";
			cin >> num;
			list.addValue(num);
			nPush++;
			break;
		case 2:
			list.popValue();
			nPush--;
			break;
		case 3:
			exit(1);
		case 4:
			list.display();
			getch();
		default:break;
		
	}	 
		 
}
    
    return 0;
}
