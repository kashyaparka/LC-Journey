typedef pair<int, int> pi;
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        vector<int> ans;
        if(x<=arr[0]) {
            for(int i=0;i<k;i++)
                ans.push_back(arr[i]);
            return ans;
        }
        else if(x>=arr[arr.size()-1]) {
            int n=arr.size();
            for(int i=n-1;i>n-k-1;i--)
                ans.push_back(arr[i]);
            sort(ans.begin(),ans.end());
            return ans;
        }
        int n=arr.size();
        int index=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
        int low=index,high=index+1;
        priority_queue<pi,vector<pi>,greater<pi>> pq;
        while(low>=0)
        {
            int t1=abs(x-arr[low]);
            pq.push({t1,arr[low]});
            low--;
        }
        while(high<n)
        {
            int t2=abs(x-arr[high]);
            pq.push({t2,arr[high]});
            high++;
        }
        cout<<pq.size();
        while(ans.size()<k)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};