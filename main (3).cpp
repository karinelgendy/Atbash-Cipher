// FCAI – Programming 1 – 2021-2025 - Assi. 2
// Program called: atbashcipher.cpp
// Program Description: it is a simple cipher. Basically, when encoded, an "A" becomes a "Z" , "B" turns into "Y", etc.
// aim:for Encryption and Decryption
#include <iostream>
#include<string>
#include <cctype>
using namespace std;
void Encryption(){
    string textmsg;
    int location;
    int newlocation;
    int newascii;
    // take a text message to encrypt
     cout << "Enter your message that you want to enrype: " << endl;
     cin >> textmsg;
     
     for (int i = 0; i < textmsg.size(); i++) {
         //switch each letter to uppercase
        textmsg[i] = toupper (textmsg[i]);
        // check if the letter in the ascii range of the uppercase letters
        if (textmsg[i] >= 65 && textmsg[i] <= 90) {
            // use the ascii algorithm to encrypt the letter
            location = textmsg[i] - 65;
            newlocation = 25 - location;
            newascii = newlocation + 65;
            cout << char(newascii);
            
            
          }
        }
}
void Decryption(){
    string textmsg;
    int location;
    int newlocation;
    int newascii;
// take a text message to decrypt
    cout<<"Enter your message that you want to encrype: "<<endl;
    cin >> textmsg;

    for(int i = 0 ; i < textmsg.size() ; i++){
        //switch each letter to uppercase
        textmsg[i] = toupper(textmsg[i]);
        // check if the letter in the ascii range of the uppercase letters
        if(textmsg[i] >= 65 && textmsg[i] <= 90){
           // use the ascii algorithm to decrypt the letter
            location = textmsg[i]-65;
            newlocation = 25-location;
            newascii = newlocation+65;
            cout << char(newascii^32) ;}
    }
}
//let user choose what he wants 
int main()
{
    int option;
    cout << "1. Encryption\n2. Decryption\nChoose(1,2): ";
    cin >> option;

    if(option == 1){
        Encryption();
    } else if (option == 2){
        Decryption();
    } else {
        cout << "Wrong Choice" << endl;
    }
    return 0;
}
