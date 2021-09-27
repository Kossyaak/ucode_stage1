void mx_deref_pointer(char ******str);
void mx_deref_pointer(char ******str)
{
    char *p1; 
    char **p2; 
    char ***p3; 
    char ****p4; 
    char *****p5;
    str = &p5;
    p5 = &p4;
    p4 = &p3;
    p3 = &p2;
    p2 = &p1;
    p1 = "Follow the white rabbit!";
}
