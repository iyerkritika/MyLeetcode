<ul>
  <details>
  <summary> Linked List programs</summary>
    <ul>
      <details>
      <summary>Return the addition of 2 numbers</summary>
        <p>
          You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
          <br>You may assume the two numbers do not contain any leading zero, except the number 0 itself.
          <br>
          <br> <b>Example 1:</b>
          <br>Input: l1 = [2,4,3], l2 = [5,6,4]
          <br>Output: [7,0,8]
          <br>Explanation: 342 + 465 = 807.
          <br>
          <br><b>Example 2:</b>
          <br>Input: l1 = [0], l2 = [0]
          <br>Output: [0]
          <br>
          <br><b>Example 3:</b>
          <br>Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
          <br>Output: [8,9,9,9,0,0,0,1]
          <br>
          <br><b>Constraints:</b>
          <br>The number of nodes in each linked list is in the range [1, 100].
          <br>0 <= Node.val <= 9
          <br>It is guaranteed that the list represents a number that does not have leading zeros.
        </p>
      </details>
      <details>
      <summary>Find out if a list is cyclic and return true or false</summary>
        <p>
          Given head, the head of a linked list, determine if the linked list has a cycle in it.
          There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.
          <br>
          <br>Return true if there is a cycle in the linked list. Otherwise, return false.
          <br>Follow up:
          <br>Can you solve it using O(1) (i.e. constant) memory?
          <br>
          <br> <b>Example 1:</b>
          <br>Input: head = [3,2,0,-4], pos = 1
          <br>Output: true
          <br>Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
          <br>
          <br><b>Example 2:</b>
          <br>Input: head = [1,2], pos = 0
          <br>Output: true
          <br>Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.
          <br>
          <br><b>Example 3:</b>
          <br>Input: head = [1], pos = -1
          <br>Output: false
          <br>Explanation: There is no cycle in the linked list.
          <br>
          <br><b>Constraints:</b>
          <br>The number of the nodes in the list is in the range [0, 10^4].
          <br>-10^5 <= Node.val <= 10^5
          <br>pos is -1 or a valid index in the linked-list.
        </p>
      </details>
      <details>
      <summary> Find out if a list is cyclic and return the node</summary>
        <p>
          Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
          There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.
          <br>
          <br>Notice that you should not modify the linked list.
          <br>Follow up:
          <br>Can you solve it using O(1) (i.e. constant) memory?
          <br>
          <br><b>Example 1:</b>
          <br>Input: head = [3,2,0,-4], pos = 1
          <br>Output: tail connects to node index 1
          <br>Explanation: There is a cycle in the linked list, where tail connects to the second node.
          <br>
          <br><b>Example 2:</b>
          <br>Input: head = [1,2], pos = 0
          <br>Output: tail connects to node index 0
          <br>Explanation: There is a cycle in the linked list, where tail connects to the first node.
          <br>
          <br><b>Example 3:</b>
          <br>Input: head = [1], pos = -1
          <br>Output: no cycle
          <br>Explanation: There is no cycle in the linked list.
          <br>
          <br><b>Constraints:</b>
          <br>The number of the nodes in the list is in the range [0, 10^4].
          <br>-10^5 <= Node.val <= 10^5
          <br>pos is -1 or a valid index in the linked-list.
        </p>
      </details>
      <details>
      <summary> Find an intersection of 2 lists</summary>
        <p>
          Write a program to find the node at which the intersection of two singly linked lists begins.
          For example, the following two linked lists:
          begin to intersect at node c1.
          <br>
          <br><b>Example 1:</b>
          <br>Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
          <br>Output: Reference of the node with value = 8
          <br>Input Explanation: The intersected node's value is 8 (note that this must not be 0 if the two lists intersect). From the head of A, it reads as [4,1,8,4,5]. From the head of B, it reads as [5,6,1,8,4,5]. There are 2 nodes before the intersected node in A; There are 3 nodes before the intersected node in B.
          <br>
          <br><b>Example 2:</b>
          <br>Input: intersectVal = 2, listA = [1,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1
          <br>Output: Reference of the node with value = 2
          <br>Input Explanation: The intersected node's value is 2 (note that this must not be 0 if the two lists intersect). From the head of A, it reads as [1,9,1,2,4]. From the head of B, it reads as [3,2,4]. There are 3 nodes before the intersected node in A; There are 1 node before the intersected node in B.
          <br>
          <br><b>Example 3:</b>
          <br>Input: intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB = 2
          <br>Output: null
          <br>Input Explanation: From the head of A, it reads as [2,6,4]. From the head of B, it reads as [1,5]. Since the two lists do not intersect, intersectVal must be 0, while skipA and skipB can be arbitrary values.
          <br>Explanation: The two lists do not intersect, so return null.
          <br>
          <br><b>Constraints:</b>
          <br>If the two linked lists have no intersection at all, return null.
          <br>The linked lists must retain their original structure after the function returns.
          <br>You may assume there are no cycles anywhere in the entire linked structure.
          <br>Each value on each linked list is in the range [1, 10^9].
          <br>Your code should preferably run in O(n) time and use only O(1) memory
        </p>
      </details>
      <details>
      <summary> Merge Sort List</summary>
        <p>
          Merge two sorted linked lists and return it as a new sorted list. The new list should be made by splicing together the nodes of the first two lists.
          <br>
          <br><b>Example 1:</b>
          <br>Input: l1 = [1,2,4], l2 = [1,3,4]
          <br>Output: [1,1,2,3,4,4]
          <br>
          <br><b>Example 2:</b>
          <br>Input: l1 = [], l2 = []
          <br>Output: []
          <br>
          <br><b>Example 3:</b>
          <br>Input: l1 = [], l2 = [0]
          <br>Output: [0]
          <br>
          <br><b>Constraints:</b>
          <br>The number of nodes in both lists is in the range [0, 50].
          <br>-100 <= Node.val <= 100
          <br>Both l1 and l2 are sorted in non-decreasing order.
        </p>
      </details>
      <details>
      <summary> Remove Nth elements </summary>
        <p>
          Given the head of a linked list, remove the nth node from the end of the list and return its head.
          <br>Follow up: Could you do this in one pass?
          <br>
          <br><b>Example 1:</b>
          <br>Input: head = [1,2,3,4,5], n = 2
          <br>Output: [1,2,3,5]
          <br>
          <br><b>Example 2:</b>
          <br>Input: head = [1], n = 1
          <br>Output: []
          <br>
          <br><b>Example 3:</b>
          <br>Input: head = [1,2], n = 1
          <br>Output: [1]
          <br>
          <br><b>Constraints:</b>
          <br>The number of nodes in the list is sz.
          <br>1 <= sz <= 30
          <br>0 <= Node.val <= 100
          <br>1 <= n <= sz
        </p>
      </details>
      <details>
      <summary> Flatten a Multi level Tree</summary>
        <p>
          You are given a doubly linked list which in addition to the next and previous pointers, it could have a child pointer, which may or may not point to a separate doubly linked list. These child lists may have one or more children of their own, and so on, to produce a multilevel data structure, as shown in the example below.
          <br>
          Flatten the list so that all the nodes appear in a single-level, doubly linked list. You are given the head of the first level of the list.
          <br><b>Example 1:</b>
          <br>Input: head = [1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]
          <br>Output: [1,2,3,7,8,11,12,9,10,4,5,6]
          <br>Explanation:
          The multilevel linked list in the input is as follows:
          After flattening the multilevel linked list it becomes:
          <br>
          <br><b>Example 2:</b>
          <br>Input: head = [1,2,null,3]
          <br>Output: [1,3,2]
          <br>Explanation:
          <br>The input multilevel linked list is as follows:
          <br>
          <br>      1---2---NULL
          <br>      |
          <br>      3---NULL
          <br>Example 3:
          <br>Input: head = []
          <br>Output: []
          <br>
          <br>How multilevel linked list is represented in test case:
          <br>We use the multilevel linked list from Example 1 above:
          <br>
          <br>     1---2---3---4---5---6--NULL
          <br>             |
          <br>             7---8---9---10--NULL
          <br>                 |
          <br>                 11--12--NULL
          <br>The serialization of each level is as follows:
          <br>
          <br>[1,2,3,4,5,6,null]
          <br>[7,8,9,10,null]
          <br>[11,12,null]
          <br>To serialize all levels together we will add nulls in each level to signify no node connects to the <br>upper node of the previous level. The serialization becomes:
          <br>
          <br>[1,2,3,4,5,6,null]
          <br>[null,null,7,8,9,10,null]
          <br>[null,11,12,null]
          <br>Merging the serialization of each level and removing trailing nulls we obtain:
          <br>[1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]
          <br>
          <br><b>Constraints:</b>
          <br>Number of Nodes will not exceed 1000.
          <br>1 <= Node.val <= 10^5
        </p>
      </details>
      <details>
      <summary> Insertion Sort</summary>
        <p>
          Sort a linked list using insertion sort.
          <br>A graphical example of insertion sort. The partial sorted list (black) initially contains only the first element in the list.
          <br>With each iteration one element (red) is removed from the input data and inserted in-place into the sorted list
          <br>
          <br>Algorithm of Insertion Sort:
          <br>
          <br>Insertion sort iterates, consuming one input element each repetition, and growing a sorted output list.
          <br>At each iteration, insertion sort removes one element from the input data, finds the location it belongs within the sorted list, and inserts it there.
          <br>It repeats until no input elements remain.
          <br>
          <br><b>Example 1:</b>
          <br>Input: 4->2->1->3
          <br>Output: 1->2->3->4
          <br>
          <br><b>Example 2:</b>
          <br>Input: -1->5->3->4->0
          <br>Output: -1->0->3->4->5
        </p>
      </details>
    </ul>
  </details>
  <details>
  <summary> Vector Programs </summary>
    <ul>
      <details>
      <summary>Find Disappeared numbers</summary>
        <p>
          Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.
          <br>Find all the elements of [1, n] inclusive that do not appear in this array.
          Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.
          <br><b>Example:</b>
          <br>Input:
          <br>[4,3,2,7,8,2,3,1]
          <br>Output:
          <br>[5,6]
        </p>
      </details>
      <details>
      <summary>Duplicating 0s</summary>
        <p>
          Given a fixed length array arr of integers, duplicate each occurrence of zero, shifting the remaining elements to the right.
          Note that elements beyond the length of the original array are not written.
          Do the above modifications to the input array in place, do not return anything from your function.
          <br>
          <br><b>Example 1: <b>
          <br>Input: [1,0,2,3,0,4,5,0]
          <br>Output: null
          <br>Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]
          <br>
          <br><b>Example 2: <b>
          <br>Input: [1,2,3]
          <br>Output: null
          <br>Explanation: After calling your function, the input array is modified to: [1,2,3]
          <br>
          <br><b>Contraints:<b>
          <br>1 <= arr.length <= 10000
          <br>0 <= arr[i] <= 9
        </p>
      </details>
      <details>
      <summary>Even Digit Numbers in an Array</summary>
        <p>
          Given an array nums of integers, return how many of them contain an even number of digits.
          <br>
          <br><b>Example 1:</b>
          <br>Input: nums = [12,345,2,6,7896]
          <br>Output: 2
          <br>Explanation:
          <br>12 contains 2 digits (even number of digits).
          <br>345 contains 3 digits (odd number of digits).
          <br>2 contains 1 digit (odd number of digits).
          <br>6 contains 1 digit (odd number of digits).
          <br>7896 contains 4 digits (even number of digits).
          <br>Therefore only 12 and 7896 contain an even number of digits.
          <br>
          <br><b>Example 2:</b>
          <br>Input: nums = [555,901,482,1771]
          <br>Output: 1
          <br>Explanation:
          <br>Only 1771 contains an even number of digits.
          <br>
          <br><b>Constraints:</b>
          <br>1 <= nums.length <= 500
          <br>1 <= nums[i] <= 10^5
        </p>
      </details>
      <details>
      <summary>Height Checker</summary>
        <p>
          Students are asked to stand in non-decreasing order of heights for an annual photo.
          <br>Return the minimum number of students that must move in order for all students to be standing in non-decreasing order of height.
          <br>Notice that when a group of students is selected they can reorder in any possible way between themselves and the non selected students remain on their seats.
          <br>
          <br><b>Example 1:</b>
          <br>Input: heights = [1,1,4,2,1,3]
          <br>Output: 3
          <br>Explanation:
          <br>Current array : [1,1,4,2,1,3]
          <br>Target array  : [1,1,1,2,3,4]
          <br>On index 2 (0-based) we have 4 vs 1 so we have to move this student.
          <br>On index 4 (0-based) we have 1 vs 3 so we have to move this student.
          <br>On index 5 (0-based) we have 3 vs 4 so we have to move this student.
          <br>
          <br><b>Example 2:</b>
          <br>Input: heights = [5,1,2,3,4]
          <br>Output: 5
          <br>
          <br><b>Example 3:</b>
          <br>Input: heights = [1,2,3,4,5]
          <br>Output: 0
          <br>
          <br><b>Constraints:</b>
          <br>1 <= heights.length <= 100
          <br>1 <= heights[i] <= 100
        </p>
      </details>
      <details>
      <summary>Maximum consecutive 1s</summary>
        <p>
          Given a binary array, find the maximum number of consecutive 1s in this array.
          <br>
          <br><b>Example 1:</b>
          <br>Input: [1,1,0,1,1,1]
          <br>Output: 3
          <br>Explanation: The first two digits or the last three digits are consecutive 1s.
          <br>The maximum number of consecutive 1s is 3.
          <br>
          <br><b>Contraints:</b>
          <br>The input array will only contain 0 and 1.
          <br>The length of input array is a positive integer and will not exceed 10,000
        </p>
      </details>
      <details>
      <summary>Merge sort</summary>
        <p>
          Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
          <br>
          <br>The number of elements initialized in nums1 and nums2 are m and n respectively.
          <br>You may assume that nums1 has enough space (size that is equal to m + n) to hold additional <br>elements from nums2.
          <br>
          <br><b>Example:</b>
          <br>Input:
          <br>nums1 = [1,2,3,0,0,0], m = 3
          <br>nums2 = [2,5,6],       n = 3
          <br>Output: [1,2,2,3,5,6]
          <br>
          <br><b>Constraints:</b>
          <br>-10^9 <= nums1[i], nums2[i] <= 10^9
          <br>nums1.length == m + n
          <br>nums2.length == n
        </p>
      </details>
      <details>
      <summary>Mountain Array</summary>
        <p>
          Given an array A of integers, return true if and only if it is a valid mountain array.
          <br>Recall that A is a mountain array if and only if:
          <br>A.length >= 3
          <br>There exists some i with 0 < i < A.length - 1 such that:
          <br>A[0] < A[1] < ... A[i-1] < A[i]
          <br>A[i] > A[i+1] > ... > A[A.length - 1]
          <br>
          <br><b>Example 1:</b>
          <br>Input: [2,1]
          <br>Output: false
          <br>
          <br><b>Example 2:</b>
          <br>Input: [3,5,5]
          <br>Output: false
          <br>
          <br><b>Example 3:</b>
          <br>Input: [0,3,2,1]
          <br>Output: true
          <br>
          <br><b>Contraints:</b>
          <br>0 <= A.length <= 10000
          <br>0 <= A[i] <= 10000
        </p>
      </details>
      <details>
      <summary>Move Zeroes </summary>
        <p>
          Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
          <br>
          <br><b>Example:</b>
          <br>Input: [0,1,0,3,12]
          <br>Output: [1,3,12,0,0]
          <br>
          <br><b>Note:</b>
          <br>You must do this in-place without making a copy of the array.
          <br>Minimize the total number of operations.
        </p>
      </details>
      <details>
      <summary>Remove Duplicates</summary>
        <p>
          Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.
          <br>
          <br>Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
          <br>
          <br><b>Example 1:</b>
          <br>Given nums = [1,1,2],
          <br>Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.
          <br>It doesn't matter what you leave beyond the returned length.
          <br>
          <br><b>Example 2:</b>
          <br>Given nums = [0,0,1,1,1,2,2,3,3,4],
          <br>Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively.
          <br>It doesn't matter what values are set beyond the returned length.
          <br>
          <br><b>Clarification:</b>
          <br>Confused why the returned value is an integer but your answer is an array?
          <br>Note that the input array is passed in by reference, which means a modification to the input array will be known to the caller as well.
        </p>
      </details>
      <details>
      <summary>Remove Elements</summary>
        <p>
          Given an array nums and a value val, remove all instances of that value in-place and return the new length.
          <br>Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
          <br>The order of elements can be changed. It doesn't matter what you leave beyond the new length.
          <br>
          <br><b>Example 1:</b>
          <br>Given nums = [3,2,2,3], val = 3,
          <br>Your function should return length = 2, with the first two elements of nums being 2.
          <br>It doesn't matter what you leave beyond the returned length.
          <br>
          <br><b>Example 2:</b>
          <br>Given nums = [0,1,2,2,3,0,4,2], val = 2,
          <br>Your function should return length = 5, with the first five elements of nums containing 0, 1, 3, 0, and 4.
          <br>Note that the order of those five elements can be arbitrary.
          <br>It doesn't matter what values are set beyond the returned length.
        </p>
      </details>
      <details>
      <summary>Replace Elements</summary>
        <p>
          Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.
          <br>
          <br>After doing so, return the array.
          <br>
          <br><b>Example 1:</b>
          <br>Input: arr = [17,18,5,4,6,1]
          <br>Output: [18,6,6,6,1,-1]
          <br>
          <br><b>Constraints:</b>
          <br>1 <= arr.length <= 10^4
          <br>1 <= arr[i] <= 10^5
        </p>
      </details>
      <details>
      <summary> Sort Array by Parity</summary>
        <p>
          Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.
          <br>You may return any answer array that satisfies this condition.
          <br>
          <br><b>Example 1:</b>
          <br>Input: [3,1,2,4]
          <br>Output: [2,4,3,1]
          <br>The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
          <br>
          <br><b>Constraints:</b>
          <br>1 <= A.length <= 5000
          <br>0 <= A[i] <= 5000
        </p>
      </details>
      <details>
      <summary>Sorted Squares</summary>
        <p>
            Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.
            <br>
            <br><b>Example 1:</b>
            <br>Input: [-4,-1,0,3,10]
            <br>Output: [0,1,9,16,100]
            <br>
            <br><b>Example 2:</b>
            <br>Input: [-7,-3,2,3,11]
            <br>Output: [4,9,9,49,121]
            <br>
            <br><b>Contraints:</b>
            <br>1 <= A.length <= 10000
            <br>-10000 <= A[i] <= 10000
            <br>A is sorted in non-decreasing order.
        </p>
      </details>
      <details>
      <summary> Third Biggest Number</summary>
        <p>
            Given a non-empty array of integers, return the third maximum number in this array. If it does not exist, return the maximum number. The time complexity must be in O(n).
            <br>
            <br><b>Example 1:</b>
            <br>Input: [3, 2, 1]
            <br>Output: 1
            <br>Explanation: The third maximum is 1.
            <br>
            <br><b>Example 2:</b>
            <br>Input: [1, 2]
            <br>Output: 2
            <br>Explanation: The third maximum does not exist, so the maximum (2) is returned instead.
            <br>
            <br><b>Example 3:</b>
            <br>Input: [2, 2, 3, 1]
            <br>Output: 1
            <br>Explanation: Note that the third maximum here means the third maximum distinct number.
            <br>Both numbers with value 2 are both considered as second maximum.
        </p>
      </details>
      <details>
      <summary> Product of all elements but self</summary>
        <p>
          Given an array nums of n integers where n > 1,  return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].
          <br>
          <br><b>Example:</b>
          <br>Input:  [1,2,3,4]
          <br>Output: [24,12,8,6]
          <br>Constraint: It's guaranteed that the product of the elements of any prefix or suffix of the array (including the whole array) fits in a 32 bit integer.
          <br>
          <br>Note: Please solve it without division and in O(n).
          <br>Follow up:
          <br>Could you solve it with constant space complexity? (The output array does not count as extra space for the purpose of space complexity analysis.)
        </p>
      </details>
    </ul>
  </details>
  <details>
  <summary> Binary Tree Programs </summary>
    <ul>
      <details>
      <summary>Pre Order traversal</summary>
        <p>
          Given the root of a binary tree, return the preorder traversal of its nodes' values.
          <br>
          <br><b>Example 1:</b>
          <br>Input: root = [1,null,2,3]
          <br>Output: [1,2,3]
          <br>
          <br><b>Example 2:</b>
          <br>Input: root = []
          <br>Output: []
          <br>
          <br><b>Example 3:</b>
          <br>Input: root = [1]
          <br>Output: [1]
          <br>
          <br><b>Example 4:</b>
          <br>Input: root = [1,2]
          <br>Output: [1,2]
          <br>
          <br><b>Example 5:</b>
          <br>Input: root = [1,null,2]
          <br>Output: [1,2]
          <br>
          <br><b>Constraints:</b>
          <br>The number of nodes in the tree is in the range [0, 100].
          <br>-100 <= Node.val <= 100
          <br>
          <br><b>Follow up:</b>
          <br>Recursive solution is trivial, could you do it iteratively?
        </p>
      </details>
      <details>
      <summary>In order traversal</summary>
        <p>
          Given the root of a binary tree, return the inorder traversal of its nodes' values.
          <br>
          <br><b>Example 1:</b>
          <br>Input: root = [1,null,2,3]
          <br>Output: [1,3,2]
          <br>
          <br><b>Example 2:</b>
          <br>Input: root = []
          <br>Output: []
          <br>
          <br><b>Example 3:</b>
          <br>Input: root = [1]
          <br>Output: [1]
          <br>
          <br><b>Example 4:</b>
          <br>Input: root = [1,2]
          <br>Output: [2,1]
          <br>
          <br><b>Example 5:</b>
          <br>Input: root = [1,null,2]
          <br>Output: [1,2]
          <br>
          <br><b>Constraints:</b>
          <br>The number of nodes in the tree is in the range [0, 100].
          <br>-100 <= Node.val <= 100
          <br>
          <br><b>Follow up:</b>
          <br>Recursive solution is trivial, could you do it iteratively?
        </p>
      </details>
    </ul>
  </details>
  <details>
  <summary> Hash Table Programs</summary>
    <ul>
      <details>
      <summary>Contains a duplicate</summary>
        <p>
          Given an array of integers, find if the array contains any duplicates.
          Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.
          <br>
          <br><b>Example 1:</b>
          <br>Input: [1,2,3,1]
          <br>Output: true
          <br>
          <br><b>Example 2:</b>
          <br>Input: [1,2,3,4]
          <br>Output: false
          <br>
          <br><b>Example 3:</b>
          <br>Input: [1,1,1,3,3,4,3,2,4,2]
          <br>Output: true
        </p>
      </details>
      <details>
      <summary>First unique character</summary>
        <p>
          Given a string, find the first non-repeating character in it and return its index. If it doesn't exist, return -1.
          <br>
          <br><b>Examples:</b>
          <br>s = "leetcode"
          <br>return 0.
          <br>s = "loveleetcode"
          <br>return 2.
          <br>Note: You may assume the string contains only lowercase English letters.
        </p>
      </details>
      <details>
      <summary>Happy Numbers</summary>
        <p>
          Write an algorithm to determine if a number n is "happy".
          <br>
          <br>A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.
          <br>
          <br>Return True if n is a happy number, and False if not.
          <br>
          <br><b>Example:</b>
          <br>
          <br>Input: 19
          <br>Output: true
          <br>Explanation:
          <br>12 + 92 = 82
          <br>82 + 22 = 68
          <br>62 + 82 = 100
          <br>12 + 02 + 02 = 1
        </p>
      </details>
      <details>
      <summary>Intersection of two vectors</summary>
        <p>
          Given two arrays, write a function to compute their intersection.
          <br>
          <br><b>Example 1:</b>
          <br>Input: nums1 = [1,2,2,1], nums2 = [2,2]
          <br>Output: [2]
          <br>
          <br><b>Example 2:</b>
          <br>Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
          <br>Output: [9,4]
          <br>
          <br><b>Note:</b>
          <br>Each element in the result must be unique.
          <br>The result can be in any order.
        </p>
      </details>
      <details>
      <summary>Find the Single Number</summary>
        <p>
          <br>Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
          <br>
          <br>Follow up: Could you implement a solution with a linear runtime complexity and without using extra memory?
          <br>
          <br><b>Example 1:</b>
          <br>Input: nums = [2,2,1]
          <br>Output: 1
          <br>
          <br><b>Example 2:</b>
          <br>Input: nums = [4,1,2,1,2]
          <br>Output: 4
          <br>
          <br><b>Example 3:</b>
          <br>Input: nums = [1]
          <br>Output: 1
          <br>
          <br><b>Constraints:</b>
          <br>1 <= nums.length <= 3 * 10^4
          <br>-3 * 104 <= nums[i] <= 3 * 10^4
          <br>Each element in the array appears twice except for one element which appears only once.
        </p>
      </details>
      <details>
      <summary>Two numbers add up to the target</summary>
        <p>
          Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
          <br>
          <br>You may assume that each input would have exactly one solution, and you may not use the same element twice.
          <br>
          <br>You can return the answer in any order.
          <br>
          <br><b>Example 1:</b>
          <br>Input: nums = [2,7,11,15], target = 9
          <br>Output: [0,1]
          <br>Output: Because nums[0] + nums[1] == 9, we return [0, 1].
          <br>
          <br><b>Example 2:</b>
          <br>Input: nums = [3,2,4], target = 6
          <br>Output: [1,2]
          <br>
          <br><b>Example 3:</b>
          <br>Input: nums = [3,3], target = 6
          <br>Output: [0,1]
          <br>
          <br><b>Constraints:</b>
          <br>2 <= nums.length <= 10^5
          <br>-10^9 <= nums[i] <= 10^9
          <br>-10^9 <= target <= 10^9
          <br>Only one valid answer exists.
        </p>
      </details>
    </ul>
  </details>
  <details>
  <summary> Misc Programs </summary>
    <ul>
      <details>
      <summary>Convert number to words - HARD </summary>
        <p>
          Convert a non-negative integer to its english words representation. Given input is guaranteed to be less than 2^31 - 1.
          <br>
          <br><b>Example 1:</b>
          <br>Input: 123
          <br>Output: "One Hundred Twenty Three"
          <br>
          <br><b>Example 2:</b>
          <br>Input: 12345
          <br>Output: "Twelve Thousand Three Hundred Forty Five"
          <br>
          <br><b>Example 3:</b>
          <br>Input: 1234567
          <br>Output: "One Million Two Hundred Thirty Four Thousand Five Hundred Sixty Seven"
          <br>
          <br></b>Example 4:
          <br>Input: 1234567891
          <br>Output: "One Billion Two Hundred Thirty Four Million Five Hundred Sixty Seven Thousand Eight Hundred Ninety One"
        </p>
      </details>
      <details>
      <summary>Check Version Numbers - MEDIUM</summary>
        <p>
          Given two version numbers, version1 and version2, compare them.
          <br>Version numbers consist of one or more revisions joined by a dot '.'. Each revision consists of digits and may contain leading zeros. Every revision contains at least one character. Revisions are 0-indexed from left to right, with the leftmost revision being revision 0, the next revision being revision 1, and so on. For example 2.5.33 and 0.1 are valid version numbers.
          <br>To compare version numbers, compare their revisions in left-to-right order. Revisions are compared using their integer value ignoring any leading zeros. This means that revisions 1 and 001 are considered equal. If a version number does not specify a revision at an index, then treat the revision as 0. For example, version 1.0 is less than version 1.1 because their revision 0s are the same, but their revision 1s are 0 and 1 respectively, and 0 < 1.
          <br>
          <br>Return the following:
          <br>If version1 < version2, return -1.
          <br>If version1 > version2, return 1.
          <br>Otherwise, return 0.
          <br>
          <br><b>Example 1:</b>
          <br>Input: version1 = "1.01", version2 = "1.001"
          <br>Output: 0
          <br>Explanation: Ignoring leading zeroes, both "01" and "001" represent the same integer "1".
          <br>
          <br><b>Example 2:</b>
          <br>Input: version1 = "1.0", version2 = "1.0.0"
          <br>Output: 0
          <br>Explanation: version1 does not specify revision 2, which means it is treated as "0".
          <br>
          <br><b>Example 3:</b>
          <br>Input: version1 = "0.1", version2 = "1.1"
          <br>Output: -1
          <br>Explanation: version1's revision 0 is "0", while version2's revision 0 is "1". 0 < 1, so version1 < version2.
          <br>
          <br><b>Example 4:</b>
          <br>Input: version1 = "1.0.1", version2 = "1"
          <br>Output: 1
          <br>
          <br><b>Example 5:</b>
          <br>Input: version1 = "7.5.2.4", version2 = "7.5.3"
          <br>Output: -1
          <br>
          <br><b>Constraints:</b>
          <br>1 <= version1.length, version2.length <= 500
          <br>version1 and version2 only contain digits and '.'.
          <br>version1 and version2 are valid version numbers.
          <br>All the given revisions in version1 and version2 can be stored in a 32-bit integer.
        </p>
      </details>
    </ul>
  </details>
</ul>

<!--
<details>
<summary></summary>
  <p>

  </p>
</details>
-->
