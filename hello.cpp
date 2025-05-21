#include<bits/stdc++.h>
using namespace std;

int getFact(int n){
    int ans =1;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    return ans;
}

int getFactorialSum(int n){

    int ans =0 ;
    for(int i=1;i<=n;i++){
        ans += getFact(i);
    }
    return ans;
    
}

int main()
{
    int ans = getFactorialSum(3);
    cout<<ans<<endl;
    
    return 0;
}
