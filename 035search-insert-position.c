//二分法
int searchInsert(int* nums, int numsSize, int target){
    int p=0,q=numsSize-1;
    while(p<=q){
        int mid=(p+q)/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]<target){
            p=mid+1;
        }else{
            q=mid-1;
        }
    }
    return p;
}