#include<bits/stdc++.h>
using namespace std;

string oddEven(int N) {
        if((N & 1) == 0){
            return "even";
        }
        return "odd";
}
 int main(){
    int num;
    cin>>num;
    string k = oddEven(num);
    cout<<k;
    return 0;
 }

