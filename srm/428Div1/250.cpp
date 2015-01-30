#include <iostream>
#include <limits.h>
using namespace std;

class ThePalindrome
{
	public:

int find(string x)
{
	int n;
	int j;
	int k;
	int m;
	int mm;
	cin >> x;

	n = x.length();
	if(n == 1) {
		return 1;
	}

	if(n == 2 and x[0] == x[1]) {
		return 2;
	}


	for (int i = n/2; i < n; i++) {
		for ( j = i+1, k = i -1; k >= 0 and j < n and x[j] == x[k]; k--, j++);
		if(j == n) {

			m = (((i+1) * 2) - 1);
		}

		else {
			m = INT_MAX;
		}

		for ( j = i, k = i-1; k >= 0 and j < n and x[j]== x[k]; k--, j++);

	
		if(j == n) {
			mm = ( 2 * (i) );
		}
		
		else {
			mm = INT_MAX;
		}
		
		if(m != INT_MAX or mm != INT_MAX) {	
			return min(m, mm);
		}

	}

	return (2 * n - ((n+1) % 2));

}

};






