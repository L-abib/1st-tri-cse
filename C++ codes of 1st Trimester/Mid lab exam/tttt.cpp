#include <iostream>

using namespace std;

int main()
{
	int ms, as, ss;
	cout << "enter manager's salary:" <<endl;
	cin >> ms;
	ms = ms * 12;
	cout << "yearly salary:" << ms << endl;

	cout << "enter admin officer's salary:" <<endl;
	cin >> as;
	as = as * 12;
	cout << "yearly salary:" << as <<endl;

	cout << "enter salesman's salary:" <<endl;
	cin >> ss;
	ss = ss * 12;
	cout << "yearly salary:" << ss << endl;

	return 0;
}
