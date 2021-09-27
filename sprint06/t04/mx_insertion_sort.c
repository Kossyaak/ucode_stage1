int mx_strlen(const char *s);
int mx_insertion_sort(char **arr, int size) 
{
	int iterations = 0;
	char *buf;
    for (int i = 1; i < size; i++) 
    {
        buf = arr[i];
        int j = 0;
        for (j = i - 1; j >= 0 && (mx_strlen(buf) < mx_strlen(arr[j])); j--) 
        {
            arr[j + 1] = arr[j];
            iterations++;
        }
        arr[j + 1] = buf;
    }
    return iterations;
}







