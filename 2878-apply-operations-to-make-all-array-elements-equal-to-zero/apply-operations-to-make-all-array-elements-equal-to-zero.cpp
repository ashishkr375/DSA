class Solution {
public:
    bool checkArray(vector<int>& A, int k) {
        int cur = 0, n = A.size();
        for (int i = 0; i < n; ++i) {
            // If the cumulative operations (cur) exceed the current value,
            // it means we've subtracted too much.
            if (cur > A[i])
                return false;
            // The remaining value at A[i] tells us how many new operations
            // (i.e., subtractions) we need to start at index i.
            A[i] -= cur;
            cur += A[i];
            // Once we've passed a window of size k, remove the effect of the operation
            // that started k positions ago.
            if (i >= k - 1)
                cur -= A[i - k + 1];
        }
        // After processing all indices, all operations should have been canceled out.
        return cur == 0;
    }
};
