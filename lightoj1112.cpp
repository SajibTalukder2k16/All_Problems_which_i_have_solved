#include<bits/stdc++.h>
using namespace std;
#define mx 100002
int tree[mx];
int query(int idx)
{
    int sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
        idx-=(idx&(-idx));
    }
    return sum;
}
void update(int index,int array_size,int value)
{
    while(index<=array_size)
    {
        tree[index]+=value;
        index+=index&(-index);
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases,cases;;
    //cin>>test_cases;
    scanf("%d",&test_cases);
    for(cases=1;cases<=test_cases;cases++)
    {
    int n,no_of_query;
    scanf("%d%d",&n,&no_of_query);
    //cin>>n>>no_of_query;
    memset(tree,0,sizeof tree);
    int ara[n+1];
    int i,idx,value,idx2,sum1,sum2,sum;
    for(i=1;i<=n;i++)
    {
        //cin>>ara[i];
        scanf("%d",&ara[i]);
        update(i,n,ara[i]);
    }
    int check;
    printf("Case %d:\n",cases);
    //cout<<"Case "<<cases<<":"<<endl;
    for(i=1;i<=no_of_query;i++)
    {
        //cin>>check;
        scanf("%d",&check);
        if(check==1)
        {
            //cin>>idx;
            scanf("%d",&idx);
            value=ara[idx+1];
            ara[idx+1]=0;
            update(idx+1,n,-value);
            printf("%d\n",value);
            //cout<<value<<endl;
        }
        else if(check==2)
        {
            //cin>>idx>>value;
            scanf("%d%d",&idx,&value);
            ara[idx+1]+=value;
            update(idx+1,n,value);
        }
        else if(check==3)
        {
            //cin>>idx>>idx2;
            scanf("%d%d",&idx,&idx2);
            sum1=query(idx);
            sum2=query(idx2+1);
            sum=sum2-sum1;
            printf("%d\n",sum);
            //cout<<sum<<endl;
        }
    }

    }
}
