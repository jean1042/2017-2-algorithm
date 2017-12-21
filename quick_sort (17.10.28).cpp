#include <iostream>
using namespace std;

const int SIZE = 15;
int L[SIZE] = { 10, 4, 7, 1, -2, 12, 28, 66, 9, 3, 5, 7, 6, 21, 11 };


void print_data()
{
	for(int i = 0; i < SIZE; i++)
	cout << " " << L[i] << " ";
	cout << endl;
}

void sort(int L[], int Le, int R)
{
	int i, j;
	int temp, t;

	if(R>Le)
	{
	temp = L[Le]; i=Le; j=R+1;
	do{
		do{i=i+1;}
			while(L[i]<temp);
		do{j=j-1;} 
			while (L[j]>temp);
		if(i<j) {
			t=L[i]; L[i]=L[j]; L[j]=t;
	}
}while(j>i);

	t=L[j];
	L[j]=L[Le]; L[Le]=t;
	sort(L, Le, j-1);
	sort(L, j+1, R);
}
}




void main()
{
	cout << "Input Data : ";
	print_data();
	
	/* sort the elements of array L[] in ascending order */
	sort(L, 15, 0);
	
	cout << "\n\nSorted Data : ";
	print_data();
	
	
}
