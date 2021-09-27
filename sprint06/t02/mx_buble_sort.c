int mx_strcmp(const char*s1, const char*s2);
int mx_bubble_sort(char **arr, int size)
{   
    int iterations = 0;
    for (int i = 0; i < size - 1; i++) 
    { 
        for (int j = i + 1; j < size; j++) 
        {
            if (mx_strcmp(arr[i], arr[j]) > 0) 
            {
                char *buf = arr[i];
                arr[i] = arr[j];
                arr[j] = buf;
                iterations++;
            }
        }
    }
    return iterations;
}







