#include <iostream>
#include <cstdlib>  //rand() �Լ��� ������ ���̺귯��
#include <ctime>	//time() �Լ��� ������ ���̺귯��
using namespace std;

class Random		//���� ���� �߻��ϱ� ���� ���� Ŭ���� ����
{
	public:		//��ü Ŭ���� ���� �㰡

	Random();
	int next();
	int nextInRange(int x, int y); // �������� ����� ������ ������ x �̻� y ���Ϸ� ����
};

Random::Random() // ���� �Լ� ���
{
	srand((unsigned)time(0)); //�õ� ���� �ٲ㼭 ���� ���� ����ؾ� �ϴµ� �� �� �ð� ���� �õ�� Ȱ�������� �õ� ���� �ٲ�� ��
}

int Random::next() // next �Լ� ���
{
	return rand(); // ���� �� ����
}

int Random::nextInRange(int x, int y)
{
	return rand() % (y - x + 1) + x; // x�� y���� ���� ���� ����ϱ� ���� rand()�Լ��� (y-x+1)�� ���� �������� x�� ���� ���� ����
}

int main()
{
	int i, n;
	Random r; // ���� Ŭ������ r�̶��  ��ü ����
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10�� --" << endl; //�� �� RAND_MAX= ���� cstlib ���̺귯�� �ȿ� ����� ���� 32767
	for (i = 0; i < 10; i++) // for������ ���� ���� 1�� 10�� �ݺ� ���
	{
		n = r.next(); // n�� 0���� 32767 ���� ���� ���� ����
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2���� " << "4������ ���� ���� 10�� --" << endl;
	for (i = 0; i < 10; i++) // ���� ���� 1�� 10ȸ �ݺ� ���
	{
		n = r.nextInRange(2, 4); // 2�� 4 ������ ���� ������ n �� ����
		cout << n << ' ';
	}
	cout << endl;
}