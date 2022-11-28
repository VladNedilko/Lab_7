#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   float first,step,end,Y,x;
   cout<<"Input first number ";
   cin>>first;
   cout<<"Input end number ";
   cin>>end;
   cout<<"Input step ";
   cin>>step;
   cout<<"     DO-WHILE\n"<<setw(5)<<"X"<<setw(10)<<"Y"<<endl;
   x=first;
   do{
       Y=pow(sin(x),3)+3*x*x+3;
       cout<<setw(5)<<x<<setw(10)<<Y<<endl;
       x+=step;
   }while(x<=end+step/2);
    return 0;
}

