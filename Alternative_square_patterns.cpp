/*IN this we have to print alternative square pattern
Like this
1 2 3 4 5
10 9 8 7 6
11 12 13 14 15
20 19 18 17 16

for the given value of n */
#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int num;
	int j, k;
	j = k = 1;
	cin >> num;
	for (int i = 1; i <= num; i++) // We start a loop from 1 to given value of number
	{
		if (i % 2 != 0) // Then we check if it is odd then we print pattern
		{
			if (i == 1) // For the first row  1 2 3 4 5
			{
				for (j = k; j < k + 5; j++)
					cout << j << " ";
				cout << endl;
			}
			else
			{
				for (j = k + 5 + 1; j < k + 11; j++) // If value of i is odd but other than 1 then we set j t0 k+5+1 till k+11 to print the values
				{									 // Like 11 12 13 14 15
					cout << j << " ";
				}
				cout << endl;
			}
		}
		else // If the value of i is even
		{

			for (k = j + 5 - 1; k >= j; k--) // then we start from j+5-1 till k>=j to print 10 9 8 7 6 
				cout << k << " ";
			cout << endl;
		}
	}
	return 0;
}
