#include "HashMap.h"
#include <iostream>
int main() {
    std::cout << "Hello, World!" << std::endl;
    HashMap<std::string, int>* map = new HashMap<std::string, int>();
    map->put("Mark", 18);
    map->put("Rose", 5);
    map->put("Phil", 21);
    std::cout << map->get("Mark") << std::endl;
    std::cout << map->get("Rose") << std::endl;
    std::cout << map->get("Phil") << std::endl;
    HashMap<std::string, std::string>* newMap = new HashMap<std::string, std::string>();
    newMap->put("Mark", "18");
    newMap->put("Rose", "5");
    newMap->put("Phil", "21");
    std::cout << newMap->get("Mark") << std::endl;
    std::cout << newMap->get("Rose") << std::endl;
    std::cout << newMap->get("Phil") << std::endl;
    return 0;
}