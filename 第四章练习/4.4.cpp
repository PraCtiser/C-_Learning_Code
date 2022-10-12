#include<iostream>
#include<string>
int main()
{
    using namespace std;
    string firstname,lastname;
    cout<<"Enter your first name: ";
    getline(cin,firstname);  //Enter Flip
    cout<<"Enter your last name: ";
    getline(cin,lastname);  //Enter  Fleming
    lastname=lastname+", "+firstname;
    cout<<"Here's the information in a single string: "<<lastname<<endl;
    return 0;
}