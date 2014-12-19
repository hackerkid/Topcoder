

#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

struct epic 
{
	int a;
	int b;
	int dist;
};


	bool blah(epic x, epic y)
	{
		if(x.dist < y.dist) {
			return 1;
		}

		else {
			return 0;
		}

	}
class TwinTowns
{
public:


	vector <int> optimalTwinTowns(vector <int> x, vector <int> y, int maxPartners, int minDistance)
	{
		vector <epic> xplay;
		vector <int> count(x.size(), 0);
		int d;
		epic temp;


		for (int i = 0; i < x.size()-1; i++) {
			for (int j = i +1; j < x.size(); j++) {
				d = abs(x[i] - x[j]) + abs(y[i] - y[j]);
				if(d >= minDistance) {
					temp.a = i;
					temp.b = j;
					temp.dist = d;
					xplay.push_back(temp);
				}

			}


		}

		sort(xplay.begin(), xplay.end(), blah);
		long long sum;
		long long sofar;
		sum = 0;
		sofar = 0;

		for (int i = 0; i < xplay.size(); i++) {
			if(count[xplay[i].a] < maxPartners and count[xplay[i].b] < maxPartners) {
				sum += xplay[i].dist;
				count[xplay[i].a]++;
				count[xplay[i].b]++;
				sofar++;
			}

		}

		vector <int> ans;

		ans.push_back(sofar);
		ans.push_back(sum);

		return ans;



	}
};

