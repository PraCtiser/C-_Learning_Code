#include<iostream>
const double rate_Daphne=0.1;
const double rate_Cleo=0.05;
int main()
{
    using namespace std;
    double Daphne=100,Cleo=100;
    int year=0;
    do{
        year++;
        Daphne+=rate_Daphne*100.0;
        Cleo+=rate_Cleo*Cleo;
    }while(Daphne>=Cleo);
    cout<<"Year: "<<year<<" ,Daphne: "<<Daphne<<" ,Cleo: "<<Cleo<<endl;
    
    return 0;
}