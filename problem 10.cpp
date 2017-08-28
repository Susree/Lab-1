
#include <iostream>
using namespace std;

int main() 
{
float a,b,c,d;
cout <<"enter a day"<<endl;

cin >>a;
cin >>b;
cin >>c;
cin >> d;

b=a/365;
c=a/7;

d=a/30;

cout <<" year="<<b<<endl;
cout <<"week="<<c<<endl;
cout <<"month="<<d<<endl;

return 0;
}

