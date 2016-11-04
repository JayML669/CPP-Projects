#include<string>
#include<iostream>
using namespace std;

int main() {
	int temp;
	int largestNumber = 0;
	int largestNumberPosition;
	int sum = 0;
	int arr1[11];
	int arr[10];
	arr[0] = 65;
	arr[1] = 8;
	arr[2] = 1;
	arr[3] = 28;
	arr[4] = 7;
	arr[5] = 94;
	arr[6] = 77;
	arr[7] = 83;
	arr[8] = 67;
	arr[9] = 12;

	for (int x = 0; x < 10; x++)
	{
		sum += arr[x];
		
		if (arr[x] % 3 == 0) {
		
			cout << arr[x] << " at spot " << x + 1 << " is divisible by 3!" << endl;
			

		}

		else {
		
			cout << arr[x] << " at spot " << x + 1 << " is not divisible by 3." << endl;

		}

	}

	cout << "The total sum of all digits in the array is " << sum << "!" << endl;
	cout << "An 11 digit array with 0 as the first value would display as:" << endl;
	

	for (int y = 0; y < 11; y++) {
		
		arr1[y] = arr[y - 1];

		arr1[0] = 0;
	
		cout << "Value " << y + 1 << ": " << arr1[y] << endl;

	}

	for (int z = 0; z < 10; z++) {
	

		if (arr[z] - largestNumber > 0) {
		
			largestNumber = arr[z];
			largestNumberPosition = z + 1;

		}

	
	
	}

	cout << "The largest number is " << largestNumber << " at position " << largestNumberPosition << "!" << endl;

	cout << "Sorted in order of smallest to largest the array is:" << endl;

	for (int n = 0; n < 9; n++)
	{
		while (arr[n] > arr[n + 1])
		{


			for (int i = 0; i < 9; i++)
			{


				if (arr[i] > arr[i + 1])
				{

					temp = arr[i + 1];
					arr[i + 1] = arr[i];
					arr[i] = temp;

				}
				n++;

			}

		}
		if (n == 8)
		{
			n = 0;
		}
	}





	for (int m = 0; m < 9; m++)
	{
		cout << "At value " << m + 1 << " is " << arr[m] << endl;
	}

}