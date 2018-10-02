#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int total = 0;
	double average;
	double highScore = 0;
	double lowScore = 100;
	double testScore;
	string result;
	double scoreArray[10] = { 0.0 };

	for (int i = 0; i < size(scoreArray); i++) {
	cout << " Enter a test score (1 - 100) >> " << endl;
	cin >> scoreArray[i];
	total = total + scoreArray[i];
	if (scoreArray[i] <= lowScore) {
		lowScore = scoreArray[i];
	}
	else if (scoreArray[i] >= highScore) {
		highScore = scoreArray[i];
	}
	else if (scoreArray[i] > 100 || scoreArray[i] < 0) {
		result = " Incorrect, try again ";
		system("pause");
	}
		
	}
	average = total / 10;
	sort(scoreArray, scoreArray + size(scoreArray));
	cout << " High score is " << highScore << endl;
	cout << " Low score is " << lowScore << endl;
	cout << " The average is " << average << endl;
	//cout << scoreArray[i];
	system("pause");
	return 0;
}