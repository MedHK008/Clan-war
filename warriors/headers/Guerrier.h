#include <string>

class Guerrier {
protected:
    std::string Name;
    float Health;
    float Power;
    float Attack;
    float Resistance;
    float Vitesse;

public:
    Guerrier(std::string name, float health, float attack, float resistance, float vitesse);
    void CalculatePower();
    void getHit(float hit);
    float Hit();
    void ChooseArm();
};