#include<bits/stdc++.h>
using namespace std;
bool can_win_bob(int n)
{
    if(n==0)
        return 0;
    if(can_win_bob(n-1)==0 || can_win_bob(n-2)==0)
        return 1;
    return 0;
}
bool can_win_alice(int n)
{
    if(n==0)
        return 1;
    if(can_win_alice(n-1)==1 || can_win_alice(n-2)==0)
        return 0;
    return 1;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases;
    cin>>test_cases;
    int i,n;
    string name;
    for(i=1;i<=test_cases;i++)
    {
        cin>>n>>name;
        if(name=="Bob")
            {
                if(n%3==0)
                    cout<<"Case "<<i<<": "<<"Alice"<<endl;
                else
                    cout<<"Case "<<i<<": "<<"Bob"<<endl;

                /**if(can_win_bob(n))
                    cout<<"Case "<<i<<": "<<"Bob"<<endl;
                else
                    cout<<"Case "<<i<<": "<<"Alice"<<endl;**/
            }
        else if(name=="Alice")
            {
                if(n%3==0 || n%3==2)
                    cout<<"Case "<<i<<": "<<"Alice"<<endl;
                else
                    cout<<"Case "<<i<<": "<<"Bob"<<endl;

                /**if(can_win_alice(n))
                    cout<<"Case "<<i<<": "<<"Alice"<<endl;
                else
                    cout<<"Case "<<i<<": "<<"Bob"<<endl;**/

            }
    }
}
