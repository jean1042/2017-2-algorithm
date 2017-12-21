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
	/* �� ���� �˸��� ������ �߰��Ͻÿ�. */
	/* �Է� ����Ÿ�� L[]�� ��� ������, ��ü ���� ������ SIZE�̴�. */
	for (int i=SIZE; i>1; i--){
		int flag=0; // ���� �� �� flag ����
		for (int j=2; j<=i; j++){
			if (L[j-1] >L[j]){
				//L[j-1] �� L[j] swap ���� ����
				int temp=L[j-1];
				L[j-1]=L[j];
				L[j]=temp;
				flag++;
			}
		if (flag ==0) break;
		}
	}
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