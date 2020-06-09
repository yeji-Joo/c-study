#pragma once
#ifndef pb
#define pb
#include <string>
using namespace std;

class Pb {
private:
	string name;
	string num;

public:
	string addPhone();
	string editPhone();
	string getPnum();
	string getName();
};

#endif