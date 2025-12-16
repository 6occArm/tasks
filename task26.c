int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }
    
    int k = 1;  // Указатель на позицию для записи уникального элемента
    
    for (int i = 1; i < numsSize; i++) {
        // Если текущий элемент отличается от предыдущего уникального
        if (nums[i] != nums[k - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    
    return k;
}