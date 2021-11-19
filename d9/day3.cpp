#include "std_lib_facilities.h"

class Date 
{
	int y, m, d;
 public:
	Date(int yy, int mm, int dd);   
    	void add_day(int n);            
    	int month() {return m;}
    	int day() {return d;}
    	int year() {return y;}
};

Date::Date(int yy, int mm, int dd) 
{
	if (dd < 1 || dd > 31 || mm < 1 || mm > 12)
	{ 
	   error("Invalid date");
	}
	else
	{

	   y = yy;    
	   m = mm;
	   d = dd;
    }
}

void Date::add_day(int n)
{

	int new_d = n % 31;          
    int new_m = (n / 31) % 12;   
    int new_y = n / (31*12);     
    y += new_y;
    m += new_m;
    d += new_d;
     
	if (d > 31)
	{
	  ++m; d -= 31;
    }    
	if (d < 1)
	{
	  --m; d += 31;
    }    
		 
	if (m > 12)
	{
	  ++y; m -= 12;
    }    
	if (m < 1)
	{
	  --y; m += 12;
    }     
}

ostream& operator<<(ostream& os,  Date& d)
{
	return os << '(' << d.year()
		<< ',' << d.month()
		<< ',' << d.day() << ')';
}

int main()
{
	try
	{
	
       Date today(1978, 6, 25);

	   Date tomorrow(today);
       tomorrow.add_day(1);
    	
       cout << "Today: " << today << "\n"<< "Tomorrow: " << tomorrow << "\n";
	
       return 0;
    	
	}
	
	catch(exception& e)
	{
    		cerr << e.what() << '\n';
    		return 1;
	}
	
	catch(...)
	{
    		cerr << "Unknown exception!\n";
    		return 2;
	}
}