class Solution:
    def minOperations(self, logs: List[str]) -> int:
        actions = []

        for log in logs:
            if log == './':
                continue

            if log == '../':
                if len(actions) != 0: 
                    actions.pop()
                continue
                
            actions.append(log)

        return len(actions)
