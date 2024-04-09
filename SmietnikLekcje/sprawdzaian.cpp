#include <iostream>
using namespace std;

int main()
{
int *i=new int;
int *n=new int;
int *t=new int[*n];
*n=9;
srand(time(NULL));
for(*i=0;*i<*n;(*i)++)
{
t[*i]=rand()%100;
cout<<t[*i]<<endl;
}        
for(*i=0;*i<*n;(*i)++){   
if(t[*i]>t[0])
{    
 t[0]=t[*i];   
}   
}
  cout<<"Najwieksza "<< t[0]<<endl;  
    delete i;
    delete [] t;
    delete n;    
    
system("pause");
return 0;    
}