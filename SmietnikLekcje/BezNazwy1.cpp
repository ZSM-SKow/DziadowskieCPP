#include <iostream>
using namespace std;

int main()
{
string x;
int i,b;
cin.sync();
cout<<"podaj lancuch: "<<endl;
getline (cin,x);
int r=x.size();
for(i=0;i<=r-2;i=i+2)
{
b=x[i];
x[i]=x[i+1];
x[i+1]=b;                
}
cout<<"zaszyfrowany :"<<x<<endl;
for(i=0;i<=r-2;i=i+2)
{
b=x[i];
x[i]=x[i+1];
x[i+1]=b;                
}    
cout<<"odszyfrowany :"<<x<<endl;    
    
    
    
    
    
system("pause");
return 0;    
}
