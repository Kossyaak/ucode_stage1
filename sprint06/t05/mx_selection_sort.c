int mx_strcmp(const char*s1, const char*s2);
int mx_strlen(const char *s);
int mx_selection_sort(char**arr, int size)
{
    int iterations = 0;
    int pos = 0;
    char *tmp;
    for (int i = 0; i < size - 1; i++)
        {
            if(arr[i] == NULL)
            {
                    return 0;
            }
            pos = i;
                for (int j = i + 1; j < size; j++)
                {
                    
                    if (mx_strlen(arr[pos]) > mx_strlen(arr[j])) 
                    {
                        pos = j;
                    }
                    else if (mx_strlen(arr[pos]) == mx_strlen(arr[j]) && mx_strcmp(arr[pos], arr[j]) > 0)
                    {
                        pos = j;
                    }
                }
                if(pos != i)
                {
                    iterations++;
                    tmp = arr[i];
                    arr[i] = arr[pos];
                    arr[pos] = tmp;
                }
        }
        return iterations;
}






