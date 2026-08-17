class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool incresing = true ;
        bool decreaseing = true ;
      
      int n = nums.size();
        for (int i=0; i<=n-2; i++ ){
            if (nums[i]<nums[i+1]){
                decreaseing = false;
            }
        }
         for (int i=0; i<=n-2; i++ ){
            if (nums[i]>nums[i+1]){
                incresing = false;
            }
         }
         if (incresing == true || decreaseing == true){
            return true;
         }
         return false ;
    }
};