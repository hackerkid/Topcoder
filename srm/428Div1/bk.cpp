#include <iostream>
#include <algorithm>
using namespace std;
long long fact(int n)
{
	int ans;
	ans  = 1;

	while(n) {
		ans = ans * n;
		n--;
	}

	return ans;

}

int main()
{

	string x;
	int n;
	long count;
	bool ok;
	count = 0;

	cin >> x;
	n = x.length();
	for (int i = 0; i < fact(n) ; i++) {
		ok = 1;
		for (int j = 0; j < n-1 ; j++) {
			if(x[j] == x[j+1]) {
				ok = 0;
				break;
			}
		}

		cout <<"="<< x << endl;
		if(ok) {
			count++;
			cout << x << endl;
		}

		next_permutation(x.begin(), x.begin()+n);

	}

	cout << count << endl;

}
