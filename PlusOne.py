#!/usr/bin/env python
# coding: utf-8

# In[3]:


import math
def plusOne(digits):
    num=''
    for r in digits:
        num=num+str(r)
    return [int(x) for x in str(int(num)+1)]
lst= [1,2,3,9,4,9,2,9]
plusOne(lst)

