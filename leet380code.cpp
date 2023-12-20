#include <iostream>
#include <unordered_map>
#include <vector>

class RandomizedSet {
public:

    bool insert(int val) {
        if (valToIndex.find(val) != valToIndex.end()) {
            return false;
        }

        nums.push_back(val);
        valToIndex[val] = nums.size() - 1;

        return true;
    }


    void printContents() const {
        std::cout << "valToIndex: ";
        for (const auto& pair : valToIndex) {
            std::cout << "{" << pair.first << ": " << pair.second << "} ";
        }
        std::cout << std::endl;

        std::cout << "nums: ";
        for (const auto& num : nums) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

private:
    std::unordered_map<int, int> valToIndex;
    std::vector<int> nums;
};

int main() {
    RandomizedSet randomSet;

    randomSet.insert(1);
    randomSet.printContents();

    randomSet.insert(2);
    randomSet.printContents();

    randomSet.insert(3);
    randomSet.printContents();

    return 0;
}
