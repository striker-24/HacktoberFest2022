class Solution {
public:
    int trap(vector<int>& arr) {
        int l = 0 ;
        int r = arr.size()-1 ;
        int ans = 0;
        
        int leftmax = 0;
        int rightmax = 0;
        
        while(l<r){
            if(arr[l]<=arr[r]){
                if(arr[l]>=leftmax){
                    leftmax = arr[l];
                }
                else{
                    ans += leftmax - arr[l];
                }
                l++;
            }
            else{
                if(arr[r]>=rightmax){
                    rightmax = arr[r];
                }
                else{
                    ans += rightmax - arr[r];
                }
                r--;
            }
        }
        return ans;
    }
};
