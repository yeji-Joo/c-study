#include <iostream>
using namespace std;

void sort(int* arr) // sort �Լ� ���
{
	int i, j; // int ���� ���
	int temp; // �ӽ� �����


	for (j = 0; j < 4; j++) // ���� ���� ���� �� ������ ������ �� �� �ִ� 4������ ���ľ���
	{
		for (i = 0; i < 4; i++) // ���� ���� ���ϴµ� �ʿ��� Ƚ���� 4
		{
			if (arr[i] > arr[i + 1]) // ���� �ں��� Ŭ ��� ��ȯ
			{
				temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

void print(int* arr)
{
	int k;

	for (k = 0; k < 5; k++) // ������� ���
	{
		cout << k + 1 << ". " << arr[k] << endl;
	}
}



int main(void)
{
	int arr[5]; // 5 ũ�� �迭 ����
	int* ptr = arr; // ������ �ʱ�ȭ
	int i;

	cout << "���� �ټ����� �Է����ּ��� (����� ����) ";

	for (i = 0; i < 5; i++)
	{
		cin >> *(ptr + i);
	}

	cout << endl << "< ���� �� >" << endl;

	print(arr); sort(arr);

	cout << endl << "< ���� �� >" << endl;

	print(arr);
}