#include <iostream>
using namespace std;

int main()
{
	int i, k, X, Y;
	int m, n;

	do
	{
		cout << "-------����� �ý���-------" << endl;
		cout << "����� ���� ����� �������ּ���." << endl;
		cout << "1. �����ﰢ��" << endl;
		cout << "2. ���ﰢ��" << endl;
		cout << "3. ����" << endl;
		cout << "4. ������" << endl;

		cin >> X;

		switch (X)	// switch- case�� ���
		{
		case 1:
		{
			cout << "�����ﰢ���� �����ϼ̽��ϴ�." << endl;
			cout << "���� ������ �������ּ���." << endl;
			cin >> Y;
			cout << endl;

			for (k = 1; k < Y + 1; k++)  //������ �Ʒ� ���� �ﰢ���� �� ����
			{
				for (i = 0; i < Y - k; i++)
					cout << " ";
				for (i = 0; i <= k - 1; i++)
					cout << "*";

				cout << endl;
			}

			cout << endl;

			for (k = 0; k < Y; k++) //���� �� ���� �ﰢ���� �� ����
			{
				for (i = 0; i < Y - k; i++)
					cout << "*";

				cout << endl;
			}

			cout << endl;
			for (k = 0; k < Y; k++) {   //������ �� ���� �ﰢ���� �� ����
				for (i = 0; i < k; i++)
					cout << " ";
				for (i = 0; i < Y - k; i++)
					cout << "*";
				cout << endl;
			}
		}break;   //�ݺ� Ż��

		case 2:
		{
			cout << "���ﰢ���� �����ϼ̽��ϴ�." << endl;
			cout << "���� ������ �������ּ���." << endl;
			cin >> Y;

			int m, n;

			int count = 2 * Y - 1;   //1���� �� ����
			int middle = count / 2;   //�߽�
			m = 1;   // ����

			for (n = 0; n < Y; n++)
			{
				count = count - (m + middle);   //���� ����

				for (i = 0; i < middle; i++) {  //���� �߻�
					cout << " ";
				}
				middle -= 1;   //���� ����

				for (k = 0; k < m; k++) {
					cout << "*";
				}
				m += 2;  // �� ����


				for (i; i < count; i++) {   //���� �߻�
					cout << " ";
				}
				cout << endl;
			}
			cout << endl;
		}break;

		case 3:
		{
			cout << "�������� �����ϼ̽��ϴ�." << endl;
			int vline;

			cout << "���� ������ �������ּ��� : ";
			cin >> vline;

			while (vline % 2 != 1) {   //Ȧ¦ �Ǻ� (Ȧ)
				cout << "Ȧ���� �Է��ϼ���. : ";
				cin >> vline;
			}

			m = 1;
			int hline = vline + 1;   //�ִ��� ū �� ����

			for (n = 0; n < vline / 2; n++) {   //�� �������� Ŀ��

				for (i = 0; i < m; i++) {
					cout << "*";
				}
				for (k = 0; k < hline - 2 * m; k++) {   //���� �߻�
					cout << " ";
				}
				for (i = 0; i < m; i++) {
					cout << "*";
				}
				cout << endl;

				m += 1;   // �� ����

			}

			for (i = 0; i < hline; i++)   //�� �߻�
				cout << "*";
			cout << endl;

			m -= 1;

			for (n = 0; n < vline / 2; n++)   // ������ �߰�
			{
				for (i = 0; i < m; i++) {
					cout << "*";
				}

				for (k = 0; k < hline - 2 * m; k++) {
					cout << " ";
				}

				for (i = 0; i < m; i++) {
					cout << "*";
				}

				cout << endl;

				m -= 1;   //�� ����
			}
			cout << endl;
		}break;

		case 4:
			cout << "�����⸦ �����ϼ̽��ϴ�." << endl;
			cout << "�����մϴ�.";

		}
	} while (X != 4);
	}