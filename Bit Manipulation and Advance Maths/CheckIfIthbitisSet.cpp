#include<bits/stdc++.h>
using namespace std;

bool checkKthBit(int num, int i) {
        return (num & (1<<i));
}
 int main(){
    int num, i;
    cin>>num>>i;
    int k = checkKthBit(num,i);
    cout<<k;
    return 0;
 }

