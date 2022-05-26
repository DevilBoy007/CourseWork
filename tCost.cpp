#include <iostream>
using namespace std;
void computeCost(double &tCost, int &numShirts);
int main(){
double tCost = 19.99;
int numShirts;
cout<<"How many t-shirts would you like?"<<endl;
cin>>numShirts;
computeCost(tCost, numShirts);
return 0;
}

void computeCost(double &tCost, int &numShirts){
int subTotal = tCost*numShirts;
int taxCost = subTotal*.07;
cout<<"Subtotal: $"<<subTotal<<endl;
cout<<"Tax: $"<<taxCost<<endl;
cout<<"Final cost: $"<<subTotal+taxCost<<endl;
}