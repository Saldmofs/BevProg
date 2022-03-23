#include <iostream>
#include <string>
#include<vector>
#include<array>
#include<list>

using namespace std;
void printToContainer(T& container)
{
 for(auto/*felvesz automatikusan egy típust*/ ize : container)
 {cout<< ize;}
}
void addToContainer(T& container, int num)
{
for(auto ize : container)
{
 ize++;
}
 /*for(int i = 0; i < container.Size(); i++)
 {
   container[i]+=num;
 }*/
}
template<typename Iter1, typename Iter2>
// requires Input_iterator<Iter1>() && Output_iterator<Iter2>()
Iter2 copy(Iter1 f1, Iter1 e1, Iter2 f2);
int main()
{
constexpr int size = 10;
array<int, size>arrint;
copy(arr, arr + size, arrint.begin());

int numbers[size]= {0,1,2,3,4,5,6,7,8,9};
vector<int> num(size); 
copy(arr, arr + size, num.begin());
//num = {0,1,2,3,4,5,6,7,8,9};
list<int> list(size);
cout << num[2]<<endl;

array<int, size>arrint2 = arrint;
vector<int> num2 = num; 
list<int> list2 = list;

return 0;

}
