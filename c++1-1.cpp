#include <iostream>
#include <string>	//string클래스 방식으로 문자열 크기에 제약 없음
using namespace std;
int main() {
	cout << "<회원 정보>" << '\n'; // 출력: 회원정보

	string name;
	cout << "이름을 입력하세요: " ;
	getline(cin, name);
	cout << "이름: " << name << endl;	//이름 출력
	
	string birth;
	cout << "생일을 입력하세요: " ;
	getline(cin, birth);
	cout << "생일: " << birth << endl;	//생일 출력
		

	string age;
	cout << "나이를 입력하세요: " ;
	getline(cin, age);
	cout << "나이: " << age<<endl;	//나이 출력

	string hobby;
	cout << "취미를 입력하세요: " ; 
	getline(cin, hobby);
	cout << "취미: " << hobby<<endl;	//취미 출력



	




}
	


