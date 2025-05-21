#include<bits/stdc++.h>
using namespace std;

int getFact(int n){
    if(n<=1){
        return n;
    }
    return n* getFact(n-1);
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
