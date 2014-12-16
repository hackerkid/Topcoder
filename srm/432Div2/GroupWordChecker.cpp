#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
class GroupedWordChecker
{
	public:
		int howMany(vector <string> words) 
		{
			int a[30];
			int t;
			int count = 0;
			int ok;
			for (int i = 0; i < words.size(); i++) {
				memset(a, 0, sizeof(a));
				ok = 1;
				for(int j = 0; j < words[i].length(); j++) {
					t = words[i][j] - 'a';
					if(a[t] != 0 and words[i][j] != words[i][j-1]) {
						ok = 0;
						break;
					}

					else {
						a[t]++;
					}

				}

				if(ok == 1) {
					count++;
				}


			}

			return count;


		}


};




