//Advanced28.cpp - displays the number of students
//earning a specific score
//Created/revised by <your name> on <current date>

#include <iostream>
#include <time.h>
#include <string>
#include <algorithm>
 
using namespace std;

int *fillArray(int arr[], int elements)
{
	srand(time(NULL));

	for (int i = 0; i < elements; i++)
		arr[i] = rand() % 100 + 1;

	return arr;
}

int main()
{
	//declare array


	//declare variables
	int searchScore = 0;
	int total = 0;
	int scores[10] = { 0.0 };
	int scoreSize = size(scores);

	int *scoresArray = fillArray(scores, scoreSize);

	while (searchScore >= 0) {


		total = 0;

			for (int x = 0; x < size(scores); x += 1) {
				if (scores[x] == searchScore)
					total += 1;

			}

		//end if    
		//end for

		//display total
		cout << "Number of students earning a score of "
			<< searchScore << ": "
			<< total << endl << endl;

		cout << "Enter a score from 0 through 100 (-1 to end): ";
		cin >> searchScore;
	}
	 //end while

	system("pause");
	return 0;
}	//end of main function