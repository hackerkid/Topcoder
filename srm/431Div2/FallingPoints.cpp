#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class FallingPoints
{
	public:
		vector <double> getHeights(vector <int> X, int R)
		{
			vector <double> Y;
			Y.push_back(0);
			
			double temp1;
			double temp2;
			double srt;
			double ans;

			for (int i = 1; i < X.size(); i++) {
				srt = sqrt(R*R - ((X[i-1] - X[i]) * (X[i-1] -X[i]))); 
				temp1 = Y[i-1] - srt;
				temp2 = Y[i-1] + srt;

				ans = max(max(temp1, temp2), 0.0);
				
				Y.push_back(ans);


				
			}

			
			return Y;


		}

};




				




