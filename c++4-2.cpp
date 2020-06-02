#include <iostream>
#include <string>

using namespace std;

class phonebook  // phonebook Ŭ���� ����
{
private: // �̸��� ��ȣ�� �����ڸ� private�� ����

	string name;  
	string p_num;   

public: // �ؿ� ���� �Լ��� public���� ����
	void addPhone();
	void editPhone();
	string getPnum();
	string getName();

};

void phonebook::addPhone()  // ��ȣ �߰��ϴ� �Լ�
{
	cout << "---swing ��ȭ��ȣ��---" << endl;
	cout << endl << "�̸��� �Է��� �ּ��� >> ";
	cin >> name;
	cout << "��ȭ��ȣ�� �Է��� �ּ��� >> ";
	cin >> p_num;
}

void phonebook::editPhone()   // ��ȣ �����ϴ� �Լ�
{
	string name2;  
	cout << "�̸��� �Է��� �ּ��� >>";


	do   // name�� name2�� ���� ������ �ݺ�
	{
		cin >> name2;
		if (name !=name2)   //name�� name2�� �ٸ� ��� 
		{
			cout << "����ó�� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���. >>";
		}
	} while (name != name2);

	cout << "������ ��ȭ��ȣ�� �Է��� �ּ��� >>";
	cin >> p_num;
}

string phonebook::getPnum()   // ��ȣ ��������
{
	return p_num;
}

string phonebook::getName()   // �̸� ��������
{
	return name;
}

int main()
{
	phonebook st; //st ��ü ����
	st.addPhone();
	int n;

	do  // do- while �� : n�� 3���� ���� ������ �ݺ�
	{
		cout << endl << "1. �ֽ� ��� ��ȭ��ȣ ��ȸ" << endl;
		cout << "2. �ֽ� ��� ��ȭ��ȣ ����" << endl;
		cout << "3. ���� >> ";
		cin >> n;  

		switch (n) //case���� �޶����� switch-case�� ���
		{
		case 1:   // 1�̸� ��ȣ ��ȸ
			cout << st.getName() << "::" << st.getPnum() << endl;
			break;
		case 2:   // 2�� ��ȣ ����
			st.editPhone();
		}
	} while (n != 3);
}