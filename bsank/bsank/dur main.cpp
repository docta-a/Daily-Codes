#include <iostream>
using namespace std;
int main() {

	double money = 1000;
	double input;

	cout << "You have $1,000 in your bank account." << endl;
	cout << "How much do you want to withdraw from your account?" << endl;
	cin >> input;
	cout << "Your new balance is $" << money - input << "." << endl;

}