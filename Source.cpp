/* This program allows the user to add hours,
*minutes, and\or seconds to both a 
*12 and 24 hour clock 
*Author: Erin Gagnon
*Date: 3/31/2024
*/
#include <ctime>
#include <iostream>
#include <string>
#pragma warning(disable : 4996) //I got this from wikipedia to help bypass the time issue
using namespace std;


//global variables
int hour;
int minutes;
int seconds;

void GetTime() {
	//gets time from motherboard
	time_t ttime = time(0);
	tm* local_time = localtime(&ttime);

	//assigns time from local variable
	hour = local_time->tm_hour;
	minutes = local_time->tm_min;
	seconds = local_time->tm_sec;
}

//this function adds an hour without exceeding 24 hrs
void oneHour() {
	hour ++;
	if (hour > 23){
		hour = 0;
	}
}

//this function adds a minute without exceeding 59 min
void oneMinute() {
	minutes++;
	if (minutes > 59) {
		minutes = 0;
	}
}

//this function adds a second without exceeding 59 secs
void oneSecond() {
	seconds++;
	if (seconds > 59) {
		seconds = 0;
	}
}


//this function prints the 12 hr clock 
void printClock() {
	if (hour > 12) {
		hour = hour - 12;
	}
		 std::cout << "12-HOUR CLOCK" << endl << hour << ":" << minutes << ":" << seconds << endl;
}


//this function prints the 24 hour clock
void printMilitaryClock() {
	if (hour > 23) {
		hour = 0;
	}
	std::cout << "24-HOUR CLOCK" << endl << hour << ":" << minutes << ":" << seconds << endl;
}

//this is the menu loop
int displayMenu() {
	int menuChoice;

	while (true) {
		
		std::cout << "********************" << std::endl;
		std::cout << "*	Enter Your Choice *" << std::endl;
		std::cout << "*	1-Add One Hour	  *" << std::endl;
		std::cout << "*	2-Add One Minute  *" << std::endl;
		std::cout << "*	3-Add One Second  *" << std::endl;
		std::cout << "*	4-Exit Program	  *" << std::endl;
		std::cout << "********************" << std::endl;

		std::cin >> menuChoice;

		printClock();
		printMilitaryClock();


		//Menu choice selection
		switch (menuChoice) {
		case 1:
			oneHour();
			break;
		case 2:
			oneMinute();
			break;
		case 3:
			oneSecond();
			break;
		case 4:
			return 0;
		}
	}
}

//main method to get the time, display menu, and print the clocks
int main() {
	GetTime();
	printClock();
	printMilitaryClock();
	displayMenu();

}
