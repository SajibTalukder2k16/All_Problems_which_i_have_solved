#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
    string line;
    getline(cin,line);
    if(line=="0")
        return 0;
    stringstream ss(line);
    int a;
    vector<int>vec;
    while(ss>>a)
    {
        if(a!=0)
         vec.push_back(a);
    }
    int i;
    vector<int>remainder_vec;
    for(i=1;i<vec.size();i++)
        remainder_vec.push_back(abs(vec[i]-vec[i-1]));
    int gcd=remainder_vec[0];
    for(i=0;i<remainder_vec.size();i++)
        gcd=__gcd(gcd,remainder_vec[i]);
    cout<<gcd<<endl;
    }
}
