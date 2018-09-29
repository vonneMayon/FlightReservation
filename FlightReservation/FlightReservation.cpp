// FlightReservation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Flight.h"

using namespace FlightReservation;

int main()
{
	Flight flight;
	flight.setNumber("UA123");
	flight.setAirline("Alaska");
	flight.setOrigin("Houston");
	flight.setDestination("Seattle");
	flight.setArrivalTime("12:00 p.m.");
	flight.setDepartTime("6:45 p.m.");
	flight.setDate("01/01/2018");

	Flight flight2("UA423", "United", "Chicago", "New York City", "3:45 a.m.", "9:30 a.m.", "02/05/2018");
	
	flight.display();
	flight2.display();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
