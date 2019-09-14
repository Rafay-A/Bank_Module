
#include <iostream>
using namespace std;


class BankAccount
{
public:
	string customer_name;
	int account_number;
	int balance=20000;

public:
	void getinfo() {
		cout << "Enter your name: "<<endl;
		cin >> customer_name;
		cout << "Enter your account number: "<<endl;
		cin >> account_number;

	}

	void displayinfo() {
		cout << "Your name is " << customer_name<<endl;
		cout << "your account number is " << account_number<<endl;
		cout << "your current balance is " << balance<<endl;
		
	}

};



class Current : BankAccount {
public:

	int deposit_amount;
	int withdrawl_amount;
	

public:
	void deposit() {

		cout << "Enter the ammount you want to deposit: "<<endl;
		cin >> deposit_amount;

		cout << "Your balance is ";

		cout << balance + deposit_amount<<endl;
	}

	void withdrwal() {

		cout << "Enter the amount you want to withdraw: "<<endl;
		cin >> withdrawl_amount;

		if (withdrawl_amount > balance) {
			cout << "Not possible"<<endl;
		}
		else {
			cout<< "Your balance in Current Account is ";
			cout << balance - withdrawl_amount<<endl;
		}

	}

};

class Savings : BankAccount {

public:

	int deposit_amount;
	int withdrawl_amount;

public:
	void deposit() {

		cout << "Enter the ammount you want to deposit: " << endl;
		cin >> deposit_amount;

		cout << "Your balance is ";

		cout << balance + deposit_amount<<endl;
	}

	void withdrwal() {

		cout << "Enter the amount you want to withdraw: "<<endl;
		cin >> withdrawl_amount;

		if (withdrawl_amount > balance) {
			cout << "Not possible" << endl;
		}
		else {
			cout << "Your balance in Savings Account is ";
			cout << balance - withdrawl_amount<<endl;
		}

	}
};


int main()
{
	
	BankAccount bank;
	Current current;
	Savings saving;
	bank.getinfo();
	bank.displayinfo();
	current.deposit();
	current.withdrwal();
	saving.deposit();
	saving.withdrwal();
	

}
