#include <iostream>
#include <string>

using namespace std;

struct Person
{
 public:
 Person(){}
// Person (string n, int a) : n{n}, a{a}{} //konstruktor
 Person (string f,string l, int a) : f{f},l{l}, a{a}{} //konstruktor
     if(a < 0 || a >= 150)
     {
       throw runtime_error ("invalid age");
     }
     char t[14]{';',',','[',']','"',''','*','^','&','%','$','#','@','!'};
     for(int i = 0; i < n.lenght(); i++)
     {
        for(int o = 0; o < t.size; o++)
        {
          if(n[i] == t[o])
          {
           throw runtime_error ("invalid name");
          }
        }
     }
 string first() const{return f;}//mivel privát az a meg az n ezért kell egy ilyen hogy a mainben meghívható legyen
 string last() const{return l;}
 int age () const {return a;}
 private:
 //string n;
 int a;
 string l; 
 string f;
 ostream& operator<<(ostream& os, const Person& p)
 { 
  return os << p.f<< p.l<<" "<< p.a;
 } 
 istream& operator>> (istream& is, Person& p)
 { 
  string f;
  string l;
  int a;
  is >> n >> a;

  p = Person(f,l, a);
  return is;
 }

};
int main()
{

 //Person p;
 Person p = Person("Goofy", 63);
 /*p.name = "Goofy";
 p.age = 63;*/

 cout << p.n << " " << 

 Person p2;
 
 vector <Person> vec;
 for(PErson p; cin>>p;)
 {
 if(p.name()== "end") break;
 vec.push_back(p);
 }
 for(Person p : vec)//foreach
 {
 
 }
  return 0;
}
