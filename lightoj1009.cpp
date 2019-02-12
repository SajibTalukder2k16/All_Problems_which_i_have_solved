#include<bits/stdc++.h>
using namespace std;
void swapp(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[],int ara[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)  {
           if (arr[j] > arr[j+1])
           {
              swapp(&arr[j], &arr[j+1]);
              swapp(&ara[j], &ara[j+1]);
           }
           if(arr[j]==arr[j+1])
           {
               if(ara[j]<ara[j+1])
               {
                swapp(&arr[j], &arr[j+1]);
                swapp(&ara[j], &ara[j+1]);
               }
           }

}
}
int main()
{
    int i,j,position;
    int n=1001;
    int num[n];
    for(i=0;i<n;i++)
        num[i]=i;
    int no_of_divisors[n]={0};
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j+=i)
            no_of_divisors[j]++;
    }
    //sort(no_of_divisors,no_of_divisors+n);
    bubbleSort(no_of_divisors,num,n);
    //for(i=1;i<n;i++)
        //cout<<i<<" "<<no_of_divisors[i]<<"\t"<<num[i]<<endl;
    int test_cases;
    cin>>test_cases;
    for(i=1;i<=test_cases;i++)
    {
        cin>>position;
        cout<<"Case "<<i<<": "<<num[position]<<endl;
    }

}
