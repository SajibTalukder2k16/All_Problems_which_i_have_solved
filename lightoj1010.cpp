#include<bits/stdc++.h>
using namespace std;
#define llu long long int
int main()
{
    int test_cases;
    cin>>test_cases;
    int i;
    for(i=1;i<=test_cases;i++)
    {
        int row,col,ans;
        llu multiple,check;
        cin>>row>>col;
        multiple=row*col;
        if(row==1 or col==1)ans=row*col;
        else if(row==2 or col==2)
        {
            if(row==2)
                check=col;
            else
                check=row;
            if(check%4==0)ans=check;
            else if(check%4==1)ans=check+1;
            else if(check%4==2)ans=check+2;
            else if(check%4==3)ans=check+1;
        }
        else if(multiple%2==0)
            ans=multiple/2;
        else
            ans=(multiple/2)+1;
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
}
