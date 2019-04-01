#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[2*n],temp_ara[2*n];
    map<int,int>mp1,mp2;
    int i;
    for(i=0;i<(2*n);i++)
    {
        cin>>ara[i];
        temp_ara[i]=ara[i];
        if(mp1[ara[i]]==0)
            mp1[ara[i]]=i;
        else
            mp2[ara[i]]=i;
    }
    sort(temp_ara,temp_ara+(2*n));
    int pos1=0,pos2=0;
    int value;
    int j=0;
    int sum=0;
    for(i=0;i<n;i++)
    {
        value=temp_ara[j];
        j+=2;
        int con1=abs(pos1-mp1[value]);
        int con2=abs(pos1-mp2[value]);
        int con3=abs(pos2-mp1[value]);
        int con4=abs(pos2-mp2[value]);
        if(con1<=con2 && con1<=con3 && con1<=con4)
        {
            pos1=mp1[value];
            pos2=mp2[value];
            sum+=con1;
            sum+=con4;
        }
        else if(con3<=con1 && con3<=con2 && con3<=con4)
        {
            pos2=mp1[value];
            pos1=mp2[value];
            sum+=con3;
            sum+=con2;
        }
        else if(con2<=con1 && con2<=con3 && con2<=con4)
        {
            pos1=mp2[value];
            pos2=mp1[value];
            sum+=con2;
            sum+=con3;
        }
        else if(con4<=con1 && con4<=con2 && con4<=con3)
        {
            pos2=mp2[value];
            pos1=mp1[value];
            sum+=con4;
            sum+=con1;
        }
    }
    cout<<sum<<endl;
}
