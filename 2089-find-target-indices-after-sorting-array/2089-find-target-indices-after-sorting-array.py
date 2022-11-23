class Solution:
    def targetIndices(self, nums: List[int], target: int) -> List[int]:
        nums.sort()
        
        def bin_search(arr, t, lower=True):
            left, right = 0, len(arr) -1 
            
            while left <= right:

                mid = (left + right) // 2

                if arr[mid] == t:
                    if lower:
                        if mid == left or nums[mid] != arr[mid - 1]:
                            return mid
                        else:
                            right = mid - 1
                    else:
                        if mid == right or arr[mid] != arr[mid + 1]:
                            return mid
                        else:
                            left = mid + 1
                        
                elif arr[mid] > t:
                    right = mid - 1 
                elif nums[mid] < t:
                    left = mid + 1
            
            return -1
        
        start, end = bin_search(nums, target), bin_search(nums, target, False)
        
        if start < 0 and end < 0:
            return []
        
        return list(range(start, end + 1))