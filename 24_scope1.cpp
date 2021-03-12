#include <iostream>
using namespace std;

int main() {
	int i = 1;
	while (i < 10) {
		int j = 1;
		while (j < i) {
			int k = 10;
			cout << j;
			j++;
		}
		//k can not be accessed here
		cout << k << endl;
		i++;
	}
}
