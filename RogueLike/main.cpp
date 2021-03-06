#include "stdafx.h"
#include "RogueLikeClasses.h"

using namespace std;

int main()
{
	Player player = Player("Ken",1);
	cout << "Bienvenue " << player.getName() << endl << endl;
	Enemy ennemi = Enemy(1, 10, 0, "Loup");
	cout << "Attention ! Un " << ennemi.getName() << " vient d'apparaitre !" << endl;
	Weapon arme = Weapon(2, "Epee d'entrainement");
	cout << "Prend cette " << arme.getName() << " pour l'affronter !" << endl << endl;
	player.setWeapon(arme);
	player.attack(ennemi);
	cout << "Bravo ! Tu lui a inflige " << player.getWeapon().getDamage() << " degats sur ses " << ennemi.getMaxHp() << " points de vie ! Il ne lui reste plus que " << ennemi.getHp() << " points de vie." << endl;
	cin.get();
    return 0;	
}
 
