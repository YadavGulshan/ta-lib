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
 *  AC       Angelo Ciceri
 *
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  103004 AC   Creation           
 *
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
/* Generated */ int Core::Cdl3BlackCrowsLookback( void )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdl3BlackCrowsLookback(  )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDL3BLACKCROWS_Lookback( void )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ /* No parameters to validate. */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
    return TA_CANDLEAVGPERIOD(ShadowVeryShort) + 3;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_CDL3BLACKCROWS - Three Black Crows
 * 
 * Input  = Open, High, Low, Close
 * Output = int
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Cdl3BlackCrows( int    startIdx,
/* Generated */                                                int    endIdx,
/* Generated */                                                SubArray<double>^ inOpen,
/* Generated */                                                SubArray<double>^ inHigh,
/* Generated */                                                SubArray<double>^ inLow,
/* Generated */                                                SubArray<double>^ inClose,
/* Generated */                                                [Out]int%    outBegIdx,
/* Generated */                                                [Out]int%    outNBElement,
/* Generated */                                                SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Cdl3BlackCrows( int    startIdx,
/* Generated */                                                int    endIdx,
/* Generated */                                                cli::array<double>^ inOpen,
/* Generated */                                                cli::array<double>^ inHigh,
/* Generated */                                                cli::array<double>^ inLow,
/* Generated */                                                cli::array<double>^ inClose,
/* Generated */                                                [Out]int%    outBegIdx,
/* Generated */                                                [Out]int%    outNBElement,
/* Generated */                                                cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdl3BlackCrows( int    startIdx,
/* Generated */                                int    endIdx,
/* Generated */                                double       inOpen[],
/* Generated */                                double       inHigh[],
/* Generated */                                double       inLow[],
/* Generated */                                double       inClose[],
/* Generated */                                MInteger     outBegIdx,
/* Generated */                                MInteger     outNBElement,
/* Generated */                                int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDL3BLACKCROWS( int    startIdx,
/* Generated */                                          int    endIdx,
/* Generated */                                                     const double inOpen[],
/* Generated */                                                     const double inHigh[],
/* Generated */                                                     const double inLow[],
/* Generated */                                                     const double inClose[],
/* Generated */                                                     int          *outBegIdx,
/* Generated */                                                     int          *outNBElement,
/* Generated */                                                     int           outInteger[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */
    ARRAY_LOCAL(ShadowVeryShortPeriodTotal,3);
    int i, outIdx, totIdx, ShadowVeryShortTrailingIdx, lookbackTotal;

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
/* Generated */    if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outInteger )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Identify the minimum number of price bar needed
    * to calculate at least one output.
    */

   lookbackTotal = LOOKBACK_CALL(CDL3BLACKCROWS)();

   /* Move up the start index if there is not
    * enough initial data.
    */
   if( startIdx < lookbackTotal )
      startIdx = lookbackTotal;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   /* Do the calculation using tight loops. */
   /* Add-up the initial period, except for the last value. */
   ShadowVeryShortPeriodTotal[2] = 0;
   ShadowVeryShortPeriodTotal[1] = 0;
   ShadowVeryShortPeriodTotal[0] = 0;
   ShadowVeryShortTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(ShadowVeryShort);
   
   i = ShadowVeryShortTrailingIdx;
   while( i < startIdx ) {
        ShadowVeryShortPeriodTotal[2] += TA_CANDLERANGE( ShadowVeryShort, i-2 );
        ShadowVeryShortPeriodTotal[1] += TA_CANDLERANGE( ShadowVeryShort, i-1 );
        ShadowVeryShortPeriodTotal[0] += TA_CANDLERANGE( ShadowVeryShort, i );
        i++;
   }
   i = startIdx;

   /* Proceed with the calculation for the requested range.
    * Must have:
    * - three consecutive and declining black candlesticks
    * - each candle must have no or very short lower shadow
    * - each candle after the first must open within the prior candle's real body
    * - the first candle's close should be under the prior white candle's high
    * The meaning of "very short" is specified with TA_SetCandleSettings
    * outInteger is negative (-1 to -100): three black crows is always bearish; 
    * the user should consider that 3 black crows is significant when it appears after a mature advance or at high levels, 
    * while this function does not consider it
    */
   outIdx = 0;
   do
   {
#ifdef TA_LIB_PRO
      /* Section for code distributed with TA-Lib Pro only. */
#else
        if( TA_CANDLECOLOR(i-3) == 1 &&                                         // white
            TA_CANDLECOLOR(i-2) == -1 &&                                        // 1st black
            TA_LOWERSHADOW(i-2) < TA_CANDLEAVERAGE( ShadowVeryShort, ShadowVeryShortPeriodTotal[2], i-2 ) &&     
                                                                                // very short lower shadow
            TA_CANDLECOLOR(i-1) == -1 &&                                        // 2nd black
            TA_LOWERSHADOW(i-1) < TA_CANDLEAVERAGE( ShadowVeryShort, ShadowVeryShortPeriodTotal[1], i-1 ) &&     
                                                                                // very short lower shadow
            TA_CANDLECOLOR(i) == -1 &&                                          // 3rd black
            TA_LOWERSHADOW(i) < TA_CANDLEAVERAGE( ShadowVeryShort, ShadowVeryShortPeriodTotal[0], i ) &&         
                                                                                // very short lower shadow
            inOpen[i-1] < inOpen[i-2] && inOpen[i-1] > inClose[i-2] &&          // 2nd black opens within 1st black's rb
            inOpen[i] < inOpen[i-1] && inOpen[i] > inClose[i-1] &&              // 3rd black opens within 2nd black's rb
            inHigh[i-3] > inClose[i-2] &&                                       // 1st black closes under prior candle's high
            inClose[i-2] > inClose[i-1] &&                                      // three declining
            inClose[i-1] > inClose[i]                                           // three declining
          )
#endif
            outInteger[outIdx++] = -100;
        else
            outInteger[outIdx++] = 0;
        /* add the current range and subtract the first range: this is done after the pattern recognition 
         * when avgPeriod is not 0, that means "compare with the previous candles" (it excludes the current candle)
         */
        for (totIdx = 2; totIdx >= 0; --totIdx)
            ShadowVeryShortPeriodTotal[totIdx] += TA_CANDLERANGE( ShadowVeryShort, i-totIdx ) 
                                                - TA_CANDLERANGE( ShadowVeryShort, ShadowVeryShortTrailingIdx-totIdx );
        i++; 
        ShadowVeryShortTrailingIdx++;
   } while( i <= endIdx );

   /* All done. Indicate the output limits and return. */
   VALUE_HANDLE_DEREF(outNBElement) = outIdx;
   VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ Core::RetCode Core::Cdl3BlackCrowsStateInit( struct TA_Cdl3BlackCrows_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdl3BlackCrowsStateInit( struct TA_cdl3BlackCrows_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDL3BLACKCROWS_StateInit( struct TA_CDL3BLACKCROWS_State** _state )
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
/* Generated */    STATE = TA_Calloc(1, sizeof(struct TA_CDL3BLACKCROWS_State));
/* Generated */    STATE_P.mem_index = 0;
/* Generated */    MEM_SIZE_P = TA_CDL3BLACKCROWS_Lookback();
/* Generated */    #ifndef TA_CDL3BLACKCROWS_SUPPRESS_MEMORY_ALLOCATION
/* Generated */    if (MEM_SIZE_P > 0)
/* Generated */          MEM_P = TA_Calloc(MEM_SIZE_P, sizeof(struct TA_CDL3BLACKCROWS_Data));
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
/* Generated */ Core::RetCode Core::Cdl3BlackCrowsState( struct TA_Cdl3BlackCrows_State* _state,
/* Generated */                                        cli::array<double>^ inOpen,
/* Generated */                                        cli::array<double>^ inHigh,
/* Generated */                                        cli::array<double>^ inLow,
/* Generated */                                        cli::array<double>^ inClose,
/* Generated */                                        cli::array<int>^  *outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdl3BlackCrowsState( struct TA_cdl3BlackCrows_State* _state,
/* Generated */                                   double       inOpen,
/* Generated */                                   double       inHigh,
/* Generated */                                   double       inLow,
/* Generated */                                   double       inClose,
/* Generated */                                   int           *outInteger )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDL3BLACKCROWS_State( struct TA_CDL3BLACKCROWS_State* _state,
/* Generated */                                                         const double inOpen,
/* Generated */                                                         const double inHigh,
/* Generated */                                                         const double inLow,
/* Generated */                                                         const double inClose,
/* Generated */                                                         int           *outInteger )
/* Generated */ #endif
/**** END GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
 #define TA_CDL3BLACKCROWS_SUPPRESS_EXIT_ON_NOT_ENOUGH_DATA
unsigned int i1,i2,i3;
/**** START GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    size_t _cur_idx = STATE.mem_index++;
/* Generated */    if (MEM_SIZE > 0) _cur_idx %= MEM_SIZE;
/* Generated */    UNUSED_VARIABLE(_cur_idx); // in case PUSH\POP methods won't be used
/* Generated */    #ifndef TA_CDL3BLACKCROWS_SUPPRESS_EXIT_ON_NOT_ENOUGH_DATA
/* Generated */    if (NEED_MORE_DATA) {
/* Generated */          PUSH_TO_MEM(inOpen,inOpen);
/* Generated */          PUSH_TO_MEM(inHigh,inHigh);
/* Generated */          PUSH_TO_MEM(inLow,inLow);
/* Generated */          PUSH_TO_MEM(inClose,inClose);
/* Generated */    return ENUM_VALUE(RetCode,TA_NEED_MORE_DATA,NeedMoreData); }
/* Generated */    #endif
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outInteger )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/

   /* insert state based TA dunc code here. */
        if (FIRST_LAUNCH)
           {
                 STATE.ShadowVeryShortPeriodTotal0 = 0.;
                 STATE.ShadowVeryShortPeriodTotal1 = 0.;
                 STATE.ShadowVeryShortPeriodTotal2 = 0.;
                 STATE.periodShadowVeryShort = - TA_CANDLEAVGPERIOD(ShadowVeryShort);
           }

        i1 = GET_LOCAL_IDX(-1);
        i2 = GET_LOCAL_IDX(-2);

        if (!(NEED_MORE_DATA))
        {
            i3 = GET_LOCAL_IDX(-3);

            if( TA_CANDLECOLOR_STATE_IDX(i3) == 1 &&                                         // white
                TA_CANDLECOLOR_STATE_IDX(i2) == -1 &&                                        // 1st black
                TA_LOWERSHADOW_STATE_IDX(i2) < TA_CANDLEAVERAGE_STATE_IDX(  ShadowVeryShort,  STATE.ShadowVeryShortPeriodTotal2, i2 ) &&
                                                                                    // very short lower shadow
                TA_CANDLECOLOR_STATE_IDX(i1) == -1 &&                                        // 2nd black
                TA_LOWERSHADOW_STATE_IDX(i1) < TA_CANDLEAVERAGE_STATE_IDX(  ShadowVeryShort,  STATE.ShadowVeryShortPeriodTotal1, i1 ) &&
                                                                                    // very short lower shadow
                TA_CANDLECOLOR_STATE_CUR() == -1 &&                                          // 3rd black
                TA_LOWERSHADOW_STATE_CUR() < TA_CANDLEAVERAGE_STATE_CUR( ShadowVeryShort, STATE.ShadowVeryShortPeriodTotal0 ) &&
                                                                                    // very short lower shadow
                MEM_IDX_NS(inOpen,i1) < MEM_IDX_NS(inOpen,i2) && MEM_IDX_NS(inOpen,i1) > MEM_IDX_NS(inClose,i2) &&          // 2nd black opens within 1st black's rb
                inOpen < MEM_IDX_NS(inOpen,i1) && inOpen > MEM_IDX_NS(inClose,i1) &&              // 3rd black opens within 2nd black's rb
                MEM_IDX_NS(inHigh,i3) > MEM_IDX_NS(inClose,i2) &&                                       // 1st black closes under prior candle's high
                MEM_IDX_NS(inClose,i2) > MEM_IDX_NS(inClose,i1) &&                                      // three declining
                MEM_IDX_NS(inClose,i1) > inClose                                           // three declining
              )
                VALUE_HANDLE_DEREF(outInteger) = -100;
            else
                VALUE_HANDLE_DEREF(outInteger) = 0;

            STATE.ShadowVeryShortPeriodTotal2 -= TA_CANDLERANGE_STATE( ShadowVeryShort,  STATE.periodShadowVeryShort-2 );
            STATE.ShadowVeryShortPeriodTotal1 -= TA_CANDLERANGE_STATE( ShadowVeryShort,  STATE.periodShadowVeryShort-1 );
            STATE.ShadowVeryShortPeriodTotal0 -= TA_CANDLERANGE_STATE( ShadowVeryShort,  STATE.periodShadowVeryShort );
        }


        if (STATE.mem_index-1 >= 2)
        {
          STATE.ShadowVeryShortPeriodTotal2 += TA_CANDLERANGE_STATE_IDX(  ShadowVeryShort, i2 );
          STATE.ShadowVeryShortPeriodTotal1 += TA_CANDLERANGE_STATE_IDX(  ShadowVeryShort, i1 );
          STATE.ShadowVeryShortPeriodTotal0 += TA_CANDLERANGE_STATE_CUR( ShadowVeryShort );
        }




        PUSH_TO_MEM(inOpen,inOpen);
        PUSH_TO_MEM(inHigh,inHigh);
        PUSH_TO_MEM(inLow,inLow);
        PUSH_TO_MEM(inClose,inClose);
        if (NEED_MORE_DATA) return ENUM_VALUE(RetCode,TA_NEED_MORE_DATA,NeedMoreData);

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ Core::RetCode Core::Cdl3BlackCrowsStateFree( struct TA_Cdl3BlackCrows_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdl3BlackCrowsStateFree( struct TA_cdl3BlackCrows_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDL3BLACKCROWS_StateFree( struct TA_CDL3BLACKCROWS_State** _state )
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
/* Generated */          if (MEM_P != NULL) TA_Free(MEM_P);
/* Generated */          TA_Free(STATE); STATE = NULL;}
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 10 - DO NOT DELETE THIS LINE ****/

   /* insert state free code here. */   
   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ Core::RetCode Core::Cdl3BlackCrowsStateSave( struct TA_Cdl3BlackCrows_State* _state,
/* Generated */                                            FILE* _file )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdl3BlackCrowsStateSave( struct TA_cdl3BlackCrows_State* _state,
/* Generated */                                       FILE* _file )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDL3BLACKCROWS_StateSave( struct TA_CDL3BLACKCROWS_State* _state,
/* Generated */                                                             FILE* _file )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/

{
   /* insert local variable here */

/**** START GENCODE SECTION 12 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */     int io_res; int state_is_null; state_is_null = (_state == NULL);
/* Generated */    io_res = fwrite(&state_is_null,sizeof(state_is_null),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    if (state_is_null) return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    io_res = fwrite(&STATE.mem_index,sizeof(STATE.mem_index),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fwrite(&STATE.mem_size,sizeof(STATE.mem_size),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    int memory_allocated;
/* Generated */    memory_allocated = STATE.memory != NULL;
/* Generated */    io_res = fwrite(&memory_allocated,sizeof(memory_allocated),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    if (memory_allocated && STATE.mem_size > 0) { io_res = fwrite(STATE.memory,sizeof(struct TA_CDL3BLACKCROWS_Data),STATE.mem_size,_file);
/* Generated */    if (io_res < (int) STATE.mem_size) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed); }
/* Generated */    io_res = fwrite(&STATE.ShadowVeryShortPeriodTotal0,sizeof(STATE.ShadowVeryShortPeriodTotal0),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fwrite(&STATE.ShadowVeryShortPeriodTotal1,sizeof(STATE.ShadowVeryShortPeriodTotal1),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fwrite(&STATE.ShadowVeryShortPeriodTotal2,sizeof(STATE.ShadowVeryShortPeriodTotal2),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fwrite(&STATE.periodShadowVeryShort,sizeof(STATE.periodShadowVeryShort),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 12 - DO NOT DELETE THIS LINE ****/

   /* insert state save code here. */   
   return 0;
}

/**** START GENCODE SECTION 13 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ Core::RetCode Core::Cdl3BlackCrowsStateLoad( struct TA_Cdl3BlackCrows_State** _state,
/* Generated */                                            FILE* _file )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdl3BlackCrowsStateLoad( struct TA_cdl3BlackCrows_State** _state,
/* Generated */                                       FILE* _file )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDL3BLACKCROWS_StateLoad( struct TA_CDL3BLACKCROWS_State** _state,
/* Generated */                                                             FILE* _file )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 13 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 14 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    int io_res; int state_is_null;
/* Generated */    io_res = fread(&state_is_null,sizeof(state_is_null),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    if (state_is_null) return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    if (STATE != NULL) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    STATE = TA_Calloc(1, sizeof(struct TA_CDL3BLACKCROWS_State));
/* Generated */    io_res = fread(&STATE_P.mem_index,sizeof(STATE_P.mem_index),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fread(&STATE_P.mem_size,sizeof(STATE_P.mem_size),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    int memory_allocated;
/* Generated */    io_res = fread(&memory_allocated,sizeof(memory_allocated),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    if (STATE_P.mem_size > 0 && memory_allocated) { STATE_P.memory = TA_Calloc(STATE_P.mem_size, sizeof(struct TA_CDL3BLACKCROWS_Data));
/* Generated */    io_res = fread(STATE_P.memory,sizeof(struct TA_CDL3BLACKCROWS_Data),STATE_P.mem_size,_file);
/* Generated */    if (io_res < (int) STATE_P.mem_size) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed); } 
/* Generated */    io_res = fread(&STATE_P.ShadowVeryShortPeriodTotal0,sizeof(STATE_P.ShadowVeryShortPeriodTotal0),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fread(&STATE_P.ShadowVeryShortPeriodTotal1,sizeof(STATE_P.ShadowVeryShortPeriodTotal1),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fread(&STATE_P.ShadowVeryShortPeriodTotal2,sizeof(STATE_P.ShadowVeryShortPeriodTotal2),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */    io_res = fread(&STATE_P.periodShadowVeryShort,sizeof(STATE_P.periodShadowVeryShort),1,_file);
/* Generated */    if (io_res < 1) return ENUM_VALUE(RetCode,TA_IO_FAILED,IOFailed);
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 14 - DO NOT DELETE THIS LINE ****/

   /* insert state load code here. */   
   return 0;
}

/**** START GENCODE SECTION 15 - DO NOT DELETE THIS LINE ****/
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
/* Generated */ enum class Core::RetCode Core::Cdl3BlackCrows( int    startIdx,
/* Generated */                                                int    endIdx,
/* Generated */                                                SubArray<float>^ inOpen,
/* Generated */                                                SubArray<float>^ inHigh,
/* Generated */                                                SubArray<float>^ inLow,
/* Generated */                                                SubArray<float>^ inClose,
/* Generated */                                                [Out]int%    outBegIdx,
/* Generated */                                                [Out]int%    outNBElement,
/* Generated */                                                SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Cdl3BlackCrows( int    startIdx,
/* Generated */                                                int    endIdx,
/* Generated */                                                cli::array<float>^ inOpen,
/* Generated */                                                cli::array<float>^ inHigh,
/* Generated */                                                cli::array<float>^ inLow,
/* Generated */                                                cli::array<float>^ inClose,
/* Generated */                                                [Out]int%    outBegIdx,
/* Generated */                                                [Out]int%    outNBElement,
/* Generated */                                                cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdl3BlackCrows( int    startIdx,
/* Generated */                                int    endIdx,
/* Generated */                                float        inOpen[],
/* Generated */                                float        inHigh[],
/* Generated */                                float        inLow[],
/* Generated */                                float        inClose[],
/* Generated */                                MInteger     outBegIdx,
/* Generated */                                MInteger     outNBElement,
/* Generated */                                int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_CDL3BLACKCROWS( int    startIdx,
/* Generated */                                 int    endIdx,
/* Generated */                                 const float  inOpen[],
/* Generated */                                 const float  inHigh[],
/* Generated */                                 const float  inLow[],
/* Generated */                                 const float  inClose[],
/* Generated */                                 int          *outBegIdx,
/* Generated */                                 int          *outNBElement,
/* Generated */                                 int           outInteger[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */     ARRAY_LOCAL(ShadowVeryShortPeriodTotal,3);
/* Generated */     int i, outIdx, totIdx, ShadowVeryShortTrailingIdx, lookbackTotal;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outInteger )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    lookbackTotal = LOOKBACK_CALL(CDL3BLACKCROWS)();
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    ShadowVeryShortPeriodTotal[2] = 0;
/* Generated */    ShadowVeryShortPeriodTotal[1] = 0;
/* Generated */    ShadowVeryShortPeriodTotal[0] = 0;
/* Generated */    ShadowVeryShortTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(ShadowVeryShort);
/* Generated */    i = ShadowVeryShortTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         ShadowVeryShortPeriodTotal[2] += TA_CANDLERANGE( ShadowVeryShort, i-2 );
/* Generated */         ShadowVeryShortPeriodTotal[1] += TA_CANDLERANGE( ShadowVeryShort, i-1 );
/* Generated */         ShadowVeryShortPeriodTotal[0] += TA_CANDLERANGE( ShadowVeryShort, i );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = startIdx;
/* Generated */    outIdx = 0;
/* Generated */    do
/* Generated */    {
/* Generated */ #ifdef TA_LIB_PRO
/* Generated */ #else
/* Generated */         if( TA_CANDLECOLOR(i-3) == 1 &&                                         // white
/* Generated */             TA_CANDLECOLOR(i-2) == -1 &&                                        // 1st black
/* Generated */             TA_LOWERSHADOW(i-2) < TA_CANDLEAVERAGE( ShadowVeryShort, ShadowVeryShortPeriodTotal[2], i-2 ) &&     
/* Generated */                                                                                 // very short lower shadow
/* Generated */             TA_CANDLECOLOR(i-1) == -1 &&                                        // 2nd black
/* Generated */             TA_LOWERSHADOW(i-1) < TA_CANDLEAVERAGE( ShadowVeryShort, ShadowVeryShortPeriodTotal[1], i-1 ) &&     
/* Generated */                                                                                 // very short lower shadow
/* Generated */             TA_CANDLECOLOR(i) == -1 &&                                          // 3rd black
/* Generated */             TA_LOWERSHADOW(i) < TA_CANDLEAVERAGE( ShadowVeryShort, ShadowVeryShortPeriodTotal[0], i ) &&         
/* Generated */                                                                                 // very short lower shadow
/* Generated */             inOpen[i-1] < inOpen[i-2] && inOpen[i-1] > inClose[i-2] &&          // 2nd black opens within 1st black's rb
/* Generated */             inOpen[i] < inOpen[i-1] && inOpen[i] > inClose[i-1] &&              // 3rd black opens within 2nd black's rb
/* Generated */             inHigh[i-3] > inClose[i-2] &&                                       // 1st black closes under prior candle's high
/* Generated */             inClose[i-2] > inClose[i-1] &&                                      // three declining
/* Generated */             inClose[i-1] > inClose[i]                                           // three declining
/* Generated */           )
/* Generated */ #endif
/* Generated */             outInteger[outIdx++] = -100;
/* Generated */         else
/* Generated */             outInteger[outIdx++] = 0;
/* Generated */         for (totIdx = 2; totIdx >= 0; --totIdx)
/* Generated */             ShadowVeryShortPeriodTotal[totIdx] += TA_CANDLERANGE( ShadowVeryShort, i-totIdx ) 
/* Generated */                                                 - TA_CANDLERANGE( ShadowVeryShort, ShadowVeryShortTrailingIdx-totIdx );
/* Generated */         i++; 
/* Generated */         ShadowVeryShortTrailingIdx++;
/* Generated */    } while( i <= endIdx );
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 15 - DO NOT DELETE THIS LINE ****/

