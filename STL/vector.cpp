#include<iostream>
#include<vector>
#include<deque>
#include<forward_list>
#include<list>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) { x = a, y = b; }
};
int main() {
	vector<int> arr{1,2,3,4,5};
	arr.push_back(7);
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i];
	}
	cout << endl;

	arr.pop_back();
	
	vector<int>::iterator ptr;
	for (ptr = arr.begin(); ptr != arr.end(); ptr++) {
		cout << *ptr;
	}
	cout << endl;

	deque<int> arr2{ 1,2,3,4,5 };
	arr2.push_back(3);

	forward_list<int>arr3{1,2,4,5};
	for (auto it = arr.begin(); it != arr.end(); it++) {
		cout << *it;
	}
}