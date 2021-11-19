#include "std_lib_facilities.h"

struct Point{
	int x, y;
};

int main(){
try{	
	
	vector<Point> original_points;
	int x;
	int y;
	
	int number=0;
	
	cout << "Enter 7 pairs of points!\n";
	
	while (cin >> x >> y){
		number++;
		original_points.push_back(Point{x,y});
		if (number== 7) break;
	};
		
	
	string oname="mydata.txt";
	ofstream ost {oname};
	if (!ost) error("can't open output file ",oname);
	
	for (Point p: original_points)
		ost << p.x << ' ' << p.y << endl;
	
	string iname="mydata.txt";
	ifstream ist {iname};
	if (!ist) error("can't open input file ",iname);
	
	vector<Point> processed_points;
	
	while (ist >> x >> y){
		processed_points.push_back(Point{x,y});
	};
	
	for (const auto p: processed_points)
		cout << '(' << p.x << ',' << p.y << ')' << endl;
		
	for (int i=0; i<7; ++i){
		if(original_points[i].x != processed_points[i].x || original_points[i].y != processed_points[i].y)
			cout << "Something's wrong!\n";
	
	}
		
	
	return 0;
} catch (runtime_error& e) {
	cout << "Error: " << e.what() << endl;
	return 1;
} catch (...) {
	cout << "Some error happened\n";
	return 2;	
}
}
