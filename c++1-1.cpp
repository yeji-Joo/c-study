#include <iostream>
#include <string>	//stringŬ���� ������� ���ڿ� ũ�⿡ ���� ����
using namespace std;
int main() {
	cout << "<ȸ�� ����>" << '\n'; // ���: ȸ������

	string name;
	cout << "�̸��� �Է��ϼ���: " ;
	getline(cin, name);
	cout << "�̸�: " << name << endl;	//�̸� ���
	
	string birth;
	cout << "������ �Է��ϼ���: " ;
	getline(cin, birth);
	cout << "����: " << birth << endl;	//���� ���
		

	string age;
	cout << "���̸� �Է��ϼ���: " ;
	getline(cin, age);
	cout << "����: " << age<<endl;	//���� ���

	string hobby;
	cout << "��̸� �Է��ϼ���: " ; 
	getline(cin, hobby);
	cout << "���: " << hobby<<endl;	//��� ���



	




}
	


