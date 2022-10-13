#include<iostream>
#include<string>
struct Pizza
{
    std::string brand;
    float diameter;
    float weight;
};
int main()
{
    using namespace std;
    Pizza pizza;
    cout<<"Please Enter brand: ";
    getline(cin,pizza.brand);
    cout<<"Enter the diameter: ";
    cin>>pizza.diameter;
    cout<<"Enter the weight: ";
    cin>>pizza.weight;
    cout<<"Brand: "<<pizza.brand<<endl;
    cout<<"Diameter: "<<pizza.diameter<<endl;
    cout<<"Weight: "<<pizza.weight<<endl;

    return 0;
}