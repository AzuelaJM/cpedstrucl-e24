#include <iostream>
using namespace std;

int main(){
	int A[] = {6,5,3,1,8,7,2,4},temp[8];
	int n=8,l1,l2,h1,h2,k,i,j,m=0;
	
	for (int k=0;k<n;k++)
		cout << A[k] << " ";
	cout << endl<< endl;
	
	for (int size=1;size <n; size=size*2){
		l1=0;
		k=0;
		m++;
		while(l1+size<n){
			h1=l1+size-1;
			l2=h1+1;
			h2=l2+size-1;
			if (h2>=n)
				h2=n-1;
			i=l1;
			j=l2;
			while(i<=h1&&j<=h2){
				if(A[i]<=A[j])
					temp[k++]=A[i++];
				else
					temp[k++]=A[j++];	
			}
			while (i<=h1)
				temp[k++]=A[i++];
			while (j<=h2)
				temp[k++]=A[j++];
			l1=h2+1;			
		}
		for (i=l1;k<n;i++)
			temp[k++]=A[i];
		for(i=0;i<n;i++)
			A[i]=temp[i];
		cout << "Pass " << m << endl;	
		for (int k=0;k<n;k++)
			cout << A[k] << " ";
		cout << endl;		
	}
}
