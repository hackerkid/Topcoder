#include <iostream>
#include <vector>
#include <string.h>
#define s maxdonations 
using namespace std;

class BadNeighbors
{
    public:

    int maxDonations(vector <int> s)
    {
        int n;
        int aa;
        int bb;

        int bigb;
        n = s.size();
        
        int a[50];
        memset(a, 0, sizeof(a));

        for (int i = n-1; i >= 1; i--) {

            aa = s[i] + a[i+2];
            bb = a[i+1];

            a[i] = max(aa, bb);
        }

        bigb = a[1];
		
		memset(a, 0, sizeof(a));
        for (int i = n-2; i >= 0; i--) {

            aa = s[i] + a[i+2];
            bb = a[i+1];

            a[i] = max(aa, bb);
        }



        return max(a[0], bigb);

    }


};

