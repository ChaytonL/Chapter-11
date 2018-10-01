#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//double convert(double average)
//{
//	double t;
//	t = 
//
//}


int main() {

	double average;
	double highScore = 0;
	double lowScore = 100;
	double testScore;
	string result;
	double scoreArray[10] = { 0.0 };

	for (int i = 0; i < size(scoreArray); i++) {
	cout << " Enter a test score or 999 to quit. >> " << endl;
	cin >> scoreArray[i];
		if (scoreArray[i] <= lowScore) {
			lowScore = scoreArray[i];
		}
		else if (scoreArray[i] >= highScore) {
			highScore = scoreArray[i];
		}
		else if (scoreArray[i] > 100 || scoreArray[i] < 0) {
			result = " Incorrect, try again ";
		}
	}
	sort(scoreArray, scoreArray + size(scoreArray));
	cout << " High score is " << highScore << endl;
	cout << " Low score is " << lowScore << endl;
	//cout << scoreArray[i];
	system("pause");
	return 0;
}