#include "pch.h"
#include "Flight.h"

using namespace std;

namespace FlightReservation {
	Flight::Flight(const std::string& number)
		: mNumber(number) {}


	void Flight::setNumber(const string& number)
	{
		mNumber = number;
	}
	
	const string& Flight::getNumber() const
	{
		return mNumber;
	}
}