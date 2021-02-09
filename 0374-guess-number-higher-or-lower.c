//二分法
int guessNumber(int n) {
    int low = 0, high = n, mid, tmp;
    while(low <= high) {
        mid = low + (high - low) / 2;
        tmp = guess(mid);
        if(tmp == 0) {
            return mid;
        } else if(tmp == 1) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return 0;
}
