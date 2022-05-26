/*
Dylan Bakr
CS142
Tuition Calculator
*/

#include <iostream>
using namespace std;
int main(){
int creditHours;
int bill;
cout<<"How many credit hours are you taking?"<<endl;
cin>>creditHours;
if(creditHours<=11 && creditHours >0)
	bill = (1310*creditHours);
	if(creditHours > 11 && creditHours < 21)
		bill = 15555;
		if(creditHours > 20)
			bill = 15555 + (1310*(creditHours-20));
cout<<"Your tuition bill is $"<<bill<<"."<<endl;

}

/*
thomas% a.out
How many credit hours are you taking?
11
Your tuition bill is $14410.
thomas% !a
a.out
How many credit hours are you taking?
16
Your tuition bill is $15555.
thomas% !a
a.out
How many credit hours are you taking?
26
Your tuition bill is $23415.
*/
