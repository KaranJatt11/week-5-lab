#include <iostream>
#include <math.h>

int main()
{
 using std::cout;
 using std::endl;
 using std::cin;
 int a,b;
 cout<<"Enter any two integers"<<endl;
 cout<<"the width a = "<<endl;
 cin>>a;
 cout<<"the height a = "<<endl;
 cin>>b;
 
 auto c=sqrt(pow(a,2)+pow(b,2));

 cout<<"The third side = "<<c<<endl;

 return 0;
}