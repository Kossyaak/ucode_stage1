char *mx_strncpy(char *dst, const char *src, int len) 
{
    for(int i = 0; src[i] != '\0'; i++) 
    {
        if (i == len)
        {
            break;
        }
    dst[i] = src[i];
  
  }
  return (char *)dst;
}


