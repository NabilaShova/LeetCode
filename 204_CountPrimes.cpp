#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int countPrimes(int n){
        vector<int>prime(n+1,1);
        int count=0;

        for(long long i=2; i*i<=n; i++){
            if(prime[i] == 1){
                for(long long j=i*i; j<n; j+=i){
                    prime[j] = 0;
                }
            }
        }
        for(int i=2; i<n; i++){
            if(prime[i] == 1)
                count++;
        }

        return count;
    }
};

int main(){
    int n;
    Solution s;
    cin >> n;

    cout << s.countPrimes(n) << endl;
    return 0;
}