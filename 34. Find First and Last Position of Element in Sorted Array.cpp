class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> ans;
        int findex = fp(nums,target);
        int lindex = lp(nums,target);
        ans.push_back(findex);
        ans.push_back(lindex);

        return ans;
    }


    int fp(vector<int>& nums, int target){

    int mid;
    int l=0, r=nums.size()-1;
    int pos = -1;

        while(l<=r){
            mid=(l+r)/2;

            if(nums[mid] == target){
                pos = mid;
                r = mid-1;
              
                
            }

            else if(nums[mid] < target)    l = mid+1;
            else  r = mid-1;
        }
        return pos;
    }



    int lp(vector<int>& nums, int target){

    int mid;
    int l=0, r=nums.size()-1;
    int pos = -1;

        while(l<=r){
            mid=(l+r)/2;

            if(nums[mid] == target){
                pos = mid;
                l = mid+1;
            }

            else if(nums[mid] < target)    l = mid+1;
            else  r = mid-1;
        }
        return pos;
    }

           
    
};
