#include <iostream>
#include <vector>
// #include <bits/c++.h>  this one can also be used but for interview purposes use <vector as it is recommended and <vector> is a clearner approach
int main()
{
    // std::vector<int>vec;
    std::vector<int>vec; //= {1,2,3,4,5};
    // std::vector<int> vec (5, 6);
    vec.push_back (1);
    vec.push_back (2);
    vec.push_back (3);
    vec.push_back (4);
    vec.push_back (5);
    
    // vec.pop_back();
    // vec.pop_back();

    // int index = 0;
    // for(int value: vec) {
    //     std::cout<<index+1<<"th value of Vector: "<<value<<"\n";
    //     index++;
    // }

    int size = vec.size();
    int capacity = vec.capacity();
    std::cout<<"Size of vector \"vec\" = "<<size<<"\n"; 
    std::cout<<"Capacity of vector \"vec\" = "<<capacity<<"\n"; 
    // std::cout<<"First value of vector \"vec\" = "<<vec.front()<<"\n";
    // std::cout<<"Last value of vector \"vec\" = "<<vec.back()<<"\n";
    // std::cout<<"ith value of vector \"vec\" = "<<vec.at(2)<<"\n";

    return 0;
}