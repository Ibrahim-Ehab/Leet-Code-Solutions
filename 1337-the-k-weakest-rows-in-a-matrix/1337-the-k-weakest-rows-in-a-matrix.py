class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        S = [[sum(mat),i] for i,mat in enumerate(mat)]
        R = sorted(S)
        return [r[1] for r in R[:k]]