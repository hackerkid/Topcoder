#include <iostream>
#include <vector>

using namespace std;

class Fragile2
{
	public:
		vector <string> graphy;
		int a[401];

		int mark(int i, int count, int p, int r)
		{
			int n;
			if(i == p or i == r)
				return 0;

			n = graphy.size();

			for (int j = 0; j < n; j++) {
				if(j == p or j == r)
					continue;

				if(graphy[i][j] == 'Y' and a[j] == -1) {
					a[j] = count;
					mark(j, count, p, r);
				}

			}

			return 0;

		}
					
		
		int countCp(int p, int r)
		{

			int count = 0;

			int n;

			n = graphy.size();

			for (int i = 0; i < n; i++) {
				if(i == p or i == r)
					continue;
				if(a[i] == -1) {
					count++;
					a[i] = count;
					mark(i, count, p, r);
				}

			}

			return count;
		}

		int countPairs(vector <string> graph)
		{

			int count = 0;
			int ans = 0;
			int t;
			int n;

			swap(graphy, graph);
			n = graphy.size();

			for(int i = 0; i < n; i++) {
				a[i] = -1;
			}

			
			count = countCp(-1, -1);
			
			
			for (int i = 0; i < n; i++) {
				for (int j = i+1; j < n; j++) {
					for (int i = 0; i < n; i++) {
						a[i] = -1;
					}

					t = countCp(i, j);
					if(t > count) {
						ans++;
					}

				}

			}

			

			
			return ans;
		}


};




