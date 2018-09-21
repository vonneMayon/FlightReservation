#pragma once
#include <string>

namespace FlightReservation {
	class Flight
	{
	public:
		Flight(const std::string& number);

		//Getters and setters
		void setNumber(const std::string& number);
		const std::string& getNumber() const;
	private:
		std::string mNumber;};
}