#include <iostream>
using namespace std;
int main()
{
	const int bubly = 10;
	int x=0,CadbaryDairyMilk[bubly];
	cout << "Enter ten numbers for sorting " << endl;
	for (int num = 0; num < 10; num++)
	{
		cin >> CadbaryDairyMilk[num];
		
	}
	cout << endl;
	cout << "Unsorted list = ";
	{
		for (int i = 0; i < 10; i++)
			cout << CadbaryDairyMilk[i]<<" ";
	}
	cout << endl;
		int temp;
		for (int i = 0; i < 10; i++)
		{	for (int j =i+ 1; j < 10; j++)
			{
				if (CadbaryDairyMilk[i] > CadbaryDairyMilk[j])
				{
					temp = CadbaryDairyMilk[i];
					CadbaryDairyMilk[i] = CadbaryDairyMilk[j];
					CadbaryDairyMilk[j] = temp;
				}
			}
	}
		cout << "Sorted list = ";
		for (int output = 0; output < 10; output++)
		{
			cout << CadbaryDairyMilk[output]<<" ";
		}
	
	system("pause > 0");
}
