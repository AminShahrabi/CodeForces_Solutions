#include <iostream>
#include <string>
using namespace std;

int main()
{   
    int n, k;
    cin >> n >> k;
    
    while (k){
        if (n % 10 == 0){
            n = n / 10;
            k -= 1;
        }
        else{
            n = n - 1;
            k -= 1;
        }
    }
    cout << n;
    return 0;
}
