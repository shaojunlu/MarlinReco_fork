
      REAL FUNCTION STFREADTPCHITS(ATTRIBUTE,AHIT)
      IMPLICIT NONE
      integer ATTRIBUTE, AHIT
      external READTPCHITSCPP 
      REAL READTPCHITSCPP

      STFREADTPCHITS = READTPCHITSCPP(ATTRIBUTE,AHIT)

      RETURN
      END


