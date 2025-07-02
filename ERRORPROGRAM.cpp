//ErrorProgram - this program averages  a series 
// 				 of numbers, except that it contains
// 				at least one fatal bug

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
	cout <<"This program is designed to crash!"
		 << endl;
	int nSum;
	int nNumbs;
	
	// accumulate input numbers until the
	// user enters a negative number, then
	//return the average
	nNumbs = 0;
	while(true)
	{
		//enter another number
		int nValue;
		cout << "Enter another number:";
		cin >> nValue;
		cout << endl;
		
		// if the input number is negative...
		if (nValue < 0)
		{
			// ...then output the average
			cout << "Average is: "
				 << nSum/nNumbs 
				 << endl;
			break;
		}
		//not negative, add the value to
		// the accumulator
		nSum += nValue;
	}
	// wait until user is ready before terminating program
	//to allow the user to see the program results
	system("PAUSE");
	return 0;
}
