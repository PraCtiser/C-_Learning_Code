#include<iostream>
#include<cstring>
int main()
{
    using namespace std;
    char firstname[20],lastname[20];
    cout<<"Enter your first name: ";
    cin.getline(firstname,20);  //Enter Flip
    cout<<"Enter your last name: ";
    cin.getline(lastname,20);  //Enter  Fleming
    strcat(lastname,", ");
    strcat(lastname,firstname);
    cout<<"Here's the information in a single string: "<<lastname<<endl;
    return 0;
}