#ifndef __His_col__
#define __His_col__

#include "../headers/common.h"

class His_col
{
    public:
        /* ліва границя проміжку, який визначає можливі елементи для стовпця*/
        DType left_bord;

        /* права границя проміжку, який визначає можливі елементи для стовпця*/
        DType right_bord;
    
        /* елементи, які входять до стовпця*/
        DType* elems;
    
        /* кількість елементів в стовпці, N <= Max_elems_in_column */
        NType N;
};

#endif /* __His_col__ end */