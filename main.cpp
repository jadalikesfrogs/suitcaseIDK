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
void listItems(vector<string>& suitcase);
void removeItem(vector<string>& suitcase);
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
			listItems(suitcase);
			break;
		case 'R':
			removeItem(suitcase);
			break;
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

void listItems(vector<string>& suitcase){
	//display all items in the suitcase

	cout << "You have packed: " << endl;

	if (suitcase.size() == 0) { 
		cout << "Nothing!"; 
	}

	else {
		for (size_t index = 0; index < suitcase.size(); index++) { // lists the items in the suitcase
			cout << suitcase.at(index);
		
		} // for
	} // else
}

void removeItem(vector<string>& suitcase){
	string theItem;
	size_t theItemPosition;

	cout << "What do you want to remove? " << endl;
	// maybe show the list 
	cin >> theItem;

	for (auto items = suitcase.begin(); items != suitcase.end(); items++) { // goes through each item from the beginning// auto is an interator. fancy pointer used for counting.
		if (*items == theItem) { // if the item im looking at is the one im pointing at, erase it//* makes it a pointer to compare it to the string
			suitcase.erase(items); 
			break;
		} // if
	}// for 

}
