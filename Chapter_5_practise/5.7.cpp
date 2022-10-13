#include<iostream>
#include<string>
struct car
{
    std::string producer;
    int production_year;
};
int main()
{
    using namespace std;
    cout<<"How many cars do you wish to catalog? ";
    int num_car;
    (cin>>num_car).get();
    car *pt=new car[num_car];
    for(int i=0;i<num_car;i++)
    {
        cout<<"Car #"<<i+1<<":"<<endl;
        cout<<"Please enter the make: ";
        getline(cin,(pt+i)->producer);
        cout<<"Please enter the year made: ";
        (cin>>(pt+i)->production_year).get();
    }
    cout<<"Here is your collection: "<<endl;
    for(int i=0;i<num_car;i++)
        cout<<(pt+i)->production_year<<" "<<(pt+i)->producer<<endl;
    delete [] pt;
    return 0;
}