#include "OUR_Calculation.h"

#define S_FUNCTION_LEVEL 2
#define S_FUNCTION_NAME  OUR_Class_2

#include "simstruc.h"

real_T timer = 0;

#define IS_PARAM_DOUBLE(pVal) (mxIsNumeric(pVal) && !mxIsLogical(pVal) &&\
!mxIsEmpty(pVal) && !mxIsSparse(pVal) && !mxIsComplex(pVal) && mxIsDouble(pVal))

static void mdlInitializeSizes(SimStruct *S)
{
    ssSetNumSFcnParams(S, 0);
    if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S))
        {return;}
    ssSetNumContStates(S, 0);
    ssSetNumDiscStates(S, 0);

    if (!ssSetNumInputPorts(S, 2)) return;
    ssSetInputPortWidth(S, 0, 1);
    ssSetInputPortWidth(S, 1, 1);
    ssSetInputPortDirectFeedThrough(S, 0, 1);
    ssSetInputPortDirectFeedThrough(S, 1, 1);
    ssSetInputPortRequiredContiguous(S , 0 , 1);
    ssSetInputPortRequiredContiguous(S , 1 , 1);

    if (!ssSetNumOutputPorts(S, 16)) return;
    ssSetOutputPortWidth(S, 0, 1);
    ssSetOutputPortWidth(S, 1, 1);
    ssSetOutputPortWidth(S, 2, 1);
    ssSetOutputPortWidth(S, 3, 1);
    ssSetOutputPortWidth(S, 4, 1);
    ssSetOutputPortWidth(S, 5, 1);
    ssSetOutputPortWidth(S, 6, 1);
    ssSetOutputPortWidth(S, 7, 1);
    ssSetOutputPortWidth(S, 8, 1);
    ssSetOutputPortWidth(S, 9, 1);
    ssSetOutputPortWidth(S, 10, 1);
    ssSetOutputPortWidth(S, 11, 1);
    ssSetOutputPortWidth(S, 12, 1);
    ssSetOutputPortWidth(S, 13, 1);
    ssSetOutputPortWidth(S, 14, 1);
    ssSetOutputPortWidth(S, 15, 1);

    ssSetNumSampleTimes(S, 1);
    ssSetNumPWork(S, 6);
    ssSetNumRWork(S, 1);

    ssSetNumModes(S , 0);
    ssSetNumNonsampledZCs(S , 0);
    ssSetSimStateCompliance(S, USE_DEFAULT_SIM_STATE);
    ssSetOptions(S, 0);
}

static void mdlInitializeSampleTimes(SimStruct *S)
{
    ssSetSampleTime(S, 0, 1.0);
    ssSetOffsetTime(S, 0, 0.0);
    ssSetModelReferenceSampleTimeDefaultInheritance(S);
}

#define MDL_INITIALIZE_CONDITIONS
#if defined (MDL_INITIALIZE_CONDITIONS)
static void mdlInitializeConditions(SimStruct *S)
{
    OUR_Class_2 *OUR_54  = new OUR_Class_2(5, 4);
    OUR_Class_2 *OUR_43  = new OUR_Class_2(4, 3);
    OUR_Class_2 *OUR_32  = new OUR_Class_2(3, 2);
    OUR_Class_2 *OUR_21  = new OUR_Class_2(2, 1);
    OUR_Class_2 *OUR_10  = new OUR_Class_2(1, 0);
    OUR_Class_2 *OUR_51  = new OUR_Class_2(5, 1);
    ssGetPWork(S)[0] = OUR_54;
    ssGetPWork(S)[1] = OUR_43;
    ssGetPWork(S)[2] = OUR_32;
    ssGetPWork(S)[3] = OUR_21;
    ssGetPWork(S)[4] = OUR_10;
    ssGetPWork(S)[5] = OUR_51;

    timer = 0;

}
#endif

static void mdlOutputs(SimStruct *S, int_T tid)
{
    OUR_Class_2 *OUR_54 = static_cast<OUR_Class_2 *>(ssGetPWork(S)[0]);
    OUR_Class_2 *OUR_43 = static_cast<OUR_Class_2 *>(ssGetPWork(S)[1]);
    OUR_Class_2 *OUR_32 = static_cast<OUR_Class_2 *>(ssGetPWork(S)[2]);
    OUR_Class_2 *OUR_21 = static_cast<OUR_Class_2 *>(ssGetPWork(S)[3]);
    OUR_Class_2 *OUR_10 = static_cast<OUR_Class_2 *>(ssGetPWork(S)[4]);
    OUR_Class_2 *OUR_51 = static_cast<OUR_Class_2 *>(ssGetPWork(S)[5]);

    real_T In_0 = (real_T) *ssGetInputPortRealSignal(S, 0);
    real_T In_1 = (real_T) *ssGetInputPortRealSignal(S, 1);

    real_T *Out_0  = ssGetOutputPortRealSignal(S, 0);
    real_T *Out_1  = ssGetOutputPortRealSignal(S, 1);
    real_T *Out_2  = ssGetOutputPortRealSignal(S, 2);
    real_T *Out_3  = ssGetOutputPortRealSignal(S, 3);
    real_T *Out_4  = ssGetOutputPortRealSignal(S, 4);
    real_T *Out_5  = ssGetOutputPortRealSignal(S, 5);
    real_T *Out_6  = ssGetOutputPortRealSignal(S, 6);
    real_T *Out_7  = ssGetOutputPortRealSignal(S, 7);
    real_T *Out_8  = ssGetOutputPortRealSignal(S, 8);
    real_T *Out_9  = ssGetOutputPortRealSignal(S, 9);
    real_T *Out_10  = ssGetOutputPortRealSignal(S, 10);
    real_T *Out_11  = ssGetOutputPortRealSignal(S, 11);
    real_T *Out_12  = ssGetOutputPortRealSignal(S, 12);
    real_T *Out_13  = ssGetOutputPortRealSignal(S, 13);
    real_T *Out_14  = ssGetOutputPortRealSignal(S, 14);
    real_T *Out_15  = ssGetOutputPortRealSignal(S, 15);

    real_T DO;
    real_T DOval = In_0;
    bool DO_check = isnan(DO);
    if ((DO_check == false) && (DOval >= 0) && (DOval < 7.0))
    {DO = In_0;}
    else
    {DO = (ssGetRWork(S)[0]);}

    OUR_54->Range(DO);
    OUR_43->Range(DO);
    OUR_32->Range(DO);
    OUR_21->Range(DO);
    OUR_10->Range(DO);
    OUR_51->Range(DO);

    timer++;
    Out_0[0] = timer;
    (ssGetRWork(S)[0]) = In_0;

    if (timer >= In_1)
    {
        timer = 0;
        OUR_54->Calc();
        OUR_43->Calc();
        OUR_32->Calc();
        OUR_21->Calc();
        OUR_10->Calc();
        OUR_51->Calc();
        
        real_T Best_OUR, Best_Rsq, Best_Range, diff1, diff2, diff3;
        diff1 = abs((OUR_43->OUR_final) - (OUR_32->OUR_final));
        diff2 = abs((OUR_32->OUR_final) - (OUR_21->OUR_final));
        
        if (((OUR_43->Rsq) > (OUR_32->Rsq)) && ((OUR_43->Rsq) > (OUR_21->Rsq)) && (diff1 <= 5))
        {
            Best_OUR = OUR_43->OUR_final;
            Best_Rsq = OUR_43->Rsq; 
            Best_Range = 43;
        }
        else if (((OUR_32->Rsq) > (OUR_43->Rsq)) && ((OUR_32->Rsq) > (OUR_21->Rsq)))
        {
            Best_OUR = OUR_32->OUR_final;
            Best_Rsq = OUR_32->Rsq; 
            Best_Range = 32;
        }
        else if (((OUR_21->Rsq) > (OUR_43->Rsq)) && ((OUR_21->Rsq) > (OUR_32->Rsq)) && (diff2 <= 5))
        {
            Best_OUR = OUR_21->OUR_final;
            Best_Rsq = OUR_21->Rsq; 
            Best_Range = 21;
        }
        else
        {
            Best_OUR = OUR_51->OUR_final;
            Best_Rsq = OUR_51->Rsq; 
            Best_Range = 51;
        }
        
        Out_1[0] = Best_OUR;
        if (isnan(Best_Rsq) == true){
        Out_2[0] = 0;}
        else{
        Out_2[0] = Best_Rsq;}
        Out_3[0] = Best_Range;
        Out_4[0] = OUR_54->OUR_final;
        Out_5[0] = OUR_43->OUR_final;
        Out_6[0] = OUR_32->OUR_final;
        Out_7[0] = OUR_21->OUR_final;
        Out_8[0] = OUR_10->OUR_final;
        Out_9[0] = OUR_51->OUR_final;
        Out_10[0] = OUR_54->Rsq;;
        Out_11[0] = OUR_43->Rsq;
        Out_12[0] = OUR_32->Rsq;
        Out_13[0] = OUR_21->Rsq;;
        Out_14[0] = OUR_10->Rsq;
        Out_15[0] = OUR_51->Rsq;
    }
}

static void mdlTerminate(SimStruct *S)
{
    OUR_Class_2 *OUR_54 = static_cast<OUR_Class_2 *>(ssGetPWork(S)[0]);
    OUR_Class_2 *OUR_43 = static_cast<OUR_Class_2 *>(ssGetPWork(S)[1]);
    OUR_Class_2 *OUR_32 = static_cast<OUR_Class_2 *>(ssGetPWork(S)[2]);
    OUR_Class_2 *OUR_21 = static_cast<OUR_Class_2 *>(ssGetPWork(S)[3]);
    OUR_Class_2 *OUR_10 = static_cast<OUR_Class_2 *>(ssGetPWork(S)[4]);
    OUR_Class_2 *OUR_51 = static_cast<OUR_Class_2 *>(ssGetPWork(S)[5]);
    delete OUR_54;
    delete OUR_43;
    delete OUR_32;
    delete OUR_21;
    delete OUR_10;
    delete OUR_51;
}

#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif
