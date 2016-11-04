#include<string>
#include<iostream>
using namespace std;

int main() {
	double value1;
	double value2;
	double value3;
	double value4;
	double value5;
	double sum;
	double answer;


	cout << "Welcome To Avg" << endl;
	cout << "Value 1 : ";
	cin >> value1;
	cout << "Value 2: ";
	cin >> value2;
	cout << "Value 3: ";
	cin >> value3;
	cout << "Value 4: ";
	cin >> value4;
	cout << "Value 5: ";
	cin >> value5;

	sum = value1 + value2 + value3 + value4 + value5;
	answer = sum / 5;

	cout << "Average: " << answer << endl;


}