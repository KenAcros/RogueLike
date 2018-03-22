#include "stdafx.h"
#include "RogueLikeClasses.h"

using namespace std;

int main()
{
	Player player = Player("Ken",1);
	cout << "Bienvenue " << player.getName() << endl << endl;
	Enemy loup = Enemy(1, 10, 0, "Loup");
	cout << "Attention ! Un " << loup.getName() << " vient d'apparaitre !" << endl;
	Weapon epee = Weapon(2, "Epee d'entrainement");
	cout << "Prend cette " << epee.getName() << " pour l'affronter !" << endl << endl;
	player.setWeapon(epee);
	player.attack(loup);
	cout << "Bravo ! Tu lui a inflige " << player.getWeapon().getDamage() << " degats sur ses " << loup.getMaxHp() << " points de vie ! Il ne lui reste plus que " << loup.getHp() << " points de vie." << endl;
	cin.get();
    return 0;	
}
 
