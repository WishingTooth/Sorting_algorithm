#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>

void selection_sort_arr(int* arr, int n) {
    for (int i = 1; i < n; i++) {
        arr[0] = i;                         //为了方便阅读，同时也尽可能地减少变量，将arr[0]作为存储下标的容器
        for (int j = i + 1; j <= n; j++) {
            if (arr[arr[0]] > arr[j]) {
                arr[0] = j;                 //当检测到比记录地址内更小的数时，将该数的下标存储到arr[0]内
            }
        }
        std::swap(arr[arr[0]], arr[i]);     //swap操作使得数组实现的选择排序不稳定
    }
}

int main() {
    int arr[0X100] = {}, n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        std::cin >> arr[i];
    }
    selection_sort_arr(arr, n);             //选择排序的最优时间复杂度、平均时间复杂度和最坏时间复杂度均为𝑂(𝑛²)
    for (int i = 1; i <= n; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}
