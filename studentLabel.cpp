/* StudentLabel
Written by: Dylan Bakr
For: CS142 Chen

*/
#include <iostream>
#include <fstream>
using namespace std;

void gatherInfo(char [], char [], int &idNum, int &credits, int &cEarned, int &totalPoints);

int main(){
char lastName[20];
char firstName[20];
int idNum, credits, cEarned, totalPoints;
gatherInfo(lastName, firstName, idNum, credits, cEarned, totalPoints);

ofstream outfile("StudentLabel.txt");
outfile<<"First name: " << firstName << " Last name: " << lastName
		<< " ID Number: " << idNum 
		<< " Credits: " << credits << " Credits earned: " << cEarned
			<< " Total points: " << totalPoints;
outfile.close();
return 0;
}

void gatherInfo(char lastName[], char firstName[], int &idNum, int &credits, int &cEarned, int &totalPoints){
cout<<"What is your last name?"<<endl;
cin>>lastName;
cout<<"What is your first name?"<<endl;
cin>>firstName;
cout<<"What is your ID number?"<<endl;
cin>>idNum;
cout<<"How many credits do you need to take?"<<endl;
cin>>credits;
cout<<"How many credits have you already earned?"<<endl;
cin>>cEarned;
cout<<"What are your total points?"<<endl;
cin>>totalPoints;
}

/*
Thomas Output:

thomas% g++ studentLabel.cpp
thomas% a.out
What is your last name?
Bakr
What is your first name?
Dylan
What is your ID number?
400213761
How many credits do you need to take?
18
How many credits have you already earned?
18
What are your total points?
100
thomas%

File Output:
First name: Dylan Last name: Bakr ID Number: 400213761 Credits: 18 Credits earned: 18 Total points: 100
*/