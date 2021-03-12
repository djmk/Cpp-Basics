#include <iostream>
using namespace std;

void increment(int a) {
	a = a + 1;
	//return a;
}

int main() {
	int a = 10;
	//n = increment(n);
	increment(a);
	cout << a << endl;
}
