#include "std_lib_facilities.h"



int main(){
	double val1;
	double val2;
	double max = 0;
	double min = 10000000000000000;
	string unit;
	double sum = 0;
	vector<double> v;
	/*while(cin >> val1 && cin >> val2){
		if(val1 > val2){
			cout << "the smaller value is: " << val2 << endl;
			cout << "the larger value is: " << val1 << endl;
			if(val1-val2 < 0.01){
			cout << "the numbers are almost equal" << endl;
			}
			}
		else if(val1 < val2){
			cout << "the smaller value is: " << val1 << endl;
			cout << "the larger value is: " << val2 << endl;
			if(val2-val1 < 0.01){
			cout << "the numbers are almost equal" << endl;
			}
			}
		else if(val1 == val2){
			cout << "the numbers are equal" << endl;
			}
	}*/
	while(cin >> val1 >> unit){
		if (unit == "cm"){
			val1=val1/100;
			}
		else if(unit == "in"){
			val1=val1*2.54/100;
			}
		else if(unit == "ft"){
			val1=val1*12*2.54/100;
			}
		else if (unit == "m"){
			val1=val1;
			}
		else error("Wrong unit!");
		
		if (val1 > max){
			cout << "the largest  so far" << endl;
			max=val1;
		}
		if (val1 < min){
			cout << "the smallest so far" << endl;
			min=val1;
		}	
		sum+=val1;
		v.push_back(val1);	
		
	}
	cout << "Smallest value: " << min << " m\n";
	cout << "Largest value: " << max << " m\n";
	cout << "Sum of the values (in meter): " << sum << " m\n";
	
	sort(v);
	
	for(double number:v){
		cout << number << " m\n";
	}
	
return 0;
}
