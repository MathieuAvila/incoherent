#ifndef JSON_TABLE_ACCESSOR_HXX
#define JSON_TABLE_ACCESSOR_HXX

#include <nlohmann/json.hpp>

/**
 * Helper function to return an element given the whole JSON and an index
 * Throws in case of bad index.
 */
nlohmann::json& jsonGetElementByIndex(nlohmann::json&, std::string element, int index);

/**
 * Helper function to return an element given its name. Check validity and throw if not present
 */
nlohmann::json& jsonGetElementByName(nlohmann::json&, std::string element);

#endif
