#include <iostream>
#include <vector>

using namespace std;

class CreatureTraining
{
	public:
		long long  a[110][60][110];
		vector <int> coun;
		vector <int> pow;
		int days;
		int n;

				
		long long wow(int d, int l, int extra)
		{
			if(d == days) {
				return 0;
			}


			if(l == n-1) {

				if((coun[l] + extra) == 0) {
					return 0;
				}

				if(a[d+1][l][extra] != -1) {
					return a[d+1][l][extra] + pow[l];
				}
				
				else {
					a[d+1][l][extra] = wow(d+1, l, extra);
					return a[d+1][l][extra] + pow[l];
				}
			}

			if(coun[l] + extra == 0) {
				if(a[d][l+1][0] != -1) {
					return a[d][l+1][0];
				}

				else {
				
					a[d][l+1][0] = wow(d, l+1, 0);
					return a[d][l+1][0];
				}
			}
			
			long long int aa;
			long long int b;
			long long int c;

			if(a[d][l][extra] != -1) {
				return a[d][l][extra];
			}

			else {
				if(a[d][l+1][0] != -1) {
					aa = a[d][l+1][0];
				}

				else {
					a[d][l+1][0] = wow(d, l+1, 0);
					aa = a[d][l+1][0];
				}

				if(a[d+1][l+1][1] != -1) {
					b = a[d+1][l+1][1] + pow[l];
				}

				else {
					a[d+1][l+1][1] = wow(d+1, l+1, 1);
					b = a[d+1][l+1][1] + pow[l];
				}

				if(a[d+1][l][extra-1] != -1) {
					c = a[d+1][l][extra-1] + pow[l];
				}

				else {
					a[d+1][l][extra-1] = wow(d+1, l, extra - 1);
					c = a[d+1][l][extra-1] + pow[l];

				}

				a[d][l][extra] = max(max(aa, b), c);
				return a[d][l][extra];
			}

		}





		
		long long maximumPower(vector <int> count, vector <int> power, int D)
		{

			n = count.size();
			days = D;
			coun = count;
			pow = power;

			for (int i = 0; i < 110; i++) {
				for (int j = 0; j < 60; j++) {
					for (int k = 0; k < 110; k++) {
						a[i][j][k] = -1;
					}
				}

			}

			return wow(0, 0, 0);

		}


};

		








