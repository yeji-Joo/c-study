#include <iostream>
#include <string>

using namespace std;

class phonebook  // Student��� Ŭ������ ����
{
private: // �̸��� ��ȭ��ȣ�� private�� ����

	string name;  // �̸�
	string phone_num;   //��ȣ

public: // addPhone(), editPhone(), getPnum(), getName()�� public���� ����
	void addPhone();
	void editPhone();
	string getPnum();
	string getName();

};

void phonebook::addPhone()  // ���ο� ��ȣ �߰��ϴ� �Լ�
{
	cout << "-- swing ��ȭ��ȣ�� --" << endl;
	cout << "�̸��� �Է��� �ּ��� >>";
	cin >> name;
	cout << "��ȭ��ȣ�� �Է��� �ּ��� >>";
	cin >> phone_num;
}

void phonebook::editPhone()   // ������ ��ȣ �����ϴ� �Լ�
{
	string n_name;  // ���Ӱ� �Է��ϴ� �̸� �ϳ� ��
	cout << "�̸��� �Է��� �ּ��� >>";


	do   // name�� n_name�� ���� ������ �ݺ�
	{
		cin >> n_name;
		if (name != n_name)   //name�� n_name�� �ٸ� 
		{
			cout << "����ó�� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���. >>";

		}
	} while (name != n_name);

	cout << "������ ��ȭ��ȣ�� �Է��� �ּ��� >>";
	cin >> phone_num;
}

string phonebook::getPnum()   // ��ȣ�� �ҷ����� �Լ�
{
	return phone_num;
}

string phonebook::getName()   // �̸��� �ҷ����� �Լ�
{
	return name;
}

int main()
{
	Student stu;
	stu.addPhone();

	int n;
	do  // n�� 3�� ���� ������ �ݺ�
	{
		cout << endl << "1. �ֽ� ��� ��ȭ��ȣ ��ȸ" << endl;
		cout << "2. �ֽ� ��� ��ȭ��ȣ ����" << endl;
		cout << "3. ���� >> ";
		cin >> n;  // n�� �Է¹���

		switch (n)
		{
		case 1:   // 1�� ������ ��ȭ��ȣ ��ȸ
			cout << stu.getName() << "::" << stu.getPnum() << endl;
			break;
		case 2:   // 2�� ������ ��ȭ��ȣ ����
			stu.editPhone();
		}
	} while (n != 3);
}