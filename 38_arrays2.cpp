#include <iostream>
#include <climits>
using namespace std;

void printArray(int input[], int n) {
	for (int i = 0; i < n; i++) {
		cout << input[i] << " ";
	}
	cout << endl;
}

void increment(int a, int b[], int n) {
	a++;
	b[0]++;
}

int main() {

	int a = 10;
	int b[20] = {1, 2, 3};
	increment(a, b, 10);

	cout << "a : " << a << endl;
	cout << "b[0] : " << b[0] << endl;

	int input[100] = {1, 2, 3};

	//printArray(input, 100);
}
