#include <iostream>

using namespace std;

int main()
{   int n;
    int a[50];
    cin>>n;
    for(int i = 0;i<n;i++)
        cin>>a[i];
    for(int i = 0;i<n-1;i++){
        for(int j = i+1 ;j<n;j++){
            if(a[i]>a[j]){
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
    for(int i = 0;i<n;i++)
        cout<<a[i];
    return 0;
}

