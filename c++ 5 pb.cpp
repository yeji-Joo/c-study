
#include<iostream>
#include<string>
#include "phonebook.h"

using namespace std;

class pb
{
	private:
	string name;
	string num;

	public:
	void addPhone();
	void editPhone();
	string getPnum();
	string getName();
};

void pb::addPhone() // ��ȣ �߰�
{
	cout << "---- swing ��ȭ��ȣ�� ----" << endl;
	cout << "�̸��� �Է��� �ּ��� > ";
	cin >> name;
	cout << "��ȭ��ȣ�� �Է��� �ּ��� >";
	cin >> num;
	cout << endl;
}

void pb::editPhone()  // ��ȣ �ٲ�
{
	string n_name;  // �� �̸� �߰�
	cout << "�̸��� �Է��� �ּ��� >";

do   // name�� n_name�� ���� ������ �����
	{
		cin >> n_name;

	if (name != n_name)   //name�� �ۼ��� n_name�� �ٸ���
		{
			cout << "����ó�� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���. >";
		}
	} 
	while (name != n_name);

	cout << "������ ��ȭ��ȣ�� �Է��� �ּ��� >";
	cin >> num;
}

string pb::getPnum() 
{
	return num;
}

string pb::getName()  
{
	return name;
}