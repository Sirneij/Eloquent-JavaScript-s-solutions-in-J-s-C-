#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the triangle's size: ";
	cin >> n;
	string harsh = "#";
	for(int i = 0; i < n; i++){
		cout << harsh << endl;
		harsh += "#";
	}
}