#include <iostream>
#include <string>
#include <vector>

template<typename T> struct S
      {
         S(T vv = 0) : val{vv}{} 
         T& get();
         void set(T x) {val = x; };
         operator=(const T&);
         
         private:
         T val;
         
         T val;
      };
      
      template<typename T>
      T& S<T>::get()
      {
          return val;
      }
      /*template<typename T>
      void S<T>::set(T x)
      {
       val = x;
      }*/
      
       /* template<typename T>
        void T<t>::operator=(const T&)
        {
          val = s;
        }*/
         template<typename T>
      void operator>>(istream& is, vector<T>& v)
      {
       T a;
       int i = 0;
       while(is >>a)
       {
         v.push_back(a);
         i++;
       }
      {
       val = x;
      }
      
int main()
{

   S<int> s;
   S<int> si {37};
   S<char> sc {'c'};
   S<double> sd {3.2};
   S<std::string> ss {"Hello"};
   S<vector<int>> svi {std::vector<int>{1,1,2,3,5,8}} ;
   
   cout<< "S<int> : "<<s.get() <<endl;
   cout<< "S<int> : "<<si.get() <<endl;
   cout<< "S<char> : "<<sc.get() <<endl;
   cout<< "S<double> : "<<sd.get() <<endl;
   cout<< "S<std::string> : "<<ss.get() <<endl;
  // cout<< "S<vector<int>> : "<<svi.val <<endl;
  
  
  for(auto a : svi.get())
  {
   cout << a << ' ';
  }
   

}
