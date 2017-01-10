#include "TimeAndDate.h"

/* Funkcija TAD odnosno TimeAndDate vraca pokazivac na string u obliku DDD MMM dd hh:mm:ss YYYY
   DDD - dan u sedmici slovima
   MMM - mjesecu godini slovima
   dd - dan u sedmici(brojem)
   hh:mm:ss - sat:minute:sekunde
   YYYY - Godina
*/
char* TAD()
{
	time_t timer;
	timer = time(NULL);
	return asctime(localtime(&timer));
}

