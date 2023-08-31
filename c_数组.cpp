
#include <iostream>

int main()
{

/* 

定义数组时不初始化元素，未赋值的下标
 */
    int arr_int[5];
    arr_int[0] = 100;
    arr_int[3] = 200;
    std::cout << " arr_int-------------- " << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << " arr_int index " << i << arr_int[i] << std::endl;
    }

    /*
      类型 数组名[数组长度] = {}
      第二种方式定义数组的同时，写入部分下标处的元素，未写入的下标会默认赋值为0
     */
    int arr_int_2[5] = {2, 3, 4};
    std::cout << " arr_int_2-------------- " << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << " arrarr_int_2_int index " << i << arr_int_2[i] << std::endl;
    }

    int arr_int_3[] = {10, 11};

    std::cout << " arr_int_3-------------- " << std::endl;

    for (int i = 0; i < 2; i++)
    {
        std::cout << " arr_int_3 index " << i << arr_int_3[i] << std::endl;
    }
}