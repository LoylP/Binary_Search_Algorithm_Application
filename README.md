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

Ex: There is a workshop with n machines (n \leq 10^{5} ), the i-th machine needs exactly a_{i} days (0<a_{i}\leq 10^{9}) to complete 1 product same. Calculate the minimum time it takes to complete at least k products (0< k< 10^{9}).
![image](https://user-images.githubusercontent.com/115894727/223094526-389d9676-34bd-45a2-bf12-ac659cc44f63.png)

explain:
In the first row of the example, we enter 2 numbers, respectively, the number of machines and the number of products.
In row 2, we will enter in turn the number of people that each machine can make 1 product

- We see, if on day m we cannot complete k products, then from day 1 to day m - 1 we will not complete k products.
- Suppose we are looking for the shortest time in the segment [l, r] and we know for certain that by day r will have completed at least k products.
- We will choose a certain date h such that h belongs to [l, r]. If by day h, we cannot complete k products, then according to the above comment, considering from day l to day h is not necessary and we will continue to search for results in the paragraph [h+1, r].
- And if by day h we have completed at least k products, we will find the result in the interval [l, h] because now we know we will need at most h days to complete k products.
