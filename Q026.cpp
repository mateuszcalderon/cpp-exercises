// Write a Program to Add 2 Binary Strings.
#include <iostream>
#include <algorithm>

int main()
{
    std::string a, b;
    std::string sum_result;
    int carry_over = 0;
    
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    
    int index1 = a.size() -1;
    int index2 = b.size() -1;
    
    while(index1 >= 0 || index2 >= 0 || carry_over)
    {
        int sum = carry_over;
        if(index1 >= 0) sum += a[index1--] - '0';
        if(index2 >= 0) sum += b[index2--] - '0';
        carry_over = sum > 1 ? 1 : 0;
        sum_result += sum % 2 + '0';
    }
    
    std::reverse(sum_result.begin(), sum_result.end());
    std::cout << "Sum = " << sum_result;

    return 0;
}