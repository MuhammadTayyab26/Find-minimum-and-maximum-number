#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c,d,e,max,min;
    cout<<"Enter the five integers"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    min=max=a;
    if(b>max)max=b;
    if(c>max)max=c;
    if(d>max)max=d;
    if(e>max)max=e;
    if(b<min)min=b;
    if(c<min)min=c;
    if(d<min)min=d;
    if(e<min)min=e;
    cout<<"the largest number is="<<max<<endl;
    cout<<"the smallest number is="<<min<<endl;
    getch();
    return 0;
}
