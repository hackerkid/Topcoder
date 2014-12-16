#include <iostream>
#include <vector>
#include <string.h>
#define s sequence
using namespace std;

class ZigZag
{
	
    public:
    int longestZigZag(vector <int> s)
    {

        int n;
        n = s.size();
        int a[100];
        int stat[100];

        for (int i = 0; i < n; i++) {
            a[i] = 1;
            stat[i] = -1;
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = i-1; j >= 0; j--) {
                if(stat[j] == -1) {
                    if(a[j] + 1 > a[i]) {
                        if(s[i] > s[j]) {
                            stat[i] = 1;
                            stat[j] = 0;
                            a[i] = a[j]+1;
                        }

                        else {
                            if(s[i] < s[j]) {
                                stat[i] = 0;
                                stat[j] = 1;
                                a[i] = a[j]+1;
                            }

                        }


                    }

                }

                if(stat[j] == 0 and s[i] > s[j] and a[i] < a[j] + 1) {
                    stat[i] = 1;
                    a[i] = a[j] + 1;
                }

                if(stat[j] == 1 and s[i] < s[j] and a[i] < a[j] + 1) {
                    stat[i] = 0;
                    a[i] = a[j] + 1;
                }

            }

        }

        return a[n-1];

    }

};


                    
                            
