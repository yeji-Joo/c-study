#include <iostream>
#include <string>
using namespace std;
int main(void)
{

	char name[100];
	char birth[100];
	char age[100];
	char hobby[100];

	cout << "�̸��� �Է��ϼ���: ";
	cin >> name;

	cout << "������ �Է��ϼ���: "; 
	cin >> birth;

	cout << "���̸� �Է��ϼ���: ";
	cin >> age;

	cout << "��̸� �Է��ϼ���: "; 
	cin >> hobby; 



	cout << "\n" << "=================";
	cout << "\n" << "<ȸ�� ����>" << "\n";
	cout << "�̸�: " << name << "\n";
	cout << "����: " << birth << "\n";
	cout << "����: " << age << "\n";
	cout << "���: " << hobby << "\n";

}