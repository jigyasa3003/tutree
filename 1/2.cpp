#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int i,n,j,start,end,mid,size;
    float x;
    cin>>n;
    float a[n]={0.0};
    cin>>x;
    printf("%.1f\n",x);
    a[0]=x;
    for(i=1;i<n;i++)
    {
        cin>>x;
        start  = 0;
        end = i;
        while(start<=end){
            mid = (start+end)/2;
            if(a[mid]==x)break;
            else if(a[mid]<x)start = mid+1;
            else end = mid-1;

        }
        if(a[mid]<x){mid++;}
        for(j=i;j>mid;j--)a[j]=a[j-1];
        a[j] = x;
        if((i+1)&1){
            printf("%.1f\n",a[i/2]);
        }
        else
        printf("%.1f\n",(a[i/2]+a[i/2+1])/2);


    }
}
