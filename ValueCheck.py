#!/usr/bin/env python
# coding: utf-8

# In[ ]:


arr = [1,5,8,2,5,9,2,3,7,8]
val = int(input('Enter the number you wish to check: '))
print(val)
count = 0
for i in arr:
    if i==val:
        count+=1
print(count)

