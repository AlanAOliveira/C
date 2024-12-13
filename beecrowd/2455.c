#include <stdio.h>

int main()
{
    int i,nums[4];
    scanf("%i %i %i %i", nums,nums+1,nums+2,nums+3);
    printf("%i\n",nums[0]*nums[1] == nums[2]*nums[3] ? 0 : nums[0]*nums[1] > nums[2]*nums[3] ? -1 : 1);
    return 0;
}