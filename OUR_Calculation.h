#ifndef _OUR_Class_h
#define _OUR_Class_h

#include "math.h"
#include "time.h"
#include "tmwtypes.h"
#include "stdio.h"

class OUR_Class
{
 public:
	real_T Data_ID, low, high, DOval, Sum_time, Sum_timesq, Sum_DO, Sum_DO_time, Sum_DOsq, a, b, Rsq, OUR_final;

    OUR_Class(real_T upper, real_T lower)
    {
      DOval = 0.0;
      Sum_time = 0.0;
      Sum_DO = 0.0;
      Sum_DO_time = 0.0;
      Sum_timesq = 0.0;
      Sum_DOsq = 0.0;
      Data_ID = 1.0;
      a = 0.0;
      b = 0.0;
      Rsq = 0.0;
      OUR_final = 0.0;
      low = lower;
      high = upper;
    }

   void Range(real_T DO)
   {
        DOval = DO;
        if((DOval > low) && (DOval <= high))
        {
            Sum_time = Sum_time + Data_ID;
            Sum_DO = Sum_DO + DOval;
            Sum_DO_time = Sum_DO_time + (Data_ID*DOval);
            Sum_timesq = Sum_timesq + pow(Data_ID,2);
            Sum_DOsq = Sum_DOsq + pow(DOval,2);
            Data_ID = Data_ID + 1.0;
        }
        else {}
   }

  void Calc()
  {
      a = ((((Data_ID)-1.0)*Sum_DO_time)-(Sum_time*Sum_DO))/((((Data_ID)-1.0)*Sum_timesq)-(pow(Sum_time,2)));
      b = ((Sum_DO*Sum_timesq)-(Sum_time*Sum_DO_time))/((((Data_ID)-1.0)*Sum_timesq)-(pow(Sum_time,2)));
      Rsq = pow(((((Data_ID)-1.0)*Sum_DO_time)-(Sum_time*Sum_DO))/(sqrt(((((Data_ID)-1.0)*Sum_timesq)-(pow(Sum_time,2)))*((((Data_ID)-1.0)*Sum_DOsq)-(pow(Sum_DO,2))))),2);
      OUR_final = (a)*(-1.0)*3600.0;
  }


 private:

};

#endif
