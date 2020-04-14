#include <iostream>
#include <string>
using namespace std;
int main(void)
{

	char name[100];
	char birth[100];
	char age[100];
	char hobby[100];

	cout << "이름을 입력하세요: ";
	cin >> name;

	cout << "생일을 입력하세요: "; 
	cin >> birth;

	cout << "나이를 입력하세요: ";
	cin >> age;

	cout << "취미를 입력하세요: "; 
	cin >> hobby; 



	cout << "\n" << "=================";
	cout << "\n" << "<회원 정보>" << "\n";
	cout << "이름: " << name << "\n";
	cout << "생일: " << birth << "\n";
	cout << "나이: " << age << "\n";
	cout << "취미: " << hobby << "\n";

}