int maxArea(vector<int>& height) {
    int maxAr = 0 ,left = 0, right = height.size()-1;
    while(left<right){
        maxAr = max(maxAr, min(height[left],height[right]) * (right-left));
        if(height[left]<height[right]) left++;
        else right--;
    }
    return maxAr;
}
