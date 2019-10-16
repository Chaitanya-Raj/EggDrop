#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int getdrop(int egg, int floor)
{
	if (floor == 0 || floor == 1)
	{
		return floor;
	}
	else if (egg == 1)
	{
		return floor;
	}
	int mindrops = INT_MAX, tempresult;
	for (int i = 1; i <= floor; i++)
	{
		tempresult = std::max(getdrop(egg, floor - i), getdrop(egg - i, i - 1));
		mindrops = std::min(tempresult, mindrops);
	}
	return mindrops + 1;
}

int main()
{
	int n, k;
	cout << "Enter the number of eggs : ";
	cin >> n;
	cout << "Enter the number of floors : ";
	cin >> k;
	int a = getdrop(n, k);
	cout << "Number of drops are " << a << endl;
	return 0;
}
