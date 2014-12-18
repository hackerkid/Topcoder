
// {{{ Boilerplate Code <--------------------------------------------------
// vim:filetype=cpp:foldmethod=marker:foldmarker={{{,}}}

#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>

#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define REP(I,N)   FOR(I,0,N)
#define ALL(A)     (A).begin(), (A).end()

using namespace std;

// }}}

class CreateGroups
{
public:
	int minChanges(vector <int> groups, int minSize, int maxSize)
	{
		
		long long sum;
		long long count;
		long long n;
		long long under;

		n = groups.size();
		count = 0;
		sum = 0;
		under = 0;

		for (int i = 0; i < groups.size(); i++) {
			sum += groups[i];
			if(groups[i] > maxSize) {
				count += groups[i] - maxSize;
			}
			if(groups[i] < minSize) {
				under += minSize - groups[i];
			}
		}

		if(sum >= minSize * n and sum <= maxSize * n) {
			if(under - count >= 0) {
				return count + under - count;
			}

			else {
				return count;
			}
		}

		else {
			return -1;
		}


	
	}
};


// Edited by VimCoder 0.3.5
// http://github.com/chazmcgarvey/vimcoder

