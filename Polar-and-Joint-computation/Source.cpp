#include <iostream>
#include <math.h>
#include <iomanip>
#define pi 3.1415926535897932384
using namespace std;

void join() {

	double N1, E1, N2, E2, D, WCB, £GN, £GE, DETLA, f;

	double r1, r2;
	cout << " Please enter N station point: " << '\n';
	cout << "Input: ";
	cin >> N1;
	cout << endl;
	cout << " Please enter E Station point: " << endl;
	cout << "Input: ";
	cin >> E1;
	cout << endl;
	cout << " Please enter N2 New point: " << endl;
	cout << "Input: ";
	cin >> N2;
	cout << endl;
	cout << " PLease enter E2 New point: " << endl;
	cout << "Input: ";
	cin >> E2;
	cout << endl;
	£GN = N2 - N1;
	£GE = E2 - E1;
	D = sqrt(pow(£GN, 2) + pow(£GE, 2));
	DETLA = £GE / £GN;
	WCB = atan(£GE / £GN) * 180 / pi;

	cout << "-------------------------------------------------------------------" << endl;

	if (£GN > 0 && £GE > 0) {

		int d;
		d = WCB;



		double r1;
		r1 = WCB - d;
		int m;
		m = r1 * 60.0;
		r2 = r1 - m / 60.0;
		double s;
		s = r2 * 3600.0;
		D = sqrt(pow(£GN, 2) + pow(£GE, 2));
		d = WCB;
		if (d < 0) {
			d = D + 90;
		}
		cout << "This is quadrant 1" << endl;
		cout << endl << setw(49) << " £GN =  " << £GN << "       " << " £GE =" << £GE << endl;
		cout << endl;
		cout << "The Whole circle bearing (WCB) : " << "                           " << d << "¢X" << m << "'" << s << '"';
		cout << endl;
		cout << "The Whole circle bearing (WCB) : " << "                           " <<WCB;
		cout << endl;
		cout << setprecision(16) << "The distance is : " << "                                " << D << "m";
		cout << endl;

	}
	else if (£GN < 0 && £GE>0) {

		int d;


		if (WCB < 0) {
			f = WCB + 180;
			d = WCB + 180;
		}
		else if (WCB > 0) {
			f = WCB + 90;
			d = WCB + 90;
		}




		double r1;
		r1 = f - d;
		int m;
		m = r1 * 60.0;
		r2 = r1 - m / 60.0;
		double s;
		s = r2 * 3600.0;
		D = sqrt(pow(£GN, 2) + pow(£GE, 2));

		cout << "This is quadrant 2" << endl;
		cout << endl << setw(49) << " £GN =  " << £GN << "       " << " £GE =" << £GE << endl;
		cout << endl;
		cout << "The Whole circle bearing (WCB) : " << "                           " << d << "¢X" << m << "'" << s << '"';
		cout << endl;
		cout << "The Whole circle bearing (WCB) : " << "                           " << WCB;
		cout << endl;
		cout << setprecision(16) << "The distance is : " << "                                " << D << "m";
		cout << endl;

	}
	else if (£GN < 0 && £GE < 0) {
		int d, f;
		d = WCB;



		double r1;
		r1 = WCB - d;

		int m;
		m = r1 * 60.0;
		r2 = r1 - m / 60.0;
		double s;
		s = r2 * 3600.0;
		D = sqrt(pow(£GN, 2) + pow(£GE, 2));
		if (d < 0) {
			d = d + 270;

		}
		else if (d > 0) {
			d = d + 180;

		}
		cout << "This is quadrant 3" << endl;
		cout << endl << setw(49) << " £GN =  " << £GN << "       " << " £GE =" << £GE << endl;
		cout << endl;
		cout << "The Whole circle bearing (WCB) : " << "                           " << d << "¢X" << m << "'" << s << '"';
		cout << endl;
		cout << "The Whole circle bearing (WCB) : " << "                           " << WCB;
		cout << endl;
		cout << setprecision(16) << "The distance is : " << "                                " << D << "m";
		cout << endl;
	}
	else if (£GN > 0 && £GE < 0) {

		int d;
		d = WCB;
		if (WCB < 0) {
			f = WCB + 360;
			d = WCB + 360;


		}
		else if (WCB > 0) {
			f = WCB + 270;
			d = WCB + 270;

		}

		double r1;
		r1 = f - d;
		int m;
		m = r1 * 60.0;
		r2 = r1 - m / 60.0;
		double s;
		s = r2 * 3600.0;
		D = sqrt(pow(£GN, 2) + pow(£GE, 2));

		cout << "This is quadrant 4" << endl;
		cout << endl << setw(49) << setprecision(20) << " £GN =  " << £GN << "       " << " £GE =" << £GE << endl;
		cout << endl;
		cout << "The Whole circle bearing (WCB) : " << "                           " << d << "¢X" << m << "'" << s << '"';
		cout << endl;
		cout << "The Whole circle bearing (WCB) : " << "                           " << WCB;
		cout << endl;
		cout << "The distance is : " << "                                " << setprecision(20) << D << "m";
		cout << endl;
	}

	if (£GN > 0 && £GE == 0 || £GN == 0 && £GE == 0) {

		cout << endl << setw(49) << setprecision(20) << " £GN =  " << £GN << "       " << " £GE =" << £GE << endl;
		cout << endl;
		cout << "The Whole circle bearing (WCB) : " << "                           " << "0" << "¢X" << "00" << "'" << "00" << '"';
		cout << endl;
		cout << "The distance is : " << "                                " << setprecision(20) << D << "m";
		cout << endl;
	}
	else if (£GN == 0 && £GE > 0) {
		cout << endl << setw(49) << setprecision(20) << " £GN =  " << £GN << "       " << " £GE =" << £GE << endl;
		cout << endl;
		cout << "The Whole circle bearing (WCB) : " << "                           " << "90" << "¢X" << "00" << "'" << "00" << '"';
		cout << endl;
		cout << "The distance is : " << "                                " << setprecision(20) << D << "m";
		cout << endl;
	}
	else if (£GN < 0 && £GE == 0) {
		cout << endl << setw(49) << setprecision(20) << " £GN =  " << £GN << "       " << setprecision(20) << " £GE =" << £GE << endl;
		cout << endl;
		cout << "The Whole circle bearing (WCB) : " << "                           " << "180" << "¢X" << "00" << "'" << "00" << '"';
		cout << endl;
		cout << "The distance is : " << "                                " << setprecision(20) << D << "m";
		cout << endl;
	}
	else if (£GN == 0 && £GE < 0) {
		cout << endl << setw(49) << setprecision(20) << " £GN =  " << £GN << "       " << setprecision(20) << " £GE =" << £GE << endl;
		cout << endl;
		cout << "The Whole circle bearing (WCB) : " << "                           " << "270" << "¢X" << "00" << "'" << "00" << '"';
		cout << endl;
		cout << "The distance is : " << "                                                  " << setprecision(20) << D << "m";
		cout << endl;
	}
}

void polar() {
	double N, E, SD, WCB, £GN, £GE, PN, PE, De;
	cout << "Please enter station point N" << endl;
	cout << "Input: ";
	cin >> N;
	cout << endl;
	cout << "Please enter station point E" << endl;
	cout << "Input: ";
	cin >> E;
	cout << endl;
	cout << " Please enter Slope Distance (SD)" << endl;
	cout << "Input: ";
	cin >> SD;
	cout << endl;
	cout << "Please enter Whole circle bearing of station point" << endl;
	cout << "Input: ";
	cin >> WCB;
	cout << endl;

	De = (WCB * pi) / 180;

	£GN = SD * cos(De);

	£GE = SD * sin(De);

	PN = N + £GN;
	PE = E + £GE;

	cout << "-------------------------------------------------------------------" << endl;
	cout << "DE" << De;

	cout << endl << setw(49) << " £GN =  " << setprecision(20) << £GN << "       " << " £GE =" << £GE << endl;
	cout << endl;
	cout << setw(49) << "The coordinates of new point are:  " << " N =  " << setprecision(20) << PN << "       " << " E =  " << PE << endl;
}


int main() {

	int x;
	char Y;

	cout << " Please select your cumptation method " << endl;
	cout << " 1. Join computation " << endl << " 2. Polar computation" << endl << " 3. exit" << endl;
	cout << endl << " Method? ";
	cout << endl << "Input: ";

	cin >> x;
	cout << endl;
	if (x != 1 && x != 2 && x != 3) {
		cout << "Input Error" << endl;
		cout << "Input: ";
		do
		{

			cin >> x;
			if (x == 1 || x == 2 || x == 3) {

				break;
			}
		} while (x != 1 || x != 2 || x != 3);
	}

	cout << endl;


	system("cls");

	switch (x)
	{
	case(1):

		cout << " 1. Join computation: " << endl;
		join();

		cout << " Again? (Y/N)" << endl;
		cout << "Input: ";
		cin >> Y;
		cout << endl;
		if (Y == 'N' || Y == 'n') {
			cout << "Bye";
			cout << endl;
			break;

		}
		else if (Y == 'Y' || Y == 'y') {
			cout << "-------------------------------------------------------------------" << endl;
			cout << endl;
			cout << " 1. Join computation: " << endl;

			while (Y) {
				cout << endl;
				join();
				cout << " Again? (Y/N)" << endl;
				cout << "Input: ";
				cin >> Y;
				cout << endl;
				if (Y == 'N' || Y == 'n') {
					cout << "Bye";
					cout << endl;
					break;

				}
			}
		}
		if (Y != 'Y' || Y != 'N' || Y != 'y' || Y != 'n') {
			while (1) {
				cout << " Input Error, Please enter again: " << endl;
				cout << "Input: ";
				cin >> Y;
				cout << endl;
				if (Y == 'N' || Y == 'n') {
					cout << "Bye";
					cout << endl;
					break;

				}
				else if (Y == 'Y' || Y == 'y') {
					while (Y) {
						cout << "-------------------------------------------------------------------" << endl;
						cout << " 1. Join computation: " << endl;

						join();
						cout << " Again? (Y/N)" << endl;
						cout << "Input: ";
						cin >> Y;
						cout << endl;
						if (Y == 'N' || Y == 'n') {
							cout << "Bye";
							break;
						}
					}
				}
			}
		}
		break;
	case(2):
		cout << " 2. Polar computation: " << endl;
		polar();

		cout << " Again? (Y/N)" << endl;
		cout << "Input: ";
		cin >> Y;
		cout << endl;
		if (Y == 'N' || Y == 'n') {
			cout << "Bye";
			cout << endl;
			break;

		}
		else if (Y == 'Y' || Y == 'y') {
			cout << "-------------------------------------------------------------------" << endl;
			cout << endl;
			cout << " 2. Polar computation: " << endl;
			while (Y) {
				cout << endl;
				polar();
				cout << " Again? (Y/N)" << endl;
				cout << "Input: ";
				cin >> Y;
				cout << endl;
				if (Y == 'N' || Y == 'n') {
					cout << "Bye";
					cout << endl;
					break;

				}
			}
		}
		if (Y != 'Y' || Y != 'N' || Y != 'y' || Y != 'n') {
			while (1) {
				cout << " Input Error, Please enter again: " << endl;
				cout << "Input: ";
				cin >> Y;
				cout << endl;
				if (Y == 'N' || Y == 'n') {
					cout << "Bye";
					cout << endl;
					break;

				}
				else if (Y == 'Y' || Y == 'y') {
					while (Y) {
						cout << "-------------------------------------------------------------------" << endl;
						cout << " 2. Polar computation: " << endl;

						polar();
						cout << " Again? (Y/N)" << endl;
						cout << "Input: ";
						cin >> Y;
						cout << endl;
						if (Y == 'N' || Y == 'n') {
							cout << "Bye";
							break;
						}
					}
				}
			}
		}
		break;

	case(3):
		cout << "-------------------------------------------------------------------" << endl;
		cout << "Bye" << endl;
		break;



	}

	cout << endl;
	return 0;
}