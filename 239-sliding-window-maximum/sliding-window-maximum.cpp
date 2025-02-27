#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        deque<int> dq;  // deque to store indices of elements
        
        for (int i = 0; i < nums.size(); i++) {
            // Remove elements that are out of the current window
            if (!dq.empty() && dq.front() < i - k + 1) {
                dq.pop_front();
            }
            
            // Remove elements from the deque that are less than the current element
            // since they will never be the maximum in this window
            while (!dq.empty() && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }
            
            // Add current element's index to the deque
            dq.push_back(i);
            
            // If we have processed at least 'k' elements, add the maximum to the result
            if (i >= k - 1) {
                result.push_back(nums[dq.front()]);
            }
        }
        
        return result;
    }
};
