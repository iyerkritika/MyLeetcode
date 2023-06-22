#!/usr/bin/env python
# coding: utf-8

# In[2]:


def isPalindrome(x):
    if x < 0:
        return False
    elif x < 10:
        return True
    x = str(x)
    l = len(x)
    for i in range(l//2):
        if x[i] != x[l-1-i]:
            return False     
    return True
num=(int(input('Please enter a number to check if palindrome: ')))
print(isPalindrome(num))

