#include <iostream>
#include <cstdlib>  //rand() 함수를 포함한 라이브러리
#include <ctime>	//time() 함수를 포함한 라이브러리
using namespace std;

class Random		//랜덤 수를 발생하기 위해 랜덤 클래스 생성
{
	public:		//전체 클래스 접근 허가

	Random();
	int next();
	int nextInRange(int x, int y); // 랜덤으로 출력할 정수의 범위를 x 이상 y 이하로 설정
};

Random::Random() // 랜덤 함수 사용
{
	srand((unsigned)time(0)); //시드 값을 바꿔서 랜덤 수를 출력해야 하는데 이 때 시간 값을 시드로 활용함으로 시드 값을 바뀌게 함
}

int Random::next() // next 함수 사용
{
	return rand(); // 랜덤 수 생성
}

int Random::nextInRange(int x, int y)
{
	return rand() % (y - x + 1) + x; // x랑 y사이 랜덤 수를 출력하기 위해 rand()함수를 (y-x+1)로 나눈 나머지에 x를 더한 수로 설정
}

int main()
{
	int i, n;
	Random r; // 랜덤 클래스에 r이라는  객체 생성
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl; //이 때 RAND_MAX= 위의 cstlib 라이브러리 안에 선언된 정수 32767
	for (i = 0; i < 10; i++) // for문으로 랜덤 정수 1개 10번 반복 출력
	{
		n = r.next(); // n에 0부터 32767 사이 랜덤 정수 대입
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2에서 " << "4까지의 랜덤 정수 10개 --" << endl;
	for (i = 0; i < 10; i++) // 랜덤 정수 1개 10회 반복 출력
	{
		n = r.nextInRange(2, 4); // 2랑 4 사이의 랜덤 정수를 n 에 대입
		cout << n << ' ';
	}
	cout << endl;
}