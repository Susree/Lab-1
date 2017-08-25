 #include<iostream>
 using namespace std;
 int main () 
 {
 	int r,d;
 	float c,a;
 	
 	cout << "enter a radius"<< endl;
 	cin >> r;
 	d=2*r;
 	cout << "diameter=" <<d;
 	c=2*3.14*r;
 	cout << "circumference=" <<c;
 	a= 3.14*r*r;
 	cout << "area=" <<a;
 	return 0;
 }
