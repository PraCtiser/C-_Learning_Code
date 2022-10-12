#include<iostream>
int main()
{
    using namespace std;
    const int ArSize=20;
    char name[ArSize];
    char dessert[ArSize];

    cout<<"Enter your name:\n";
    cin.get(name,ArSize).get(); //read string,newline(注意这么写的作用是什么)
    //Enter Mai Parfait
    cout<<"Enter your favorite dessert:\n";
    cin.get(dessert,ArSize).get();
    //Enter Chocolate Mousse 
    cout<<"I have some delicious "<<dessert;
    cout<<" for you, "<<name<<".\n";
    return 0;
}
//可以在cin>>year;后加 cin.get();
//或者改为(cin>>year).get();