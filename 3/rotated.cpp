#include <iostream>

using namespace std;

void rotate(int a[],int d,int n)
{
    int temp = a[0];
    for(int i=0;i<n;i++)
        a[i] = a[i+1];
    a[n-1] = temp;
}

int main()
{
    int n,d;

    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
    }
    cout<<"d"<<endl;
    cin>>d;
    for(int i=0;i<d;i++)
        rotate(a,d,n);
    cout<<"rotated array:"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

}
