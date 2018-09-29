#pragma once
#include <string>

namespace FlightReservation {
	class Passenger
	{
	public:
		Passenger() = default;
		Passenger(const std::string& firstName);

		//Getters and Setters
		void setFirstName(const std::string& firstName);
		const std::string& getFirstName() const;

	private:
		std::string mFirstName;
	};
}


