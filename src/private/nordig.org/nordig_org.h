/*
$Id$


 DVBSNOOP

 a dvb sniffer  and mpeg2 stream analyzer tool
 http://dvbsnoop.sourceforge.net/

 (c) 2001-2006   Rainer.Scherg@gmx.de  (rasc)


  -- Private Data Structures for:
  -- nordig.org



$Log$
Revision 1.1  2008/08/29 20:00:06  obi
decode NorDig logic(al) channel descriptor (e.g. used by unitymedia)

Revision 1.3  2006/01/02 18:24:16  rasc
just update copyright and prepare for a new public tar ball

Revision 1.2  2005/08/10 21:28:19  rasc
New: Program Stream handling  (-s ps)

Revision 1.1  2004/11/03 21:01:02  rasc
 - New: "premiere.de" private tables and descriptors (tnx to Peter.Pavlov, Premiere)
 - New: cmd option "-privateprovider <provider name>"
 - New: Private provider sections and descriptors decoding
 - Changed: complete restructuring of private descriptors and sections



*/



#ifndef _NORDIG_ORG_H
#define _NORDIG_ORG_H_


#include "private/userdefs.h"


void getPrivate_NordigORG ( PRIV_SECTION_ID_FUNC **psect,
		PRIV_DESCR_ID_FUNC **pdesc);



#endif



