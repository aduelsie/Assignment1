/*
 * File: BowAndArrow.cpp
 * Author: Elsie Adu
 */

 #include "BowAndArrow.h"


 double BowAndArrow::hit(double armor)
 {
   double damage;

   if (armor < (hitPoints / 2))
   {
      damage = hitPoints - armor;
   }
   else if ((armor * 0.4) < hitPoints)
   {
     damage = hitPoints - (armor * 0.4);
   }
   else
   {
     return 0;
   }

   return damage;
 }
