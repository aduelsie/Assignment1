/*
 * File: CrazyRandomSword.cpp
 * Author: Elsie Adu
 */

 #include "CrazyRandomSword.h"

/*CrazyRandomSword::CrazyRandomSword() : Weapon("Crazy Random Sword", rand() % (100 - 10) + 10)
{}*/


 double CrazyRandomSword::hit(double armor)
 {
   int b = rand() % (int)(armor/2 + 1);
   double damage = hitPoints - b;
   
   if (damage < 0)
   {
      return 0;
   }

   return damage;
 }
