/*
Suitcase!
add items 
list items 
remove items
*/

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

void addItem(vector<string>& suitcase);

int main() {

	vector<string> suitcase;
	char choice = 'Y';


	do  {

		cout << "What would you like to do? ";
		cout << "[A]dd\n[L]ist\n[[R]emove\n[Q]uit";
		cout << ">>";
		cin >> choice;

		choice = toupper(choice); // deals with lowercase 

		switch (choice) {
		case 'A': 
			addItem(suitcase);
			break;
		case 'L':
			
		case 'R':
		
		case 'Q':
			cout << "Thanks" << endl;
		default: cout << "I don't know how to do that.";
		
		}

	} while (choice != 'Q');
	
	return 0;
}

void addItem(vector<string>& suitcase){
	string newItem;
	cout << "What would you like to pack? ";
	cin >> newItem;
	suitcase.push_back(newItem);

}
