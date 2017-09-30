/*
 * File CrazyRandomSword.h
 * Author: Elsie Adu
 *
 * Created on 29 September 2017
 */

 #include <string>
 #include <cstdlib>
 #include <ctime>
 #include "Weapon.h"

 using namespace std;

 #ifndef CRAZYRANDOMSWORD_H
 #define CRAZYRANDOMSWORD_H

/*
 * Defines the behavior of Crazy Random Sword (hitpoints = random integer between 10 and 100,
 * If armor is a random integer between 0 to half of the armor points, the axe will ignore
 * all the armor points)
 */

 class CrazyRandomSword : public Weapon
 {
 public:
   CrazyRandomSword() : Weapon("Crazy Random Sword", (rand() % (100 - 10)) + 10){}

   virtual ~CrazyRandomSword() {};
   virtual double hit(double armor);
 };

 #endif //CRAZYRANDOMSWORD_H
