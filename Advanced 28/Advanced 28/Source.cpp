//Advanced28.cpp - displays the number of students
//earning a specific score
//Created/revised by <your name> on <current date>

#include <iostream>
#include <ctime>
#include <stdio.h>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>  
using namespace std;

int main()
{
	//declare array


	//declare variables
	int searchScore = 0;
	int total = 0;
	int testScoreGenerator;
	int scores[10] = { 0.0 };
	srand(time(NULL));
	
	for (int j = 0; j < size(scores); j++)
	{
		testScoreGenerator = (rand() % 100) + 1;
		scores[j] = testScoreGenerator;
		this_thread::sleep_for(std::chrono::seconds(1));
	}
	cout << "Enter a score from 0 through 100 (-1 to end): ";
	cin >> searchScore;

	
	while (searchScore >= 0)
	{
		total = 0;
		//search for score
		for (int x = 0; x < 1; x++) {

			
			cout << total << endl;

		}
		
		//end if    
		//end for

		//display total
		cout << "Number of students earning a score of "
			<< searchScore << ": "
			<< total << endl << endl;

		cout << "Enter a score from 0 through 100 (-1 to end): ";
		cin >> searchScore;
	}  //end while

	   //system("pause");
	return 0;
}	//end of main function