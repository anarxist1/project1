

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
using namespace std;


int fun(double a)
{
	std::string newStr;
	double dd = 0, ss = 0;
	ss = modf(a, &dd);
	ostringstream os;
	os << ss;
	string str = os.str();
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (i != 0 && i != 1) // òóò åñëè âàðèàíòîâ ìíîãî ïåðåäåëàòü
			newStr += str[i];
	}

	int d = atoi(newStr.c_str());

	return d;
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	bool f = true;
	int d = 0;
	float v = 3.14f;
	cout << fun(v) << endl;
	while (f)
	{
		printf("Введите число::\n");
		printf("1 - вводить число\n");
		printf("2 - выход\n");
		cin >> d;
		switch (d)
		{
		case 1: // åñëè count = 1
		{
			printf("Введите число:\n");
			double dsd = 0;
			cin >> dsd;
			cout << fun(dsd) << endl;
			break;
		}
		case 2: // åñëè count = 1
		{
			f = false;
			break;
		}
		default:
			cout << "не то " << endl;
			break;
		}
	}
	_gettch();
	return 0;
	
}

