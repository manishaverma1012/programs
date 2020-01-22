nums = [ 1 , 2, 3, 4 ,5 ,6 , 7,]
nums.append(45)
nums.insert(2, 67)
nums.pop(4)
nums.remove(3)
nums.pop()
del nums[1:5]
nums.extend([23 , 65, 87, 90, 45, 63])
nums.sort()
print(nums)
a = max(nums)
b = min(nums)
c = sum(nums)
print(a,b,c)