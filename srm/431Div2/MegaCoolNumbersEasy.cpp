#include <iostream>
#include <vector>
using namespace std;

class MegaCoolNumbersEasy
{
	public:
	int count(int N) 
	{

		vector <int> a;
		vector <int> b;
		int ok;
		int count = 0;
		int x;
		int t;

		for (int i = 1; i <= N; i++) {
			x = i;

			swap(a, b);
			
			while(x) {
				t = x % 10;
				x = x /10;
				a.push_back(t);
			}
			ok = 1;
			for (int j = 0; j < a.size() - 2; j++) {
				if(a[j] - a[j+1] != a[j+1] - a[j+2]) {
					ok = 0;
					break;
				}
			}

			if(ok == 1) {
				count++;
			}

		}



		return count;
	}


};


			




		
	
			
