#include <iostream>
#include <string>
#include <vector>
#include <nlohmann/json.hpp> 

using json = nlohmann::json;

int main() {
    json jsonText;
    jsonText["name"] = "My Bazel App (Bzlmod)"; 
    jsonText["version"] = 1.0;
    jsonText["features"] = json::array({"Simple", "Uses JSON", "Console Output", "Bzlmod"});

    std::string pretty_json_string = jsonText.dump(4);
    std::cout << "Successfully created JSON object:" << std::endl;
    std::cout << pretty_json_string << std::endl;
    std::cout << "\nAccessing a value: App Name = " << jsonText["name"].get<std::string>() << std::endl;
    return 0;
}