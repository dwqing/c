```
#include<iostream>
using namespace std;
int main(){
    long long n,s=0,x,t;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        t=i;
        while(t>0){
        if(t%10==x)
            s++;
        t=t/10； 
        }
    }
    cout<<s;
    return 0;
}
```
