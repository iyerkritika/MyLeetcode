cmake_minimum_required(VERSION 3.5)
# set the project name
project(Arrays101)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(MaxConsecutiveOnes MaxConsecutiveOnes.cpp)
add_executable(DuplicateZeroes DuplicateZeroes.cpp)
add_executable(EvenDigitsNumbers EvenDigitsNumbers.cpp)
add_executable(MergeSort MergeSort.cpp)
add_executable(MountainArray MountainArray.cpp)
add_executable(MoveZeroes moveZeroes.cpp)
add_executable(RemoveDuplicates RemoveDuplicatesSortedArray.cpp)
add_executable(RemoveElement RemoveElement.cpp)
add_executable(ReplaceElements replaceElements.cpp)
add_executable(SortByParity sortArrayByParity.cpp)
add_executable(SortedSquaresArray SortedSquaresArray.cpp)
add_executable(ThirdBiggest ThirdBiggestNumber.cpp)
