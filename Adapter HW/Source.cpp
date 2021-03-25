#include <iostream>
#include "Remote.h"
#include "TV.h"
#include "Radio.h"
using namespace std;
int main() {
	IDevice* Tv;
	IDevice* Radio_ = new Radio(3, 100, 90, 50);
	Tv= new TV(0, 100, 5, 3);
	
	Remote remote(Tv);
	cout << "Tv: " << endl;
	remote.print();
	remote.channelDown();
	remote.channelUp();
	cout << "Radio: " << endl;
	remote.setDevice(Radio_);
	remote.channelDown();
	remote.channelUp();
	remote.print();
	return 0;
}