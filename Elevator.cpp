#include <iostream>
using namespace std;

class Elevator
{
public:
	int currentfloor;
	bool goingDown;
	bool goingUp;

	Elevator()
	{
		currentfloor = 1;
		goingDown = false;
		goingUp = true;
	}
	void goUp()
	{
		if (currentfloor == 1)
		{
			cout << "First Floor to Second Floor." << endl;
			currentfloor = currentfloor + 1;
		}
		else if (currentfloor == 2)
		{
			cout << "Second Floor to Third Floor" << endl;
			currentfloor = currentfloor + 1;
		}
		else if (currentfloor == 3) {
			cout << "Third Floor" << endl;
			goingUp = false;
			goingDown = true;
		}
		else {
			cout << "Error, floor does not exist." << endl;
		}
	}

	void goDown()
	{
		if (currentfloor == 1)
		{
			cout << "First Floor" << endl;
			goingUp = true;
			goingDown = false;
		}
		else if (currentfloor == 2)
		{
			cout << "Second Floor to First Floor" << endl;
			currentfloor = currentfloor - 1;
		}
		else if (currentfloor == 3)
		{
			cout << "Third Floor to Second Floor" << endl;
			currentfloor = currentfloor - 1;
		}
		else {
			cout << "Error, floor does not exist." << endl;

		}
	}

};

int main()
{
	Elevator myElev;
	int myElevator = myElev.currentfloor;
	cout << "Floor : " << myElevator << endl;

	myElev.goUp();
	myElev.goUp();
	myElev.goUp();
	myElev.goDown();
	myElev.goDown();
	myElev.goDown();

	system("pause");
}