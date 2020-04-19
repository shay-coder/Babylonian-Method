	#include <iostream>
	using namespace std;
	#include <iomanip>
	
	int main ()
	{
		float n;
		float save;
		double r;
		float guess = 2.0;
		cout << "Enter a number";
		cin >> n;
		
		do
		{
			save = guess;
			r = n/ guess;
			guess = ( r + guess) /2;
		} while ( save - guess != 0);
		
		
		cout << "Square root of number is  " << fixed << setprecision(2) << guess;
		
	}
