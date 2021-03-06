/*
By: Dylan Bakr
For: CS142
Title: Candy Database
*/
#include <iostream>
sing namespace std;

void menu();
void eatCandy(int []);
void addCandy(int []);
void listInventory(int []);
void candyTypes(); 

int main(){

int userIn = 0;
int easterBasket[5];
for(int i = 0; i<6; i++){
	easterBasket[i]=0;
}
while(userIn != 5){
menu();
cin>>userIn;
if(userIn==1)
	eatCandy(easterBasket);
	if(userIn==2)
		addCandy(easterBasket);
		if(userIn==3)
			listInventory(easterBasket);
			if(userIn==4)
				candyTypes();
}
return 0;
}
void menu(){
cout<<"Welcome to your candy database\n Please select an option."<<endl;
cout<<"1 - Eat a piece of candy"<<endl;
cout<<"2 - Add a piece of candy"<<endl;
cout<<"3 - List current inventory"<<endl;
cout<<"4 - List the types of candy"<<endl;
cout<<"5 - Quit"<<endl;
}

void eatCandy(int easterBasket[]){
int userIn;
cout<<"Enter the type of candy (1-6)"<<endl;
candyTypes();
cin >> userIn;
if(easterBasket[userIn-1] != 0)
	easterBasket[userIn-1] -= 1;
else cout<<"You don't have any more of that type of candy"<<endl;
}

void addCandy(int easterBasket[]){
int userIn;
cout<<"Enter the type of candy you found (1-6)"<<endl;
candyTypes();
cin>>userIn;
easterBasket[userIn-1]+=1;
}

void candyTypes(){
cout<<"1 - Chocolate Eggs"<<endl;
cout<<"2 - Peeps"<<endl;
cout<<"3 - Snickers"<<endl;
cout<<"4 - Reese's Cups"<<endl;
cout<<"5 - M&Ms"<<endl;
cout<<"6 - Other"<<endl;
}

Avoid listInventory(int easterBasket[]){
cout<<"Chocolate Eggs: "<<easterBasket[0]<<endl;
cout<<"Peeps: "<<easterBasket[1]<<endl;
cout<<"Snickers: "<<easterBasket[2]<<endl;
cout<<"Reese's Cups: "<<easterBasket[3]<<endl;
cout<<"M&Ms: "<<easterBasket[4]<<endl;
cout<<"Other: "<<easterBasket[5]<<endl;
}



/*
OUTPUT:
thomas% a.out
Welcome to your candy database
 Please select an option.
1 - Eat a piece of candy
2 - Add a piece of candy
3 - List current inventory
4 - List the types of candy
5 - Quit
2
Enter the type of candy you found (1-6)
1 - Chocolate Eggs
2 - Peeps
3 - Snickers
4 - Reese's Cups
5 - M&Ms
6 - Other
3
Welcome to your candy database
 Please select an option.
1 - Eat a piece of candy
2 - Add a piece of candy
3 - List current inventory
4 - List the types of candy
5 - Quit
2
Enter the type of candy you found (1-6)
1 - Chocolate Eggs
2 - Peeps
3 - Snickers
4 - Reese's Cups
5 - M&Ms
6 - Other
1
Welcome to your candy database
 Please select an option.
1 - Eat a piece of candy
2 - Add a piece of candy
3 - List current inventory
4 - List the types of candy
5 - Quit
2
Enter the type of candy you found (1-6)
1 - Chocolate Eggs
2 - Peeps
3 - Snickers
4 - Reese's Cups
5 - M&Ms
6 - Other
5
Welcome to your candy database
 Please select an option.
1 - Eat a piece of candy
2 - Add a piece of candy
3 - List current inventory
4 - List the types of candy
5 - Quit
3
Chocolate Eggs: 1
Peeps: 0
Snickers: 1
Reese's Cups: 0
M&Ms: 1
Other: 0
Welcome to your candy database
 Please select an option.
1 - Eat a piece of candy
2 - Add a piece of candy
3 - List current inventory
4 - List the types of candy
5 - Quit
1
Enter the type of candy (1-6)
1 - Chocolate Eggs
2 - Peeps
3 - Snickers
4 - Reese's Cups
5 - M&Ms
6 - Other
5
Welcome to your candy database
 Please select an option.
1 - Eat a piece of candy
2 - Add a piece of candy
3 - List current inventory
4 - List the types of candy
5 - Quit
3
Chocolate Eggs: 1
Peeps: 0
Snickers: 1
Reese's Cups: 0
M&Ms: 0
Other: 0
Welcome to your candy database
 Please select an option.
1 - Eat a piece of candy
2 - Add a piece of candy
3 - List current inventory
4 - List the types of candy
5 - Quit
5
thomas%

*/
