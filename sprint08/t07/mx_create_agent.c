#include "create_new_agents.h"

t_agent *mx_create_agent(char *name, int power, int strength) 
{
    t_agent *ag = (t_agent*)malloc(16);
    ag -> name = mx_strdup(name);
    ag -> power = power;
    ag -> strength = strength;  
    return ag;
}





