#pragma once
#include <iostream>
using namespace std;
class Car {
public:
	Car() = default;

	void print()const {
		cout << "-----Car-----" << endl;
		cout << "Volume: " << engineVolume << endl;
		cout << "CountSeats: " << seats << endl;
		cout << "Have gps: " << boolalpha << gps << endl;
	}
	const bool& isHaveGPS()const {
		return gps;
	}
	const size_t& getSeats() const {
		return seats;
	}
	const float& getEngineVolume()const {
		return engineVolume;
	}
	void setEngineVolume(const float& engVolume) {
		engineVolume = engVolume;
	}
	void setGPS(const bool& have) {
		gps = have;
	}
	void setSeats(const size_t& seats){
		this->seats = seats;
	}
protected:
	bool gps = 0;
	size_t seats = 0;
	float engineVolume = 0;
};
