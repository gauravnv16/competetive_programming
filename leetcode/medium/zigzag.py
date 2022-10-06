# Input: s = "PAYPALISHIRING", numRows = 4
# Output: "PINALSIGYAHRPI"
# Explanation:
# P     I    N
# A   L S  I G
# Y A   H R
# P     I
class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1 or numRows == 0 : return s
        matrix_pattern = []
        for i in range(0,numRows):
            matrix_pattern.append([])
        f,b = 0,numRows - 1
        for i in range(0,len(s)):
            if f == numRows:
                b -= 1
                matrix_pattern[b].append(s[i])
                
            else:
                matrix_pattern[f].append(s[i])
                f += 1
            
            if b == 0 and f == numRows:
                f,b = 1,numRows - 1
        res = ''
        for i in matrix_pattern:
            for j in i:
                res += j
        return res