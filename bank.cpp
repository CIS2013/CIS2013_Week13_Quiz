#include <iostream>
#include <cstring>
using namespace std;
int number = 100;

class BankAccount {
	public:
		void deposit(int x){
			balance += x;
		}
		void withdraw(int y){
			balance -= y;
		}
		int balance(){
			return balance;
		}
	private:
		string name;
		string acct_numb;
		string phone;
		int balance;
		float rate;
};

class Savings: public BankAccount {
	public:
		Savings(string n, string p){
			rate = 5.0;
			name = n;
			phone = p;
			acct_numb = number++;
			balance = 0;
		}
		void withdraw(int y){
			if(y < withdraw_limit){
				balance -= y;
				if(balance <minimum_balance){
					cout << "Warning: You are below your minimum balance." << endl;
				}
			} else {
				cout << "You are only allowed to withdraw " << withdraw_limit <<
					" from this account. Transaction terminated." << endl;
			}
		}
		
		
	private:
		int minimum_balance = 100;
		int withdraw_limit = 100;
}

class Checking: public BankAccount {
	public:
		Checking(string n, string p){
			rate = 5.0;
			name = n;
			phone = p;
			acct_numb = number++;
			balance = 0;
		}
	private:
		int overdraft_fee = 25;

}

int main(){
	
}