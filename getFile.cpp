#include <iostream>
#include <fstream>

using namespace std;

int main()
{  char ch2;
   int j;
   double d;
   char str1[80];
   char str2[80];
		   
   ifstream infile("StudentLabel.txt");  //create ifstream object
	

    infile>>ch2>>j>>d>>str1;
   //infile>>ch2>>str1;
   infile.getline(str2, 80);  //extract data 
                              //with space between characters
							  //to the variable
		   
	infile.close();
		   
	 cout<<ch2<<endl
		 <<j<<endl
		  <<d<<endl
		  <<str1<<endl
	     <<str2<<endl;
			
	return 0;
}