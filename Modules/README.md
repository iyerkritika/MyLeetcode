<ul>
  <details>
  <summary> Linked List programs </summary>
    <ul>
      <details>
      <summary> Return the addition of 2 numbers in reverse </summary>
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
      <summary> Return the addition of 2 numbers without reverse </summary>
        <p>
          You are given two non-empty linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
          <br>
          <br>You may assume the two numbers do not contain any leading zero, except the number 0 itself.
          <br>
          <br>Follow up:
          <br>What if you cannot modify the input lists? In other words, reversing the lists is not allowed.
          <br>
          <br><b>Example:</b>
          <br>Input: (7 -> 2 -> 4 -> 3) + (5 -> 6 -> 4)
          <br>Output: 7 -> 8 -> 0 -> 7
        </p>
      </details>
      <details>
      <summary> Find out if a list is cyclic and return true or false </summary>
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
      <summary> Find out if a list is cyclic and return the node </summary>
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
      <summary> Find an intersection of 2 lists </summary>
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
      <summary> Merge Sort List </summary>
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
      <summary>Convert Binary to Integer</summary>
        <p>
          Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.
          <br>
          <br>Return the decimal value of the number in the linked list.
          <br>
          <br><b>Example 1:</b>
          <br>Input: head = [1,0,1]
          <br>Output: 5
          <br>Explanation: (101) in base 2 = (5) in base 10
          <br>
          <br><b>Example 2:</b>
          <br>Input: head = [0]
          <br>Output: 0
          <br>
          <br><b>Example 3:</b>
          <br>Input: head = [1]
          <br>Output: 1
          <br>
          <br><b>Example 4:</b>
          <br>Input: head = [1,0,0,1,0,0,1,1,1,0,0,0,0,0,0]
          <br>Output: 18880
          <br>
          <br><b>Example 5:</b>
          <br>Input: head = [0,0]
          <br>Output: 0
          <br>
          <br><b>Constraints:</b>
          <br>The Linked List is not empty.
          <br>Number of nodes will not exceed 30.
          <br>Each node's value is either 0 or 1.
        </p>
      </details>
      <details>
      <summary> Insertion Sort </summary>
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
      <details>
      <summary> Removing Elements in a List</summary>
        <p>
          Remove all elements from a linked list of integers that have value val.
          <br>
          <br><b>Example:</b>
          <br>Input:  1->2->6->3->4->5->6, val = 6
          <br>Output: 1->2->3->4->5
          </p>
      </details>
      <details>
      <summary> Rotate a list to the right </summary>
        <p>
          Given the head of a linked list, rotate the list to the right by k places.
          <br>
          <br><b>Example 1:</b>
          <br>Input: head = [1,2,3,4,5], k = 2
          <br>Output: [4,5,1,2,3]
          <br>
          <br><b>Example 2:</b>
          <br>Input: head = [0,1,2], k = 4
          <br>Output: [2,0,1]
          <br>
          <br><b>Constraints:</b>
          <br>The number of nodes in the list is in the range [0, 500].
          <br>-100 <= Node.val <= 100
          <br>0 <= k <= 2 * 109
        </p>
      </details>
      <details>
      <summary> Rearrange List based on indexing parity </summary>
        <p>
          Given a singly linked list, group all odd nodes together followed by the even nodes. Please note here we are talking about the node number and not the value in the nodes.
          <br>
          <br>You should try to do it in place. The program should run in O(1) space complexity and O(nodes) time complexity.
          <br>
          <br><b>Example 1:</b>
          <br>Input: 1->2->3->4->5->NULL
          <br>Output: 1->3->5->2->4->NULL
          <br>
          <br><b>Example 2:</b>
          <br>Input: 2->1->3->5->6->4->7->NULL
          <br>Output: 2->3->6->7->1->5->4->NULL
          <br>
          <br><b>Constraints:</b>
          <br>The relative order inside both the even and odd groups should remain as it was in the input.
          <br>The first node is considered odd, the second node even and so on ...
          <br>The length of the linked list is between [0, 10^4].
        </p>
      </details>
      <details>
      <summary> Palindrome Linked List </summary>
        <p>
          Given a singly linked list, determine if it is a palindrome.
          <br>
          <br><b>Example 1:</b>  
          <br>Input: 1->2
          <br>Output: false
          <br>
          <br><b>Example 2:</b>
          <br>Input: 1->2->2->1
          <br>Output: true
          <br>
          <br>Follow up:
          <br>Could you do it in O(n) time and O(1) space?
        </p>
      </details>
      <details>
      <summary> Insert Element into Cyclic sorted List</summary>
        <p>
          Given a node from a Circular Linked List which is sorted in ascending order, write a function to insert a value insertVal into the list such that it remains a sorted circular list. The given node can be a reference to any single node in the list, and may not be necessarily the smallest value in the circular list.
          <br>
          <br>If there are multiple suitable places for insertion, you may choose any place to insert the new value. After the insertion, the circular list should remain sorted.
          <br>
          <br>If the list is empty (i.e., given node is null), you should create a new single circular list and return the reference to that single node. Otherwise, you should return the original given node.
          <br> 
          <br><b>Example 1:</b>
          <br>Input: head = [3,4,1], insertVal = 2
          <br>Output: [3,4,1,2]
          <br>Explanation: In the figure above, there is a sorted circular list of three elements. You are given a reference to the node with value 3, and we need to insert 2 into the list. The new node should be inserted between node 1 and node 3. After the insertion, the list should look like this, and we should still return node 3.
          <br>
          <br><b>Example 2:</b>
          <br>Input: head = [], insertVal = 1
          <br>Output: [1]
          <br>Explanation: The list is empty (given head is null). We create a new single circular list and return the reference to that single node.
          <br>
          <br><b>Example 3:</b>
          <br>Input: head = [1], insertVal = 0
          <br>Output: [1,0]
        </p>
      </details>
      <details>
      <summary>Add one to an integer</summary>
        <p>
          Given a non-negative integer represented as a linked list of digits, plus one to the integer.
          <br>
          <br>The digits are stored such that the most significant digit is at the head of the list.
          <br>
          <br><b>Example 1:</b>
          <br>Input: head = [1,2,3]
          <br>Output: [1,2,4]
          <br>
          <br><b>Example 2:</b>
          <br>Input: head = [0]
          <br>Output: [1]
          <br>
          <br><b>Constraints:</b>
          <br>The number of nodes in the linked list is in the range [1, 100].
          <br>0 <= Node.val <= 9
          <br>The number represented by the linked list does not contain leading zeros except for the zero itself. 
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
      <summary> Copy a List with a Random Pointer </summary>
        <p>
          A linked list of length n is given such that each node contains an additional random pointer, which could point to any node in the list, or null.
          <br>
          <br>Construct a deep copy of the list. The deep copy should consist of exactly n brand new nodes, where each new node has its value set to the value of its corresponding original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. None of the pointers in the new list should point to nodes in the original list.
          <br>
          <br>For example, if there are two nodes X and Y in the original list, where X.random --> Y, then for the corresponding two nodes x and y in the copied list, x.random --> y.
          <br>
          <br>Return the head of the copied linked list.
          <br>
          <br>The linked list is represented in the input/output as a list of n nodes. Each node is represented as a pair of [val, random_index] where:
          <br>
          <br>val: an integer representing Node.val
          <br>random_index: the index of the node (range from 0 to n-1) that the random pointer points to, or null if it does not point to any node.
          <br>Your code will only be given the head of the original linked list.
          <br>
          <br><b>Example 1:</b>
          <br>
          <br>Input: head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
          <br>Output: [[7,null],[13,0],[11,4],[10,2],[1,0]]
          <br>
          <br><b>Example 2:</b>
          <br>Input: head = [[1,1],[2,1]]
          <br>Output: [[1,1],[2,1]]
          <br>
          <br><b>Example 3:</b>
          <br>Input: head = [[3,null],[3,0],[3,null]]
          <br>Output: [[3,null],[3,0],[3,null]]
          <br>
          <br><b>Example 4:</b>
          <br>Input: head = []
          <br>Output: []
          <br>Explanation: The given linked list is empty (null pointer), so return null.
          <br>
          <br><b>Constraints:</b>
          <br>
          <br>0 <= n <= 1000
          <br>-10000 <= Node.val <= 10000
          <br>Node.random is null or is pointing to some node in the linked list.
        </p>
  </details>
    </ul>
  </details>
  <details>
  <summary> Vector Programs </summary>
    <ul>
      <details>
      <summary> Find Disappeared numbers </summary>
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
      <summary> Duplicating 0s </summary>
        <p>
          Given a fixed length array arr of integers, duplicate each occurrence of zero, shifting the remaining elements to the right.
          Note that elements beyond the length of the original array are not written.
          Do the above modifications to the input array in place, do not return anything from your function.
          <br>
          <br><b>Example 1: </b>
          <br>Input: [1,0,2,3,0,4,5,0]
          <br>Output: null
          <br>Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]
          <br>
          <br><b>Example 2: </b>
          <br>Input: [1,2,3]
          <br>Output: null
          <br>Explanation: After calling your function, the input array is modified to: [1,2,3]
          <br>
          <br><b>Contraints:</b>
          <br>1 <= arr.length <= 10000
          <br>0 <= arr[i] <= 9
        </p>
      </details>
      <details>
      <summary> Even Digit Numbers in an Array </summary>
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
      <summary> Height Checker </summary>
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
      <summary> Maximum consecutive 1s </summary>
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
      <summary> Maximum consecutive 1s Flipping 1 0</summary>
        <p>
          Given a binary array, find the maximum number of consecutive 1s in this array if you can flip at most one 0.
          <br>  
          <br><b>Example 1:</b>
          <br>Input: [1,0,1,1,0]
          <br>Output: 4
          <br>Explanation: Flip the first zero will get the the maximum number of consecutive 1s.
          After flipping, the maximum number of consecutive 1s is 4.
          <br>
          <br><b>Note:</b>
          <br>The input array will only contain 0 and 1.
          <br>The length of input array is a positive integer and will not exceed 10,000
          <br><b>Follow up:</b>
          <br>What if the input numbers come in one by one as an infinite stream? In other words, you can't store all numbers coming from the stream as it's too large to hold in memory. Could you solve it efficiently?
        </p>
      </details>
      <details>
      <summary> Merge sort </summary>
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
      <summary> Mountain Array </summary>
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
      <summary> Move Zeroes </summary>
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
      <summary> Remove Duplicates </summary>
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
      <summary> Remove Elements </summary>
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
      <summary> Replace Elements </summary>
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
      <summary> Sort Array by Parity </summary>
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
      <summary> Sorted Squares </summary>
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
      <summary> Third Biggest Number </summary>
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
      <summary> Product of all elements but self </summary>
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
      <details>
      <summary> Minimum cost to stack coins on one column </summary>
        <p>
          We have n chips, where the position of the ith chip is position[i].
          <br>
          <br>We need to move all the chips to the same position. In one step, we can change the position of the ith chip from position[i] to:
          <br>
          <br>position[i] + 2 or position[i] - 2 with cost = 0.
          <br>position[i] + 1 or position[i] - 1 with cost = 1.
          <br>Return the minimum cost needed to move all the chips to the same position.
          <br>  
          <br><b>Example 1:</b>
          <br>Input: position = [1,2,3]
          <br>Output: 1
          <br>Explanation: First step: Move the chip at position 3 to position 1 with cost = 0.
          <br>Second step: Move the chip at position 2 to position 1 with cost = 1.
          <br>Total cost is 1.
          <br>
          <br><b>Example 2:</b>
          <br>Input: position = [2,2,2,3,3]
          <br>Output: 2
          <br>Explanation: We can move the two chips at position  3 to position 2. Each move has cost = 1. The <br>total cost = 2.
          <br>
          <br><b>Example 3:</b>
          <br>Input: position = [1,1000000000]
          <br>Output: 1
          <br>
          <br><b>Constraints:</b>
          <br>1 <= position.length <= 100
          <br>1 <= position[i] <= 10^9
        </p>
      </details>
      <details>
      <summary> Find the Smallest Divisor Given a Threshold </summary>
        <p>
          Given an array of integers nums and an integer threshold, we will choose a positive integer divisor and divide all the array by it and sum the result of the division. Find the smallest divisor such that the result mentioned above is less than or equal to threshold.
          <br>
          <br>Each result of division is rounded to the nearest integer greater than or equal to that element.(For example: 7/3 = 3 and 10/2 = 5).
          <br>
          <br>It is guaranteed that there will be an answer.
          <br>
          <br><b>Example 1:</b>
          <br>Input: nums = [1,2,5,9], threshold = 6
          <br>Output: 5
          <br>Explanation: We can get a sum to 17 (1+2+5+9) if the divisor is 1.
          <br>If the divisor is 4 we can get a sum to 7 (1+1+2+3) and if the divisor is 5 the sum will be 5 (1+1+1+2).
          <br>
          <br><b>Example 2:</b>
          <br>Input: nums = [2,3,5,7,11], threshold = 11
          <br>Output: 3
          <br>
          <br><b>Example 3:</b>
          <br>Input: nums = [19], threshold = 5
          <br>Output: 4
          <br>
          <br><b>Constraints:</b>
          <br>1 <= nums.length <= 5 * 10^4
          <br>1 <= nums[i] <= 10^6
          <br>nums.length <= threshold <= 10^6
        </p>
      </details>
      <details>
      <summary> Find the Shortest distance between two words in a vector</summary>
        <p>
          Given a list of words and two words word1 and word2, return the shortest distance between these two words in the list.
          <br>
          <br><b>Example 1:</b>
          <br>Assume that words = ["practice", "makes", "perfect", "coding", "makes"].
          <br>Input: word1 = “coding”, word2 = “practice”
          <br>Output: 3
          <br>
          <br><b>Example 2:</b>
          <br>Input: word1 = "makes", word2 = "coding"
          <br>Output: 1
          <br><b>Note:</b>
          <br>You may assume that word1 does not equal to word2, and word1 and word2 are both in the list.
        </p>
      </details>
      <details>
      <summary>Can pot flowers in a flowerbed</summary>
        <p>
            You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.
            <br>
            <br>Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule.
            <br>
            <br><b>Example 1:</b>
            <br>Input: flowerbed = [1,0,0,0,1], n = 1
            <br>Output: true
            <br>
            <br><b>Example 2:</b>
            <br>Input: flowerbed = [1,0,0,0,1], n = 2
            <br>Output: false
            <br> 
            <br><b>Constraints:</b>
            <br>1 <= flowerbed.length <= 2 * 104
            <br>flowerbed[i] is 0 or 1.
            <br>There are no two adjacent flowers in flowerbed.
            <br>0 <= n <= flowerbed.length
        </p>
      </details>
    </ul>
  </details>
  <details>
  <summary> Binary Tree Programs </summary>
    <ul>
      <details>
      <summary> Pre Order traversal </summary>
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
      <summary> In order traversal </summary>
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
      <details>
      <summary> Level order Traversal</summary>
        <p>
          Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).
          <br>
          <br><b>For example:</b>
          <br>Given binary tree [3,9,20,null,null,15,7],
          <br>&emsp;&emsp;3
          <br>&emsp;&emsp;/&emsp;\
          <br>&emsp;&ensp;9&ensp;&emsp;20
          <br> &emsp;&emsp;&emsp;/&emsp;\
          <br>&emsp;&ensp;15&emsp;&emsp;7
          <br>return its level order traversal as:
          <br>[
          <br>  [3],
          <br>  [9,20],
          <br>  [15,7]
          <br>]
        </p>
      </details>
      <details>
      <summary>Maximum depth of tree </summary>
        <p>
          Given the root of a binary tree, return its maximum depth.
          <br>
          <br>A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
          <br>
          <br><b>Example 1:</b>
          <br>Input: root = [3,9,20,null,null,15,7]
          <br>Output: 3
          <br>
          <br><b>Example 2:</b>
          <br>Input: root = [1,null,2]
          <br>Output: 2
          <br>
          <br><b>Example 3:</b>
          <br>Input: root = []
          <br>Output: 0
          <br>
          <br><b>Example 4:</b>
          <br>Input: root = [0]
          <br>Output: 1
          <br> 
          <br><b>Constraints:</b>
          <br>The number of nodes in the tree is in the range [0, 104].
          <br>-100 <= Node.val <= 100
        </p>
      </details>
      <details>
      <summary> Path to sum </summary>
        <p>
          Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.
          <br>
          <br>Note: A leaf is a node with no children.
          <br>
          <br><b>Example:</b>
          <br>
          <br>Given the below binary tree and sum = 22,
          <br>
          <br>&emsp;&emsp;&ensp;<b>5</b>
          <br>&emsp;&emsp;<b>/</b>&emsp;&emsp;\
          <br>&emsp;&ensp;<b>4</b>&emsp;&emsp;&ensp;8
          <br>&emsp;<b>/</b>&emsp;&emsp;&emsp;/&ensp;\
          <br>&emsp;<b>11</b>&emsp;&emsp;13&emsp;4
          <br>&ensp;/&emsp;<b>\</b>&emsp;&emsp;&emsp;&emsp;&emsp;&ensp;\
          <br>7&emsp;&emsp;<b>2</b>&emsp;&emsp;&emsp;&emsp;&emsp;1
          <br>return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.
        </p>
      </details>
    </ul>
  </details>
  <details>
  <summary> Hash Table Programs </summary>
    <ul>
      <details>
      <summary> Contains a duplicate </summary>
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
      <summary> First unique character </summary>
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
      <summary> Happy Numbers </summary>
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
      <summary> Intersection of two vectors </summary>
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
      <summary> Find the Single Number </summary>
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
      <summary> Two numbers add up to the target </summary>
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
      <summary> Check Version Numbers - MEDIUM</summary>
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
      <details>
      <summary> Maximum chacter repetition in one string </summary>
        <p>
        Given a string s, the power of the string is the maximum length of a non-empty substring that contains only one unique character.
        <br>
        <br>Return the power of the string.
        <br>
        <br><b>Example 1:</b>
        <br>Input: s = "leetcode"
        <br>Output: 2
        <br>Explanation: The substring "ee" is of length 2 with the character 'e' only.
        <br>
        <br><b>Example 2:</b>
        <br>Input: s = "abbcccddddeeeeedcba"
        <br>Output: 5
        <br>Explanation: The substring "eeeee" is of length 5 with the character 'e' only.
        <br>
        <br><b>Example 3:</b>
        <br>Input: s = "triplepillooooow"
        <br>Output: 5
        <br>
        <br><b>Example 4:</b>
        <br>Input: s = "hooraaaaaaaaaaay"
        <br>Output: 11
        <br>
        <br><b>Example 5:</b>
        <br>Input: s = "tourist"
        <br>Output: 1
        <br>
        <br><b>Constraints:</b>
        <br>1 <= s.length <= 500
        <br>s contains only lowercase English letters.
        </p>
      </details>
      <details>
      <summary> Kth factor of n </summary>
        <p>
          Given two positive integers n and k.
          <br>
          <br>A factor of an integer n is defined as an integer i where n % i == 0.
          <br>
          <br>Consider a list of all factors of n sorted in ascending order, return the kth factor in this list or return -1 if n has less than k factors.
          <br> 
          <br><b>Example 1:</b>
          <br>Input: n = 12, k = 3
          <br>Output: 3
          <br>Explanation: Factors list is [1, 2, 3, 4, 6, 12], the 3rd factor is 3.
          <br>
          <br><b>Example 2:</b>
          <br>Input: n = 7, k = 2
          <br>Output: 7
          <br>Explanation: Factors list is [1, 7], the 2nd factor is 7.
          <br>
          <br><b>Example 3:</b>
          <br>Input: n = 4, k = 4
          <br>Output: -1
          <br>Explanation: Factors list is [1, 2, 4], there is only 3 factors. We should return -1.
          <br>
          <br><b>Example 4:</b>
          <br>Input: n = 1, k = 1
          <br>Output: 1
          <br>Explanation: Factors list is [1], the 1st factor is 1.
          <br>
          <br><b>Example 5:</b>
          <br>Input: n = 1000, k = 3
          <br>Output: 4
          <br>Explanation: Factors list is [1, 2, 4, 5, 8, 10, 20, 25, 40, 50, 100, 125, 200, 250, 500, 1000].
          <br> 
          <br><b>Constraints:</b>
          <br>1 <= k <= n <= 1000
        </p>
      </details>
      <details>
      <summary> Decode string and return letter</summary>
        <p>
          An encoded string S is given.  To find and write the decoded string to a tape, the encoded string is read one character at a time and the following steps are taken:
          <br>
          <br>If the character read is a letter, that letter is written onto the tape.
          <br>If the character read is a digit (say d), the entire current tape is repeatedly written d-1 more times in total.
          <br>Now for some encoded string S, and an index K, find and return the K-th letter (1 indexed) in the decoded string.
          <br>
          <br><b>Example 1</b>
          <br>Input: S = "leet2code3", K = 10
          <br>Output: "o"
          <br>Explanation: 
          <br>The decoded string is "leetleetcodeleetleetcodeleetleetcode".
          <br>The 10th letter in the string is "o".
          <br>
          <br><b>Example 2</b>:
          <br>Input: S = "ha22", K = 5
          <br>Output: "h"
          <br>Explanation: 
          <br>The decoded string is "hahahaha".  The 5th letter is "h".
          <br>
          <br><b>Example 3</b>:
          <br>Input: S = "a2345678999999999999999", K = 1
          <br>Output: "a"
          <br>Explanation: 
          <br>The decoded string is "a" repeated 8301530446056247680 times.  The 1st letter is "a".
          <br> 
          <br><b>Constraints:</b>
          <br>2 <= S.length <= 100
          <br>S will only contain lowercase letters and digits 2 through 9.
          <br>S starts with a letter.
          <br>1 <= K <= 10^9
          <br>It's guaranteed that K is less than or equal to the length of the decoded string.
          <br>The decoded string is guaranteed to have less than 2^63 letters.
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
