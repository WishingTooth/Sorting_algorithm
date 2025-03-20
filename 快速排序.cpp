#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>

void quick_sort_arr(int* arr, int start, int end) {
    int* pivot = &arr[start];                       //这里选择数组的第一个元素作为基准元素
    int i = start, j = end;                         //i从左侧向右指，j从右侧向左指
    if( i >= j ) {}                                 //当排序的元素个数大于1时才可以进行排序
    else {
        while ( i != j ) {
            while ( arr[j] >= *pivot && i < j ) {
                j--;                                //当右侧元素小于基准元素时，停止
            }
            while ( arr[i] <= *pivot && i < j ) {
                i++;                                //当左侧元素大于基准元素时，停止
            }
            std::swap(arr[i], arr[j]);              //交换这两个元素
        }
        std::swap(*pivot, arr[i]);                  //当i == j时，停止循环，此时的j必定小于基准元素，所以将基准元素与同时指向值进行交换
        quick_sort_arr(arr, start, i - 1);          //利用递归，继续对左侧的元素进行排序
        quick_sort_arr(arr, j + 1, end);            //利用递归，继续对右侧的元素进行排序
    }
}

int main() {
    int arr[0X100] = {}, n{};
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    quick_sort_arr(arr, 0, n - 1);                  //快速排序的最优时间复杂度和平均时间复杂度为𝑂(𝑛log𝑛), 最坏时间复杂度为𝑂(𝑛²)
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}