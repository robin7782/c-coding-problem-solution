#include<iostream>
using namespace std;

int main(){
int n,k;
cin>>n;
int *arr= new int(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n+1;i++){
    for(int j=0;j<n+1;j++){
        if(i==arr[j])
            {
                k=arr[j];
                break;}
}
if(i!=k)cout<<i<<endl;
}
return 0;
}






