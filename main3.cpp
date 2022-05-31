/*
#include <iostream>
using namespace std;
constexpr int fac(int n) {
	return n > 1 ? n * fac(n - 1) : 1;
}

int main(int argc, char* argv[])
{
	int x = 2999999999;
	cout << "x = " << x << endl;

	int someInteger = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;

	someInteger++;
	someInteger *= 2;//
	someShort = static_cast<short>(someInteger);
	someLong = someShort * 10000;
	someFloat = someLong + 0.785f;
	someDouble = static_cast<double>(someFloat) / 100000;
	cout << someDouble << endl;//

	int firstNum = 0;
	cout << "firstNum : ";
	cin >> firstNum;
	int secondNum = 0;
	cout << "secondNum : ";
	cin >>secondNum;
	cout << "Sum : ";
	cout << firstNum + secondNum << endl;
	const int a = 0;
	constexpr int b = fac(4);
	int  c = fac(4);
}
*/