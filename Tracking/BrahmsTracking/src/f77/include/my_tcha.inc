*  
* $Id: my_tcha.inc,v 1.2 2008-01-23 17:22:22 aplin Exp $
*  
* $Log: not supported by cvs2svn $
* Revision 1.1.1.1  2005/07/11 15:15:48  aplin
* Initial version
*
* Revision 1.1.1.1  2005/06/18 10:05:35  gaede
* Initial local version
*
* Revision 1.1  2005/06/13 16:14:29  aplin
* *** empty log message ***
*
* Revision 1.1.1.1  2003/05/23 13:17:49  hvogt
* Brahms V308
*
*  

#include "padrow.inc"

      INTEGER NCHMAX
      PARAMETER(NCHMAX=2000)

C      INTEGER N32BITREG
C      PARAMETER(N32BITREG=8)

      INTEGER MY_NCHAIN,MY_JTCHNC,MY_JTCHOF      
      REAL  MY_JTCHIR,MY_JTCHTL,MY_JTCHP0
      REAL MY_JTCHD0,MY_JTCHZ0,MY_JTCHLC
      REAL MY_JTCHC1,MY_JTCHC2,MY_JTCHER
      INTEGER*4  MY_JTCHPI
      COMMON/MY_TCHA/MY_NCHAIN,
     & MY_JTCHIR(NCHMAX),MY_JTCHTL(NCHMAX),MY_JTCHP0(NCHMAX),
     & MY_JTCHD0(NCHMAX),MY_JTCHZ0(NCHMAX),MY_JTCHLC(NCHMAX),
     & MY_JTCHC1(NCHMAX),MY_JTCHC2(NCHMAX),MY_JTCHER(NCHMAX,15),
     & MY_JTCHPI(NCHMAX,N32BITREG),MY_JTCHOF(NCHMAX),MY_JTCHNC(NCHMAX)

