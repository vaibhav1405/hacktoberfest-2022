//contributing for hactoberfest2021
//C++ program to check Armstrong Number.
#include<iostream>
#include<math.h>
using namespace std;
void armstrong(int n){
    int sum = 0;
    int number = n;
    while(n>0){
        int lastDigit = n%10;
        sum += pow(lastDigit, 3);
        n /= 10;
    }
    if(sum == number)
        cout<<"Armstrong"<<endl;
    else
        cout<<"Not Armstrong"<<endl;
    
    return;
}
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int T;
    cin>>T;
    while(T--){
        int M;
        cin>>M;
        armstrong(M);
    }
    return 0;
}
