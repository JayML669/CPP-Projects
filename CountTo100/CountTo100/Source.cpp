#include <string>
#include <iostream>
using namespace std;

int main() {



	for (int x = 0; x <= 100; x++) {
	
		
	
		if (x % 3 == 0 && x % 5 != 0) {
		
			cout << "Fizz @ " << x << endl;
		
		}

		else if (x % 5 == 0 && x % 3 != 0) {
		
		
		
			cout << "Buzz @ " << x << endl;


		}

		else if (x % 5 == 0 && x % 3 == 0) {
		
		
		
			cout << "FizzBuzz @ " << x << endl;


		}

		else {
		
		
			cout << x << endl;


		}


	
	}



}