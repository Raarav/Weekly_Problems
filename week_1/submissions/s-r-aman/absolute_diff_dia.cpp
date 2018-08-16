#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;

	cout << "Enter the order of square matrix 👉 ";
	cin >> n;
	cout << endl;

	vector< vector<int> > matrix;
	cout << "Enter the elements into the matrix one by one 👇" << endl;

	// Entering the matrix
	for (int i = 0; i < n; i++)
	{
		vector<int> list;
		for (int j = 0; j < n; j++)
		{
			int enter;
			cin >> enter;
			list.push_back(enter);
		}
		matrix.push_back(list);
	}

	cout << endl << "Your matrix is 👁 " << endl;

	// Printing the matrix
	for (int i = 0; i < n; i++)
	{
		cout << "[\t";
		for (int j = 0; j < n; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << "]";
		cout << endl;
		cout << endl;
	}

	// Calculating the sum of right diagonal
	int sumOfRightDia = 0;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == j)
			{
				sumOfRightDia = sumOfRightDia + matrix[i - 1][j - 1];
			}
		}
	}

	// Calculating the sum of left diagonal
	int sumOfLeftDia = 0;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == (n - j + 1))
			{
				sumOfLeftDia = sumOfLeftDia + matrix[i - 1][j - 1];
			}
		}
	}

	cout << "Sum of the main diagonal: " << sumOfRightDia << endl;
	cout << "Sum of the another diagonal: " << sumOfLeftDia << endl;

	// Calculating difference and printing its absolute value
	int diff = sumOfLeftDia - sumOfRightDia;
	cout << "The absolute difference between both diagonals is -> " << (diff > 0 ? diff : -diff) << endl;
	cout << "Done 🤞" << endl;
}
