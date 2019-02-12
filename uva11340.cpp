#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin>>test_cases;
    while(test_cases--)
    {
    int no_of_character,i;
    cin>>no_of_character;
    map<char,int>mp;
    char ch;
    int value;
    for(i=0;i<no_of_character;i++)
    {
        cin>>ch>>value;
        mp[ch]=value;
    }
    string line;
    double money=0;
    int no_of_line;
    cin>>no_of_line;
    getchar();
    while(no_of_line--)
    {
        getline(cin,line);
        int len=line.length();
        for(i=0;i<len;i++)
        {
            money+=mp[line[i]];
        }
    }
    printf("%.2f$\n",money/100);
    }
}
