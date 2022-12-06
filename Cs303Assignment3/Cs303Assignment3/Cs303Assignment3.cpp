#include <iostream>
#include <queue>
#include <string>
#include <map>
#include "Header.h"

using namespace std;

int main() {
	string state;
	string s; 
	queue<int> a;
	int b, c, d, e; 

	// declare map container
	map<string, string> stateDataMap;

	// define keys and values to them, where keys are states and values are the capital
	stateDataMap["Nebraska"] = "Lincoln";
	stateDataMap["New York"] = "Albany";
	stateDataMap["Ohio"] = "Columbus";
	stateDataMap["California"] = "Sacramento";
	stateDataMap["Massachusetts"] = "Boston";
	stateDataMap["Texas"] = "Austin";

	// output the data in stateDataMap
	print_map(stateDataMap);

	// changing the value of California to Los Angeles 
	stateDataMap["California"] = "Los Angeles";

	// output capital when state name is entered.
	cout << "Enter state name: ";
	getline(cin, state);
	print_capital(stateDataMap, state);

	//Ask user to pick values for queue
	cout << endl << " Pick 4 Values to be in the Queue" << endl; 
	cin >> b >> c >> d >> e;
	a.push(b);
	a.push(c);
	a.push(d);
	a.push(e);
	move_to_rear(a);


	cout << endl << endl << "please enter a strings which you want to check whether or not it is palindrome" << endl;
	cin >> s ;

	if (isPalindrome(s))
	{
		// return true, and it is palindrome
		cout << s << " is palindrome" << endl; 
	}
	else
	{
		// return false and it is not palindrome
		cout << s << " is not a palindrome" << endl; 
	}



	

}