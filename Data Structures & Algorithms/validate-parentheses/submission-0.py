class Solution:
    def isValid(self, s: str) -> bool:
        matching = {')': '(', ']': '[', '}': '{'}

        stack = []
        for ch in s:
            if ch not in matching:
                stack.append(ch)
            else:
                if not stack or stack.pop() != matching[ch]:
                    return False
        
        return not stack