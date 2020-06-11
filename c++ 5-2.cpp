#include <iostream>
#include <string>

using namespace std;

class VendingMachine
{
private:
	string name;	//������ �̸�
	int price;	    //�ݾ�
	int total = 0;  //���� ���� ��

public:
	VendingMachine() {};		//������
	void purchase(double v1);	//�ݾ�, ����, �Ž�����
	void menu();				//�޴�
	string getName();			//�޴���
	double getPrice();			//price �� return
	double GetPrice();
	double getTotal();			//total �� return
	void setName(string n);		//name �� ����
	void setPrice(int p);		// price �� ����
	void setTotal(int t);		// total �� ����
};

void VendingMachine::purchase(double v1) {
	int cash, x;
	cout << "�� �ݾ� : " << v1 << endl;
	cout << "���� �Է��ϼ��� : ";
	cin >> cash;

	while (1) {

		if (cash == v1) { // �� �ݾ��� �Է� �ݾװ� ������
			cout << "�Ž������� �����ϴ�.";
			break;
		}
		else if (cash < v1) { // �� �ݾ��� �Է� �ݾ׺��� ũ��
			cout << "�ݾ��� �����մϴ�. �ٽ� �־��ּ���. : ";
			cin >> cash;
		}
		else if (cash > v1) { //�� �ݾ��� �Է� �ݾ׺��� ������

			if (cash % 100 == 0 && cash % 500 == 0) {
				cout << "�Ž������Դϴ�." << endl;
				x = cash - v1;
				cout << "500�� : " << x / 500 << "��" << endl;
				cout << "100�� : " << x % 500 / 100 << "��" << endl;
				

				break;
			}
			else {
				cout << "�Ž������� 500���� 100���� �����մϴ�." << endl;
				x = cash - v1;
				cout << "500�� : " << x / 500 << "��" << endl;
				cout << "100�� : " << x % 500 / 100 << "��" << endl;
				

				break;
			}
		}
	}
}

void VendingMachine::menu() {
	cout << "==== SWING ���Ǳ� ====" << endl;
	cout << "1. ��ī�ݶ� : 1500��" << endl;
	cout << "2. ��Ÿ500 : 900��" << endl;
	cout << "3. �Ŀ� ���̵� : 1000��" << endl;
	cout << "4. " << name << " : " << price << "��" << endl;
	cout << "5. ���" << endl << endl;
}

string VendingMachine::getName() {
	cin >> name;
	return name;
}

double VendingMachine::getPrice() {
	cin >> price;
	return price;
}

double VendingMachine::getTotal() {
	return total;
}

double VendingMachine::GetPrice() {
	return price;
}
void VendingMachine::setName(string n) {
	n = name;
}

void VendingMachine::setPrice(int p) {
	p = price;
}

void VendingMachine::setTotal(int t) {
	total = total + t;
}

int main(void) {
	VendingMachine VM;

	VendingMachine* p = &VM;

	cout << "=====SWING ���Ǳ�=====" << endl;
	cout << "1. ��ī�ݶ� : 1500��" << endl;
	cout << "2. ��Ÿ500 : 900��" << endl;
	cout << "3. �Ŀ� ���̵� : 1000��" << endl;
	cout << "4. �غ� ��" << endl;
	cout << "5. ���" << endl << endl;

	int x, y;

	cout << "�߰��� ���� �̸��� �Է��� �ּ��� : ";
	(*p).setName(VM.getName());

	cout << "�Ǹ��� ������ �Է��ϼ��� : ";
	(*p).setPrice(VM.getPrice());

	cout << endl;

	do {
		VM.menu();
		cout << "��ȣ�� �������ּ��� : ";
		cin >> x;

		switch (x) {
		case 1:
			cout << "������ ������ �Է����ּ��� : ";
			cin >> y;
			cout << endl;
			(*p).setTotal(y * 1500);
			break;

		case 2:
			cout << "������ ������ �Է����ּ��� : ";
			cin >> y;
			cout << endl;
			(*p).setTotal(y * 900);
			break;

		case 3:
			cout << "������ ������ �Է����ּ��� : ";
			cin >> y;
			cout << endl;
			(*p).setTotal(y * 2000);
			break;

		case 4:
			cout << "������ ������ �Է����ּ��� : ";
			cin >> y;
			cout << endl;
			(*p).setTotal(y * VM.GetPrice());
			break;

		case 5:
			break;

		default:
			cout << "�̻��� �����Դϴ�." << endl;
		}
	} while (x != 5);

	cout << endl;

	cout << "��� ���Դϴ�. ��ٷ��ּ���..." << endl << endl;

	VM.purchase(VM.getTotal());

	cout << "�ȳ���������." << endl << endl;
}