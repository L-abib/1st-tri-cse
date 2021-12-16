#include <iostream>

using namespace std;

int main()
{
	int md;
	int gu;
	int mt = 0;
	int gt = 0;
	cout << "Enter miles driven: ";
	cin >> md;
	while (md)
	{
		cout << "Enter gallons used: ";
		cin >> gu;
		mt += md;
		gt += gu;
		cout << "miles per galon this trip: " << md / gu << endl;

	}
	return 0;
}

