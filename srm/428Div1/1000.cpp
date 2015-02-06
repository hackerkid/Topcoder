#include <iostream>

using namespace std;
class TheDictionary
{
	public:

long long fact(int x)
{
	long long ans = 1;

	while(x) {
		ans *= x;
		x--;

	}

	return ans;
}

void calculate(int c[201][201])
{

	c[0][0] = 1;

	for (int i = 1; i <= 200; i++) {

		c[i][0] = 1;
		for(int j = 1; j <= i; j++) {
		
			if(i == 0) {
				c[i][j] = 1;
				continue;
			}
			
			if(i == j) {
				c[i][j] = 1;
				continue;
			}
			c[i][j] = min(c[i-1][j] + c[i-1][j-1], 1000000001);
		}

	}


}
			




string find(int n, int m, int k)
{
	int c[201][201];


	int p;
	int t;

	calculate(c);




	char a[1000];
	string ans;

	t = n + m;

	p = c[n+m][ n];
	if(p < k) {
		return ans;
	}

	for(int i = 0; i < t; i++) {
		if(n == 0) {
			
			a[i] = 'z';
			ans.push_back(a[i]);
			m--;
			continue;
		}

		if(m == 0) {
			a[i] = 'a';
			ans.push_back(a[i]);
			n--;
			continue;
		}
		p = c[n+m-1][ n-1];
		if(k <= p) {
			a[i] = 'a';
			ans.push_back(a[i]);
			n--;
		}

		else {
			a[i] = 'z';
			ans.push_back(a[i]);
			k = k - p;
			m--;
		}


	}
	
	return ans;
}


};
