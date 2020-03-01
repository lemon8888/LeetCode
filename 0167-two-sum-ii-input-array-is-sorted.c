//利用升序特点，移动首尾指针
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    *returnSize=0;
    int i=0,j=numbersSize-1;
    while(i<j){
        if(numbers[i]+numbers[j]==target){
            int* res=(int*)malloc(sizeof(int)*2);
            res[0]=i+1;
            res[1]=j+1;
            *returnSize=2;
            return res;
        }else if(numbers[i]+numbers[j]<target){
            i++;
        }else{
            j--;
        }
    }
    *returnSize=0;
    return NULL;
}
