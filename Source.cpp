#include <iostream>

using namespace std;

bool isprime(int num){
	int divr = 2;
	while (divr < num)
		if (num % divr == 0)
		break;
		else divr++;

	if (divr == num)
		return  true;
	else
		return false;
}

int prime(int n){
	int count = 0;
	int i = 1;
	while (count < n){
		i++;
		if (isprime(i))
			count++;
	}

	return i;
}

int main(){
	char response;
	int nth, test;
	bool rpt = true;
	do{
		cout << "F: Find the nth prime number" << endl << "T: Test a value to see if it is a prime" << endl << "Q: Terminate the program" << endl;
		cin >> response;
		if (response == 'f' || response == 'F'){
			cout << " which nth prime number are you looking for" << endl;
			cin >> nth;
			cout << "the " << nth << " prime number is " << prime(nth) << endl;
		}
		else
		if (response == 'T' || response == 't'){
			cout << " what number will you like to test" << endl;
			cin >> test;
			if (isprime(test) == true)
				cout << "It is prime" << endl;
			else
				cout << "The number is not prime";
		}
		else
		if (response == 'Q' || response == 'q'){
			cout << "Chao!" << endl;
			rpt = false;
		}
	} while (rpt);
}
 