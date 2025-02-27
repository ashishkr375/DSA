# Comprehensive DSA Pattern Map with LeetCode Questions

## 1. Array Patterns

### 1.1 Two Pointer Technique
- **Description**: Using two pointers to solve array problems efficiently, often in O(n) time.
- **LeetCode Problems**:
  - [1. Two Sum](https://leetcode.com/problems/two-sum/) (Easy)
  - [167. Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) (Medium)
  - [15. 3Sum](https://leetcode.com/problems/3sum/) (Medium)
  - [16. 3Sum Closest](https://leetcode.com/problems/3sum-closest/) (Medium)
  - [18. 4Sum](https://leetcode.com/problems/4sum/) (Medium)
  - [11. Container With Most Water](https://leetcode.com/problems/container-with-most-water/) (Medium)
  - [42. Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/) (Hard)
  - [977. Squares of a Sorted Array](https://leetcode.com/problems/squares-of-a-sorted-array/) (Easy)
  - [283. Move Zeroes](https://leetcode.com/problems/move-zeroes/) (Easy)
  - [844. Backspace String Compare](https://leetcode.com/problems/backspace-string-compare/) (Easy)

### 1.2 Sliding Window
- **Description**: Using a window that slides through an array to find subarrays that satisfy certain conditions.
- **Fixed Size Window Problems**:
  - [643. Maximum Average Subarray I](https://leetcode.com/problems/maximum-average-subarray-i/) (Easy)
  - [1343. Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold](https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/) (Medium)
  - [1423. Maximum Points You Can Obtain from Cards](https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/) (Medium)
  - [567. Permutation in String](https://leetcode.com/problems/permutation-in-string/) (Medium)
  - [438. Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/) (Medium)
  
- **Variable Size Window Problems**:
  - [3. Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) (Medium)
  - [159. Longest Substring with At Most Two Distinct Characters](https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/) (Medium)
  - [340. Longest Substring with At Most K Distinct Characters](https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters/) (Medium)
  - [424. Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/) (Medium)
  - [76. Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/) (Hard)
  - [239. Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/) (Hard)
  - [992. Subarrays with K Different Integers](https://leetcode.com/problems/subarrays-with-k-different-integers/) (Hard)

### 1.3 Kadane's Algorithm (Maximum Subarray)
- **Description**: Technique to find the maximum sum contiguous subarray.
- **LeetCode Problems**:
  - [53. Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) (Medium)
  - [918. Maximum Sum Circular Subarray](https://leetcode.com/problems/maximum-sum-circular-subarray/) (Medium)
  - [1191. K-Concatenation Maximum Sum](https://leetcode.com/problems/k-concatenation-maximum-sum/) (Medium)
  - [152. Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/) (Medium)
  - [1186. Maximum Subarray Sum with One Deletion](https://leetcode.com/problems/maximum-subarray-sum-with-one-deletion/) (Medium)

### 1.4 Dutch National Flag Algorithm
- **Description**: Three-way partitioning technique for sorting elements.
- **LeetCode Problems**:
  - [75. Sort Colors](https://leetcode.com/problems/sort-colors/) (Medium)
  - [905. Sort Array By Parity](https://leetcode.com/problems/sort-array-by-parity/) (Easy)
  - [283. Move Zeroes](https://leetcode.com/problems/move-zeroes/) (Easy)

### 1.5 Prefix Sum
- **Description**: Precompute cumulative sums to enable O(1) range sum queries.
- **LeetCode Problems**:
  - [303. Range Sum Query - Immutable](https://leetcode.com/problems/range-sum-query-immutable/) (Easy)
  - [560. Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/) (Medium)
  - [1248. Count Number of Nice Subarrays](https://leetcode.com/problems/count-number-of-nice-subarrays/) (Medium)
  - [974. Subarray Sums Divisible by K](https://leetcode.com/problems/subarray-sums-divisible-by-k/) (Medium)
  - [523. Continuous Subarray Sum](https://leetcode.com/problems/continuous-subarray-sum/) (Medium)
  - [304. Range Sum Query 2D - Immutable](https://leetcode.com/problems/range-sum-query-2d-immutable/) (Medium)
  - [1074. Number of Submatrices That Sum to Target](https://leetcode.com/problems/number-of-submatrices-that-sum-to-target/) (Hard)

### 1.6 Matrix Traversal/Manipulation
- **Description**: Techniques for traversing and manipulating 2D arrays.
- **LeetCode Problems**:
  - [73. Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/) (Medium)
  - [54. Spiral Matrix](https://leetcode.com/problems/spiral-matrix/) (Medium)
  - [48. Rotate Image](https://leetcode.com/problems/rotate-image/) (Medium)
  - [867. Transpose Matrix](https://leetcode.com/problems/transpose-matrix/) (Easy)
  - [1329. Sort the Matrix Diagonally](https://leetcode.com/problems/sort-the-matrix-diagonally/) (Medium)
  - [36. Valid Sudoku](https://leetcode.com/problems/valid-sudoku/) (Medium)
  - [240. Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/) (Medium)

## 2. String Patterns

### 2.1 String Matching Algorithms
- **Description**: Algorithms to find patterns within strings.
- **LeetCode Problems**:
  - [28. Find the Index of the First Occurrence in a String](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/) (Easy)
  - [214. Shortest Palindrome](https://leetcode.com/problems/shortest-palindrome/) (Hard)
  - [686. Repeated String Match](https://leetcode.com/problems/repeated-string-match/) (Medium)
  - [1392. Longest Happy Prefix](https://leetcode.com/problems/longest-happy-prefix/) (Hard) - KMP Algorithm

### 2.2 Anagrams and Palindromes
- **Description**: Problems involving character rearrangement and symmetry.
- **LeetCode Problems**:
  - [242. Valid Anagram](https://leetcode.com/problems/valid-anagram/) (Easy)
  - [49. Group Anagrams](https://leetcode.com/problems/group-anagrams/) (Medium)
  - [438. Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/) (Medium)
  - [125. Valid Palindrome](https://leetcode.com/problems/valid-palindrome/) (Easy)
  - [5. Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/) (Medium)
  - [647. Palindromic Substrings](https://leetcode.com/problems/palindromic-substrings/) (Medium)
  - [266. Palindrome Permutation](https://leetcode.com/problems/palindrome-permutation/) (Easy)
  - [336. Palindrome Pairs](https://leetcode.com/problems/palindrome-pairs/) (Hard)

### 2.3 String Compression and Manipulation
- **Description**: Techniques for transforming and compressing strings.
- **LeetCode Problems**:
  - [443. String Compression](https://leetcode.com/problems/string-compression/) (Medium)
  - [271. Encode and Decode Strings](https://leetcode.com/problems/encode-and-decode-strings/) (Medium)
  - [8. String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/) (Medium)
  - [468. Validate IP Address](https://leetcode.com/problems/validate-ip-address/) (Medium)
  - [43. Multiply Strings](https://leetcode.com/problems/multiply-strings/) (Medium)

## 3. Linked List Patterns

### 3.1 Fast and Slow Pointers (Floyd's Cycle-Finding)
- **Description**: Using two pointers moving at different speeds to detect cycles.
- **LeetCode Problems**:
  - [141. Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/) (Easy)
  - [142. Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/) (Medium)
  - [876. Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/) (Easy)
  - [202. Happy Number](https://leetcode.com/problems/happy-number/) (Easy)
  - [287. Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/) (Medium)

### 3.2 Linked List Reversal
- **Description**: Techniques for reversing all or parts of a linked list.
- **LeetCode Problems**:
  - [206. Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) (Easy)
  - [92. Reverse Linked List II](https://leetcode.com/problems/reverse-linked-list-ii/) (Medium)
  - [25. Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/) (Hard)
  - [234. Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/) (Easy)

### 3.3 Linked List Merge and Partition
- **Description**: Techniques for merging, partitioning, and rearranging linked lists.
- **LeetCode Problems**:
  - [21. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) (Easy)
  - [23. Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/) (Hard)
  - [148. Sort List](https://leetcode.com/problems/sort-list/) (Medium)
  - [86. Partition List](https://leetcode.com/problems/partition-list/) (Medium)
  - [328. Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/) (Medium)

### 3.4 Deep Copy of Linked Lists
- **Description**: Creating a deep copy of a linked list with special pointers.
- **LeetCode Problems**:
  - [138. Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/) (Medium)
  - [1490. Clone N-ary Tree](https://leetcode.com/problems/clone-n-ary-tree/) (Medium)

## 4. Stack Patterns

### 4.1 Monotonic Stack
- **Description**: Stack maintaining increasing or decreasing order to solve "next greater/smaller" problems.
- **LeetCode Problems**:
  - [739. Daily Temperatures](https://leetcode.com/problems/daily-temperatures/) (Medium)
  - [496. Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/) (Easy)
  - [503. Next Greater Element II](https://leetcode.com/problems/next-greater-element-ii/) (Medium)
  - [84. Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/) (Hard)
  - [85. Maximal Rectangle](https://leetcode.com/problems/maximal-rectangle/) (Hard)
  - [42. Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/) (Hard)
  - [901. Online Stock Span](https://leetcode.com/problems/online-stock-span/) (Medium)
  - [456. 132 Pattern](https://leetcode.com/problems/132-pattern/) (Medium)

### 4.2 Balanced Parentheses
- **Description**: Using stacks to check for balanced parentheses and brackets.
- **LeetCode Problems**:
  - [20. Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) (Easy)
  - [1249. Minimum Remove to Make Valid Parentheses](https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/) (Medium)
  - [32. Longest Valid Parentheses](https://leetcode.com/problems/longest-valid-parentheses/) (Hard)
  - [678. Valid Parenthesis String](https://leetcode.com/problems/valid-parenthesis-string/) (Medium)
  - [856. Score of Parentheses](https://leetcode.com/problems/score-of-parentheses/) (Medium)

### 4.3 Expression Evaluation
- **Description**: Evaluating arithmetic and logical expressions using stacks.
- **LeetCode Problems**:
  - [150. Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/) (Medium)
  - [224. Basic Calculator](https://leetcode.com/problems/basic-calculator/) (Hard)
  - [227. Basic Calculator II](https://leetcode.com/problems/basic-calculator-ii/) (Medium)
  - [772. Basic Calculator III](https://leetcode.com/problems/basic-calculator-iii/) (Hard)
  - [770. Basic Calculator IV](https://leetcode.com/problems/basic-calculator-iv/) (Hard)

## 5. Queue/Deque Patterns

### 5.1 BFS Level Order Traversal
- **Description**: Using queues for level-by-level traversal of trees and graphs.
- **LeetCode Problems**:
  - [102. Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/) (Medium)
  - [103. Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/) (Medium)
  - [107. Binary Tree Level Order Traversal II](https://leetcode.com/problems/binary-tree-level-order-traversal-ii/) (Medium)
  - [199. Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/) (Medium)
  - [429. N-ary Tree Level Order Traversal](https://leetcode.com/problems/n-ary-tree-level-order-traversal/) (Medium)

### 5.2 Sliding Window Maximum
- **Description**: Using deque to find maximum in sliding windows.
- **LeetCode Problems**:
  - [239. Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/) (Hard)
  - [1438. Longest Continuous Subarray With Absolute Diff Less Than or Equal to Limit](https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/) (Medium)
  - [862. Shortest Subarray with Sum at Least K](https://leetcode.com/problems/shortest-subarray-with-sum-at-least-k/) (Hard)

## 6. Tree Patterns

### 6.1 Tree Traversals
- **Description**: Different ways to traverse trees (DFS, BFS).
- **LeetCode Problems**:
  - [94. Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/) (Easy)
  - [144. Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/) (Easy)
  - [145. Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/) (Easy)
  - [102. Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/) (Medium)
  - [987. Vertical Order Traversal of a Binary Tree](https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/) (Hard)
  - [314. Binary Tree Vertical Order Traversal](https://leetcode.com/problems/binary-tree-vertical-order-traversal/) (Medium)

### 6.2 Path Problems
- **Description**: Finding paths in trees that satisfy certain conditions.
- **LeetCode Problems**:
  - [112. Path Sum](https://leetcode.com/problems/path-sum/) (Easy)
  - [113. Path Sum II](https://leetcode.com/problems/path-sum-ii/) (Medium)
  - [437. Path Sum III](https://leetcode.com/problems/path-sum-iii/) (Medium)
  - [124. Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/) (Hard)
  - [257. Binary Tree Paths](https://leetcode.com/problems/binary-tree-paths/) (Easy)
  - [1448. Count Good Nodes in Binary Tree](https://leetcode.com/problems/count-good-nodes-in-binary-tree/) (Medium)

### 6.3 Binary Search Tree
- **Description**: Utilizing the properties of BSTs for efficient operations.
- **LeetCode Problems**:
  - [98. Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/) (Medium)
  - [700. Search in a Binary Search Tree](https://leetcode.com/problems/search-in-a-binary-search-tree/) (Easy)
  - [701. Insert into a Binary Search Tree](https://leetcode.com/problems/insert-into-a-binary-search-tree/) (Medium)
  - [450. Delete Node in a BST](https://leetcode.com/problems/delete-node-in-a-bst/) (Medium)
  - [235. Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/) (Medium)
  - [230. Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/) (Medium)
  - [108. Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/) (Easy)
  - [173. Binary Search Tree Iterator](https://leetcode.com/problems/binary-search-tree-iterator/) (Medium)

### 6.4 Tree Construction and Serialization
- **Description**: Building trees from traversals and serializing/deserializing trees.
- **LeetCode Problems**:
  - [105. Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) (Medium)
  - [106. Construct Binary Tree from Inorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/) (Medium)
  - [889. Construct Binary Tree from Preorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/) (Medium)
  - [297. Serialize and Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/) (Hard)
  - [449. Serialize and Deserialize BST](https://leetcode.com/problems/serialize-and-deserialize-bst/) (Medium)

### 6.5 Lowest Common Ancestor
- **Description**: Finding the lowest common ancestor of two nodes in a tree.
- **LeetCode Problems**:
  - [235. Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/) (Medium)
  - [236. Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/) (Medium)
  - [1644. Lowest Common Ancestor of a Binary Tree II](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree-ii/) (Medium)
  - [1650. Lowest Common Ancestor of a Binary Tree III](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree-iii/) (Medium)
  - [1676. Lowest Common Ancestor of a Binary Tree IV](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree-iv/) (Medium)

## 7. Heap Patterns

### 7.1 Top K Elements
- **Description**: Finding or manipulating the k largest/smallest elements.
- **LeetCode Problems**:
  - [215. Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/) (Medium)
  - [347. Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) (Medium)
  - [973. K Closest Points to Origin](https://leetcode.com/problems/k-closest-points-to-origin/) (Medium)
  - [703. Kth Largest Element in a Stream](https://leetcode.com/problems/kth-largest-element-in-a-stream/) (Easy)
  - [1046. Last Stone Weight](https://leetcode.com/problems/last-stone-weight/) (Easy)
  - [632. Smallest Range Covering Elements from K Lists](https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/) (Hard)

### 7.2 Merge K Sorted Lists
- **Description**: Using heaps to efficiently merge multiple sorted lists.
- **LeetCode Problems**:
  - [23. Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/) (Hard)
  - [378. Kth Smallest Element in a Sorted Matrix](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/) (Medium)
  - [373. Find K Pairs with Smallest Sums](https://leetcode.com/problems/find-k-pairs-with-smallest-sums/) (Medium)
  - [264. Ugly Number II](https://leetcode.com/problems/ugly-number-ii/) (Medium)

### 7.3 Median Maintenance
- **Description**: Maintaining the median of a dynamic set of numbers.
- **LeetCode Problems**:
  - [295. Find Median from Data Stream](https://leetcode.com/problems/find-median-from-data-stream/) (Hard)
  - [480. Sliding Window Median](https://leetcode.com/problems/sliding-window-median/) (Hard)
  - [502. IPO](https://leetcode.com/problems/ipo/) (Hard) - Two heap approach

## 8. Hash Table Patterns

### 8.1 Frequency Counting
- **Description**: Counting occurrences of elements.
- **LeetCode Problems**:
  - [136. Single Number](https://leetcode.com/problems/single-number/) (Easy)
  - [169. Majority Element](https://leetcode.com/problems/majority-element/) (Easy)
  - [347. Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) (Medium)
  - [451. Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/) (Medium)
  - [1338. Reduce Array Size to The Half](https://leetcode.com/problems/reduce-array-size-to-the-half/) (Medium)

### 8.2 Array Mapping
- **Description**: Using hash tables to map array elements to their positions or properties.
- **LeetCode Problems**:
  - [1. Two Sum](https://leetcode.com/problems/two-sum/) (Easy)
  - [454. 4Sum II](https://leetcode.com/problems/4sum-ii/) (Medium)
  - [350. Intersection of Two Arrays II](https://leetcode.com/problems/intersection-of-two-arrays-ii/) (Easy)
  - [128. Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/) (Medium)
  - [18. 4Sum](https://leetcode.com/problems/4sum/) (Medium)

### 8.3 Substring Problems
- **Description**: Using hash tables to solve substring-related problems.
- **LeetCode Problems**:
  - [3. Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) (Medium)
  - [76. Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/) (Hard)
  - [30. Substring with Concatenation of All Words](https://leetcode.com/problems/substring-with-concatenation-of-all-words/) (Hard)
  - [187. Repeated DNA Sequences](https://leetcode.com/problems/repeated-dna-sequences/) (Medium)

## 9. Graph Patterns

### 9.1 Graph Traversal (DFS/BFS)
- **Description**: Exploring vertices and edges of a graph.
- **LeetCode Problems**:
  - [200. Number of Islands](https://leetcode.com/problems/number-of-islands/) (Medium)
  - [133. Clone Graph](https://leetcode.com/problems/clone-graph/) (Medium)
  - [841. Keys and Rooms](https://leetcode.com/problems/keys-and-rooms/) (Medium)
  - [547. Number of Provinces](https://leetcode.com/problems/number-of-provinces/) (Medium)
  - [1091. Shortest Path in Binary Matrix](https://leetcode.com/problems/shortest-path-in-binary-matrix/) (Medium)
  - [994. Rotting Oranges](https://leetcode.com/problems/rotting-oranges/) (Medium)

### 9.2 Topological Sort
- **Description**: Linear ordering of vertices such that for every directed edge, source comes before destination.
- **LeetCode Problems**:
  - [207. Course Schedule](https://leetcode.com/problems/course-schedule/) (Medium)
  - [210. Course Schedule II](https://leetcode.com/problems/course-schedule-ii/) (Medium)
  - [269. Alien Dictionary](https://leetcode.com/problems/alien-dictionary/) (Hard)
  - [310. Minimum Height Trees](https://leetcode.com/problems/minimum-height-trees/) (Medium)
  - [1203. Sort Items by Groups Respecting Dependencies](https://leetcode.com/problems/sort-items-by-groups-respecting-dependencies/) (Hard)

### 9.3 Shortest Path Algorithms
- **Description**: Finding shortest paths between vertices in a graph.
- **LeetCode Problems**:
  - [743. Network Delay Time](https://leetcode.com/problems/network-delay-time/) (Medium) - Dijkstra's
  - [787. Cheapest Flights Within K Stops](https://leetcode.com/problems/cheapest-flights-within-k-stops/) (Medium) - Bellman-Ford
  - [1334. Find the City With the Smallest Number of Neighbors at a Threshold Distance](https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/) (Medium) - Floyd-Warshall
  - [1631. Path With Minimum Effort](https://leetcode.com/problems/path-with-minimum-effort/) (Medium) - Binary search + BFS/DFS
  - [778. Swim in Rising Water](https://leetcode.com/problems/swim-in-rising-water/) (Hard) - Dijkstra's or Binary search

### 9.4 Union Find (Disjoint Set)
- **Description**: Data structure to efficiently track connected components in an undirected graph.
- **LeetCode Problems**:
  - [547. Number of Provinces](https://leetcode.com/problems/number-of-provinces/) (Medium)
  - [684. Redundant Connection](https://leetcode.com/problems/redundant-connection/) (Medium)
  - [128. Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/) (Medium)
  - [1319. Number of Operations to Make Network Connected](https://leetcode.com/problems/number-of-operations-to-make-network-connected/) (Medium)
  - [1202. Smallest String With Swaps](https://leetcode.com/problems/smallest-string-with-swaps/) (Medium)
  - [990. Satisfiability of Equality Equations](https://leetcode.com/problems/satisfiability-of-equality-equations/) (Medium)

### 9.5 Graph Coloring and Bipartite Graph
- **Description**: Assigning colors to vertices such that no adjacent vertices have the same color.
- **LeetCode Problems**:
  - [785. Is Graph Bipartite?](https://leetcode.com/problems/is-graph-bipartite/) (Medium)
  - [886. Possible Bipartition](https://leetcode.com/problems/possible-bipartition/) (Medium)
  - [1042. Flower Planting With No Adjacent](https://leetcode.com/problems/flower-planting-with-no-adjacent/) (Medium)


## 10. Sorting Algorithms
### 10.1 Elementary Sorting
- **Description**: Basic sorting techniques with O(n²) time complexity.
- **LeetCode Problems**:
  - [912. Sort an Array](https://leetcode.com/problems/sort-an-array/) (Medium)
  - [922. Sort Array By Parity II](https://leetcode.com/problems/sort-array-by-parity-ii/) (Easy)
  - [75. Sort Colors](https://leetcode.com/problems/sort-colors/) (Medium)
  - [1122. Relative Sort Array](https://leetcode.com/problems/relative-sort-array/) (Easy)
  - [1030. Matrix Cells in Distance Order](https://leetcode.com/problems/matrix-cells-in-distance-order/) (Easy)

### 10.2 Efficient Sorting & Custom Sorting
- **Description**: Advanced sorting with O(n log n) time complexity and custom criteria.
- **LeetCode Problems**:
  - [148. Sort List](https://leetcode.com/problems/sort-list/) (Medium) - Merge sort on linked list
  - [324. Wiggle Sort II](https://leetcode.com/problems/wiggle-sort-ii/) (Medium)
  - [1636. Sort Array by Increasing Frequency](https://leetcode.com/problems/sort-array-by-increasing-frequency/) (Easy)
  - [179. Largest Number](https://leetcode.com/problems/largest-number/) (Medium) - Custom sorting
  - [1329. Sort the Matrix Diagonally](https://leetcode.com/problems/sort-the-matrix-diagonally/) (Medium)

### 10.3 Specialized Sorting Problems
- **Description**: Problems requiring special sorting techniques or analysis.
- **LeetCode Problems**:
  - [280. Wiggle Sort](https://leetcode.com/problems/wiggle-sort/) (Medium)
  - [164. Maximum Gap](https://leetcode.com/problems/maximum-gap/) (Hard) - Bucket sort
  - [274. H-Index](https://leetcode.com/problems/h-index/) (Medium) - Counting sort
  - [451. Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/) (Medium)
  - [969. Pancake Sorting](https://leetcode.com/problems/pancake-sorting/) (Medium)

## 11. Searching Algorithms
### 11.1 Basic Searching
- **Description**: Linear and binary search techniques.
- **LeetCode Problems**:
  - [704. Binary Search](https://leetcode.com/problems/binary-search/) (Easy)
  - [35. Search Insert Position](https://leetcode.com/problems/search-insert-position/) (Easy)
  - [278. First Bad Version](https://leetcode.com/problems/first-bad-version/) (Easy)
  - [33. Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) (Medium)
  - [81. Search in Rotated Sorted Array II](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/) (Medium)

### 11.2 Advanced Searching
- **Description**: Complex search patterns and optimizations.
- **LeetCode Problems**:
  - [74. Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/) (Medium)
  - [240. Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/) (Medium)
  - [162. Find Peak Element](https://leetcode.com/problems/find-peak-element/) (Medium)
  - [287. Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/) (Medium)
  - [540. Single Element in a Sorted Array](https://leetcode.com/problems/single-element-in-a-sorted-array/) (Medium)

### 11.3 Complex Search Problems
- **Description**: Search problems requiring specialized techniques.
- **LeetCode Problems**:
  - [4. Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) (Hard)
  - [153. Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) (Medium)
  - [154. Find Minimum in Rotated Sorted Array II](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/) (Hard)
  - [378. Kth Smallest Element in a Sorted Matrix](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/) (Medium)
  - [875. Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/) (Medium)

## 12. Dynamic Programming
### 12.1 1D Dynamic Programming
- **Description**: Problems solved using a one-dimensional state array.
- **LeetCode Problems**:
  - [70. Climbing Stairs](https://leetcode.com/problems/climbing-stairs/) (Easy)
  - [198. House Robber](https://leetcode.com/problems/house-robber/) (Medium)
  - [300. Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/) (Medium)
  - [322. Coin Change](https://leetcode.com/problems/coin-change/) (Medium)
  - [1143. Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/) (Medium)

### 12.2 2D Dynamic Programming
- **Description**: Problems requiring a two-dimensional state array.
- **LeetCode Problems**:
  - [62. Unique Paths](https://leetcode.com/problems/unique-paths/) (Medium)
  - [64. Minimum Path Sum](https://leetcode.com/problems/minimum-path-sum/) (Medium)
  - [72. Edit Distance](https://leetcode.com/problems/edit-distance/) (Hard)
  - [518. Coin Change 2](https://leetcode.com/problems/coin-change-2/) (Medium)
  - [97. Interleaving String](https://leetcode.com/problems/interleaving-string/) (Medium)

### 12.3 Advanced Dynamic Programming
- **Description**: Complex DP problems with advanced state definitions.
- **LeetCode Problems**:
  - [115. Distinct Subsequences](https://leetcode.com/problems/distinct-subsequences/) (Hard)
  - [312. Burst Balloons](https://leetcode.com/problems/burst-balloons/) (Hard)
  - [887. Super Egg Drop](https://leetcode.com/problems/super-egg-drop/) (Hard)
  - [123. Best Time to Buy and Sell Stock III](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/) (Hard)
  - [1235. Maximum Profit in Job Scheduling](https://leetcode.com/problems/maximum-profit-in-job-scheduling/) (Hard)

## 13. Greedy Algorithms
### 13.1 Interval Problems
- **Description**: Problems involving intervals and scheduling.
- **LeetCode Problems**:
  - [435. Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/) (Medium)
  - [452. Minimum Number of Arrows to Burst Balloons](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/) (Medium)
  - [1094. Car Pooling](https://leetcode.com/problems/car-pooling/) (Medium)
  - [253. Meeting Rooms II](https://leetcode.com/problems/meeting-rooms-ii/) (Medium)
  - [1024. Video Stitching](https://leetcode.com/problems/video-stitching/) (Medium)

### 13.2 Classic Greedy Problems
- **Description**: Well-known problems with greedy solutions.
- **LeetCode Problems**:
  - [122. Best Time to Buy and Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/) (Medium)
  - [134. Gas Station](https://leetcode.com/problems/gas-station/) (Medium)
  - [455. Assign Cookies](https://leetcode.com/problems/assign-cookies/) (Easy)
  - [763. Partition Labels](https://leetcode.com/problems/partition-labels/) (Medium)
  - [1029. Two City Scheduling](https://leetcode.com/problems/two-city-scheduling/) (Medium)

### 13.3 Advanced Greedy Problems
- **Description**: Complex problems requiring greedy insights.
- **LeetCode Problems**:
  - [45. Jump Game II](https://leetcode.com/problems/jump-game-ii/) (Medium)
  - [659. Split Array into Consecutive Subsequences](https://leetcode.com/problems/split-array-into-consecutive-subsequences/) (Medium)
  - [621. Task Scheduler](https://leetcode.com/problems/task-scheduler/) (Medium)
  - [767. Reorganize String](https://leetcode.com/problems/reorganize-string/) (Medium)
  - [1054. Distant Barcodes](https://leetcode.com/problems/distant-barcodes/) (Medium)

## 14. Backtracking
### 14.1 Permutations and Combinations
- **Description**: Generating all possible arrangements and selections.
- **LeetCode Problems**:
  - [46. Permutations](https://leetcode.com/problems/permutations/) (Medium)
  - [47. Permutations II](https://leetcode.com/problems/permutations-ii/) (Medium)
  - [78. Subsets](https://leetcode.com/problems/subsets/) (Medium)
  - [39. Combination Sum](https://leetcode.com/problems/combination-sum/) (Medium)
  - [40. Combination Sum II](https://leetcode.com/problems/combination-sum-ii/) (Medium)

### 14.2 Grid and Maze Problems
- **Description**: Backtracking on 2D matrices.
- **LeetCode Problems**:
  - [51. N-Queens](https://leetcode.com/problems/n-queens/) (Hard)
  - [37. Sudoku Solver](https://leetcode.com/problems/sudoku-solver/) (Hard)
  - [79. Word Search](https://leetcode.com/problems/word-search/) (Medium)
  - [212. Word Search II](https://leetcode.com/problems/word-search-ii/) (Hard)
  - [1219. Path with Maximum Gold](https://leetcode.com/problems/path-with-maximum-gold/) (Medium)

### 14.3 Advanced Backtracking
- **Description**: Complex problems requiring backtracking with pruning.
- **LeetCode Problems**:
  - [22. Generate Parentheses](https://leetcode.com/problems/generate-parentheses/) (Medium)
  - [131. Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/) (Medium)
  - [698. Partition to K Equal Sum Subsets](https://leetcode.com/problems/partition-to-k-equal-sum-subsets/) (Medium)
  - [473. Matchsticks to Square](https://leetcode.com/problems/matchsticks-to-square/) (Medium)
  - [17. Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/) (Medium)

## 15. Bit Manipulation
### 15.1 Basic Bit Operations
- **Description**: Fundamental bit manipulation techniques.
- **LeetCode Problems**:
  - [136. Single Number](https://leetcode.com/problems/single-number/) (Easy)
  - [191. Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/) (Easy)
  - [231. Power of Two](https://leetcode.com/problems/power-of-two/) (Easy)
  - [338. Counting Bits](https://leetcode.com/problems/counting-bits/) (Easy)
  - [190. Reverse Bits](https://leetcode.com/problems/reverse-bits/) (Easy)

### 15.2 Advanced Bit Manipulation
- **Description**: Complex bit manipulation techniques and applications.
- **LeetCode Problems**:
  - [137. Single Number II](https://leetcode.com/problems/single-number-ii/) (Medium)
  - [260. Single Number III](https://leetcode.com/problems/single-number-iii/) (Medium)
  - [421. Maximum XOR of Two Numbers in an Array](https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/) (Medium)
  - [1238. Circular Permutation in Binary Representation](https://leetcode.com/problems/circular-permutation-in-binary-representation/) (Medium)
  - [1542. Find Longest Awesome Substring](https://leetcode.com/problems/find-longest-awesome-substring/) (Hard)

## 16. Advanced Data Structures
### 16.1 Disjoint Set Union (DSU)
- **Description**: Data structure for tracking disjoint sets.
- **LeetCode Problems**:
  - [547. Number of Provinces](https://leetcode.com/problems/number-of-provinces/) (Medium)
  - [684. Redundant Connection](https://leetcode.com/problems/redundant-connection/) (Medium)
  - [1319. Number of Operations to Make Network Connected](https://leetcode.com/problems/number-of-operations-to-make-network-connected/) (Medium)
  - [959. Regions Cut By Slashes](https://leetcode.com/problems/regions-cut-by-slashes/) (Medium)
  - [721. Accounts Merge](https://leetcode.com/problems/accounts-merge/) (Medium)

### 16.2 Segment Trees & Fenwick Trees
- **Description**: Data structures for range queries and updates.
- **LeetCode Problems**:
  - [307. Range Sum Query - Mutable](https://leetcode.com/problems/range-sum-query-mutable/) (Medium)
  - [315. Count of Smaller Numbers After Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/) (Hard)
  - [493. Reverse Pairs](https://leetcode.com/problems/reverse-pairs/) (Hard)
  - [699. Falling Squares](https://leetcode.com/problems/falling-squares/) (Hard)
  - [1649. Create Sorted Array through Instructions](https://leetcode.com/problems/create-sorted-array-through-instructions/) (Hard)

### 16.3 Trie & Suffix Trees
- **Description**: Tree-like data structures for string operations.
- **LeetCode Problems**:
  - [208. Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/) (Medium)
  - [211. Design Add and Search Words Data Structure](https://leetcode.com/problems/design-add-and-search-words-data-structure/) (Medium)
  - [1032. Stream of Characters](https://leetcode.com/problems/stream-of-characters/) (Hard)
  - [745. Prefix and Suffix Search](https://leetcode.com/problems/prefix-and-suffix-search/) (Hard)
  - [212. Word Search II](https://leetcode.com/problems/word-search-ii/) (Hard)

## 17. Mathematical Algorithms
### 17.1 Number Theory
- **Description**: Problems involving prime numbers, factors, and modular arithmetic.
- **LeetCode Problems**:
  - [204. Count Primes](https://leetcode.com/problems/count-primes/) (Medium)
  - [372. Super Pow](https://leetcode.com/problems/super-pow/) (Medium)
  - [365. Water and Jug Problem](https://leetcode.com/problems/water-and-jug-problem/) (Medium)
  - [891. Sum of Subsequence Widths](https://leetcode.com/problems/sum-of-subsequence-widths/) (Hard)
  - [1359. Count All Valid Pickup and Delivery Options](https://leetcode.com/problems/count-all-valid-pickup-and-delivery-options/) (Hard)

### 17.2 Combinatorics
- **Description**: Problems involving counting, permutations, and combinations.
- **LeetCode Problems**:
  - [62. Unique Paths](https://leetcode.com/problems/unique-paths/) (Medium)
  - [96. Unique Binary Search Trees](https://leetcode.com/problems/unique-binary-search-trees/) (Medium)
  - [1641. Count Sorted Vowel Strings](https://leetcode.com/problems/count-sorted-vowel-strings/) (Medium)
  - [1569. Number of Ways to Reorder Array to Get Same BST](https://leetcode.com/problems/number-of-ways-to-reorder-array-to-get-same-bst/) (Hard)
  - [1916. Count Ways to Build Rooms in an Ant Colony](https://leetcode.com/problems/count-ways-to-build-rooms-in-an-ant-colony/) (Hard)

## 18. Advanced Algorithmic Techniques
### 18.1 Divide and Conquer
- **Description**: Breaking problems into smaller subproblems.
- **LeetCode Problems**:
  - [53. Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) (Medium) - Kadane's algorithm
  - [215. Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/) (Medium) - QuickSelect
  - [240. Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/) (Medium)
  - [315. Count of Smaller Numbers After Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/) (Hard)
  - [395. Longest Substring with At Least K Repeating Characters](https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/) (Medium)

### 18.2 Randomized Algorithms
- **Description**: Algorithms that use random numbers to solve problems.
- **LeetCode Problems**:
  - [384. Shuffle an Array](https://leetcode.com/problems/shuffle-an-array/) (Medium)
  - [398. Random Pick Index](https://leetcode.com/problems/random-pick-index/) (Medium)
  - [382. Linked List Random Node](https://leetcode.com/problems/linked-list-random-node/) (Medium)
  - [497. Random Point in Non-overlapping Rectangles](https://leetcode.com/problems/random-point-in-non-overlapping-rectangles/) (Medium)
  - [528. Random Pick with Weight](https://leetcode.com/problems/random-pick-with-weight/) (Medium)

## 19. System Design Concepts
### 19.1 Data Structure Implementation
- **Description**: Implementing complex data structures.
- **LeetCode Problems**:
  - [146. LRU Cache](https://leetcode.com/problems/lru-cache/) (Medium)
  - [155. Min Stack](https://leetcode.com/problems/min-stack/) (Medium)
  - [460. LFU Cache](https://leetcode.com/problems/lfu-cache/) (Hard)
  - [706. Design HashMap](https://leetcode.com/problems/design-hashmap/) (Easy)
  - [432. All O`one Data Structure](https://leetcode.com/problems/all-oone-data-structure/) (Hard)

### 19.2 System Design Problems
- **Description**: Problems focusing on designing efficient systems.
- **LeetCode Problems**:
  - [355. Design Twitter](https://leetcode.com/problems/design-twitter/) (Medium)
  - [380. Insert Delete GetRandom O(1)](https://leetcode.com/problems/insert-delete-getrandom-o1/) (Medium)
  - [1206. Design Skiplist](https://leetcode.com/problems/design-skiplist/) (Hard)
  - [1472. Design Browser History](https://leetcode.com/problems/design-browser-history/) (Medium)
  - [981. Time Based Key-Value Store](https://leetcode.com/problems/time-based-key-value-store/) (Medium)

## 20. Common Algorithmic Patterns
### 20.1 Two Pointers
- **Description**: Using two pointers to solve array problems efficiently.
- **LeetCode Problems**:
  - [11. Container With Most Water](https://leetcode.com/problems/container-with-most-water/) (Medium)
  - [15. 3Sum](https://leetcode.com/problems/3sum/) (Medium)
  - [42. Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/) (Hard)
  - [167. Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) (Medium)
  - [881. Boats to Save People](https://leetcode.com/problems/boats-to-save-people/) (Medium)

### 20.2 Sliding Window
- **Description**: Using a window that slides through an array/string.
- **LeetCode Problems**:
  - [3. Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) (Medium)
  - [76. Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/) (Hard)
  - [239. Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/) (Hard)
  - [438. Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/) (Medium)
  - [567. Permutation in String](https://leetcode.com/problems/permutation-in-string/) (Medium)

### 20.3 Fast and Slow Pointers
- **Description**: Using pointers that move at different speeds.
- **LeetCode Problems**:
  - [141. Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/) (Easy)
  - [142. Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/) (Medium)
  - [234. Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/) (Easy)
  - [876. Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/) (Easy)
  - [287. Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/) (Medium)

### 20.4 Merge Intervals
- **Description**: Problems involving interval merging and processing.
- **LeetCode Problems**:
  - [56. Merge Intervals](https://leetcode.com/problems/merge-intervals/) (Medium)
  - [57. Insert Interval](https://leetcode.com/problems/insert-interval/) (Medium)
  - [986. Interval List Intersections](https://leetcode.com/problems/interval-list-intersections/) (Medium)
  - [759. Employee Free Time](https://leetcode.com/problems/employee-free-time/) (Hard)
  - [252. Meeting Rooms](https://leetcode.com/problems/meeting-rooms/) (Easy)
