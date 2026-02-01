#include <iostream>
#include<string>

using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

float ReadPositiveNumber(string Message) {

	float Number = 0;
	do {

		cout << Message << endl;
		cin >> Number;



	} while (Number <= 0);

	return Number;


}
enPrimeNotPrime CheckPrime(int Number) {

	int M = round(Number / 2);

	for (int counter = 2; counter <= M; counter++) {

		if (Number % counter == 0) {

			return enPrimeNotPrime::NotPrime;

		}

	}
	return enPrimeNotPrime::Prime;

}
void PrintPrimeNumbersFrom1ToN(int Number) {


	cout << "Prime numbers from " << 1 << " to " << Number << " are :" << endl;
	for (int i =1 ;i<=Number ; i++) {


		if ( CheckPrime(i)==enPrimeNotPrime::Prime) {  //The CheckPrime(i) function checks if i is a prime number.

			cout << i << endl;
		}



	}


}
int main()
{
	PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Enter a positive number :"));

	



	return 0;

}