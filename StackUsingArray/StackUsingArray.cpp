#include <iostream>
#include <string>

using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;
public:
	//constructor
	StackArray() {
		top = -1;
	}

	void push() {
		int element;
		cout << "enter the element : ";
		cin >> element;
		if (top == 4) { //step 1
			cout << "Number of data excedeed the list." << endl;
			return;
		}