#include <iostream>

using namespace std;

int32_t RemoveDuplicates(int32_t *array, size_t lenght);

int32_t main()
{
    int32_t k;
    size_t lenght = 19;
    int32_t nums[lenght] = {1, 1, 2, 2, 2, 3, 3, 4, 5, 5, 5, 6, 6, 6, 7, 7, 8, 9, 9};

    printf("Original: ");
    for (size_t i = 0 ; i < lenght ; ++i)
    {
        printf("%i ", nums[i]);

    }

    puts("");

    k = RemoveDuplicates(nums, lenght);

    printf("Modified: ");
    for (size_t i = 0 ; i < lenght ; ++i)
    {
        printf("%i ", nums[i]);

    }

    puts("");

    printf("k: %d", k);

    puts("");

    return EXIT_SUCCESS;
}

int32_t RemoveDuplicates(int32_t *nums, size_t lenght)
{
    int32_t k = lenght;

    for (size_t i = 0 ; i < lenght ; ++i)
    {
        if (nums[i] == nums[i + 1] && nums[i + 1] == nums[i + 2])
        {
            --k;
            for (size_t j = i + 2 ; j < lenght ; ++j)
            {
                if (j == lenght - 1)
                {
                    swap(nums[j], nums[lenght - 1]);
                }
                else
                {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
    }

    return k;
}