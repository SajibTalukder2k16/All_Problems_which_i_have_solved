 #include<bits/stdc++.h>
 using namespace std;
 #define llu unsigned long long
 int main()
 {
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
     llu n;
     cin>>n;
     while(n--)
     {
         llu a,b;
         cin>>a>>b;
         cout<<b+(a-1)*9<<endl;
     }

 }
