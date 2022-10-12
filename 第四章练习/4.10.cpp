#include<iostream>
#include<array>
int main()
{
    using namespace std;
    array<float,3> score;
    cout<<"Please enter your 40 meters scores(3 times): ";
    cin>>score[0]>>score[1]>>score[2];
    cout<<"Your scores: "<<score[0]<<" "<<score[1]<<" "<<score[2]<<endl;
    float average=(score[0]+score[1]+score[2])/3.0;
    cout<<"Average: "<<average<<endl;
    
    return 0;
}