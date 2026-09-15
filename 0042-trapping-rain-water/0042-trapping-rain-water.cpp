class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        int leftMax = height[0];
        int rightMax = height[n-1];

        int i=0, j=n-1;
        int rainCollect = 0;

        while(i<=j){
            if(height[i] <= height[j]){
                if(height[i] < leftMax){
                    rainCollect += leftMax - height[i];
                }else{
                    leftMax = height[i];
                }
                i++;
            }else{
                if(height[j] < rightMax){
                    rainCollect += rightMax - height[j];
                }else{
                    rightMax = height[j];
                }
                j--;
            }
        }

        return rainCollect;
    }
};