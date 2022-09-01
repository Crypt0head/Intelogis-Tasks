// Задание №3:
// Есть набор целых чисел.
// Напишите функцию увеличения всех чисел набора на единицу без использования циклов.

#include <iostream>
#include <vector>

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
    std::vector<int> vec{0, 0, 0, 0, 0};

    std::cout<<"Before:\n";

    Print(vec);

    Increment(vec, vec.begin());

    std::cout<<"After:\n";

    Print(vec);

    return 0;
}