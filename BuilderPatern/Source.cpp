#include <iostream>
#include "Builder.h"
using namespace std;
int main() {
	//Car bmw;
	//bmw.engineVolume = 12;
	//bmw.seats = 4;
	//bmw.print();
	// without patterns

	// with pattern
	/*CarBuilder carBuilder;
	carBuilder.reset();
	carBuilder.setSeats(4);
	carBuilder.setGPS(1);
	Car* car = carBuilder.getResult();
	car->print();*/
	CarBuilder carBuilder;
	Director director(&carBuilder);
	director.make(CarType::ORDINARY);
	Car* car = carBuilder.getResult();
	car->print();
	director.make(CarType::SPORT);
	//delete car;
	return 0;
}