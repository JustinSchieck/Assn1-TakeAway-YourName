#include <iostream>
using namespace std;


//Justin Schieck
//200328630

int main()
{
	double year;		//year entered from console
	double amount;		//amount of money earned
	int menuChoice;
	//asks for year

	cout << "Please chose one of the following" << endl;
	cout << "1 for Running Program" << endl;
	cout << "2 to exit Program" << endl;
	cin >> menuChoice;

	switch(menuChoice) {
	case(1):{
			cout << "Enter a year after 2005" << endl;
			cin >> year;


			// calculates amount 
			amount = (33.2 + 16.8) * (year); 

			//displays amount/ error checking
			if (year <= 2005) {
				cout << "If you enter a year before 2005 the program will stop.\n";
			}
			else {
				cout << "The prediction of fast food charges us customers will make $" << amount << endl;
			}
			break;
		}
	case(2): {
		cout << "Thank you for running this Program..." << endl;
		system("pause");
		return(0);
		}
	}
	system("pause");
	return(0);
}