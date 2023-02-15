#include<iostream>
#include<algorithm>
#include<cstring>



class CHeadQuarter {
private:
    int life;
    std::string name;
    
public:
    CHeadQuarter() {}
    CHeadQuarter(std::string name_, const int& life_) {
        name = name_;
        life = life_;
    }
};

class City {
private:
    int a;
public:
    City();
};

class Warrior {
private:
    int b;
public:
    Warrior();
};

int main() {
    CHeadQuarter("blue", 20);
    return 0;
}