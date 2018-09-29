#pragma once
#include <string>

namespace FlightReservation {
	class Passenger
	{
	public:
		Passenger() = default;
		Passenger(const std::string& firstName, const std::string& birthDate, const std::string& lastName, const std::string& gender);

		//Getters and Setters
		void setFirstName(const std::string& firstName);
		const std::string& getFirstName() const;
		void setBirthDate(const std::string& birthDate);
		const std::string& getBirthDate() const;
		void setLastName(const std::string& lastName);
		const std::string& getLastName() const;
		void setGender(const std::string& gender);
		const std::string& getGender() const;

	private:
		std::string mFirstName;
		std::string mBirthDate;
		std::string mLastName;
		std::string mGender;
	};
}


