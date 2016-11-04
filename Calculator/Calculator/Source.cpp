#include <string>
#include <iostream>
using namespace std;

int main(){

	while (1) {
		double value1;
		string calcOperator;
		double value2;
		double answer = 0.0;
		cout << "Welcome To Calculator 0.1" << endl;
		cout << "Value 1: ";
		cin >> value1;
		cout << "Operator(+,-,x,/,^): ";
		cin >> calcOperator;
		cout << "Value 2: ";
		cin >> value2;
		if (calcOperator == "+") {

			answer = value1 + value2;

		}

		else if (calcOperator == "-") {

			answer = value1 - value2;

		}

		else if (calcOperator == "x") {

			answer = value1 * value2;

		}

		else if (calcOperator == "/") {

			answer = value1 / value2;

		}

		else if (calcOperator == "^") {
			double originalValue1 = value1;


			for (int x = value2; x > 1; x--) {

				value1 = value1 * originalValue1;
				answer = value1;

			};

		}

		else {
		
			cout << "Invalid Input";

		}

		if (answer == 420) {
		
		
			cout << "Smoke Weed" << endl;


		}
		else {
			cout << "Answer: " << answer << endl;
		}
	}
return 0;

}
