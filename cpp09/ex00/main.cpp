#include "BitcoinExchange.hpp"

int main() {
    // Create a map with int keys and string values
	std::map<int, std::string> myMap;

    // Insert elements into the map using the insert() function
	myMap.insert(std::make_pair(1, "Apple"));
	myMap.insert(std::make_pair(2, "Banana"));
	myMap.insert(std::make_pair(3, "Orange"));

    // Access elements in the map using the square bracket operator []
    std::cout << myMap[1] << std::endl;  // Output: Apple

    // Find an element in the map using the find() function
    std::map<int, std::string>::iterator it = myMap.find(2);
    if (it != myMap.end()) 
	{
        std::cout << "Found: " << it->second << std::endl;  // Output: Found: Banana
    }

    // Iterate over the map using iterators
    for (std::map<int, std::string>::iterator iter = myMap.begin(); iter != myMap.end(); ++iter) {
        std::cout << iter->first << " : " << iter->second << std::endl;
    }

    return 0;
}