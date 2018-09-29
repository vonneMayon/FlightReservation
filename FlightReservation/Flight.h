#pragma once
#include <string>

namespace FlightReservation {
	class Flight
	{
	public:
		Flight() = default;
		Flight(const std::string& number);
		

		//Getters and setters
		void setNumber(const std::string& number);
		const std::string& getNumber() const;
		void setAirline(const std::string& airline);
		const std::string& getAirline() const;

	private:
		std::string mNumber;
		std::string mAirline;
		
	};
}