#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
        int n;
    
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void announce() const;
        Zombie *zombieHorde(int N, std::string name);
};