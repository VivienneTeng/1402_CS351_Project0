cmake_minimum_required(VERSION 3.25)
project(TwoSum LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 主程式建置設定
add_executable(twosum
    src/main.cpp
    src/twoSum.cpp
)

target_include_directories(twosum PRIVATE src)


# =======================================================
# 自動化測試建置設定 (CTest)
# =======================================================

# 1. 啟用自動化測試功能
enable_testing()

# 2. 建立測試執行檔（同時把測試檔與演算法核心邏輯加進來編譯）
add_executable(twosum_tests
    tests/TwoSumTests.cpp
    src/twoSum.cpp
)

# 3. 讓測試執行檔可以正確 include 到 src 裡的標頭檔 (twoSum.hpp)
target_include_directories(twosum_tests PRIVATE src)

# 4. 將測試註冊到 CTest 系統中
add_test(NAME RunAllTests COMMAND twosum_tests)