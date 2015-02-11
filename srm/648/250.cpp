#include <math.h>
#include <iostream>

using namespace std;

class KitayutaMart2
{
	public:
		int numBought(int K, int T)
		{
		int t;
		int ans;

		t = T/K;
		t *= 2;

		ans = log2(t);

		return ans;
		}


};



		

