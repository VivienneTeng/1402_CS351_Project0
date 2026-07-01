#include "twoSum.hpp"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

namespace {

std::string trim(const std::string& value) {
    const auto first = value.find_first_not_of(" \t\n\r");
    if (first == std::string::npos) {
        return {};
    }
    const auto last = value.find_last_not_of(" \t\n\r");
    return value.substr(first, last - first + 1);
}

bool parseInteger(const std::string& token, int& out) {
    const auto trimmed = trim(token);
    if (trimmed.empty()) {
        return false;
    }

    try {
        size_t pos = 0;
        const int value = std::stoi(trimmed, &pos);
        if (pos != trimmed.size()) {
            return false;
        }
        out = value;
        return true;
    } catch (const std::invalid_argument&) {
        return false;
    } catch (const std::out_of_range&) {
        return false;
    }
}

bool parseNums(const std::string& raw, std::vector<int>& out) {
    const auto trimmedRaw = trim(raw);
    if (trimmedRaw.empty()) {
        return false;
    }

    size_t start = 0;
    while (start < trimmedRaw.size()) {
        const size_t comma = trimmedRaw.find(',', start);
        const size_t end = (comma == std::string::npos) ? trimmedRaw.size() : comma;
        const auto token = trim(trimmedRaw.substr(start, end - start));

        if (token.empty()) {
            return false;
        }

        int value = 0;
        if (!parseInteger(token, value)) {
            return false;
        }

        out.push_back(value);
        if (comma == std::string::npos) {
            break;
        }
        start = comma + 1;
    }
    return !out.empty();
}

void printUsage(std::ostream& os, const char* programName) {
    os << "Usage: " << programName << " --target <integer> --nums <n1,n2,...>\n"
       << "Example: " << programName << " --target 9 --nums 2,7,11,15\n";
}

} // namespace

int main(int argc, char* argv[]) {
    int target = 0;
    std::vector<int> nums;
    bool targetSet = false;
    bool numsSet = false;

    for (int index = 1; index < argc; ++index) {
        std::string arg(argv[index]);

        if (arg == "--target") {
            if (index + 1 >= argc) {
                printUsage(std::cerr, argv[0]);
                return EXIT_FAILURE;
            }
            if (!parseInteger(argv[index + 1], target)) {
                std::cerr << "Invalid target value: " << argv[index + 1] << '\n';
                return EXIT_FAILURE;
            }
            targetSet = true;
            ++index;
        } else if (arg.rfind("--target=", 0) == 0) {
            if (!parseInteger(arg.substr(9), target)) {
                std::cerr << "Invalid target value: " << std::string(arg.substr(9)) << '\n';
                return EXIT_FAILURE;
            }
            targetSet = true;
        } else if (arg == "--nums") {
            if (index + 1 >= argc) {
                printUsage(std::cerr, argv[0]);
                return EXIT_FAILURE;
            }
            if (!parseNums(argv[index + 1], nums)) {
                std::cerr << "Invalid nums list: " << argv[index + 1] << '\n';
                return EXIT_FAILURE;
            }
            numsSet = true;
            ++index;
        } else if (arg.rfind("--nums=", 0) == 0) {
            if (!parseNums(arg.substr(7), nums)) {
                std::cerr << "Invalid nums list: " << std::string(arg.substr(7)) << '\n';
                return EXIT_FAILURE;
            }
            numsSet = true;
        } else {
            std::cerr << "Unknown argument: " << arg << '\n';
            printUsage(std::cerr, argv[0]);
            return EXIT_FAILURE;
        }
    }

    if (!targetSet || !numsSet) {
        printUsage(std::cerr, argv[0]);
        return EXIT_FAILURE;
    }

    try {
        const auto result = twosum::twoSum(nums, target);
        std::cout << '[' << result[0] << ", " << result[1] << "]\n";
        return EXIT_SUCCESS;
    } catch (const std::exception& error) {
        std::cerr << "Error: " << error.what() << '\n';
        return EXIT_FAILURE;
    }
}
