#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	int choice1;
	char choice2;
	bool repeat = true;
	const int DISC = 30;
	string firstname, lastname;
	int quantity, angle1, angle2, angle3, SCND_TO_HOUR = 3600, SCND_TO_MINUTE = 60, hours, minutes, seconds, years, yearofbirth;
	double price = 29.90, totalprice, interest, monthly_pay, loan, total_loan, kinetic_energy, mass, velocity;
	
	while (repeat)
	{
		cout << "Choice operations: \t\n\n";
		cout << "Operation 1 : Calculate Total Price\n";
		cout << "Operation 2 : Calculate the Third Angle of a Triangle\n";
		cout << "Operation 3 : Convert Seconds to Hours, Minutes and Seconds\n";
		cout << "Operation 4 : Calculate Total Monthly Loan\n";
		cout << "Operation 5 : Display the Name\n";
		cout << "Operation 6 : Calculate the Total Kinectic Energy\n\n";
		cin >> choice1;

		switch (choice1)
		{
		case 1:

			cout << "Enter the quantity:\t";
			cin >> quantity;

			totalprice = (price * quantity) * (100 - DISC) / 100.00;

			cout << "Total : \t" << totalprice << endl;
			break;

		case 2:

			cout << "Enter the value of the first angle: \t";
			cin >> angle1;

			cout << "Enter the value of the second angle: \t";
			cin >> angle2;

			angle3 = 180 - (angle1 + angle2);

			cout << "Value of the 3rd angle is: \t" << angle3 << endl;
			break;

		case 3:

			cout << "Enter the amount of times (in second) : \t\n";
			cin >> seconds;

			hours = seconds / SCND_TO_HOUR;
			minutes = (seconds - (SCND_TO_HOUR * hours)) / SCND_TO_MINUTE;
			seconds = (seconds - (SCND_TO_HOUR * hours) - (minutes * SCND_TO_MINUTE));

			cout << "Total time : \t" << hours << "Hours\t " << minutes << "Minutes\t"
				<< seconds << "Seconds" << endl;
			break;

		case 4:

			cout << "Enter the amount of loan :\t\n";
			cin >> loan;

			cout << "How many year left ?\t\n";
			cin >> years;

			cout << "Enter the amount of interest :\t\n";
			cin >> interest;

			total_loan = (years * loan) + (years * loan * (interest / 100.00));
			monthly_pay = total_loan / (years * 12);

			cout << "Total loan amount that need to be paid (RM); \t" << total_loan << endl;
			cout << "Monthly payment for this loan is (RM): \t" << monthly_pay << endl;
			break;

		case 5:

			cout << "Firstname : \t";
			cin >> firstname;

			cout << "Lastname : \t";
			cin >> lastname;

			cout << "Year of Birth : \t";
			cin >> yearofbirth;

			cout << firstname << "\t" << lastname << "\t" << yearofbirth << endl;
			break;

		case 6:

			cout << "Input the object's mass (kg): \t";
			cin >> mass;

			cout << "Input object's velocity (m/s): \t";
			cin >> velocity;

			kinetic_energy = (mass * pow(velocity, 2) / 2);

			cout << "Kinetic Energy : \t" << kinetic_energy << endl;
			break;

		default:

			cout << "Invalid Input, Please retry !\n";
		}

		cout << "Do you want to choose solve another question ? (Y/N) \n";
		cin >> choice2;

		repeat = choice2 == 'Y' || 'y';

	}

	cout << "Thank you !\n";
	
}