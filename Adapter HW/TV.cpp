#include "TV.h"

void TV::setVolume(const size_t& precent)
{
	if (state == false)
	{
		cout << "Device off" << endl;
		return;
	}
	if (precent < MinVolume)
	{
		cout << "Less than min volume" << endl;
		return;
	}
	if (precent > MaxVolume)
	{
		cout << "More than max volume" << endl;
		return;
	}
	this->volume = precent;
}

void TV::setChannel(const size_t& channel)
{
	if (state == false)
	{
		cout << "Device off" << endl;
		return;
	}
	if (this->channel != 0)
	{
		this->channel = channel;
		
	}
	else {
		cout << "Channel alredy have 0 channel" << endl;
	}
}

