/*
 * File BowAndArrow.h
 * Author: Elsie Adu
 *
 * Created on 02 October 2017
 */

 #include <string>
 #include <cstdlib>
 #include <ctime>
 #include "Weapon.h"

 using namespace std;

 #ifndef BOWANDARROW_H
 #define BOWANDARROW_H

/*
 * Defines the behavior of Bow and Arrow (hitpoints = random integer between 5 and 60,
 * If armor is less than half of the weapon points, the Bow and Arrow ignores all armor
 * points, else it ignores 60% of the armor points)
 */

 class BowAndArrow : public Weapon
 {
 public:
   BowAndArrow() : Weapon("Bow and Arrow", (rand() % (100 - 5)) + 5){}

   virtual ~BowAndArrow() {};
   virtual double hit(double armor);
 };

 #endif //BOWANDARROW_H
