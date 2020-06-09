
#include<iostream>
#include<string>
#include "phonebook.h"

using namespace std;

class pb
{
	private:
	string name;
	string num;

	public:
	void addPhone();
	void editPhone();
	string getPnum();
	string getName();
};

void pb::addPhone() // 번호 추가
{
	cout << "---- swing 전화번호부 ----" << endl;
	cout << "이름을 입력해 주세요 > ";
	cin >> name;
	cout << "전화번호를 입력해 주세요 >";
	cin >> num;
	cout << endl;
}

void pb::editPhone()  // 번호 바꿈
{
	string n_name;  // 새 이름 추가
	cout << "이름을 입력해 주세요 >";

do   // name과 n_name이 같을 때까지 계속함
	{
		cin >> n_name;

	if (name != n_name)   //name과 작성한 n_name이 다를때
		{
			cout << "연락처가 존재하지 않습니다. 다시 입력해주세요. >";
		}
	} 
	while (name != n_name);

	cout << "변경할 전화번호를 입력해 주세요 >";
	cin >> num;
}

string pb::getPnum() 
{
	return num;
}

string pb::getName()  
{
	return name;
}