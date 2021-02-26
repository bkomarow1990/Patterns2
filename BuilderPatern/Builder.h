#pragma once
#include "Car.h"
#include <vector>
__interface IBuilder
{
	void reset(); // start of building
	void setEngine(const float& volume);
	void setSeats(const size_t& amount);
	void setGPS(const bool& exists);
};

class CarBuilder : public IBuilder {
private:
	Car* car;
public:
	void reset() {
		car = new Car();
	}
	// start of building
	void setEngine(const float& volume) { car->setEngineVolume(volume); }
	void setSeats(const size_t& amount) { car->setSeats(amount); }
	void setGPS(const bool& exists) { car->setGPS(exists); }
	Car* getResult() {
		return car;
	}
};
enum class CarType{SPORT,ORDINARY};
class Director {
public:
	Director(IBuilder * builder)
		:builder(builder){}
	void make(const CarType& type) {
		builder->reset();
		if (type==CarType::SPORT)
		{
			builder->setSeats(3.5f);
			builder->setSeats(2);
			
		}
		else if(type==CarType::ORDINARY){
			builder->setSeats(2.0f);
			builder->setSeats(4);
			builder->setGPS(1);
		}
		else {
			throw exception("Bad type of car");
		}
	}
	void makeSportsCar() {
		builder->reset();
		builder->setSeats(2);
		builder->setEngine(280);
		builder->setGPS(1);
	}
private:
	IBuilder* builder;
};

