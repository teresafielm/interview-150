#include <iostream>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int solution[n+m];
        int i, aux;

        for(i=m;i<m+n;i++)
        {
            nums1[i]=nums2[i-m];
        }
        i=0;
        do{
            if(n+m>=2)
            {
                if(nums1[i]<=nums1[i+1])
                {
                    i=i+1;
                }
                else {
                    aux = nums1[i];
                    nums1[i] = nums1[i+1];
                    nums1[i+1] = aux;
                    i=0;
                }
            }
        } while(i<=n+m-2);
    }
};