#include "std_lib_facilities.h"

int main(){
string first_name;
cout << "Enter the name of the person you want to write to\n";
cin >> first_name;
cout << "Dear "<< first_name <<", \n";

cout <<"\t How are you? I am fine. I miss you.\n";
cout << " How are you? I'm fine.\n I miss you.";
cout << "Lorem ipsum dolor sit amet, consectetur adipiscing elit. \nLorem ipsum dolor sit amet, consectetur adipiscing elit. \nLorem ipsum dolor sit amet, consectetur adipiscing elit. \n";

string friend_name;
cout << "\nName of another friend:";
cin >> friend_name;
cout << "Have you seen "<< friend_name << " lately?\n";

char friend_sex = '0';
cout <<"Write m if friend is male f if female\n";
cin >>friend_sex;

if(friend_sex =='m' )
	{
		cout <<"If you see "<< friend_name <<" please ask him to call me\n";
	}
else if (friend_sex =='f' )
		{
			cout <<"If you see "<< friend_name <<" please ask her to call me\n";
		}
	else 
		{
			cout <<"If you see "<< friend_name <<" please ask them to call me\n";
		}

int age;
cout << "enter the age of the person\n";
cin >> age;
cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	
if(age <= 0 || age >= 110)
	{
		simple_error("you're kidding\n");
	}

//switch(age)
//	{
//		case 1 ... 11:	cout << "I hear you just had a birthday and you are " << age << " years old.\n Next year you will be "<< age+1<<"\n";break;
//		case 12 ... 16:	cout << "I hear you just had a birthday and you are " << age << " years old.\n";break;
//		case 17:		cout << "I hear you just had a birthday and you are " << age << " years old.\n Next year you will be able to vote.\n";break;
//		case 18 ... 70:	cout << "I hear you just had a birthday and you are " << age << " years old.\n";break;
//		case 71 ... 109:cout << "I hear you just had a birthday and you are " << age << " years old.\n I hope you are enjoying retirement\n";break;
//	}	

if(age <12)
	{		
		cout <<"Next year you will be "<< age+1<<"\n";
	}	
else if(age == 17)
	{
		cout <<"Next year you will be able to vote.\n";
	}
else if(age > 70)
	{
		cout <<"I hope you are enjoying retirement\n";
	}

cout <<"Yours sincerely \n \n";
cout <<"Miklós\n";

return 0;
}
