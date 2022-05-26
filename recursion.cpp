#include <iostream>
using namespace std;
int recurs(int ion);
int main(){
int ion;
cout<<"Enter a number to find its factorial"<<endl;
cin>>ion;
cout<<"Factorial of "<<ion<<": "<<recurs(ion)<<endl;
return 0;
}

int recurs(int ion){
	if(ion <= 1)
		return 1;
	else
		return ion*recurs(ion-1);
}