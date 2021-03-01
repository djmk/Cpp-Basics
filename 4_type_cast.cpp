#include <iostream>
using namespace std;

int main() {
	int a;
	char c;
	a = 1990;
	c = a;
	cout << c<< endl;

	c = '0';
	a = c;
	cout << a << endl;

	float f = 1.2;
	a = f;
	cout << a << endl;

	int i = 10;
	char j = 'a';
	
	int o = i + j;
	char d = i + j;
	cout << o << endl;
	cout << d << endl; 
}
