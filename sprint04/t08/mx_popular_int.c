int mx_popular_int(const int *arr, int size) 
{
    int num[size];
    for (int i = 0; i < size; i++) 
    {
        num[i] = 0;
        int tmp = arr[i];
        for (int a = 0; a < size; a++) 
        {
            if (tmp == arr[a]) 
            {      
                num[i]++;
            }
        }
    }
    int max = num[0];
    int count = 0;
    for (int i = 0; i < size; i++) 
    {
            
        if(max < num[i]) 
        {
            max = num[i];
            count = i;
        }
    }
    return arr[count];
}





