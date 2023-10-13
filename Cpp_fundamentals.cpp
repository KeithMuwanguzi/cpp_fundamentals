#include <iostream>
using namespace std;

class Calc {
private:
	int number1;
	int number2;
public:
	void setNumber1(int num) {
		number1 = num;
	}

	void setNumber2(int num) {
		number2 = num;
	}

	int getNumber1() {
		return number1;
	}

	int getNumber2() {
		return number2;
	}

	int addition() {
		return getNumber1() + getNumber2();
	}

	int subtraction() {
		return getNumber1() - getNumber2();
	}

	int divide() {
		return getNumber1() / getNumber2();
	}

	inline int multiply() {
		return getNumber1() * getNumber2();
	}
};

int main() {
	Calc calculator;
	int num1;
	int num2;

	cout << "Welcome the calculator" << endl;
	cout << "Enter the first number:";
	cin >> num1;
	cout << "Enter the second number:";
	cin >> num2;
	calculator.setNumber1(num1);
	calculator.setNumber2(num2);
	cout << "Addition:" << calculator.addition() << endl;
	cout << "Subtraction:" << calculator.subtraction() << endl;

	return 0;
}