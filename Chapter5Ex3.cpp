// Name: Logen N. Wolfe
// Date: 10/28/26
// Program: Chapter 5 Exercise 3
// Description: This program will ask the user for the speed and time of a vehicle, then calculate and display the distance traveled at the end of each hour.

#include <iostream>
using namespace std;

int main()
{
	int distance;
	int speed;
	int time;
	int hours = 1;



	cout << "Welcome to Logen's Distance Calculator!" << endl;
	cout << "First, how fast are you going? (In MPH please!" << endl;
	cin >> speed;
	cout << "Alrighty, now how long are we gonna be going for?" << endl;
	cin >> time;
	cout << "Alright, let's see that timetable!" << endl;

	cout << "Hour - Distance Traveled" << endl;
	while (hours <= time)
	{
		distance = speed * hours;
		cout << "Hour " << hours << ": " << distance << " miles" << endl;
		hours += 1;
	}
	


}

