#include <iostream>

using namespace std;

void Union(int arr_1[],int arr_2[],int n,int m)

{
    cout<<"union:"<<endl;
    int i=0,j=0;
    while(i<n || j<m)
    {
        if(arr_1[i]<arr_2[j])
            cout<<arr_1[i++]<<" ";
        else if(arr_1[i]>arr_2[j])
            cout<<arr_2[j++]<<" ";
        else
        {
            cout<<arr_1[i++]<<" ";
            j++;
        }
    }

}

void Intersection(int arr_1[],int arr_2[],int n,int m)
{
    cout<<"Intersection:"<<endl;
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(arr_1[i]<arr_2[j])
            i++;
        else if(arr_1[i]>arr_2[j])
            j++ ;
         else
         {
           cout<<arr_1[i++]<<" ";
           j++;
         }
    }

}

int main()
{
    int n;
    cout<<"size and elements arr1 ";
    cin>>n;
    int arr_1[n];
     for(int i=0;i<n;i++)
    {

        cin>>arr_1[i];
    }
    cout<<"size and elements arr2 ";
    int m;
    cin>>m;
    int arr_2[m];

    for(int i=0;i<m;i++)
    {

        cin>>arr_2[i];
    }

    Union(arr_1,arr_2,n,m);

    Intersection(arr_1,arr_2,n,m);

    return 0;
}
