/*
 * File: SimpleAxe.cpp
 * Author: Elsie Adu
 */

 #include "SimpleAxe.h"

 double SimpleAxe::hit(double armor)
 {
   if ((armor > 0) && (armor < 20))
   {
     return 0;
   }

   double damage = hitpoints - armor;
   return damage;
 }
