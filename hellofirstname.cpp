#include "std_lib_facilities.h"

int main()
{
{
         cout << "Please enter your first name (followed by 'enter'):\n";
         string first_name;              // first_name is a variable of type string
         cin >> first_name;             // read characters into first_name
         cout << "Hello, " << first_name << "!\n";
         cout<<"How are you?I am fine. I miss you.\n";
         cout<<" Actually I had a pretty good weekend! I made a trip in the mountains. :D\n";
         string friendname;
         cout<<"name of your friend:\n";
         cin>>friendname;
         cout<<"Have you seen "<< friendname <<"lately?\n";
         char friendsex;
         cout<<"sex of your friend:\n";
         cin>>friendsex;
         if(friendsex=='m')
         {
         	cout<<"If you see "<<friendname<<" please ask him to call me!\n";
         }
         else
         {
         	if(friendsex=='f')
         	{
         		cout<<"IF you see "<<friendname<< " ask her to call me!\n";
         	}
         	else
         	{
         		cout<<"not possible gender\n";
         	}
         }
int age=0;
cout<<"your age:""\n";
cin>>age;
if(age<1 || age>109)
{
	simple_error("you're kidding!");
}
else
{
	if(age<12)cout<<"Next year you will be "<<age+1<<"\n";
	else
	{
		if(age==17)cout<<"Next year you will be able to vote.\n";
		else
		{
			if(age>69)cout<<"I hope you are enjoying retirement.\n";
			else
			{
				cout<<"\n";
			}
		}

	}
}
cout<<"Yours sincerely\n\n\n";
cout<<"Milán Ákos\n";
}
return 0;
}