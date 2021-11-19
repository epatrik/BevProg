#include "std_lib_facilities.h"

int main()
{
	int birth_year=2002;
	
	cout << birth_year << "\t(decimal)\n"
		<< hex << birth_year << "\t(haxadecimal)\n"
		<< oct << birth_year << "\t(octal)\n";
	cout << "age:\t" << dec << 19 << endl;	
	cout << showbase;
	cout << birth_year << "\t(decimal)\n"
		<< hex << birth_year << "\t(haxadecimal)\n"
		<< oct << birth_year << "\t(octal)\n";
 	cout << "age:\t" << dec << 19 << endl;
	cout << noshowbase;


	int a, b, c, d;
	cin >> a >> hex >> b >> oct >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';


	cout << 1234567.89 << "\t(defaultfloat)\n"
		<< fixed << 1234567.89 << "\t(fixed)\n"
		<< scientific << 1234567.89 << "\t(scientific)\n";

	cout << '|' << setw(13) << "Eperjesi " << '|' << setw(12) << "Patrik"
		<< '|' << setw(30) << "epatrik2002@gmail.com"
		<< '|' << setw(18) << "06307233350|" << endl
		<< '|' << setw(12) << "first name 1 " << '|' << setw(12) << "last name 1"
		<< '|' << setw(30) << "name1@gmail.com" 
		<< '|' << setw(18) << "06301234567|" << endl
		<< '|' << setw(12) << "first name 2 " << '|' << setw(12) << "last name 2"
		<< '|' << setw(30) << "name2@gmail.com" 
		<< '|' << setw(18) << "06301234568|" << endl
		<< '|' << setw(12) << "first name 3 " << '|' << setw(12) << "last name 3"
		<< '|' << setw(30) << "name3@gmail.com" 
		<< '|' << setw(18) << "06301234569|" << endl
		<< '|' << setw(12) << "first name 4 " << '|' << setw(12) << "last name 4"
		<< '|' << setw(30) << "name4@gmail.com" 
		<< '|' << setw(18) << "06301234570|" << endl
		<< '|' << setw(12) << "first name 5 " << '|' << setw(12) << "last name 5"
		<< '|' << setw(30) << "name5@gmail.com" 
		<< '|' << setw(18) << "06301234571|" << endl;

	return 0;
}
