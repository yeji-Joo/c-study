#include <iostream>
using namespace std;

int main()
{
	int num[5];		//숫자를 입력 받을 배열 선언
	int i;
	int odd = 0;	//홀
	int even = 0;	//짝

	for (i = 0; i < 5; i++)		//반복문 사용(5번 반복)
	{
		cout << "숫자를 입력해주세요 : ";
		cin >> num[i];
	}

	cout << "----------결과----------" << endl;


	cout << "홀수 : ";
	for (i = 0; i < 5; i++)
	{
		if (num[i] % 2 != 0)	//홀수인 경우 2로 나누었을 때 나머지가 0이 아님
		{
			odd++;
			cout << num[i] << " ";
		}
	}
	cout << "\n홀수는 총 " << odd << "개 입니다." << endl;

	cout << "짝수 : ";
	for (i = 0; i < 5; i++)
	{
		if (num[i] % 2 == 0)	//짝수인 경우 2로 나누었을 때 나머지가 0임
		{
			even++;
			cout << num[i] << " ";
		}
	}
		cout << "\n짝수는 총 " << even << "개 입니다." << endl;

	
}