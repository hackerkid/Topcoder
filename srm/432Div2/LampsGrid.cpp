#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

class LampsGrid
{
	public:
		int r;
		int c;
		int max;
		int Kmax;
		vector <string> temp;
		int a[100];
		int check()
		{	
			
			int count = 0;
			for (int i = 0; i < r; i++) {
				if(a[i] == c) {
					count++;
				}

			}

			return count;

		}
		int flip(int x)
		{
			for (int i = 0; i < r; i++) {
				if(temp[i][x] == '0') {
					a[i]++;
					temp[i][x] = '1';
				}

				else {
					temp[i][x] = '0';
					a[i]--;
				}

			}

			return 0;
		}

		int wow(int i, int k) {
			int t;
			t = check();
			if(t > max) {
				max = t;
			}

			if(i == c or k == Kmax) {
				return 0;
			}

			flip(i);

			t = check();
			if(t > max) {
				max = t;
			}

			wow(i+1, k+1);

			flip(i);

			wow(i+1, k);
			return 0;

		}





		
		int mostLit(vector <string> initial, int K)
		{	
			memset(a, 0, sizeof(a));
			
			Kmax = K;
			r = initial.size();
			c = initial[0].length();
			swap(initial, temp);

			for (int i = 0; i < r; i++) {
				for (int j = 0; j < c; j++) {
					if(temp[i][j] == '1') {
						a[i]++;
					}

				}

			}


			wow(0, 0);

			return max;
		}

};

			




