// ahmad ake eno mikhoni fahmidam ke kod ro copy kone
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	if (n % 2 != 0) cout << -1;
	else{
		for (int i = n; i > 0; i--){
			cout << i << " ";
		}
	}
}
