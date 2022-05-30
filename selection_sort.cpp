#include <iostream>
#include <algorithm>
#include <vector>
template <typename iterator>
void selection_sort(iterator begin, iterator end)
{
    for (iterator i = begin; i != end; ++i) {
    std::iter_swap(i, std::min_element(i, end));
    }
}
template <typename T>
void sort(T* arr, int size)
{
    int min{};
    for(int i = 0; i < size - 1; ++i) {
    min = i;
    for(int j = i + 1; j < size; ++j) {
    if(arr[j] < arr[min]) {
    min = j;
    }
    }
    T my_swap = arr[min];
    arr[min] = arr[i];
    arr[i] = my_swap;
    }
}

int main()
{
 std::vector<int> m = {9,5,7,3};
    selection_sort(m.begin(), m.end());
    for(auto i : m)
    std::cout << i << " ";
    std::cout << std::endl;
    int arr[5] = {6,2,3,9,0};
    sort(arr, 5);
    for(int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    return 0;
}

