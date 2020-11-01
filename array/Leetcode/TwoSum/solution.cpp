class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
 
        map<int, int> mapper;
        for( int  i = 0 ; i < nums.size(); i++)
            {
                mapper.insert({nums[i],i});
              }

            for(int i = 0 ; i < nums.size() ; i++)
                {
                    int complement = target - nums[i];
                    auto itr = mapper.find(complement);

                        if(itr != mapper.end() && (itr->second) != i ) 
                            {
                                solution.push_back(i);
                                solution.push_back(itr->second);
                                return solution;
                            }
                        else{
                            continue;
                        }
                    }
 return solution;                       //to avoid W3Error on Leetcode.
    }
};
