#include<iostream>
#include<string>
using namespace std;
class Digit
{
	int n;
public:
	Digit(int n = 0) :n(n) {}

	operator int() {
		return n;
	}
	
	Digit operator+(const char* ch) {
		return Digit(n+stoi(ch));
	}
	Digit operator+(int value) {
		return Digit(n + value);
	}
	Digit operator+(Digit d) {
		return Digit(n + d.n);
	}
	Digit operator-(Digit d) {
		return Digit(n - d.n);
	}
	Digit operator*(Digit d) {
		return Digit(n * d.n);
	}
	Digit operator/(Digit d) {
		return Digit(n / d.n);
	}

	Digit& operator--() {
		n--;
		return *this;
	}
	Digit& operator--(int) {
		--n;
		return *this;
	}
	Digit& operator++() {
		++n;
		return *this;
	}

	Digit& operator++(int) {
		n++;
		return *this;
	}
	
};
int main() {
	Digit x = 9;
	Digit y = 4;
	Digit z = x + y + "23";
	cout << x++ << endl;
	cout << ++x << endl;
	cout << z << endl;
	cout << z-- << endl;
	cout << --z << endl;

	/*Digit a = z / y;
	Digit b = z * x;
	Digit c = x - (x + y);
	cout << a.getNumber() << endl;
	cout << b.getNumber() << endl;
	cout << c.getNumber() << endl;*/


	return 0;
}