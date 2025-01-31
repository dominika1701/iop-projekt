#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n < 0) {
		cout << "Podano zla liczbe" << endl;
		return 1;
	}
	cout << n << endl;
	return 0;
}
