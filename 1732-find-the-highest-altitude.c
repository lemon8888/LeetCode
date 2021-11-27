int largestAltitude(int* gain, int gainSize) {
    int ret = 0, sum = 0;;
    for(int i = 0; i < gainSize; i++) {
        sum += gain[i];
        ret = fmax(ret, sum);
    }
    return ret;
}
