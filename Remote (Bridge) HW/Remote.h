#pragma once
//#include <iostream>
#include "Device.h"
//using namespace std;
class Remote
{
private:
	IDevice* device;
	
public:
	void setDevice(IDevice* device) {
		if (device != nullptr)
		{
			this->device = device;
		}
		else {
			cout << "Device is nullptr" << endl;
		}
	}
	void togglePower() {
		if (device->isEnabled())
		{
			device->disable();
		}
		else {
			device->enable();
		}
	}
	void volumeDown() { device->setVolume(device->getVolume() - 1); }
	void volumeUp() { device->setVolume(device->getVolume() + 1); }
	void channelDown() { device->setChannel(device->getChannel() - 1); }
	void channelUp() { device->setChannel(device->getChannel() + 1); }
	void print()const;
	Remote(IDevice * device)
	{
		setDevice(device);
	}
	~Remote()
	{
		if (device != nullptr)
		{
			delete device;
			device = nullptr;
		}
	}
};

