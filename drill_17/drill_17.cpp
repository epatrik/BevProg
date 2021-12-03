#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a)
{
	for (int i = 0; i < 10; ++i)
		os << a[i] << endl;
}

void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
		os << a[i] << endl;
}

void print_vector(ostream& os, vector<int> v)
{
	for (int i = 0; i < v.size(); ++i)
		os << v[i] << endl;
}

int main(){
    
	int* a = new int[10];
    
	cout << "1.2:" << endl;
	for (int i = 0; i < 10; ++i)
		cout << a[i] << endl;
	delete[] a;

    cout << endl;
	cout << "1.5:" << endl;
	int* b = new int[10];
	for (int i = 0; i < 10; ++i)
		b[i] = 100 + i;
	print_array10(cout, b);
	cout << endl;
	delete[] b;
    
    cout << endl;
	cout << "1.6:" << endl;
	int* c = new int[11];
	for (int i = 0; i < 11; ++i)
		c[i] = 100 + i;
	print_array(cout, c, 11);
	cout << endl;
	delete[] c;
    
    cout << endl;
	cout << "1.8:" << endl;
	int* d = new int[20];
	for (int i = 0; i < 20; ++i)
		d[i] = 100 + i;
	print_array(cout, d, 20);
	delete[] d;
    
    cout << endl;
	cout << "1.10/5:" << endl;
	vector<int> e(10);
	for (int i = 0; i < 10; ++i)
		e[i] = 100 + i;
	print_vector(cout, e);
	cout << endl;
    
	cout << "1.10/6:" << endl;
	vector<int> f(11);
	for (int i = 0; i < 11; ++i)
		f[i] = 100 + i;
	print_vector(cout, f);
	cout << endl;

	cout << "1.10/6:" << endl;
	vector<int> g(20);
	for (int i = 0; i < 20; ++i)
		g[i] = 100 + i;
	print_vector(cout, g);
	cout << endl;
    

	int x = 7;
	int* p1 = &x;
    cout << endl;

	cout << "2.2:" << endl;
	cout << "x = " << x << '\n';
	cout << "*p1 = " << *p1 << '\n';
    cout << endl;
    
	int* p2 = new int[7];
	for (int i = 0; i < 7; ++i)
		p2[i] = pow(2,i);
        
	cout << "2.4:" << endl;
	print_array(cout, p2, 7);
    cout << endl;

	int* p3 = p2;
    
	p1 = p2;
	p3 = p2;
    
	cout << "2.8:" << endl;
	cout << "p1 = " << p1 << '\n';
	cout << "*p1 = " << *p1 << '\n';
	cout << "p2 = " << p2 << '\n';
	cout << "*p2 = " << *p2 << '\n';
    cout << endl;

	delete[] p2;
    
	cout << "2.10:" << endl;
	p1 = new int[10];
	for (int i = 0; i < 10; ++i)
		p1[i] = pow(2,i);
	print_array(cout, p1, 10);
    cout << endl;
    
	cout << "2.11:" << endl;
	p2 = new int[10];
	print_array(cout, p2, 10);
    cout << endl;
    
	cout << "2.12:" << endl;
	for (int i = 0; i < 10; ++i)
		p2[i] = p1[i];
	print_array(cout, p2, 10);
    cout << endl;

	delete[] p1;
	delete[] p2;
    
	cout << "2.13/10:" << endl;
	vector<int> t1(10);
	for (int i = 0; i < t1.size(); ++i)
		t1[i] = pow(2,i);
	print_vector(cout, t1);
    cout << endl;
    
	vector<int> t2(10);
    
	cout << "2.13/12:" << endl;
	for (int i = 0; i < t2.size(); ++i)
		t2[i] = t1[i];
	print_vector(cout, t2);

	return 0;
}