#include <iostream>

using namespace std;

int main() {
	int n;

	cout << "Just another pattern 😣(sick of this shit). Enter the number yo -> ";
	cin >> n;

	int odd_list[n-1];
	
	for(int i = 1; i <= n; i++) {
		odd_list[i-1] = 2 * i - 1;
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n - (i + 1); j++) {
			cout << " ";
		}
		
		for(int k = i + 1; k < odd_list[i]; k++) {
			cout << k;
		}
		cout << odd_list[i];
		
		for(int p = odd_list[i] - 1; p > i; p--) {
			cout << p;
		}
		cout << endl;
	}

	cout << "Done! Now go away 😒." << endl;
}