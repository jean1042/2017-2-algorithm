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

void sort()
{
	/*
	1.앞의수와 뒤의수를 비교해서 더크면 교환
	2.더 작으면 교환x
	*/

	for (int i=0; i<SIZE; i++){
		for (int j=0; j<SIZE-1; j++){
			if(L[j]>L[j+1]){
				int temp;
				temp=L[j];
				L[j]=L[j+1];
				L[j+1]=temp;
			}
		}
	}

	/*for문 이용해 가장 큰 원소 찾은 다음에 마지막 배열에 저장

	for (int j=0; j<SIZE-1; j++){
	int lastindex=SIZE-1; //배열의 마지막 위치 기억하는 변수

	int max=L[0];//최댓값 max 초기화
	for (int i=0;i<lastindex; i++){
	int temp;
	temp=L[lastindex];

	if (max < L[i]){
	max=L[i];
	}//최댓값까지 잘 찾았따
	L[lastindex]=max;
	lastindex--;
	}
	}

	*/


}


void main()
{
	cout << "Input Data : ";
	print_data();

	/* sort the elements of array L[] in ascending order */
	sort();

	cout << "\n\nSorted Data : ";
	print_data();

}