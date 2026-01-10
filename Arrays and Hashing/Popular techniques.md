# Problem Solving Techniques for Arrays and Hashing

1) Using unordered map --> To have a one to one pair with certain elements.

    `Eg: Finding the count of every element in the array`

2) sort() function takes O(nlogn) time complexity as it uses [**Intro sort**](https://www.geeksforgeeks.org/dsa/introsort-cs-sorting-weapon/)

3) unordered_map cannot be sorted using sort function
To have a sorted map, use std::map.
Maps are only sorted based on keys, in-order to sort a map based on values, add them to a vector of pair. That would help in sorting the array based on values.
[**Map and Unordered map diff**](https://www.geeksforgeeks.org/cpp/map-vs-unordered_map-c/)

## Bucket Sort