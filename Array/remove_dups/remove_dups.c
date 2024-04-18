int removeDuplicates(int* nums, int numsSize) 
{
    // If array size is 0 or 1, no duplicates to remove
    if (numsSize <= 1) return numsSize; 
    
    int uniqueIndex = 1; // unique index
    for (int i = 1; i < numsSize; i++) 
    {
        if (nums[i] != nums[i - 1]) 
        { 
            if(uniqueIndex != i)
            {
                // overwrite array if the current element is different from the previous one
                nums[uniqueIndex] = nums[i]; 
            }
            // increment unique index
            uniqueIndex++; 
        }
    }
    // return the number of unique elements
    return uniqueIndex; 
}