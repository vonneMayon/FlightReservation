#include "pch.h"
#include "Passenger.h"
#include <string>

using namespace std;

namespace FlightReservation {
	Passenger::Passenger(const std::string& firstName, const std::string& birthDate)
		: mFirstName(firstName), mBirthDate(birthDate){}


	void Passenger::setFirstName(const string& firstName)
	{
		mFirstName = firstName;
	}

	const string& Passenger::getFirstName() const
	{
		return mFirstName;
	}

	void Passenger::setBirthDate(const string& birthDate)
	{
		mBirthDate = birthDate;
	}

	const string& Passenger::getBirthDate() const
	{
		return mBirthDate;
	}
}
