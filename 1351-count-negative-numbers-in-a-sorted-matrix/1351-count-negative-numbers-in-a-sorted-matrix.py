class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        return sum([self.binary_search(arr) for arr in grid])
    
    def binary_search(self,row):
        start,end=0,len(row)-1
        while start<=end:
            midean=(start+end)//2 
            if row[midean]<0:
                end=midean-1
            else:
                start=midean+1
        return len(row)-start
    
    
    