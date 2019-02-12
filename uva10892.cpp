#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true){
    int n;
    cin>>n;
    if(n==0)
        return 0;
    int check=sqrt(n);
    int i,j;
    vector<int>vec;
    for(i=1;i<=check;i++)
    {
        if(n%i==0)
        {
            vec.push_back(i);
            if(i!=(n/i))
                vec.push_back(n/i);
        }
    }
    sort(vec.begin(),vec.end());
    /**for(i=0;i<vec.size();i++)
        cout<<vec[i]<<"\t";
    cout<<endl;**/
    int count =0;
    count=vec.size();
    for(i=1;i<(vec.size()-1);i++)
    {
        for(j=i+1;j<vec.size()-1;j++)
        {
            if(((vec[i]/__gcd(vec[i],vec[j]))*vec[j])==n)
            {
                 count++;
                 //cout<<vec[i]<<" "<<vec[j]<<endl;
            }

        }
    }
    cout<<n<<" "<<count<<endl;
    }
}
