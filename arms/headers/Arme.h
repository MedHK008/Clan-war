
#include <string>

class Arme {
protected:
    std::string Name;
    float AttackEffect = 0;
    float ResistanceEffect = 0;
    float VitesseEffect = 0;
    float HealthEffect = 0;
public:
    Arme(std::string name);
};