class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //*********BAD APPROACH O(n) space and time O(n) time**********
        // vector<int> vec;
        // for(int i=0;i<m;i++)
        //     vec.push_back(nums1[i]);
        // for(int i=0;i<n;i++)
        //     vec.push_back(nums2[i]);
        // sort(vec.begin(),vec.end());
        // //erase(nums1.begin(),nums1.end());
        // nums1.clear();
        // for(auto i : vec)
        //     nums1.push_back(i);
        //**********Optimised Approach********** O(n) Time
        // int i=m-1,j=n-1,tar=m+n-1;
        // while(j>=0)
        //     nums1[tar--] = i>=0 && nums1[i]>nums2[j]?nums1[i--] : nums2[j--];
        //**********Other Approach**********  O(nlogn) Time 
        int i=nums1.size()-1,j=nums2.size()-1;
        for(;j>=0;i--,j--){
            nums1[i] = nums2[j];
        }
        sort(nums1.begin(),nums1.end());
        //return nums1;
    }
};