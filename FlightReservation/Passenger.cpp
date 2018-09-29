#include "pch.h"
#include "Passenger.h"
#include <string>

using namespace std;

namespace FlightReservation {
	Passenger::Passenger(const std::string& firstName)
		: mFirstName(firstName) {}

	void Passenger::setFirstName(const string& firstName)
	{
		mFirstName = firstName;
	}

	const string& Passenger::getFirstName() const
	{
		return mFirstName;
	}
}
