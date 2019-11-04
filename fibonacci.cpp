#include <iostream>
using namespace std;

int series(int a)
{
if(a==0)
return 0;
else if(a==1)
return 1;
else
return series(a-1)+series(a-2);
}
int main(){
cout<<"Here is the fibonacci Series."<<endl;
for(int i=1; i<=10; i++)
if(i!=10)
cout<<series(i)<<",";
else
cout<<series(i)<<"."<<endl;
return 0;
}
