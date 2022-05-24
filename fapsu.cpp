#include<bits/stdc++.h>
using namespace std;
int a[5]={1,2,3,4,5};

struct fap
{
    int d;
    string s;
};
    
 union su
 {
    int v;
    float t;
};
    
int main()
{
     struct fap f1;
     f1.d=a[0];
     f1.s="first";
      su s1;
     s1.v=a[1];
     s1.t=10.99;
     cout<<f1.d<<endl;
     cout<<f1.s<<endl;
     cout<<s1.v<<endl;
     cout<<s1.t<<endl;
     return 0;
}
