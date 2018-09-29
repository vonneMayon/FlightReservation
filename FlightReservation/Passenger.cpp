#include "pch.h"
#include "Passenger.h"
#include <string>

using namespace std;

namespace FlightReservation {
	Passenger::Passenger(const std::string& firstName, const std::string& birthDate, const std::string& lastName, const std::string& gender)
		: mFirstName(firstName), mBirthDate(birthDate), mLastName(lastName), mGender(gender) {}


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

	void Passenger::setLastName(const string& lastName)
	{
		mLastName = lastName;
	}

	const string& Passenger::getLastName() const
	{
		return mLastName;
	}

	void Passenger::setGender(const string& gender)
	{
		mGender = gender;
	}

	const string& Passenger::getGender() const
	{
		return mGender;
	}
}
