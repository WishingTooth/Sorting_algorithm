#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>

void insertion_sort_arr(int* arr, int n) {
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < i && arr[i] < arr[i - 1]; j++) {
            if (arr[i] < arr[j]) {
                std::swap(arr[i], arr[j]);      //arr[i]代表正在排列的数，arr[i]的左面是已经排序完成的部分
            }
        }
    }
}

int main() {
    int arr[0X100] = {}, n;
    std::cin >> n;                              //为了方便阅读，将arr[1]作为排序的起始
    arr[0] = n;                                 //为了节约变量，我们也可以定义arr[0] = n
    for (int i = 1; i <= n; i++) {
        std::cin >> arr[i];
    }
    insertion_sort_arr(arr, n);                 //插入排序的最优时间复杂度为𝑂(𝑛)，平均时间复杂度和最坏时间复杂度均为𝑂(𝑛²)
    for (int i = 1; i <= n; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}