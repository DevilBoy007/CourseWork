/*
Title: Grade Calculator
Written By: Dylan Bakr
For: CS142 - Chen 1:00 p.m. T,TH
*/

#include <iostream>
using namespace std;

void menu();
void calcHW(int &numHW, int &hwPoints, int &pointsEarned, double &pointsPossible);
void calcE(int &numE, int &ePoints, int &pointsEarned, double &pointsPossible);
void finalExam(double &pointsPossible, int &pointsEarned, int &finalExamScore);
void computeGrade(double &pointsPossible, int &pointsEarned, double &finalGrade, int &numHW, int &numE, int &hwPoints, int &ePoints, int &finalExamScore);

int main(){

bool programRunning = true;
int userInput;
int numHW = 0;
int hwPoints = 0;
int numE = 0;
int ePoints = 0;
int pointsEarned = 0;
double pointsPossible = 0;
int finalExamScore=0;
double finalGrade;

while(programRunning != false){

menu();
cin>>userInput;
if(userInput==1)
	calcHW(numHW, hwPoints, pointsEarned, pointsPossible);
	if(userInput==2)
		calcE(numE, ePoints, pointsEarned, pointsPossible);
		if(userInput==3)
		finalExam(pointsPossible, pointsEarned, finalExamScore);
		if(userInput==4)
			computeGrade(pointsPossible, pointsEarned, finalGrade, numHW, numE, hwPoints, ePoints, finalExamScore);
			if(userInput==5)
			programRunning=false;
	}
	return 0;
}

void menu(){
cout<<"Hello, please enter a number to select the corresponding menu option."<<endl;
cout<<"1) Quiz/Homework"<<endl;
cout<<"2) Exams"<<endl;
cout<<"3) Final Exam"<<endl;
cout<<"4) Calculate grade"<<endl;
cout<<"5) Exit"<<endl;
}

void calcHW(int &numHW, int &hwPoints, int &pointsEarned, double &pointsPossible){
int userInput;
cout<<"How many homework assignments did you have?"<<endl;
cin>>numHW;
pointsPossible += numHW*10;
for(int i = 1; i <=numHW; i++){
cout<<"What did you get on assignment "<<i<<"?"<<endl;
cin>>userInput;
if(userInput>10){
	cout<<"Not possible"<<endl;
	i -= 1;
}
else hwPoints += userInput;
}
pointsEarned+=hwPoints;
}

void calcE(int &numE, int &ePoints, int &pointsEarned, double &pointsPossible){
int userInput;
cout<<"How many exams have you taken?"<<endl;
cin>>numE;
pointsPossible+=numE*50;
for(int i = 1; i<=numE; i++){
cout<<"What did you get on exam "<<i<<"?"<<endl;
cin>>userInput;
if(userInput > 50){
	cout<<"Impossible"<<endl;
	i -= 1;
}
else ePoints+=userInput;
}
pointsEarned += ePoints;
}

void finalExam(double &pointsPossible, int &pointsEarned, int &finalExamScore){
int userInput;
pointsPossible += 100;
cout<<"What did you get on your final exam? ( /100)"<<endl;
cin>>userInput;
if(userInput<= 100 && userInput>=0)
	finalExamScore = userInput;
else cout<<"Impossible"<<endl;
pointsEarned += finalExamScore;
}

void computeGrade(double &pointsPossible, int &pointsEarned, double &finalGrade, int &numHW, int &numE, int &hwPoints, int &ePoints, int &finalExamScore){
finalGrade = (pointsEarned/pointsPossible)*100;
cout<<"Your points "<<endl;
		if(numHW != 0){
			cout<<"Quiz/Homework assignments "<<numHW<<".";
			cout<<"Quiz/Homework total points earned "<<hwPoints<<"."<<endl;
		}
		else cout<<"No quiz/homework grades yet."<<endl;
		if(numE!=0){
		cout<<"Number of exams "<<numE<<".";
		cout<<"Exam points earned "<<ePoints<<"."<<endl;
		}
		else cout<<"No exam grades yet"<<endl;
		if(finalExamScore!= 0)
			cout<<"Points earned on final "<<finalExamScore<<"."<<endl;
		else	cout<<"No final grade yet."<<endl;
		cout<<"Your grade "<<finalGrade<<"%"<<endl;
		if(finalGrade >= 92)
			cout<<"Letter Grade: A"<<endl;
			else if(finalGrade>= 85)
				cout<<"Letter Grade: B"<<endl;
				else if(finalGrade>=70)
					cout<<"Letter Grade: C"<<endl;
					else if(finalGrade>=60)
						cout<<"Letter Grade: D"<<endl;
					else cout<<"Letter Grade: F"<<endl;
}

/*
OUTPUT:

thomas% a.out gradeCalc3.cpp
Hello, please enter a number to select the corresponding menu option.
1) Quiz/Homework
2) Exams
3) Final Exam
4) Calculate grade
5) Exit
1
How many homework assignments did you have?
3
What did you get on assignment 1?
8
What did you get on assignment 2?
9
What did you get on assignment 3?
10
Hello, please enter a number to select the corresponding menu option.
1) Quiz/Homework
2) Exams
3) Final Exam
4) Calculate grade
5) Exit
2
How many exams have you taken?
2
What did you get on exam 1?
40
What did you get on exam 2?
48
Hello, please enter a number to select the corresponding menu option.
1) Quiz/Homework
2) Exams
3) Final Exam
4) Calculate grade
5) Exit
3
What did you get on your final exam? ( /100)
89
Hello, please enter a number to select the corresponding menu option.
1) Quiz/Homework
2) Exams
3) Final Exam
4) Calculate grade
5) Exit
4
Your points
Quiz/Homework assignments 3.Quiz/Homework total points earned 27.
Number of exams 2.Exam points earned 88.
Points earned on final 89.
Your grade 88.6957%
Letter Grade: B
Hello, please enter a number to select the corresponding menu option.
1) Quiz/Homework
2) Exams
3) Final Exam
4) Calculate grade
5) Exit
*/
