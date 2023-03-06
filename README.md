Binary_Search
Binary search is a search algorithm used in a sorted array by dividing the array to be searched multiple times.

Applications of algorithms?
When encountering problems that need to run data that are consecutive integers to find the correct data, we can use binary search algorithm to optimize processing time.

Steps to take
Step 1: Given an array of sorted arr[] integers and x is the value to find
Step 2: Split the array into 2 and find the element in the middle of the array and call it mid, the formula (Mid = (left + right)/2)
Step 3:
- If arr[mid] == x, it will return mid -
- Conversely, if arr[mid] > x, then right = mid - 1 because the value to find is definitely not on right, so we will remove it! and do a search -
- On the contrary, if arr[mid] < x, then left = mid + 1 because the value to find is definitely not on left, so we will remove it! and do a search

Ex: 

Thanks <3!
