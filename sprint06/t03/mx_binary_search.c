int mx_strcmp(const char*s1, const char *s2);
int mx_binary_search(char **arr, int size, const char*s, int* count)
{
    int midd = 0;
    int left = 0;
    int right = size - 1;
    for(; left <= right ; )
    {
            *count += 1;
            midd = left + (right - left) / 2;

            if (mx_strcmp(s, arr[midd]) > 0)
            {
                left = midd + 1;
            }
            else
            {
                right = midd - 1;
            }
             if(mx_strcmp(s, arr[midd]) == 0)
            {
                return midd;
            }
            else
            {
                midd = -1;
            }
    }
    *count = 0;
    return midd;
}







