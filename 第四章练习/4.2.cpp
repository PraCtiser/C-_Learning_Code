#include<iostream>
#include<string>
int main()
{
    using namespace std;
    string name;
    string dessert;

    cout << "Enter your name:\n";
    getline(cin,name);
    //Enter Dirk Hammernose
    cout << "Enter your favorite dessert:\n";
    getline(cin,dessert);
    //Enter Radish Torte
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0; 
}