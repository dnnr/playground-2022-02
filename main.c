#include <stdio.h>

#include "penguin/interfaces.h"
#include "tiger/interfaces.h"
#include "badger/interfaces.h"
#include "koala/interfaces.h"
#include "dolphin/interfaces.h"

int main(void){
   printf("penguin/alpha says: %i\n", penguin_alpha());
   printf("penguin/bravo says: %i\n", penguin_bravo());
   printf("penguin/charlie says: %i\n", penguin_charlie());

   printf("tiger/alpha says: %i\n", tiger_alpha());
   printf("tiger/bravo says: %i\n", tiger_bravo());
   printf("tiger/charlie says: %i\n", tiger_charlie());

   printf("badger/alpha says: %i\n", badger_alpha());
   printf("badger/bravo says: %i\n", badger_bravo());
   printf("badger/charlie says: %i\n", badger_charlie());

   printf("koala/alpha says: %i\n", koala_alpha());
   printf("koala/bravo says: %i\n", koala_bravo());
   printf("koala/charlie says: %i\n", koala_charlie());

   printf("dolphin/alpha says: %i\n", dolphin_alpha());
   printf("dolphin/bravo says: %i\n", dolphin_bravo());
   printf("dolphin/charlie says: %i\n", dolphin_charlie());

   return 0;
}
