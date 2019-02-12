#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin>>test_cases;
    getchar();
    int i,j;
    while(test_cases--)
    {

        string card_number;
        getline(cin,card_number);
        int sum=0;
        for(j=0;j<card_number.length();j+=5)
        {
            for(i=j;i<=j+3;i+=2)
            {
                char ch=card_number[i];
                int p=ch-48;
                p*=2;
                stringstream ss;
                ss <<p;
                string str = ss.str();
                int len=str.length();
                int k;
                p=0;
                for(k=0;k<len;k++)
                    p+=str[k]-48;
                sum+=p;

            }
            for(i=j+1;i<=j+3;i+=2)
            {
               char ch=card_number[i];
               int p=ch-48;
               sum+=p;
            }
        }
        if(sum%10==0)
            cout<<"Valid"<<endl;
        else
            cout<<"Invalid"<<endl;
    }

}
