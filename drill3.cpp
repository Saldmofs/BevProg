#include "std_lib_facilities.h"

int main(){
string first_name;
cout << "Enter the name of the person you want to write to\n";
cin >> first_name;
cout << "Dear"<< first_name <<", \n";
cout <<"\t How are you? I am fine. I miss you.\n";
cout << "Lorem ipsum dolor sit amet, consectetur adipiscing elit. \nLorem ipsum dolor sit amet, consectetur adipiscing elit. \nLorem ipsum dolor sit amet, consectetur adipiscing elit. ";
string friend_name;
cout << "Name of another friend:";
cin >> friend_name;
cout << "Have you seen "<< friend_name << "lately?\n";
char friend_sex = 'r';
cout <<"Write m if friend is male f if female";
cin >>friend_sex;
if(friend_sex =='m' )
{
cout <<"If you see"<< friend_name <<"please ask him to call me\n";
}
else if
{
cout <<"If you see"<< friend_name <<"please ask her to call me\n";
}
else 
{
cout <<"If you see"<< friend_name <<"please ask them to call me\n";
}
int age = 0;
cout << "enter the age of the person";
cout << " hear you just had a birthday and you are" << age << "years old";
if(age <= 0 || age >= 110)
{
simple_error("you're kidding");
}
if(age <=12)

return 0;
}
