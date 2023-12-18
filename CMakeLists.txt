if(0)
#directory structure
#.
#├── build
#├── CMakeLists.txt
#├── coverage
#├── ListAndArray
#│   ├── lruList.cpp
#│   ├── lruList.hpp
#│   ├── lruVec.cpp
#│   ├── lruVec.hpp
#│   ├── palindromic.hpp
#│   └── palindromic_test.cpp
#└── main.cpp

cmake_minimum_required(VERSION 3.15)
project(YourProjectName)

set(CMAKE_CXX_STANDARD 11)

# 添加主可执行文件
add_executable(Main main.cpp)

# 编译选项，包括覆盖率和线程支持
target_compile_options(Main PRIVATE --coverage -pthread)

# 链接 gtest 库
target_link_libraries(Main gtest pthread)

# 指定链接选项，包括覆盖率
target_link_options(Main PRIVATE --coverage)

# CMakeLists.txt

# Add custom target for coverage
add_custom_target(coverage
    COMMAND lcov --capture --directory . --output-file coverage.info --rc lcov_branch_coverage=1
    COMMAND genhtml --branch-coverage coverage.info --output-directory coverage
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Generating code coverage report"
)

endif()

cmake_minimum_required(VERSION 3.15)
project(AlogrithmSet)

add_custom_target(coverage
    COMMAND lcov --capture --directory . --output-file coverage.info --rc lcov_branch_coverage=1
    COMMAND genhtml --branch-coverage coverage.info --output-directory coverage
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Generating code coverage report"
)

add_subdirectory(ListAndArray)

enable_testing()
add_test(NAME PalindromicTests COMMAND PalindromicTests)
