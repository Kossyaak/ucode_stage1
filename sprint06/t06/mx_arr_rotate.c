void mx_arr_rotate(int *arr, int size, int shift)
{
    int s = size -1;
    
   if (shift > 0) 
   {
        int i = 0;
        int buf = 0;
        while(i < shift) 
        {
            buf = arr[s];
            for(int j = s; j > 0; j--) 
            {
                arr[j] = arr[j - 1];
            }
            arr[0] =  buf;
            i++;
        }
    }
    else if (shift < 0) 
    {
            int buf = 0;
            int i = 0;
            while(i > shift) 
            {
            buf = arr[0];
            for(int j = 0; j < s; j++) 
            {
                arr[j] = arr[j + 1];
            }
            arr[s] = buf;
            i--;
        }        
    }
}






