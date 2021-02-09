//二分法
bool isBadVersion(int version);

int firstBadVersion(int n) {
    int i = 1, mid;
    while(i <= n) {
        mid = i + (n - i) / 2;
        if(isBadVersion(mid)) {
            if(!isBadVersion(mid - 1)) {
                return mid;
            } else {
                n = mid - 1;
            }
        } else {
            i = mid + 1;
        }
    }
    return -1;
}
