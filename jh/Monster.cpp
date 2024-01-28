#include <iostream>
#include <string>

class Monster
{
public:
    Monster(const std::string &name, int health) : name(name), health(health) {}

    void attack(Monster &target, int damage)
    {
        std::cout << name << " attacks " << target.getName() << " with " << damage << " damage." << std::endl;
        target.takeDamage(damage);
    }

    void takeDamage(int damage)
    {
        health -= damage;
        std::cout << name << " takes " << damage << " damage. " << name << "'s health: " << health << std::endl;
    }

    bool isDefeated() const
    {
        return health <= 0;
    }

    const std::string &getName() const
    {
        return name;
    }

    int getHealth() const
    {
        return health;
    }

private:
    std::string name;
    int health;
};

void displayUI(const Monster &player1, const Monster &player2)
{
    std::cout << "Player 1: " << player1.getName() << " | Health: " << player1.getHealth() << std::endl;
    std::cout << "Player 2: " << player2.getName() << " | Health: " << player2.getHealth() << std::endl;
}

int main()
{
    // 플레이어 1의 몬스터
    std::string player1Name;
    std::cout << "Enter Player 1's monster name: ";
    std::cin >> player1Name;
    Monster player1Monster(player1Name, 50);

    // 플레이어 2의 몬스터
    std::string player2Name;
    std::cout << "Enter Player 2's monster name: ";
    std::cin >> player2Name;
    Monster player2Monster(player2Name, 50);

    // 게임 루프
    while (true)
    {
        displayUI(player1Monster, player2Monster);

        // 플레이어 1의 공격
        int player1Attack;
        std::cout << "Player 1, enter attack damage: ";
        std::cin >> player1Attack;
        player1Monster.attack(player2Monster, player1Attack);

        // 체크: 플레이어 2 패배 여부
        if (player2Monster.isDefeated())
        {
            std::cout << "Player 1 wins!" << std::endl;
            break;
        }

        displayUI(player1Monster, player2Monster);

        // 플레이어 2의 공격
        int player2Attack;
        std::cout << "Player 2, enter attack damage: ";
        std::cin >> player2Attack;
        player2Monster.attack(player1Monster, player2Attack);

        // 체크: 플레이어 1 패배 여부
        if (player1Monster.isDefeated())
        {
            std::cout << "Player 2 wins!" << std::endl;
            break;
        }
    }

    return 0;
}