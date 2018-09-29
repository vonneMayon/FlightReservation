#pragma once
#include <string>

namespace FlightReservation {
	class Passenger
	{
	public:
		Passenger() = default;
		Passenger(const std::string& firstName, const std::string& birthDate);

		//Getters and Setters
		void setFirstName(const std::string& firstName);
		const std::string& getFirstName() const;
		void setBirthDate(const std::string& birthDate);
		const std::string& getBirthDate() const;

	private:
		std::string mFirstName;
		std::string mBirthDate;
	};
}


