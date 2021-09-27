void mx_ref_pointer(int i, int******ptr);
void mx_ref_pointer(int i, int******ptr)
{
    int *p1;
    int **p2;
    int ***p3;
    int ****p4;
    int *****p5;
    p1 = &i;
    p2 = &p1;
    p3 = &p2;
    p4 = &p3;
    p5 = &p4;
    ptr = &p5;
}
