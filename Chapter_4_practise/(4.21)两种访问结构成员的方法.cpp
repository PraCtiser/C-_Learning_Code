#include<iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable *ps=new inflatable;
    cout<<"Enter name of inflatable item: ";
    cin.get(ps->name,20);  //Enter Fabulous Frodo
    cout<<"Enter volume in cubic feet: ";
    cin>>(*ps).volume;   //Enter 1.4
    cout<<"Enter price: $";
    cin>>ps->price;  //Enter 27.99
    cout<<"Name: "<<(*ps).name<<endl;
    cout<<"Volume: "<<ps->volume<<" cubic feet\n";
    cout<<"Price: $"<<ps->price<<endl;
    delete ps;
    return 0;
}