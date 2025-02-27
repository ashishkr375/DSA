class Solution {
public:
    bool testit(unordered_map<char, int>& s, unordered_map<char, int>& t) {
        // Check if the current window (s) contains all characters from t with the correct frequencies
        for (auto a : t) {
            if (s[a.first] < a.second) {
                return false;
            }
        }
        return true;
    }

    string minWindow(string s, string t) {
        long l = 0, r = 0;  // Initialize both left and right pointers
        unordered_map<char, int> testString;  // To hold frequencies of characters in t
        unordered_map<char, int> currentString;  // To hold frequencies of characters in current window
        int minLength = INT_MAX;  // Variable to track the minimum length of the valid window
        int minLeft = 0;  // To store the left boundary of the minimum window

        // Populate the frequency map for string t
        for (auto a : t) {
            testString[a]++;
        }

        // The window is initially empty
        while (r < s.size()) {
            // Expand the window by adding the character at `r`
            currentString[s[r]]++;

            // If the current window contains all characters of t, try shrinking the window from the left
            while (testit(currentString, testString)) {
                // Update the answer if the current window is smaller
                if (r - l + 1 < minLength) {
                    minLength = r - l + 1;
                    minLeft = l;
                }
                // Shrink the window from the left
                currentString[s[l]]--;
                l++;
            }
            r++;  // Expand the window by moving `r` to the right
        }

        // If a valid window was found, return it; otherwise return an empty string
        if (minLength == INT_MAX) {
            return "";
        }
        return s.substr(minLeft, minLength);  // Return the smallest valid window found
    }
};
