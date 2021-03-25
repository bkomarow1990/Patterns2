#include <iostream>
#include "Classes.h"
using namespace std;
int main() {
	Door door1 = new Door(0);
	SecureProxy sproxy(&door1);
	sproxy.open("admin","admin");
	return 0;
}