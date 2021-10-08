/*Rotate Array
Given an unsorted array arr[] of size N, rotate it by D elements in the counter-clockwise direction.
Example 1:
Input:
N = 5, D = 2
arr[] = {1,2,3,4,5}
Output: 3 4 5 1 2
Explanation: 1 2 3 4 5  when rotated
by 2 elements, it becomes 3 4 5 1 2.

Example 2:
Input:
N = 10, D = 3
arr[] = {2,4,6,8,10,12,14,16,18,20}
Output: 8 10 12 14 16 18 20 2 4 6
Explanation: 2 4 6 8 10 12 14 16 18 20
when rotated by 3 elements, it becomes
8 10 12 14 16 18 20 2 4 6.

*/

#include <bits/stdc++.h>
using namespace std;



int main()
{
	int t;
	//taking testcases
	cin >> t;

	while (t--)
	{
		int n, d;

		//input n and d
		cin >> n >> d;

		vector<int>arr(n);

		//inserting elements in the array
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		//Rotation solution
		
		//printing the elements of the array
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
