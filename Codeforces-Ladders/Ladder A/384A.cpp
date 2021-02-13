#include<bits/stdc++.h>
 
using namespace std;
 
main()
    {
      int n,i,j;
      cin>>n;
      
      int count;
      if(n%2==0)
         count=n*n/2;
      else
         count=(n/2)*(n/2)+((n+1)/2)*((n+1)/2);
         
      cout<<count<<endl;
      
      for(i=0;i<n;i++)
         {
            for(j=0;j<n;j++)
               if(((i+j)&1)==0)
                  cout<<"C";
               else
                  cout<<".";
         cout<<endl;
         }
         
    }