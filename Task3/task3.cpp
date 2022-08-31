// Задание №3:
// Есть набор целых чисел.
// Напишите функцию увеличения всех чисел набора на единицу без использования циклов.

#include <iostream>
#include <vector>
#include <array>
#include <list>

template<typename T, typename itT = typename T::iterator>
void Increment(T& value_set, itT it)
{
        if(!value_set.empty()) 
        {
            *it+=1;
            ++it != value_set.end() ? Increment(value_set,it) : void();
        }
}

template<typename T>
void Print(const T& value_set)
{
    for(auto i: value_set)
    {
        std::cout<<i<<" ";
    }
    
    std::cout<<"\n";
}

int main()
{
    std::vector<int> vec{};
    std::array<int, 6> arr{0,0,0,0,0,0};
    std::list<long> lis{0,0,0,0,0,0};

    Increment(vec, vec.begin());
    Increment(arr, arr.begin());
    Increment(lis, lis.begin());

    Print(vec);
    Print(arr);
    Print(lis);

    return 0;
}