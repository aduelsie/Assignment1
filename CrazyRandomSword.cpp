/*
 * File: CrazyRandomSword.cpp
 * Author: Elsie Adu
 */

 #include "CrazyRandomSword.h"
 

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
