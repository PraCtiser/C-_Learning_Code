#include<iostream>
int main()
{
    using namespace std;
    char firstname[20],lastname[20];
    cout<<"What is your first name? ";  //Enter Betty Sue
    cin.getline(firstname,20);
    cout<<"What is your last name? ";  //Enter Yewe
    cin.get(lastname,20).get();
    cout<<"What letter grade do you deserve? ";  //Enter B
    char grade;
    cin>>grade;
    cout<<"What is your age? ";  //Enter 22
    int age;
    cin>>age;
    cout<<"Name: "<<lastname<<", "<<firstname<<endl;
    cout<<"Grade: "<<(char)(grade+1)<<endl;
    cout<<"Age: "<<age<<endl;
    return 0;
}