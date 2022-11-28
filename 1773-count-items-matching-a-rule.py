class Solution:
    def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
        id = {
            'type': 0,
            'color': 1,
            'name': 2
        }
        num = 0
        for i in items:
            if i[id[ruleKey]] == ruleValue:
                num += 1

        return num
