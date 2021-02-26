#pragma once
#include <iostream>
using namespace std;
class DrinkMachine {
public:
	void makeTea() {
		cout << "Black tea\n";
	}
	void makeCofee() {
		cout << "Cofee\n";
	}
	void addMilk() {
		cout << "Add milk" << endl;
	}
};
__interface ICofeeMachine {
	void makePureCofee();
	void makeLatte();
};
class CofeeMachine : public ICofeeMachine {
public:
	void makePureCofee()override {
		machine.makeCofee();
	}
	void makeLatte() override {
		machine.makeCofee();
		machine.addMilk();
	}
private:
	DrinkMachine machine;
};