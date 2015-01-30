#include <iostream>
#include <string.h>
#include <map>

using namespace std;
class TheLuckyString
{

	public:

int epic(int index, int n, int rm[20], int j, int max)
{
	int count;
	count = 0;

	if(index == max)
		return 1;
	
	for (int i = 0; i < n; i++) {
		if(i != j and rm[i]) {
			rm[i]--;
			count += epic(index+1, n, rm, i, max);
			rm[i]++;
		}

	}

	return count;


}


int count(string x)
{

	int a[20];
	int rm[20];
	memset(a, 0, sizeof(a));
	memset(rm, 0, sizeof(rm));
	int n;
	int t;

	map<char, int> bingo;

	cin >> x;

	n = x.length();
	for (int i = 0; i < n; i++) {
		if(bingo.count(x[i]) == 0) {
			t = bingo.size();
			bingo[x[i]] = t;
			rm[t] = 1;
		}

		else {
			rm[bingo[x[i]]]++;
		}

	}


	return epic(0, bingo.size(), rm, -1, n); 


}

};



	



