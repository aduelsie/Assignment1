/*
 * File: SimpleAxe.cpp
 * Author: Elsie Adu
 */

 #include "SimpleAxe.h"

 double SimpleAxe::hit(double armor)
 {
   double damage = hitPoints - armor;

   if ((armor > 0) && (armor < 20))
   {
      return damage;
   }

   return 0;
 }
