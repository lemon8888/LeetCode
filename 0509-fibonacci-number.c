//动态规划
//自底向上
int fib(int N) {
    if(N <= 1) {
        return N;
    }
    int num[N + 1];
    num[0] = 0;
    num[1] = 1;
    for(int i = 2; i <= N; i++) {
        num[i] = num[i - 1] + num[i - 2];
    }
    return num[N];
}


//迭代
int fib(int N) {
    if(N <= 1) {
        return N;
    }
    int a = 0, b = 1, num;
    for(int i = 2; i <= N; i++) {
        num = a + b;
        a = b;
        b = num;
    }
    return num;
}
