#include <iostream>
#include <chrono>
#include <numeric>
#include <vector>
 
size_t testAligned(std::vector<long long>& vec);
size_t testUnaligned(std::vector<long long>& vec);
 
const size_t c_Count = 50000000;
 
int main()
{
    std::vector<long long> vec(c_Count);
    std::iota(begin(vec), end(vec), 0);
    size_t alignedTime = testAligned(vec);
    size_t unalignedTime = testUnaligned(vec);
    std::cout << "The difference is: " << 100. -
        (static_cast<double>(alignedTime)/unalignedTime)*100.0 << std::endl;
    return 0;
}
 
const size_t c_Times = 20;
 
size_t testAligned(std::vector<long long>& vec)
{
    size_t elapsed = 0;
    long long* testee = &vec[0];
    for(size_t i = 0; i < c_Times; ++i)
    {
        auto start = std::chrono::high_resolution_clock::now();
        for(size_t i = 0; i < c_Count - 15; i += 15)
            testee[i] *= 2;
        elapsed += (std::chrono::high_resolution_clock::now() - start).count();
    }
    std::cout << "Elapsed aligned: " << elapsed/c_Times << std::endl;
    return elapsed/c_Times;
}
 
size_t testUnaligned(std::vector<long long>& vec)
{
    size_t elapsed = 0;
    char* vecPtr = reinterpret_cast<char*>(&vec[0]);
    long long* testee = reinterpret_cast<long long*>(vecPtr + 2);
    for(size_t i = 0; i < c_Times; ++i)
    {
        auto start = std::chrono::high_resolution_clock::now();
        for(size_t i = 0; i < c_Count - 15; i += 15)
            testee[i] *= 2;
        elapsed += (std::chrono::high_resolution_clock::now() - start).count();
    }
    std::cout << "Elapsed unaligned: " << elapsed/c_Times << std::endl;
    return elapsed/c_Times;
}