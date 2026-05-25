class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
         int n;
        int pairs=0;
        for(int i=0;i<nums.size(); i++){

             for(int j=i+1;j<nums.size();j++){
                 if(nums[i]==nums[j]){
                       nums.erase(nums.begin()+j);
                       nums.erase(nums.begin()+i);
                     pairs +=1;
                     i--;
                     break;
                 }
         }
        }
        return{pairs,(int)nums.size()};
    }
};