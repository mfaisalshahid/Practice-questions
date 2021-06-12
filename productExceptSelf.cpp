vector<int> productExceptSelf(vector<int>& nums) {
//// this is not the correct solution, it only passes 18/20 tests.    
vector<int> output;
for(int i = 0 ; i < nums.size(); i++){
    int finals = 1;
    for(int j = 0 ; j < nums.size() ; j++){
        if (i!=j) finals = finals*nums[j];
    }
    output.push_back(finals);
}
 return output;
}
