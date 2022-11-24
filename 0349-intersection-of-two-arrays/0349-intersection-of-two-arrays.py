class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        minlist=min(nums1,nums2)
        maxlist=max(nums1,nums2)
        ans=[]
        for number in minlist:
            if number in maxlist:
                ans.append(number)
        return sorted(set(ans))