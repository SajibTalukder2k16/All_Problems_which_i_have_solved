#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    getchar();
    int cases;
    for(cases=1;cases<=T;cases++)
    {
        string message;
        getline(cin,message);
        int i;
        int key_press=0;
        int len=message.length();
        for(i=0;i<len;i++)
        {
            if(message[i]=='a')
                key_press+=1;
            else if(message[i]=='b')
                key_press+=2;
            else if(message[i]=='c')
                key_press+=3;
            else if(message[i]=='d')
                key_press+=1;
            else if(message[i]=='e')
                key_press+=2;
            else if(message[i]=='f')
                key_press+=3;
            else if(message[i]=='g')
                key_press+=1;
            else if(message[i]=='h')
                key_press+=2;
            else if(message[i]=='i')
                key_press+=3;
            else if(message[i]=='j')
                key_press+=1;
            else if(message[i]=='k')
                key_press+=2;
            else if(message[i]=='l')
                key_press+=3;

            else if(message[i]=='m')
                key_press+=1;
            else if(message[i]=='n')
                key_press+=2;
            else if(message[i]=='o')
                key_press+=3;
            else if(message[i]=='p')
                key_press+=1;
            else if(message[i]=='q')
                key_press+=2;
            else if(message[i]=='r')
                key_press+=3;
            else if(message[i]=='s')
                key_press+=4;
            else if(message[i]=='t')
                key_press+=1;
            else if(message[i]=='u')
                key_press+=2;
            else if(message[i]=='v')
                key_press+=3;
            else if(message[i]=='w')
                key_press+=1;
            else if(message[i]=='x')
                key_press+=2;
            else if(message[i]=='y')
                key_press+=3;
            else if(message[i]=='z')
                key_press+=4;
            else if(message[i]==' ')
                key_press+=1;

        }
        cout<<"Case #"<<cases<<": "<<key_press<<endl;
    }
}
