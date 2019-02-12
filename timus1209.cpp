#include<bits/stdc++.h>
using namespace std;
#define maxx 2147483647
map<int,bool>mp;
int main()
{

   int checker=1,i;
   for(i=0;checker<=maxx && checker>0;i++)
   {
       mp[checker]=1;
       checker+=i;
   }
   int n,a;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>a;
       if(mp[a]==1)
            cout<<1<<" ";
       else
        cout<<0<<" ";
   }
   cout<<endl;
}
