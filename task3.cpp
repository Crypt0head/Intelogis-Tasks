// Задание №3:
// Есть набор целых чисел.
// Напишите функцию увеличения всех чисел набора на единицу без использования циклов.

#include <iostream>
#include <vector>

void Print(std::vector<int>& arr)
{
    std::cout<<"\n";

    for(auto i: arr)
    {
        std::cout<<i<<", ";
    }
    
    std::cout<<"\n";
}

// template<typename T>
// void f(T& arr, std::T::iterator it = arr.begin())
// {
//     if(it!=arr.end())
//     {
//         *it+=1;
//         f(arr,++it);
//     }
// }

void f(std::vector<int>& arr, size_t offset = 0)
{
    if(arr.begin()+offset<arr.end())
    {
        std::vector<int>::iterator cur = arr.begin()+offset;
        *cur+=1;
        f(arr,++offset);
    }
}

int main()
{
    std::vector<int> arr = {0,1,2,3,4,5,6,7,8,9};

    f(arr);

    Print(arr);

    return 0;
}