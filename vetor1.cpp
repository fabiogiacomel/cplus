#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	vector<int> primeiro;
	vector<int> segundo(4,100);
	vector<int> terceiro(segundo.begin(), segundo.end());
	
	for(vector<int>::iterator it = segundo.begin(); it !=segundo.end(); ++it)
	cout << ' ' << *it; 

	return 0;
}
