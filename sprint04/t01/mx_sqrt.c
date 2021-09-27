int mx_sqrt(int x) 
{
  for(int i = 0; i <= x; i++)  
  {
    if (i * i == x)
    {
      return i;
    }       
  }
  return 0;
}


