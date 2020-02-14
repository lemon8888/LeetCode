//计算n+1个数的和减去数组的和
int missingNumber(int* nums, int numsSize){
    int sum=(numsSize+1)*numsSize/2,numsum=0;
    for(int i=0;i<numsSize;i++){
        numsum+=nums[i];
    }
    return sum-numsum;
}
//建立新数组查找
int missingNumber(int* nums, int numsSize){
   int* res=(int *)calloc(numsSize+1,sizeof(int));
   for(int i=0;i<numsSize;i++){
        res[nums[i]]=1;
    }
    for(int j=0;j<numsSize+1;j++){
        if(res[j]==0){
            return j;
        }
    }
    return -1;
}
//先排序后查找
int missingNumber(int* nums, int numsSize){
    int i,j,min,min_index;
    for(i=0;i<numsSize;i++){
        min=nums[i];
        min_index=i;
        for(j=i;j<numsSize;j++){
            if(nums[j]<min){
                min=nums[j];
                min_index=j;
            }
        }
        j=nums[i];
        nums[i]=min;
        nums[min_index]=j;
    }
    for(i=0;i<numsSize;i++)
        if(nums[i]!=i) return i;
    return numsSize;
}