#include <iostream>
#include <string>
using namespace std;

int max(int a, int b) {    // 더 큰 수 찾기
	
	if (a > b)
		return a;
			else return b;
}

int min(int a, int b) {    //더 작은 수 찾기
	
	if (a > b)
		return b;
			else return a;
}

int main(void) { int x, y;
	cout << "두 수를 입력해 주세요 (띄어쓰기로 구분)<< ";

	cin >> x >> y;
	cout << endl;

	cout << "큰 수 >> " << max(x, y) << endl;

	cout << "작은 수 >> " << min(x, y) << endl;
}