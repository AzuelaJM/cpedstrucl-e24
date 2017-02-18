#include <iostream>
using namespace std;

int main(){
	int A[] = {30,20,40,50,10};
	int n=5,i,j;
	
	for (int k=0;k<n;k++)
		cout << A[k] << " ";
	cout << endl;
	
	for (i=1;i<n;i++){
		int tmp=A[i];
		for (j=i-1;j>=0 &&tmp<A[j];j--){
			A[j+1]=A[j];
		}
		cout << tmp << " replaced " << A[j+1] <<"'s' place \n";
		A[j+1] = tmp;
		for (int k=0;k<n;k++)
			cout << A[k] << " ";
		cout << endl;
	}
}
