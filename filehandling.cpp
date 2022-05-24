#include<bits/stdc++.h>
using namespace std;
int main()
{
     ofstream fout;
     fout.open("newf.txt");
     string line;
     while(fout)
     {
          getline(cin,line);
          if(line=="-1")
          break;
          fout<<line<<endl;
     }
     fout.close();
     ifstream fptr;
     fptr.open("newf.txt");
     while(fptr)
     {
          getline(fptr,line);
       
          cout<<line<<endl;
     }
     
     return 0;
 }    
