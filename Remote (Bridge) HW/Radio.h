#pragma once
#include "Device.h"
class Radio : public IDevice
{
private:
	const size_t& MinVolume;
	const size_t& MaxVolume;
	bool state;
	size_t channel;
	size_t volume;
public:
	const bool& isEnabled()const { return state; }
	void enable() { state = true; }
	void disable() { state = false; }
	const size_t& getVolume()const { return volume; }
	void setVolume(const size_t& precent);
	const size_t& getChannel()const { return channel; }
	void setChannel(const size_t& channel);
	Radio(const size_t& min = 0, const size_t& max = 100, const size_t& volume = 0, const size_t& channel = 0, const bool& state =0)
		:MinVolume(min), MaxVolume(max)
	{
		setVolume(volume);
		setChannel(channel);
	}
};

