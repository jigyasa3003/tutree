#include<iostream>
# include <bits/stdc++.h>
# include <stdlib.h>
using namespace std;

int main(){

int n;
cin>>n;
int arr[n];
for (int i=0;i<n;i++){
cin>>arr[i];
}
int sum=0;
int min_i=0;
int min_j=1;
int min_sum=arr[0]+arr[1];
if(n<2){

cout<<min_sum;
}

else {


for (int i=0;i<n-1;i++){

for (int j=i+1;j<n;j++){


sum= arr[i]+arr[j];
if (abs(min_sum)>abs(sum)){

min_sum=sum;
 min_i=i;
 min_j=j;


}

}

}




}
cout << arr[min_i] << " " << arr[min_j];

return 0;

}
