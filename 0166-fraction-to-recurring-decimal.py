# 取符号、取整数、取小数
class Solution:
    def fractionToDecimal(self, numerator: int, denominator: int) -> str:
        if numerator == 0 or denominator == 0:
            return "0"
        nums = []
        temp = []
        if (numerator < 0) != (denominator < 0):  # 取符号
            nums.append('-')
            temp.append('-')

        num = abs(numerator)
        den = abs(denominator)
        a = num // den  # 取整数
        b = num % den
        nums.append(str(a))
        if b != 0:
            nums.append('.')
        while b != 0:  # 取小数
            if b not in temp:
                temp.append(b)
                nums.append(str(b * 10 // den))
            else:
                nums.insert(temp.index(b) + 2, '(')
                nums.append(')')
                break
            b = b * 10 % den

        return ''.join(nums)
