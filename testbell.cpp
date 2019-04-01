#include <iostream>
#include<bits/stdc++.h>
#define lli long long
using namespace std;


int main()
{


   vector<lli>ara;
   int n;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       lli a;
       scanf("%lld",&a);
       ara.push_back(a);
   }
   sort(ara.begin(),ara.end());
   int now=1;
   int ans=1;
   int ind=0;
//   for(auto i:ara)
//   {
//       cout <<i<<endl;
//   }
   for(int i=1;i<n;i++)
   {
       while(ara[i]-ara[ind]>5)
       {
           cout<<ara[i]<<" "<<ara[ind]<<endl;
           ind++;
           //cout<<ind<<endl;
       }

       ans=max(ans,i-ind+1);


   }
   cout<<ans<<endl;




}
