<details>
<summary>Linked List programs</summary>
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
        <br>The number of the nodes in the list is in the range [0, 104].
        <br>-105 <= Node.val <= 105
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
  </ul>
</details>
