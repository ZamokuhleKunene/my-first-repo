#include <stdio.h>
#include <iostream>
using namespace std;

void myPower( double a, double b)
{
    double i=1;
    double answer=a;
    while(i<b)
    {
        answer=answer*answer;
        i++;
    }
    cout<<answer<<endl;
}


    void fact(int y)
{
    long int factorial = 1;
        for(int j =1;j<=y;j++)
        {
                factorial = factorial*j;
        }
    cout<< factorial<<endl;
}

int main()
{
	//myPower(4,2);
    fact(4);
	return 0;
}
