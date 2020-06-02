#include <iostream>
#include <string>

using namespace std;

class phonebook  // phonebook 클래스 생성
{
private: // 이름과 번호는 접근자를 private로 설정

	string name;  
	string p_num;   

public: // 밑에 사용될 함수들 public으로 설정
	void addPhone();
	void editPhone();
	string getPnum();
	string getName();

};

void phonebook::addPhone()  // 번호 추가하는 함수
{
	cout << "---swing 전화번호부---" << endl;
	cout << endl << "이름을 입력해 주세요 >> ";
	cin >> name;
	cout << "전화번호를 입력해 주세요 >> ";
	cin >> p_num;
}

void phonebook::editPhone()   // 번호 수정하는 함수
{
	string name2;  
	cout << "이름을 입력해 주세요 >>";


	do   // name과 name2가 같을 때까지 반복
	{
		cin >> name2;
		if (name !=name2)   //name과 name2가 다를 경우 
		{
			cout << "연락처가 존재하지 않습니다. 다시 입력해주세요. >>";
		}
	} while (name != name2);

	cout << "변경할 전화번호를 입력해 주세요 >>";
	cin >> p_num;
}

string phonebook::getPnum()   // 번호 가져오기
{
	return p_num;
}

string phonebook::getName()   // 이름 가져오기
{
	return name;
}

int main()
{
	phonebook st; //st 객체 생성
	st.addPhone();
	int n;

	do  // do- while 문 : n이 3값을 가질 때까지 반복
	{
		cout << endl << "1. 최신 등록 전화번호 조회" << endl;
		cout << "2. 최신 등록 전화번호 수정" << endl;
		cout << "3. 종료 >> ";
		cin >> n;  

		switch (n) //case마다 달라지는 switch-case문 사용
		{
		case 1:   // 1이면 번호 조회
			cout << st.getName() << "::" << st.getPnum() << endl;
			break;
		case 2:   // 2면 번호 수정
			st.editPhone();
		}
	} while (n != 3);
}