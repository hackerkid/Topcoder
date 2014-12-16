#include <vector>
#include <iostream>

using namespace std;

class MountainRanges
{
	public:
	
	int countPeaks(vector <int> a)
	{
		long long n;
		long count;
		count = 0;
		n = a.size();
		for (int i = 0; i < n; i++) {
			if(((i - 1) < 0 ||a[i] > a[i-1]) and (i+1 >=n || a[i] > a[i+1])) {
				count++;
			}

		}


		return count;
	}


};

