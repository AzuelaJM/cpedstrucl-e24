#include <iostream>
using namespace std;

int main(){
	int A[] = {35,10,55,20,5};
	int n=5,m=0;
	
	for (int k=0;k<n;k++)
		cout << A[k] << " ";
		cout <<endl;
					
	for (int i=n;i>1;i--){
		m++;
		cout << "Pass " << m <<endl;
		for (int j=0;j<i-1;j++){
			if(A[j] > A[j+1]){
				int swap = A[j];
				A[j] = A[j+1];
				A[j+1] = swap;
				cout << A[j] << " and " << A[j+1] << " swapped places\n";
				for (int k=0;k<n;k++)
					cout << A[k] << " ";
				cout << endl;	
			}
		}	
		cout << endl;
	}	
}
