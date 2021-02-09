//翻转比较是否相同
bool isPalindrome(int x) {
    if(x < 0) {
        return false;
    }
    long temp = x, y = 0;
    while(temp) {
        y = y * 10 + temp % 10;
        temp /= 10;
    }
    return x == y;
}
