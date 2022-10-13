#include<iostream>
#include<string>
struct CandyBar
{
    std::string brand;
    float weight;
    int calorie;
};
int main()
{
    using namespace std;
    CandyBar snack={"Mocha Munch",2.3,350};
    cout<<snack.brand<<endl;
    cout<<snack.weight<<endl;
    cout<<snack.calorie<<endl;
    return 0;
}