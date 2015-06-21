/* TA-LIB Copyright (c) 1999-2008, Mario Fortier
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither name of author nor the names of its contributors
 *   may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* List of contributors:
 *
 *  Initial  Name/description
 *  -------------------------------------------------------------------
 *  MF       Mario Fortier
 *  JD       jdoyle
 *
 * Change history:
 *
 *  MMDDYY BY     Description
 *  -------------------------------------------------------------------
 *  120802 MF     Template creation.
 *  052603 MF     Adapt code to compile with .NET Managed C++
 *  111705 MF,JD  Fix#1359452 for handling propta_utility.cerly start/end range.
 */

/**** START GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
/* All code within this section is automatically
 * generated by gen_code. Any modification will be lost
 * next time gen_code is run.
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */    #include "TA-Lib-Core.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode::InternalError)
/* Generated */    namespace TicTacTec { namespace TA { namespace Library {
/* Generated */ #elif defined( _JAVA )
/* Generated */    #include "ta_defs.h"
/* Generated */    #include "ta_java_defs.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode.InternalError)
/* Generated */ #else
/* Generated */    #include <string.h>
/* Generated */    #include <math.h>
/* Generated */    #include "ta_func.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_UTILITY_H
/* Generated */    #include "ta_utility.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_MEMORY_H
/* Generated */    #include "ta_memory.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #define TA_PREFIX(x) TA_##x
/* Generated */ #define INPUT_TYPE   double
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::AdLookback( void )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int adLookback(  )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_AD_Lookback( void )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ /* No parameters to validate. */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */

   /* This function have no lookback needed. */
   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_AD - Chaikin A/D Line
 * 
 * Input  = High, Low, Close, Volume
 * Output = double
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Ad( int    startIdx,
/* Generated */                                    int    endIdx,
/* Generated */                                    SubArray<double>^ inHigh,
/* Generated */                                    SubArray<double>^ inLow,
/* Generated */                                    SubArray<double>^ inClose,
/* Generated */                                    SubArray<double>^ inVolume,
/* Generated */                                    [Out]int%    outBegIdx,
/* Generated */                                    [Out]int%    outNBElement,
/* Generated */                                    SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Ad( int    startIdx,
/* Generated */                                    int    endIdx,
/* Generated */                                    cli::array<double>^ inHigh,
/* Generated */                                    cli::array<double>^ inLow,
/* Generated */                                    cli::array<double>^ inClose,
/* Generated */                                    cli::array<double>^ inVolume,
/* Generated */                                    [Out]int%    outBegIdx,
/* Generated */                                    [Out]int%    outNBElement,
/* Generated */                                    cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode ad( int    startIdx,
/* Generated */                    int    endIdx,
/* Generated */                    double       inHigh[],
/* Generated */                    double       inLow[],
/* Generated */                    double       inClose[],
/* Generated */                    double       inVolume[],
/* Generated */                    MInteger     outBegIdx,
/* Generated */                    MInteger     outNBElement,
/* Generated */                    double        outReal[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_AD( int    startIdx,
/* Generated */                              int    endIdx,
/* Generated */                                         const double inHigh[],
/* Generated */                                         const double inLow[],
/* Generated */                                         const double inClose[],
/* Generated */                                         const double inVolume[],
/* Generated */                                         int          *outBegIdx,
/* Generated */                                         int          *outNBElement,
/* Generated */                                         double        outReal[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
   int nbBar, currentBar, outIdx;

   double high, low, close, tmp;
   double ad;

/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inHigh||!inLow||!inClose||!inVolume)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Insert TA function code here. */

   /* Note: Results from this function might vary slightly
    *       from Metastock outputs. The reason being that
    *       Metastock use float instead of double and this
    *       cause a different floating-point precision to 
    *       be used.
    *
    *       For most function, this is not an apparent difference
    *       but for function using large cummulative values (like
    *       this AD function), minor imprecision adds up and becomes
    *       significative.
    *
    *       For better precision, TA-Lib use double in all its 
    *       its calculations.
    */

   /* Default return values */
   nbBar = endIdx-startIdx+1;
   VALUE_HANDLE_DEREF(outNBElement) = nbBar;
   VALUE_HANDLE_DEREF(outBegIdx) = startIdx;
   currentBar = startIdx;
   outIdx = 0;
   ad = 0.0;

   while( nbBar != 0 )
   {
      high  = inHigh[currentBar];
      low   = inLow[currentBar];
      tmp   = high-low;
      close = inClose[currentBar];

      if( tmp > 0.0 )
         ad += (((close-low)-(high-close))/tmp)*((double)inVolume[currentBar]);
      
      outReal[outIdx++] = ad;

      currentBar++;
      nbBar--;
   }

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::AdStateInit( struct TA_Ad_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int adStateInit( struct TA_ad_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_AD_StateInit( struct TA_AD_State** _state )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    STATE = calloc(1, sizeof(struct TA_AD_State));
/* Generated */    STATE_P.mem_index = 0;
/* Generated */    #ifndef TA_AD_SUPPRESS_MEMORY_ALLOCATION
/* Generated */    MEM_SIZE_P = TA_AD_Lookback();
/* Generated */    if (MEM_SIZE_P > 0)
/* Generated */          MEM_P = calloc(MEM_SIZE_P, sizeof(struct TA_AD_Data));
/* Generated */    else
/* Generated */    #endif
/* Generated */          MEM_P = NULL;/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/

   /* insert state init code here. */


   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::AdState( struct TA_Ad_State* _state,
/* Generated */                  cli::array<double>^ inHigh,
/* Generated */                  cli::array<double>^ inLow,
/* Generated */                  cli::array<double>^ inClose,
/* Generated */                  cli::array<double>^ inVolume,
/* Generated */                  cli::array<double>^  *outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int adState( struct TA_ad_State* _state,
/* Generated */                   double       inHigh,
/* Generated */                   double       inLow,
/* Generated */                   double       inClose,
/* Generated */                   double       inVolume,
/* Generated */                   double        *outReal )
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_AD_State( struct TA_AD_State* _state,
/* Generated */                                      const double inHigh,
/* Generated */                                      const double inLow,
/* Generated */                                      const double inClose,
/* Generated */                                      const double inVolume,
/* Generated */                                      double        *outReal )
/* Generated */ #endif
/**** END GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

   double tmp;

/**** START GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inHigh||!inLow||!inClose||!inVolume)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    size_t _cur_idx = STATE.mem_index++ % MEM_SIZE;
/* Generated */    UNUSED_VARIABLE(_cur_idx); // in case PUSH\POP methods won't be used
/* Generated */    #ifndef TA_AD_SUPPRESS_EXIT_ON_NOT_ENOUGH_DATA
/* Generated */    if (NEED_MORE_DATA) {
/* Generated */          PUSH_TO_MEM(inHigh,inHigh);
/* Generated */          PUSH_TO_MEM(inLow,inLow);
/* Generated */          PUSH_TO_MEM(inClose,inClose);
/* Generated */          PUSH_TO_MEM(inVolume,inVolume);
/* Generated */    return ENUM_VALUE(RetCode,TA_NEED_MORE_DATA,NeedMoreData); }
/* Generated */    #endif
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/

   /* insert state based TA dunc code here. */

   tmp = inHigh - inLow;


   if( tmp > 0.0 )
       VALUE_HANDLE_DEREF(outReal) = (((inClose-inLow)-(inHigh-inClose))/tmp)*((double)inVolume);
   else
       VALUE_HANDLE_DEREF(outReal) = 0.0;


   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::AdStateFree( struct TA_Ad_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int adStateFree( struct TA_ad_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_AD_StateFree( struct TA_AD_State** _state )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 10 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    if (STATE != NULL) {
/* Generated */          if (MEM_P != NULL) free(MEM_P);
/* Generated */          free(STATE); STATE = NULL;}
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 10 - DO NOT DELETE THIS LINE ****/

   /* insert state free code here. */   
   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #define  USE_SINGLE_PRECISION_INPUT
/* Generated */ #undef  TA_LIB_PRO
/* Generated */ #if !defined( _MANAGED ) && !defined( _JAVA )
/* Generated */    #undef   TA_PREFIX
/* Generated */    #define  TA_PREFIX(x) TA_S_##x
/* Generated */ #endif
/* Generated */ #undef   INPUT_TYPE
/* Generated */ #define  INPUT_TYPE float
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Ad( int    startIdx,
/* Generated */                                    int    endIdx,
/* Generated */                                    SubArray<float>^ inHigh,
/* Generated */                                    SubArray<float>^ inLow,
/* Generated */                                    SubArray<float>^ inClose,
/* Generated */                                    SubArray<float>^ inVolume,
/* Generated */                                    [Out]int%    outBegIdx,
/* Generated */                                    [Out]int%    outNBElement,
/* Generated */                                    SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Ad( int    startIdx,
/* Generated */                                    int    endIdx,
/* Generated */                                    cli::array<float>^ inHigh,
/* Generated */                                    cli::array<float>^ inLow,
/* Generated */                                    cli::array<float>^ inClose,
/* Generated */                                    cli::array<float>^ inVolume,
/* Generated */                                    [Out]int%    outBegIdx,
/* Generated */                                    [Out]int%    outNBElement,
/* Generated */                                    cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode ad( int    startIdx,
/* Generated */                    int    endIdx,
/* Generated */                    float        inHigh[],
/* Generated */                    float        inLow[],
/* Generated */                    float        inClose[],
/* Generated */                    float        inVolume[],
/* Generated */                    MInteger     outBegIdx,
/* Generated */                    MInteger     outNBElement,
/* Generated */                    double        outReal[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_AD( int    startIdx,
/* Generated */                     int    endIdx,
/* Generated */                     const float  inHigh[],
/* Generated */                     const float  inLow[],
/* Generated */                     const float  inClose[],
/* Generated */                     const float  inVolume[],
/* Generated */                     int          *outBegIdx,
/* Generated */                     int          *outNBElement,
/* Generated */                     double        outReal[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */    int nbBar, currentBar, outIdx;
/* Generated */    double high, low, close, tmp;
/* Generated */    double ad;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inHigh||!inLow||!inClose||!inVolume)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outReal )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    nbBar = endIdx-startIdx+1;
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = nbBar;
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx) = startIdx;
/* Generated */    currentBar = startIdx;
/* Generated */    outIdx = 0;
/* Generated */    ad = 0.0;
/* Generated */    while( nbBar != 0 )
/* Generated */    {
/* Generated */       high  = inHigh[currentBar];
/* Generated */       low   = inLow[currentBar];
/* Generated */       tmp   = high-low;
/* Generated */       close = inClose[currentBar];
/* Generated */       if( tmp > 0.0 )
/* Generated */          ad += (((close-low)-(high-close))/tmp)*((double)inVolume[currentBar]);
/* Generated */       outReal[outIdx++] = ad;
/* Generated */       currentBar++;
/* Generated */       nbBar--;
/* Generated */    }
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/

