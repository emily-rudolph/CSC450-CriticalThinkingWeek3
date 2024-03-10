#include <iostream>
using namespace std;

int main() {

	string s1;
	string s2;
	string c;

	for (int i = 0; i < 3; i++) {

		cout << "Enter The First String" << endl;
		getline(cin, s1);

		cout << "Enter The Second String" << endl;
		getline(cin, s2);

		c = s1 + s2;

		cout << c << endl;

	}

	return 0;
}
