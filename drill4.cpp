#include "std_lib_facilities.h"

int main(){
double a;
double smallest = std::numeric_limits<double>::max();
double largest = std::numeric_limits<double>::min();
string unit = "";

while(cin >> a && a!= '|' )
{
if(a < smallest)
{
smallest = a;
cout <<"The smallest is "<< a <<"\n" ;
}
if(a > largest)
{
largest = a;
cout <<"The largest is "<< a <<"\n" ;
}
//if(a == '|' || b == '|')
	//exit(0);
/*if(a > b)
	{
	cout <<"The smaller vlue is " << b <<"\n";
	cout <<"The larger vlue is " << a <<"\n";
		if(a-b < 0.01)
		{
		cout << "The numbers are almost equal";
		}
	}
else if(b > a)
	{
	cout <<"The smaller vlue is " << a <<"\n";
	cout <<"The larger vlue is " << b <<"\n";
		if(b-a < 0.01)
		{
		cout << "The numbers are almost equal";
		}
	}
	else
	{
		cout << "The numbers are equal";
	}
}*/
}
return 0;
}
