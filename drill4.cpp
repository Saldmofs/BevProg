#include "std_lib_facilities.h"

int main(){
double a;
double smallest = std::numeric_limits<double>::max();
double largest = std::numeric_limits<double>::min();
string unit = "";
double final = 0;
constexpr double mcm = 100;
constexpr double incm = 2.54;
constexpr double ftin = 12;
vector<double> sum;
double max, min;
 

while(cin >> a >> unit&& a!= '|')
{
    if(unit != "m" && unit != "cm" &&unit != "in" &&unit != "ft")
    {
     cout <<"Illegal";
    }
    else
    {
      if(unit == "m")
        final = a;
      if(unit == "cm")
        final = a/mcm;
      if(unit == "in")
        final = a*incm/mcm;
      if(unit == "ft")
        final = a*ftin*incm/mcm;
    

    
if(final < smallest)
{
smallest = final;
cout <<"The smallest is "<< a << unit <<"\n" ;
min = final;
}
if(final > largest)
{
largest = final;
cout <<"The largest is "<< a << unit <<"\n" ;
max = final;
}



sum.push_back(final);

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
}
cout <<"The largest unit is "<< max << "m \n"; 
cout <<"The smallest unit is "<< min << "m \n"; 
for(int i = 0; i < sum.size(); i++)
{
    cout << sum[i] << "m \n"; 
}
return 0;
}