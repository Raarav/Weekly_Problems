#include <iostream>

using namespace std;

int main() {
	int n;
  
	cout << "Enter the number of lines -> ";
	cin >> n;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n-i-1; j++) {
			cout << ' ';
		}
		for(int j = n-1; j >= n-i-1; j--) {
			cout << '#';
		}
		cout << endl;
	}
}
