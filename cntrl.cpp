#include<iostream>
using namespace std;
int main()
{
  int c=1;
 
  while(c)
  {
   cin>>c;
    switch(c)
    {
      case 1:cout<<"first"<<endl;
      break;
      case 2:cout<<"secnd"<<endl;
      break;
      case 3: exit(0);
      default: goto aman;
     }
      cout<<"r"<<endl;
   }
   aman:for(int i=0;i<8;i++)
   {
    for(int j=0;j<=i;j++)
    cout<<"*"<<" ";
    cout<<endl;
    }
   return 0;
 } 
