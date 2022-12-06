#include <iostream>
#include <queue>
#include <string>
#include <map>
#include "Header.h"

using namespace std;

// Move front element to the rear of the queue
void move_to_rear(queue<int> a) {
	// Push the first value of the queue to the end of the list
	a.push(a.front()); 
	// Remove the first queue to the list
	a.pop(); 
	while (!a.empty()) {
		// print out the queue in order
		cout << a.front() << " "; 
		a.pop();
	}

}

// check if the word is palindrome
bool isPalindrome(string s)
{
	// If string is one character
	if (s.length() <= 1) 
	{
		// return true
		return true; 
	}
	//Check first letter is equal to last letter
	if (s[0] == s[s.length() - 1]) 
	{
		//keep on checking each letter from front and end if same
		return isPalindrome(s.substr(1, s.length() - 2)); 
	}
	// Anything else return false
	return false; 
}


// Output the data that is stored in the stateDataMap
void print_map(map<string, string> stateDataMap) {
	for (map<string, string>::iterator it = stateDataMap.begin(); it != stateDataMap.end(); it++) {
		cout << "State: " << it->first << ", Capital: " << it->second << endl;
	}
}

// output capitalName with stateName that is entered by user
void print_capital(map<string, string> stateDataMap, string state) {
	map<string, string>::iterator it = stateDataMap.find(state);
	if (it == stateDataMap.end()) {
		cout << state << " is not found" << endl;
	}
	else {
		cout << "Capital of " << state << " is " << it->second << endl;
	}
}