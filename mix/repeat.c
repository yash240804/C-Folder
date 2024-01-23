#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};

    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        int count = 1;
        if (arr[i] == -1000)
        {
            continue;
        }

            for (int n = i + 1; n < size; n++){
                if (arr[i] == arr[n])
                {
                    count++;
                    arr[n] = (-1000);
                }
        }

        if (count > 1)
        {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}
