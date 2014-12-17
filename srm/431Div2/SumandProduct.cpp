
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

class SumAndProduct
{
public:
	int smallestSet(int S, int P)
	{
		if(S == P) {
			return 1;
		}

		for (int i = 1; pow(S/i,i) >= 1; i++) {
			double x = (double)S / i;
			cout << pow(x, i)<<endl;
			if(pow(x,i) >= P) {
				return i;
			}

		}

		return -1;

	}

};

// Edited by VimCoder 0.3.5
// http://github.com/chazmcgarvey/vimcoder

