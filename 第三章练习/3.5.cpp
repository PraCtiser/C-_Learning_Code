#include<iostream>
int main()
{
    using namespace std;
    long long population_US,population_tot;
    cout<<"Enter the world's population: ";
    cin>>population_tot;
    cout<<"Enter the population of the US: ";
    cin>>population_US;
    cout<<"The population of the US is "<<(double(population_US)/double(population_tot))*100
    <<"% of the world population."<<endl;

    return 0;
}