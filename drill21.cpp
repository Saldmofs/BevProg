#include<iostream>
#include<string>
#include<map>
#include<numeric>
#include<stdexept>

template<typename K>
void summap(const std::map<K int>& m)
{

  int osszeg = 0;
  for(std::pair<K, int> a : m)
  {
    osszeg+=a.second;
  }
  return osszeg;

}

template<typename K, typename V>
void print(const std::map<K, V>& m)
 {
   
   for(std::pair<K, V> a:m)
   {
     std::cout << a.first << 't' << a.second << '\n';
   }
 
 }

int main()
{

   try 
   {
     std::map<std::string, int> msi;
     msi["a"] = 1;
     msi["b"] = 2;
     msi["abc"] = 45;
     msi["x"] = 23;
     msi["g"] = 41;
     msi["wert"] = 92;
     msi["j"] = 30;
     msi["po"] = 11;
     msi["px"] = 67;
     msi["ac"] = 4;
     
     print(msi);
     
     msi.erase("a");
     std::cout<<"\"a\" kulcsú elem törlése után: " << std::endl;
     print(msi);
     
     msi.erase(msi.begin(), msi.end());
     std::cout << "teljes törlés után: " <<std::endl;
     
   }
   catch (std::exeption& e)
   {
     std::cerr<<"Exeption: "<<e.what()<<'\n';
     return 1;
   }
   catch(...)
   {
    std::cerr <<"Unknown exeption." <<'\n';
    return 2;
   }

}
