#include <iostream>
#include <string>
using namespace std;

string ThreeSum(int arr[], int size)
{
	int total = arr[0];

	for (int x = 1; x < size-1; x++)
	{
		for (int y = x + 1; y < size - 1; y++)
		{
			for (int z = y + 1; z < size; z++)
			{
				// Condition to check if there are pairs that sum to the total
				if (arr[x] + arr[y] + arr[z] == total) 
				{
					return "true";
				}
			}
		}
	}

	return "false";
}

int main() 
{
	int A[] = { 8, 2, 1, 4, 10, 5, -1, -1 };
	int B[] = { 12, 3, 1, -5, -4, 7 };
	int C[] = { 10, 2, 3, 1, 5, 3, 1, 4, -4, -3, -2 };
	cout << ThreeSum(A, sizeof(A) / sizeof(A[0])) << endl; // true
	cout << ThreeSum(B, sizeof(B) / sizeof(B[0])) << endl; // false
	cout << ThreeSum(C, sizeof(C) / sizeof(C[0])) << endl; // true
	return 0;

}