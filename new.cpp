#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;
//Coin class
class Coin {
private:
	double balance;
	string sideUp;
	bool heads;
	double value;

public:
	Coin(double val) {
		value = val;
		int side = rand() % 2;
		if (side == 0) {
			sideUp = "heads";
			heads = true;
		}
		else {
			sideUp = "tails";
			heads = false;
		}
	}

	void toss() {
		int side = rand() % 2;
		if (side == 0) {
			sideUp = "heads";
			heads = true;
		}
		else {
			sideUp = "tails";
			heads = false;
		}
	}

	void addBalance() {
		balance += value;
	}

	double getBalance() {
		return balance;
	}

	bool getHeads() {
		return heads;
	}

	double getValue() {
		return value;
	}

	string getSideUp() {
		return sideUp;
	}
};

//Dime class sets value
class Dime : public Coin { public: Dime(double val) : Coin(val) {} };


//Quarter class sets value
class Quarter : public Coin {
public:
	Quarter(double value) : Coin(value) {

	}
};

//Nickle class sets value
class Nickle : public Coin {
public:
	Nickle(double value) : Coin(value) {

	}
};


//evaluateToss method
void evaluateToss(Coin &coin) {
	coin.toss();
	if (coin.getHeads()==true) {
		coin.addBalance();
	}
	else {
		return;
	}
	std::cout << coin.getBalance();
	cout << "\n\n";
	if (coin.getBalance() == 1.0) {
		std::cout << "You win!!!";
	}
	else if (coin.getBalance() > 1.0) {
		std::cout << "You lose!!!";
	}
}
//main class
int main()
{
	std::cout << "Starting the Coin Toss Game";
	std::cout << "Ready? Set? Go!!!";

	Coin coin(0);
	coin.addBalance();
	Dime dime(0.10);
	Nickle nickle(0.05);
	Quarter quarter(0.25);

	while (coin.getBalance()<1.0) {
		evaluateToss(dime);
		evaluateToss(nickle);
		evaluateToss(quarter);
		}
		
	
}