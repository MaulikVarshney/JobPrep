#include<bits/stdc++.h>
using namespace std;

bool isPowerofTwo(int n) {
        return ((n&(n-1))==0) && (n != 0);
}
 int main(){
    int num;
    cin>>num;
    int k = isPowerofTwo(num);
    cout<<k;
    return 0;
 }

