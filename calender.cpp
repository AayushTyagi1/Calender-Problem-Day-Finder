#include<iostream>
using namespace std;
int main()
{
    int date,mon,year;
    cout<<"Please Enter Date in format DD MM YYYY like 01 12 2000:";
    cin>>date>>mon>>year;
    if(mon == 1 || mon == 2)
        mon+=10;
    else
        mon-=2;
    int D = year%100;
    int C = year/100;
    if(mon==1 || mon == 2)
        D-=1;
    int x = date+ int((13*mon-1)/5) + int(C/4) + int(D/4) + D -2*C;
    x=x%7;
    if(x<0)
        x+=7;
    switch(x)
    {
        case 0: cout<<"SUNDAY"<<endl; break;
        case 1: cout<<"MONDAY"<<endl;break;
        case 2: cout<<"TUESDAY"<<endl;break;
        case 3: cout<<"WEDNUSDAY"<<endl;break;
        case 4: cout<<"THURSDAY"<<endl;break;
        case 5: cout<<"FRIDAY"<<endl;break;
        case 6: cout<<"SATURDAY"<<endl;break;
        default: cout<<"can't find the answer";

    }
}
