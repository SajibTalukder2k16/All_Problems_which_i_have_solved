#include<bits/stdc++.h>
using namespace std;
bool leap_year(int year)
{
    if(year%400==0 || (year%4==0 && year%100!=0))
        return true;
    else
        return false;
}
int main()
{
    string month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int i,j;
    map<string,int>mp;
    for(i=0;i<12;i++)
        mp[month[i]]=i;
    int test_cases;
    cin>>test_cases;

    for(i=1;i<=test_cases;i++)
    {
        string month1,month2;
        int date1,date2,year1,year2;
        char ch;
        cin>>month1>>date1>>ch>>year1;
        cin>>month2>>date2>>ch>>year2;
        int count=0;
        if(mp[month1]>1)
            year1++;
        if(mp[month2]==0 || (mp[month2]==1&& date2<29))
            year2--;
        count = year2/4 - (year1-1)/4;
        count -= year2/100 - (year1-1)/100;
        count += year2/400 - (year1-1)/400;

        cout<<"Case "<<i<<": "<<count<<endl;

    }
}
