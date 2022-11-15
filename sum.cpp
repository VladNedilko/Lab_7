
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    float x,Y,Sum,k;
    Sum=0;
	cout<<"Привіт,шо ти як ти";
    cout<<"Введіть х ";
    cin>>x;
    cout<<"Введіть k ";
    cin>>k;
    for (int k=1;k<=10;k++){
        Sum+=k;
    }
    Y=log(10)*x+2*Sum*k;
    cout<<Y;
    return 0;
}

