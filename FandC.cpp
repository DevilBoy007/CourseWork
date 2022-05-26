/*Program 1--FandC
	Author: Dylan Bakr
	Date: 1/18/18
	Session: 03
	*/

#include <iostream>
using namespace std;
int main(){
double far, cel;
cout<<"What was the temperature in Fahrenheit today?"<<endl;
cin>>far;
if(far>85)
	cout<<"It is hot out today"<<endl;
	if(far<20)
		cout<<"It is cold out today"<<endl;
cel = (5/9.0)*(far-32);
cout<<"The temp in celcius is "<<cel<<"."<<endl;

return 0;
}

/*thomas% a.out
What was the temperature in Fahrenheit today?
89
It is hot out today
The temp in celcius is 31.6667.
thomas% a.out
What was the temperature in Fahrenheit today?
50
The temp in celcius is 10.
thomas% a.out
What was the temperature in Fahrenheit today?
20
The temp in celcius is -6.66667.
thomas%

*/