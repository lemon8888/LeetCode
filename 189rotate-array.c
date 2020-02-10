//三次反转
void reverse(int* nums,int start,int end){
    for(int i=0;i<(end-start+1)/2;i++){
        int temp;
        temp=nums[start+i];
        nums[start+i]=nums[end-i];
        nums[end-i]=temp;
    }
}
void rotate(int* nums, int numsSize, int k){
    k=k%numsSize;
    reverse(nums,0,numsSize-1);
    reverse(nums,0,k-1);
    reverse(nums,k,numsSize-1);
}