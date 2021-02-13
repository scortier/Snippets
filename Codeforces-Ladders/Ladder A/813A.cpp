#include<bits/stdc++.h>
 
using namespace std;
 
 
main()
    {
      int n,i,j,m;
      int a[100002];
      int l[1002], r[1002];
      
      cin>>n;
      for(i=0;i<n;i++)
         cin>>a[i];
      cin>>m;
      for(i=0;i<m;i++)
            cin>>l[i]>>r[i];
            
      if(m==0)
      {
         cout<<"-1";
         return 0;
       }
       
      int ans=0;
      long long min_time=0;
      for(i=0;i<n;i++)
         min_time+=a[i];
               //cout<<min_time<<endl;
      long long total_time=0;
      total_time=r[m-1];
               //cout<<total_time<<endl;
               
      if(total_time<min_time)
            {
               cout<<"-1";
               return 0;
            }
      else
      if(total_time==min_time)
            {
               cout<<min_time;
               return 0;
            }
      else
      if(total_time>min_time)
      {
      for(i=0;i<m;i++)
        {
           if(l[i]<min_time&&min_time<r[i])
            {
               ans=min_time;
               break;
            }
           else
            if(r[i]==min_time)
               {
                  ans=r[i];
                  break;
               }
            else
            if(l[i]>=min_time)
               {
                  ans=l[i];
                  break;
               }
         }
      }
      cout<<ans;
    }