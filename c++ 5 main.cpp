#include <iostream>
#include <string>
#include "pb.h"

using namespace std;

int main() {

	Address Iaddress;
	Iaddress.addPhone();

	int a;
	while (1) {
		cout << "\n1. 최신 등록 전화번호 조회 \n2. 최신 등록 전화번호 수정\n3. 종료\n";
		cin >> a;

		if (a == 1) {
			cout << Iaddress.getName() << "::" << Iaddress.getPnum() << "\n";
			cout << endl;

		}
		if (a == 2) {
			Iaddress.editPhone();
		}
		if (a == 3) {
			break;
		}
	}
}