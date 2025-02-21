100 Days of Code - LeetCode Challenge 🚀

Day 1: Best Time to Buy and Sell Stock (LeetCode 121)

Problem Statement:
Given an array prices[], where prices[i] is the stock price on day i, find the maximum profit you can achieve by buying and selling once. If no profit can be made, return 0.

Approach: Sliding Window / Two Pointers

1. Keep track of the minimum price seen so far (min_price).


2. Calculate the profit if we were to sell at the current price.


3. Update max_profit accordingly.



Time Complexity:

Time Complexity: O(n) (single pass)

Space Complexity: O(1) (only a few variables used)



---

Day 2: Container With Most Water (LeetCode 11)

Problem Statement:
Given height[], where height[i] represents a vertical line at index i, find the two lines that hold the most water (max area).

Approach: Two Pointer Technique

1. Use two pointers: left (starting at index 0) and right (starting at the last index).


2. Compute the area and update max_area if needed.


3. Move the pointer pointing to the shorter height to maximize water storage.



Time Complexity:

Time Complexity: O(n) (single pass)

Space Complexity: O(1) (only a few variables used)



---

Day 3: Kadane’s Algorithm - Maximum Subarray Sum (LeetCode 53)

Problem Statement:
Find the contiguous subarray with the largest sum in an integer array nums[].

Approach: Kadane’s Algorithm (Dynamic Programming)

1. Use curr_sum to track the running sum.


2. If curr_sum is negative, reset it to 0.


3. Keep track of the maximum sum encountered.



Time Complexity:

Time Complexity: O(n) (single pass)

Space Complexity: O(1) (constant extra space)





