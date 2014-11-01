#include <iostream>
#include <vector>
#include <string.h>
#define s sequence
using namespace std;

	
    int main()
    {
        
        
        int n;
        int s[100];
        int a[100];
        int stat[100];
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        memset(stat, -1,  sizeof(stat));
        memset(a, 2, sizeof(a));
        memset(a,  -1, sizeof(a));

        for (int i = 0; i < n; i++) {
            cout << a[i]<<" ";
            cout << stat[i]<<" ";
            cout << s[i]<<" ";
            cout << endl;
        }

        for (int i = 1; i < n; i++) {
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

        cout << a[n-1];

    }



                    
                            
