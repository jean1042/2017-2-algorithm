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
	1.���Ǽ��� ���Ǽ��� ���ؼ� ��ũ�� ��ȯ
	2.�� ������ ��ȯx
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

	/*for�� �̿��� ���� ū ���� ã�� ������ ������ �迭�� ����

	for (int j=0; j<SIZE-1; j++){
	int lastindex=SIZE-1; //�迭�� ������ ��ġ ����ϴ� ����

	int max=L[0];//�ִ� max �ʱ�ȭ
	for (int i=0;i<lastindex; i++){
	int temp;
	temp=L[lastindex];

	if (max < L[i]){
	max=L[i];
	}//�ִ񰪱��� �� ã�ҵ�
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