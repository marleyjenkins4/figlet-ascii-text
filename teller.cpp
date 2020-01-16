// **********************************************
//      Marley Jenkins
//      CSCI 207
//      Lab: Fortune Teller
//
//
//   gives fortune based on lucky number input
// *******************************************

#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main ()
{
int userinput;
int userinput2;
int total;
int totalresult;
	cout << "Enter a lucky number!: " << endl;
	cin >> userinput;
	cout << "Enter another lucky number!: " << endl;
	cin >> userinput2;
	while (userinput != userinput2)
	{ // a loop to continue until user picks a lucky number
	total= userinput * userinput2;
	totalresult=  total % 10;
	if (totalresult < 0){
		cout << "try to be less negative" << endl;
	        cout << "Enter a lucky number!: " << endl;

        	cin >> userinput;
        	cout << "Enter another lucky number!: " << endl;
		cin >> userinput2;
		}
	if (totalresult<= 4 && totalresult >= 0){
		cout << "Think Bigger" << endl;
		 cout << "Enter a lucky number!: " << endl;
                cin >> userinput;
                cout << "Enter another lucky number!: " << endl;
                cin >> userinput2;
		}
	 if (totalresult < 9 && totalresult >= 5){
		 cout << "Today you should embrace technology" << endl;
                 cout << "Enter a lucky number!: " << endl;
                cin >> userinput;
                cout << "Enter another lucky number!: " << endl;
                cin >> userinput2;
                }
	if (totalresult >=9){
                  cout << "This is your lucky day!" << endl;
                 break; // loop breaks once lucky number is chosen
                }
	 if (userinput == userinput2){
                  cout << "not two of the same numbers silly! try again!" << en$
                 cout << "Enter a lucky number!: " << endl;
                cin >> userinput;
                cout << "Enter another lucky number!: " << endl;
                cin >> userinput2;
                }
	}
return 0;
}
