#include <iostream>
#include <string>

struct AdministrativeData {
    std::string name = "Ribda";
    std::string taluka = "Lodhika";
    std::string district = "Rajkot";
    std::string state = "Gujarat";
    int pincode = 360311;
};

int main() {
    AdministrativeData village;
    
    std::cout << "--- Village Record: " << village.name << " ---\n";
    std::cout << "Taluka:   " << village.taluka << "\n";
    std::cout << "District: " << village.district << "\n";
    std::cout << "State:    " << village.state << "\n";
    std::cout << "PIN:      " << village.pincode << std::endl;
    
    return 0;
}
