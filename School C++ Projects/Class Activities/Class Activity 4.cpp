// C++ Program to Add Two Matrices

#include <iostream>
using namespace std;

	int r;
	int c;
	int mat[r][c];
	int mat2[r][c];
	int add[r][c];
	
int main(){
	cout << "KIndly enter the number of rows: ";
	cin >> r;
	cout << "Kindly enter the number of columns: ";
	cin >> c;
	
	cout << "Enter elements of matrix 1: " << endl;
	for (int j = 0; j < r; j++){
		for (int m = 0; m < c; m++){
			cin >> mat[j][m];			
		}
	}
	
	cout << "Enter elements of matrix 2: " << endl;
	for (int j = 0; j < r; j++){
		for (int m = 0; m < c; m++){
			cin >> mat2[j][m];			
		}
	}
	// To add them together...
	for (int j = 0; j < r; j++){
		for (int m = 0; m < c; m++){
			add[j][m] = mat[j][m] + mat2[j][m];			
		}
	}
	
	cout << "Therefore, the sum of the two matrices: ";
	cout << add[j][m] << " " endl;

	
	return 0;
}