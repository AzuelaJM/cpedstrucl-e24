#include <iostream>
using namespace std;

int main(){
	int A[] = {30,40,20,50,10};
	int n=5,m=0;
	
	for (int k=0;k<n;k++)
		cout << A[k] << " ";
	cout << endl;	
	
	for (int i=0;i<n-1;i++){
		int min=A[i], index=i;
		m++;
		cout << "Pass " << m << endl;
		for (int j=i+1;j<n;j++){
			if(A[j]<min){
				min = A[j];
				index=j;	
			}
		}
		A[index]=A[i];
		A[i] = min;
		
		cout << A[index] << " and " << A[i] << " swapped places\n";
			for (int k=0;k<n;k++)
				cout << A[k] << " ";
			cout <<endl;
		cout << endl;
	}
}
