#include<iostream>
using namespace std;

int first_occurence(int arr[], int n, int key) {
	int s = 0;
	int e = n - 1;
	int ans = -1;

	while (s <= e) {
		int mid = (s + e) / 2;

		if (arr[mid] == key) {
			ans = mid;
			e = mid - 1;
		}
		else if (arr[mid] > key) {
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}
	return ans;
}

int last_occurence(int arr[], int n, int key) {
	int s = 0;
	int e = n - 1;
	int ans = -1;

	while (s <= e) {
		int mid = (s + e) / 2;

		if (arr[mid] == key) {
			ans = mid;
			s = mid + 1;
		}
		else if (arr[mid] > key) {
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}
	return ans;
}

int main() {
	int n, key;
	cin >> n;

	int arr[10];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// cout << "Enter key to be checked:";
	cin >> key;

	cout << first_occurence(arr, n, key) << endl;
	cout << last_occurence(arr, n, key) << endl;

	return 0;
}
