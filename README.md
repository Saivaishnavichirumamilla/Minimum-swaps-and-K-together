# Minimum-swaps-and-K-together
## Solution to Minimum swaps and K together problem (Geeks for Geeks) using Two-pointers approach

### Given an array arr and a number k. One can apply a swap operation on the array any number of times, i.e choose any two index i and j (i < j) and swap arr[i] , arr[j] . ### Find the minimum number of swaps required to bring all the numbers less than or equal to k together, i.e. make them a contiguous subarray.

#### Examples :

###### Input: arr[] = [2, 1, 5, 6, 3], k = 3
###### Output: 1
###### Explanation: To bring elements 2, 1, 3 together, swap index 2 with 4 (0-based indexing), i.e. element arr[2] = 5 with arr[4] = 3 such that final array will be- ###### arr[] = [2, 1, 3, 6, 5]

###### Input: arr[] = [2, 7, 9, 5, 8, 7, 4], k = 6 
###### Output: 2 
###### Explanation: To bring elements 2, 5, 4 together, swap index 0 with 2 (0-based indexing) and index 4 with 6 (0-based indexing) such that final array will be- arr[] = ###### [9, 7, 2, 5, 4, 7, 8]

##### Constraints:
###### 1 ≤ arr.size() ≤ 106
###### 1 ≤ arr[i] ≤ 106
###### 1 ≤ k ≤ 106
