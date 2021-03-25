#include "Remote.h"

void Remote::print() const
{
	string state;
	if (this->device->isEnabled() == true)
	{
		state = "On";
	}
	else {
		state = "Off";
	}
	cout << typeid(this->device).name()-5 <<"\t State: " << state << " Volume: " << device->getVolume() << " Channel: " << device->getChannel() << endl;
}
