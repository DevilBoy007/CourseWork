/*
Dylan Bakr
CS142
Number Guessing Game
C++
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
using namespace std;

void setNumber(int &someNumber){
	srand(time(NULL));
	someNumber = 1 + rand()%100;
}

int main(){
int userIn;
int someNumber;
setNumber(someNumber);
cout<<"I have picked a number between 1 and 100. Guess the number."<<endl;
while(userIn != someNumber){
cin>>userIn;
	if(userIn<someNumber)
		cout<<"Too low, try again"<<endl;
		if(userIn>someNumber)
			cout<<"Too high, try again"<<endl;
			if(userIn == someNumber)
				cout<<"You got it!"<<endl;
	}
}

/* Output of the code:

thomas% a.out
I have picked a number between 1 and 100. Guess the number.
50
Too low, try again
75
Too low, try again
90
You got it!
thomas% a.out
I have picked a number between 1 and 100. Guess the number.
50
Too high, try again
25
Too low, try again
40
Too high, try again
35
Too high, try again
30
Too high, try again
28
Too high, try again
26
You got it!
thomas% !a
a.out
I have picked a number between 1 and 100. Guess the number.
50
Too low, try again
90
Too low, try again
80
Too low, try again
99
Too low, try again
100
You got it!
thomas%

*/