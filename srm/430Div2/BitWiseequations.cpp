#include <iostream>
#include <string.h>

using namespace std;
class BitwiseEquations
{

	public:
	
	long long val(bool x[100], int n)
	{
		long long value;
		long long k = 1;
		value = 0;

		for (int i = 0; i < n; i++) {
			value += x[i] * k;
			k = k * 2;
		}

		return value;
	}

	long long kthPlusOrSolution(int x, int k)
	{
		
		bool a[100];
		bool b[100];
		bool c[100];
		int i;
		int n;
		int j;

		long long ans;

		memset(a,  0, sizeof(a));
		memset(b,  0, sizeof(b));
		memset(c,  0, sizeof(c));
		
		



		for (i = 0; x; i++, x = x/2) {
			a[i] = x % 2;
		}



		for (i = 0; k; i++, k = k/2) {
			b[i] = k % 2;
		}


		n = i;
		for ( i = 0,  j = 0; j < n; i++) {
			if(a[i] == 0) {
				c[i] = b[j];
				j++;
			}

		}


		ans = val(c, i);
		return ans;




		
	}

	
};
