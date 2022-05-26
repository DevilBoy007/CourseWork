#include <iostream>

using namespace std;

void encryptMessage(string &, int &);
void decryptMessage(string &, int &);
void changeMessage(string &);
void menu();
void changeKey(int &);
void showMessage(string &);

int main(){
string message;
int key;
int userIn=0;
cout<<"Hello, please enter a message to encrypt"<<endl;
cin>>message;
cout<<"Set a key to encrypt the message with"<<endl;
cin>>key;
while(userIn != 5){
menu();
cin>>userIn;
if(userIn==1)
	encryptMessage(message, key);
	if(userIn == 2)
		decryptMessage(message, key);
		if(userIn == 3)
			changeMessage(message);
		if(userIn==4)
				showMessage(message);
}
return 0;
}

void menu(){
cout<<"1 - Encrypt message"<<endl;
cout<<"2 - Decrypt message"<<endl;
cout<<"3 - Change message"<<endl;
cout<<"4 - Display message"<<endl;
}

void encryptMessage(string &message, int &key){
	string result = "";
	
	for(int i = 0; i<message.size(); i++){
		if (isupper(message[i]))
            result += char(int(message[i]+key-65)%26 +65);
		else result += char(int(message[i]+key-97)%26 +97);
	}
	message = result;
}

void decryptMessage(string &message, int &key){
	int check;
	string result = "";
cout<<"What is the key?"<<endl;
cin>>check;
if(check==key){
	for(int i = 0; i < message.size(); i++){
		if (isupper(message[i]))
            result += char(int(message[i]+(26-key)-65)%26 +65);
		else result += char(int(message[i]+(26-key)-97)%26 +97);
		}
	}
else
	cout<<"That is not the correct key"<<endl;
message = result;
}

void changeMessage(string &message){
	cout<<"Enter a new message"<<endl;
	cin>>message;
}

void changeKey(int &key){
	cout<<"Enter a new key"<<endl;
	cin>>key;
}

void showMessage(string &message){
	cout<<message<<endl;
}


