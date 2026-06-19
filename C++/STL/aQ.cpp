#include <iostream>
#include <vector>
using namespace std;

#define priya ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using ll = long long ;
using ld = long double ;
using ull=  unsigned long long ;

int main() {
    int t;
    cin >> t; // number of test cases
    
    while (t--) {
        int n;
        cin >> n; // number of elements in the array
        
        vector<int> a(n);
        int odd_count = 0, even_count = 0;
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even_count++;
            else
                odd_count++;
        }
        
        
        // The minimum number of operations needed to make all elements the same parity
        int result = min(odd_count, even_count);
        cout << result << endl;
    }
    
    return 0;
}