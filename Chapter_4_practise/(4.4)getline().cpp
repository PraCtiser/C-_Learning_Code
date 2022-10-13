#include<iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.getline(name, ArSize);  // reads through newline
    //Enter Dirk Hammernose
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);
    //Enter Radish Torte
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    // cin.get();
    return 0; 
}
//getline()会将末尾的换行符替换成空字符