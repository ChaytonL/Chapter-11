#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int Array[12] = { 0.0 };
	int total = 0;
	

	for (int i = 0; i < size(Array); i++) {
		cout << " Enter a number >> ";
		cin >> Array[i];
		total = total + Array[i];
	}
	sort(Array, Array + size(Array));

	for (int i = 0; i < size(Array); i++) {
		cout << Array[i] << endl;
	}
	for (int k = size(Array)-1; k >= 0; k--) {
		cout << Array[k] << endl;
	}
	
	cout << " The total is " << total << endl;


	system("pause");
	return 0; 
}