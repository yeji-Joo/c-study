#include <iostream>
using namespace std;

int main()
{
	int num[5];		//���ڸ� �Է� ���� �迭 ����
	int i;
	int odd = 0;	//Ȧ
	int even = 0;	//¦

	for (i = 0; i < 5; i++)		//�ݺ��� ���(5�� �ݺ�)
	{
		cout << "���ڸ� �Է����ּ��� : ";
		cin >> num[i];
	}

	cout << "----------���----------" << endl;


	cout << "Ȧ�� : ";
	for (i = 0; i < 5; i++)
	{
		if (num[i] % 2 != 0)	//Ȧ���� ��� 2�� �������� �� �������� 0�� �ƴ�
		{
			odd++;
			cout << num[i] << " ";
		}
	}
	cout << "\nȦ���� �� " << odd << "�� �Դϴ�." << endl;

	cout << "¦�� : ";
	for (i = 0; i < 5; i++)
	{
		if (num[i] % 2 == 0)	//¦���� ��� 2�� �������� �� �������� 0��
		{
			even++;
			cout << num[i] << " ";
		}
	}
		cout << "\n¦���� �� " << even << "�� �Դϴ�." << endl;

	
}