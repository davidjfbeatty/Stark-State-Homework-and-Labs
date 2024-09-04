//David Beatty, Lab 01. This code will take five user inputs and calculate the average of all of the inputs and display this back to the user.  
// It will also display two forms of basic computer math systems. 

#include  <iostream> 
using  namespace  std;
int  main() {
	double grade1, grade2, grade3, grade4, grade5;
	double average; 
	//receive user input
	cout << "My name is David Beatty." << '\n';
	cout << "Enter your grades: "  << '\n';	
	cin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
	//Calculate the average
	average = (grade1 + grade2 + grade3 + grade4 + grade5) / 5;
	//Display calculated user input
	cout << "The average of your grades is: " << average << '\n';
	//Now we will take two numbers, 8 and 5, and perform whole number and remainder operations.
	int number1, number2;
	int x, y; 
	cout << "Please enter two numbers: " << '\n';
		cin >> number1 >> number2;
		//System operations
		x = (number1 / number2);
		y = (number1 % number2);
		cout << "The whole number part is: " << x << '\n';
		cout << "The remainder part is: " << y;
	return  0;
}