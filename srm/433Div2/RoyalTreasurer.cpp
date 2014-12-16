#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class RoyalTreasurer
{
	public:
		int minimalArgument(vector <int> A, vector <int> B)
		{

			sort(A.begin(), A.end());
			sort(B.begin(), B.end());
			reverse(B.begin(), B.end());
			int ans= 0;
			for(int i = 0; i < B.size(); i++) {
				ans += A[i] * B[i];
			}

			return ans;
		}


};


