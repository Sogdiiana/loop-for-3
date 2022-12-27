#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	cout << "your sum is--";
	for (int i = 0; i <= 250; i = i + 2) 
	{
		cout << i << " + ";
		sum = i + sum;
	}
	cout  << "=" << sum;

	return 0;
}