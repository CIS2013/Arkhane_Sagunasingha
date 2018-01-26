#include <iostream>

using namespace std;

int main()
{
	int bottlesOfBeer;
	int beerOnTheWall = 98;

	for(bottlesOfBeer = 99; bottlesOfBeer >=1; bottlesOfBeer--,beerOnTheWall--)
	{
		

		cout << bottlesOfBeer <<" bottles of beer on the wall," << bottlesOfBeer << " bottles of beer.\n";
		cout << "Take one down and pass it around," << beerOnTheWall <<" bottles of beer on the wall.\n";
		
		
	}

	cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
	cout << "Go to the store and buy some more, 99 bottles of beer on the wall.\n";



	
	return 0;
	
}