class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i, j=0, k=0;
        int length = nums.size();

        if(length>0) {
            bool removal[length];
            int nums_aux[length];

            // Identify which values of array should be removed
            for(i=0;i<=length-1;i++) {
                nums_aux[i]=nums[i]; // Create a copy of nums
                if(nums[i]==val) {
                    k=k+1;
                    removal[i]=true;
                } else {
                    removal[i]=false;
                }
            }

            //Get k value
            k= length - k; 
        
            // Create solution array
            for(i=0;i<=length-1;i++) {
                if(removal[i]==false) {
                    nums[i-j]=nums_aux[i];
                } else {
                    j+=1;
                }
            }
        return k;
        } else {
            return 0;
        }
    }    
};