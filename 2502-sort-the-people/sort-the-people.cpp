class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

        int n = names.size();

        vector<pair<int,string>> vec;
        for(int i = 0; i < n; i++) {
            vec.push_back({heights[i], names[i]});
        }
        sort(vec.begin(), vec.end(), greater<pair<int,string>>());

        vector<string> ans;
        for(auto p : vec) {
            ans.push_back(p.second);
        }

        return ans;
    }
};