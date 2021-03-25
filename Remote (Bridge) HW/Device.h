#pragma once
#include <iostream>
using namespace std;
__interface IDevice{
	const bool& isEnabled()const;
	void enable();
	void disable();
	const size_t& getVolume()const;
	void setVolume(const size_t& precent);
	const size_t& getChannel()const;
	void setChannel(const size_t& channel);
};
