

#include <iostream>

using namespace std;


int main()
{
    int input;

    cin>>input;
  int  n=2*input;
    char p[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            p[i][j] = '*';
    for(int i=0;i<n/2;i++)
        for(int j=i+1;j<=n-i-2;j++)
            p[i][j] = ' ';
    int count=1;
    for(int i=n/2+1;i<n;i++)
    {
        for(int j=n/2-count;j<n/2+count;j++)
        {
            p[i][j] = ' ';
        }
        count++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<p[i][j];
        cout<<endl;
    }
    return 0;
}


