#include <iostream> 
#include <algorithm> 
using namespace std; 
 
char ar[10][10]; 
int row[10], col[10], visited[10][10]; 
int r, c; 
 
int main() 
{ 
	for(int i=0; i<10; i++) { 
		row[i] = 0; 
		col[i] = 0; 
	} 
	cin >> r >> c; 
	for(int i=0; i<r; i++) {  
		for(int j=0; j<c; j++) { 
			visited[i][j] = 0; 
			cin >> ar[i][j]; 
			if(ar[i][j] == 'S') { 
				row[i] = 1; 
				col[j] = 1; 
			} 
		} 
	} 
	int res = 0; 
	for(int i=0; i<r; i++) { 
		for(int j=0; j<c; j++) { 
			if(row[i] == 0) { 
				if(ar[i][j] == '.' && visited[i][j] == 0) { 
					res++; 
					visited[i][j] = 1; 
				} 
			} 
		} 
	} 
	for(int j=0; j<c; j++) { 
		for(int i=0; i<r; i++) { 
			if(col[j] == 0) { 
				if(ar[i][j] == '.' && visited[i][j] == 0) { 
					res++; 
					visited[i][j] = 1; 
				} 
			} 
		} 
	} 
	cout << res << endl; 
	return 0; 
} 