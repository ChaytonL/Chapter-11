//Intermediate24.cpp
//Stores monthly rainfall amounts in an array
//Displays the monthly rainfall amounts, the
//total annual rainfall amount, the average rainfall
//amount, the highest rainfall amount, or the lowest
//rainfall amount
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

//function prototypes
void displayMonthly(double rain[], int numElements);
void displayTotal(double rainAmt[], int elements);
int main()
{
	//declare array and variable
	double rainfall[12] = { 0.0 };
	int choice = 0;
	
	//get rainfall amounts
	for (int x = 0; x < 12; x += 1)
	{
		cout << "Enter rainfall for month "
			<< x + 1 << ": ";
		cin >> rainfall[x];
	}  //end for
	double total = 0.0;
	double avg = 0.0;
	for (int x = 0; x < size(rainfall); x += 1)
		total = total + rainfall[x];
	//end for
	avg = total / 12;
	cout << "Average rainfall: " << avg << endl;
	double highest = rainfall[0];
	for (int x = 1; x <size(rainfall); x += 1)
		if (rainfall[x] > highest)
			highest = rainfall[x];
	double lowest = rainfall[0];
	for (int x = 1; x < size(rainfall); x += 1)
		if (rainfall[x] < lowest)
			lowest = rainfall[x];
	//end if
	//end for
	cout << "Lowest rainfall: " << lowest << endl;
	//end if
	//end for
	cout << "Highest rainfall: " << highest << endl;
	do
	{

		//display menu and get menu choice
		cout << endl;
		cout << "1  Display monthly amounts" << endl;
		cout << "2  Display total amount" << endl;
		cout << "3  Display average amount" << endl;
		cout << "4  Display highest amount" << endl;
		cout << "5  Display lowest amount" << endl;
		cout << "6  End program" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		//call appropriate function or end program
		if (choice == 1)
			displayMonthly(rainfall, 12);
		else if (choice == 2)
			cout << total << endl;
		else if (choice == 3)
			cout << avg << endl;
		else if (choice == 4)
			cout << highest << endl;
		else if (choice == 5)
			cout << lowest << endl;
		//end if
	} while (choice >= 1 && choice <= 5);

	//system("pause");
	return 0;
}   //end of main function

	//*****function definitions*****
void displayMonthly(double rain[], int numElements)
{
	cout << "Monthly rainfall amounts:" << endl;
	for (int x = 0; x < numElements; x += 1)
		cout << rain[x] << endl;
	//end for
}  //end of displayMonthly function

void displayTotal(double rainAmt[], int elements)
{
	double total = 0.0;
	for (int x = 0; x < elements; x += 1)
		total = total + rainAmt[x];
	//end for
	cout << "Total rainfall: " << total << endl;
}  //end of displayTotal function
