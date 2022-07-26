class Solution {
public:
vector<vector<int>> paths;
vector<int> path; 

void helper(vector<int>& candidates, int target, int idx){

    if(target == 0){
        paths.push_back(path);
        return;
    }
    
    for(int i=idx; i<candidates.size(); ++i){
        if(i > idx and candidates[i] == candidates[i-1]) 
            continue;  
        if(candidates[i] > target)
            break; 
        path.push_back(candidates[i]);
        helper(candidates, target - candidates[i], i+1);
        path.pop_back();            
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end()); 
    helper(candidates, target, 0);
    return paths;
}
};