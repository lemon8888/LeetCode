//uthash散列表
typedef struct {
    int num;
    int count;
    int start;
    int end;
    UT_hash_handle hh;
} numhash;

numhash *numh = NULL;

int findShortestSubArray(int* nums, int numsSize) {
    numhash *s = NULL;
    numhash *tmp = NULL;
    int max = 1;
    int size = numsSize;
    numh = NULL;
    for(int i = 0; i < numsSize; i++) {
        HASH_FIND_INT(numh, &nums[i], s);
        if(s == NULL) {
            s = (numhash*)malloc(sizeof(numhash));
            s->num = nums[i];
            s->count = 1;
            s->start = i;
            s->end = i;
            HASH_ADD_INT(numh, num, s);
        } else {
            s->count++;
            s->end = i;
            max = fmax(max, s->count);
        }
    }
    HASH_ITER(hh, numh, s, tmp) {
        if(s->count == max) {
            size = fmin(size, s->end - s->start + 1);
        }
    }
    return size;
}
