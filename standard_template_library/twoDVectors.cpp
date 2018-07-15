#include <iostream>
#include <vector>
using namespace std;

int main(){
	int k = 1;
	vector< vector<int> > grid(4, vector<int>(3));	// create a vector of vectors of size 4x3
		// ^   space   ^ are important (for some compilers)
	for(int i = 0;i < grid.size();i++){
		for(int j = 0;j < grid[i].size();j++){
			grid[i][j] = 12*k;
			++k;
		}
	}
	
	for(int i = 0;i < grid.size();i++){
		for(int j = 0;j < grid[i].size();j++){
				cout << grid[i][j] << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}