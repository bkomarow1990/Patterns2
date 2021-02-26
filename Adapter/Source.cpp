#include <iostream>
#include "CofeeMachine.h"
using namespace std;
int main() {
	ICofeeMachine* coffemachine = new CofeeMachine();
	coffemachine->makeLatte();
	return 0;
}