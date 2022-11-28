# 利用单调栈，通过比较大小更新跨度值
class StockSpanner:

    def __init__(self):
        self.stack = [(-1, inf)]
        self.index = -1

    def next(self, price: int) -> int:
        self.index += 1
        while price >= self.stack[-1][1]:
            self.stack.pop()
        self.stack.append((self.index, price))
        return self.index - self.stack[-2][0]
