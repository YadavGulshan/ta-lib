# Do not modify this file. It is automatically
# generated by make_pro.pl

TEMPLATE  = lib
CONFIG   -= qt
CONFIG   += staticlib

# Identify the temp dir
cmd:OBJECTS_DIR = ../../../../../temp/cmd
cmr:OBJECTS_DIR = ../../../../../temp/cmr
cmp:OBJECTS_DIR = ../../../../../temp/cmp
csd:OBJECTS_DIR = ../../../../../temp/csd
csr:OBJECTS_DIR = ../../../../../temp/csr
csp:OBJECTS_DIR = ../../../../../temp/csp
cdr:OBJECTS_DIR = ../../../../../temp/cdr
cdd:OBJECTS_DIR = ../../../../../temp/cdd

# Identify the target
LIBTARGET = ta_func
cmd:TARGET = ta_func_cmd
cmr:TARGET = ta_func_cmr
cmp:TARGET = ta_func_cmp
csd:TARGET = ta_func_csd
csr:TARGET = ta_func_csr
csp:TARGET = ta_func_csp
cdr:TARGET = ta_func_cdr
cdd:TARGET = ta_func_cdd

# Output info
DESTDIR     = ../../../../../lib

# Files to process
SOURCES	= ../../../../../src/ta_func/ta_utility.c \ 
          ../../../../../src/ta_func/ta_ACCBANDS.c \ 
          ../../../../../src/ta_func/ta_ACOS.c \ 
          ../../../../../src/ta_func/ta_AD.c \ 
          ../../../../../src/ta_func/ta_ADD.c \ 
          ../../../../../src/ta_func/ta_ADOSC.c \ 
          ../../../../../src/ta_func/ta_ADX.c \ 
          ../../../../../src/ta_func/ta_ADXR.c \ 
          ../../../../../src/ta_func/ta_APO.c \ 
          ../../../../../src/ta_func/ta_AROON.c \ 
          ../../../../../src/ta_func/ta_AROONOSC.c \ 
          ../../../../../src/ta_func/ta_ASIN.c \ 
          ../../../../../src/ta_func/ta_ATAN.c \ 
          ../../../../../src/ta_func/ta_ATR.c \ 
          ../../../../../src/ta_func/ta_AVGPRICE.c \ 
          ../../../../../src/ta_func/ta_AVGDEV.c \ 
          ../../../../../src/ta_func/ta_BBANDS.c \ 
          ../../../../../src/ta_func/ta_BETA.c \ 
          ../../../../../src/ta_func/ta_BOP.c \ 
          ../../../../../src/ta_func/ta_CCI.c \ 
          ../../../../../src/ta_func/ta_CDL2CROWS.c \ 
          ../../../../../src/ta_func/ta_CDL3BLACKCROWS.c \ 
          ../../../../../src/ta_func/ta_CDL3INSIDE.c \ 
          ../../../../../src/ta_func/ta_CDL3LINESTRIKE.c \ 
          ../../../../../src/ta_func/ta_CDL3OUTSIDE.c \ 
          ../../../../../src/ta_func/ta_CDL3STARSINSOUTH.c \ 
          ../../../../../src/ta_func/ta_CDL3WHITESOLDIERS.c \ 
          ../../../../../src/ta_func/ta_CDLABANDONEDBABY.c \ 
          ../../../../../src/ta_func/ta_CDLADVANCEBLOCK.c \ 
          ../../../../../src/ta_func/ta_CDLBELTHOLD.c \ 
          ../../../../../src/ta_func/ta_CDLBREAKAWAY.c \ 
          ../../../../../src/ta_func/ta_CDLCLOSINGMARUBOZU.c \ 
          ../../../../../src/ta_func/ta_CDLCONCEALBABYSWALL.c \ 
          ../../../../../src/ta_func/ta_CDLCOUNTERATTACK.c \ 
          ../../../../../src/ta_func/ta_CDLDARKCLOUDCOVER.c \ 
          ../../../../../src/ta_func/ta_CDLDOJI.c \ 
          ../../../../../src/ta_func/ta_CDLDOJISTAR.c \ 
          ../../../../../src/ta_func/ta_CDLDRAGONFLYDOJI.c \ 
          ../../../../../src/ta_func/ta_CDLENGULFING.c \ 
          ../../../../../src/ta_func/ta_CDLEVENINGDOJISTAR.c \ 
          ../../../../../src/ta_func/ta_CDLEVENINGSTAR.c \ 
          ../../../../../src/ta_func/ta_CDLGAPSIDESIDEWHITE.c \ 
          ../../../../../src/ta_func/ta_CDLGRAVESTONEDOJI.c \ 
          ../../../../../src/ta_func/ta_CDLHAMMER.c \ 
          ../../../../../src/ta_func/ta_CDLHANGINGMAN.c \ 
          ../../../../../src/ta_func/ta_CDLHARAMI.c \ 
          ../../../../../src/ta_func/ta_CDLHARAMICROSS.c \ 
          ../../../../../src/ta_func/ta_CDLHIGHWAVE.c \ 
          ../../../../../src/ta_func/ta_CDLHIKKAKE.c \ 
          ../../../../../src/ta_func/ta_CDLHIKKAKEMOD.c \ 
          ../../../../../src/ta_func/ta_CDLHOMINGPIGEON.c \ 
          ../../../../../src/ta_func/ta_CDLIDENTICAL3CROWS.c \ 
          ../../../../../src/ta_func/ta_CDLINNECK.c \ 
          ../../../../../src/ta_func/ta_CDLINVERTEDHAMMER.c \ 
          ../../../../../src/ta_func/ta_CDLKICKING.c \ 
          ../../../../../src/ta_func/ta_CDLKICKINGBYLENGTH.c \ 
          ../../../../../src/ta_func/ta_CDLLADDERBOTTOM.c \ 
          ../../../../../src/ta_func/ta_CDLLONGLEGGEDDOJI.c \ 
          ../../../../../src/ta_func/ta_CDLLONGLINE.c \ 
          ../../../../../src/ta_func/ta_CDLMARUBOZU.c \ 
          ../../../../../src/ta_func/ta_CDLMATCHINGLOW.c \ 
          ../../../../../src/ta_func/ta_CDLMATHOLD.c \ 
          ../../../../../src/ta_func/ta_CDLMORNINGDOJISTAR.c \ 
          ../../../../../src/ta_func/ta_CDLMORNINGSTAR.c \ 
          ../../../../../src/ta_func/ta_CDLONNECK.c \ 
          ../../../../../src/ta_func/ta_CDLPIERCING.c \ 
          ../../../../../src/ta_func/ta_CDLRICKSHAWMAN.c \ 
          ../../../../../src/ta_func/ta_CDLRISEFALL3METHODS.c \ 
          ../../../../../src/ta_func/ta_CDLSEPARATINGLINES.c \ 
          ../../../../../src/ta_func/ta_CDLSHOOTINGSTAR.c \ 
          ../../../../../src/ta_func/ta_CDLSHORTLINE.c \ 
          ../../../../../src/ta_func/ta_CDLSPINNINGTOP.c \ 
          ../../../../../src/ta_func/ta_CDLSTALLEDPATTERN.c \ 
          ../../../../../src/ta_func/ta_CDLSTICKSANDWICH.c \ 
          ../../../../../src/ta_func/ta_CDLTAKURI.c \ 
          ../../../../../src/ta_func/ta_CDLTASUKIGAP.c \ 
          ../../../../../src/ta_func/ta_CDLTHRUSTING.c \ 
          ../../../../../src/ta_func/ta_CDLTRISTAR.c \ 
          ../../../../../src/ta_func/ta_CDLUNIQUE3RIVER.c \ 
          ../../../../../src/ta_func/ta_CDLUPSIDEGAP2CROWS.c \ 
          ../../../../../src/ta_func/ta_CDLXSIDEGAP3METHODS.c \ 
          ../../../../../src/ta_func/ta_CEIL.c \ 
          ../../../../../src/ta_func/ta_CMO.c \ 
          ../../../../../src/ta_func/ta_CORREL.c \ 
          ../../../../../src/ta_func/ta_COS.c \ 
          ../../../../../src/ta_func/ta_COSH.c \ 
          ../../../../../src/ta_func/ta_DEMA.c \ 
          ../../../../../src/ta_func/ta_DIV.c \ 
          ../../../../../src/ta_func/ta_DX.c \ 
          ../../../../../src/ta_func/ta_EMA.c \ 
          ../../../../../src/ta_func/ta_EXP.c \ 
          ../../../../../src/ta_func/ta_FLOOR.c \ 
          ../../../../../src/ta_func/ta_HT_DCPERIOD.c \ 
          ../../../../../src/ta_func/ta_HT_DCPHASE.c \ 
          ../../../../../src/ta_func/ta_HT_PHASOR.c \ 
          ../../../../../src/ta_func/ta_HT_SINE.c \ 
          ../../../../../src/ta_func/ta_HT_TRENDLINE.c \ 
          ../../../../../src/ta_func/ta_HT_TRENDMODE.c \ 
          ../../../../../src/ta_func/ta_IMI.c \ 
          ../../../../../src/ta_func/ta_KAMA.c \ 
          ../../../../../src/ta_func/ta_LINEARREG.c \ 
          ../../../../../src/ta_func/ta_LINEARREG_ANGLE.c \ 
          ../../../../../src/ta_func/ta_LINEARREG_INTERCEPT.c \ 
          ../../../../../src/ta_func/ta_LINEARREG_SLOPE.c \ 
          ../../../../../src/ta_func/ta_LN.c \ 
          ../../../../../src/ta_func/ta_LOG10.c \ 
          ../../../../../src/ta_func/ta_MA.c \ 
          ../../../../../src/ta_func/ta_MACD.c \ 
          ../../../../../src/ta_func/ta_MACDEXT.c \ 
          ../../../../../src/ta_func/ta_MACDFIX.c \ 
          ../../../../../src/ta_func/ta_MAMA.c \ 
          ../../../../../src/ta_func/ta_MAVP.c \ 
          ../../../../../src/ta_func/ta_MAX.c \ 
          ../../../../../src/ta_func/ta_MAXINDEX.c \ 
          ../../../../../src/ta_func/ta_MEDPRICE.c \ 
          ../../../../../src/ta_func/ta_MFI.c \ 
          ../../../../../src/ta_func/ta_MIDPOINT.c \ 
          ../../../../../src/ta_func/ta_MIDPRICE.c \ 
          ../../../../../src/ta_func/ta_MIN.c \ 
          ../../../../../src/ta_func/ta_MININDEX.c \ 
          ../../../../../src/ta_func/ta_MINMAX.c \ 
          ../../../../../src/ta_func/ta_MINMAXINDEX.c \ 
          ../../../../../src/ta_func/ta_MINUS_DI.c \ 
          ../../../../../src/ta_func/ta_MINUS_DM.c \ 
          ../../../../../src/ta_func/ta_MOM.c \ 
          ../../../../../src/ta_func/ta_MULT.c \ 
          ../../../../../src/ta_func/ta_NATR.c \ 
          ../../../../../src/ta_func/ta_NVI.c \ 
          ../../../../../src/ta_func/ta_OBV.c \ 
          ../../../../../src/ta_func/ta_PLUS_DI.c \ 
          ../../../../../src/ta_func/ta_PLUS_DM.c \ 
          ../../../../../src/ta_func/ta_PPO.c \ 
          ../../../../../src/ta_func/ta_PVI.c \ 
          ../../../../../src/ta_func/ta_PVT.c \ 
          ../../../../../src/ta_func/ta_ROC.c \ 
          ../../../../../src/ta_func/ta_ROCP.c \ 
          ../../../../../src/ta_func/ta_ROCR.c \ 
          ../../../../../src/ta_func/ta_ROCR100.c \ 
          ../../../../../src/ta_func/ta_RSI.c \ 
          ../../../../../src/ta_func/ta_SAR.c \ 
          ../../../../../src/ta_func/ta_SAREXT.c \ 
          ../../../../../src/ta_func/ta_SIN.c \ 
          ../../../../../src/ta_func/ta_SINH.c \ 
          ../../../../../src/ta_func/ta_SMA.c \ 
          ../../../../../src/ta_func/ta_SQRT.c \ 
          ../../../../../src/ta_func/ta_STDDEV.c \ 
          ../../../../../src/ta_func/ta_STOCH.c \ 
          ../../../../../src/ta_func/ta_STOCHF.c \ 
          ../../../../../src/ta_func/ta_STOCHRSI.c \ 
          ../../../../../src/ta_func/ta_SUB.c \ 
          ../../../../../src/ta_func/ta_SUM.c \ 
          ../../../../../src/ta_func/ta_T3.c \ 
          ../../../../../src/ta_func/ta_TAN.c \ 
          ../../../../../src/ta_func/ta_TANH.c \ 
          ../../../../../src/ta_func/ta_TEMA.c \ 
          ../../../../../src/ta_func/ta_TRANGE.c \ 
          ../../../../../src/ta_func/ta_TRIMA.c \ 
          ../../../../../src/ta_func/ta_TRIX.c \ 
          ../../../../../src/ta_func/ta_TSF.c \ 
          ../../../../../src/ta_func/ta_TYPPRICE.c \ 
          ../../../../../src/ta_func/ta_ULTOSC.c \ 
          ../../../../../src/ta_func/ta_VAR.c \ 
          ../../../../../src/ta_func/ta_WCLPRICE.c \ 
          ../../../../../src/ta_func/ta_WILLR.c \ 
          ../../../../../src/ta_func/ta_WMA.c 

# Compiler Options
INCLUDEPATH = ../../../../../src/ta_common \n              ../../../../../include 

# debug/release dependent options.
debug:DEFINES   *= TA_DEBUG
debug:DEFINES   *= _DEBUG
DEFINES        += TA_SINGLE_THREAD
thread:DEFINES -= TA_SINGLE_THREAD


# Platform dependent options.
win32:DEFINES         *= WIN32
win32-msvc:DEFINES    *= _MBCS _LIB
freebsd-g++:LIBS      -= -ldl
freebsd-g++:INCLUDEPATH += /usr/local/include

cmd:TEMP_CLEAN_ALL = ../../../../../temp/cmd/*.pch
cmr:TEMP_CLEAN_ALL = ../../../../../temp/cmr/*.pch
cmp:TEMP_CLEAN_ALL = ../../../../../temp/cmp/*.pch
csd:TEMP_CLEAN_ALL = ../../../../../temp/csd/*.pch
csr:TEMP_CLEAN_ALL = ../../../../../temp/csr/*.pch
csp:TEMP_CLEAN_ALL = ../../../../../temp/csp/*.pch
cdr:TEMP_CLEAN_ALL = ../../../../../temp/cdr/*.pch
cdd:TEMP_CLEAN_ALL = ../../../../../temp/cdd/*.pch

cmd:TEMP_CLEAN_ALL2 = ../../../../../temp/cmd/*.idb
cmr:TEMP_CLEAN_ALL2 = ../../../../../temp/cmr/*.idb
cmp:TEMP_CLEAN_ALL2 = ../../../../../temp/cmp/*.idb
csd:TEMP_CLEAN_ALL2 = ../../../../../temp/csd/*.idb
csr:TEMP_CLEAN_ALL2 = ../../../../../temp/csr/*.idb
csp:TEMP_CLEAN_ALL2 = ../../../../../temp/csp/*.idb
cdr:TEMP_CLEAN_ALL2 = ../../../../../temp/cdr/*.idb
cdd:TEMP_CLEAN_ALL2 = ../../../../../temp/cdd/*.idb

cmd:TEMP_CLEAN_ALL3 = ../../../../../temp/cmd/$$LIBTARGET/*.pch
cmr:TEMP_CLEAN_ALL3 = ../../../../../temp/cmr/$$LIBTARGET/*.pch
cmp:TEMP_CLEAN_ALL3 = ../../../../../temp/cmp/$$LIBTARGET/*.pch
csd:TEMP_CLEAN_ALL3 = ../../../../../temp/csd/$$LIBTARGET/*.pch
csr:TEMP_CLEAN_ALL3 = ../../../../../temp/csr/$$LIBTARGET/*.pch
csp:TEMP_CLEAN_ALL3 = ../../../../../temp/csp/$$LIBTARGET/*.pch
cdr:TEMP_CLEAN_ALL3 = ../../../../../temp/cdr/$$LIBTARGET/*.pch
cdd:TEMP_CLEAN_ALL3 = ../../../../../temp/cdd/$$LIBTARGET/*.pch

cmd:TEMP_CLEAN_ALL4 = ../../../../../temp/cmd/$$LIBTARGET/*.idb
cmr:TEMP_CLEAN_ALL4 = ../../../../../temp/cmr/$$LIBTARGET/*.idb
cmp:TEMP_CLEAN_ALL4 = ../../../../../temp/cmp/$$LIBTARGET/*.idb
csd:TEMP_CLEAN_ALL4 = ../../../../../temp/csd/$$LIBTARGET/*.idb
csr:TEMP_CLEAN_ALL4 = ../../../../../temp/csr/$$LIBTARGET/*.idb
csp:TEMP_CLEAN_ALL4 = ../../../../../temp/csp/$$LIBTARGET/*.idb
cdr:TEMP_CLEAN_ALL4 = ../../../../../temp/cdr/$$LIBTARGET/*.idb
cdd:TEMP_CLEAN_ALL4 = ../../../../../temp/cdd/$$LIBTARGET/*.idb

cmd:TEMP_CLEAN_ALL5 = ../../../../../temp/cmd/$$LIBTARGET/*.obj
cmr:TEMP_CLEAN_ALL5 = ../../../../../temp/cmr/$$LIBTARGET/*.obj
cmp:TEMP_CLEAN_ALL5 = ../../../../../temp/cmp/$$LIBTARGET/*.obj
csd:TEMP_CLEAN_ALL5 = ../../../../../temp/csd/$$LIBTARGET/*.obj
csr:TEMP_CLEAN_ALL5 = ../../../../../temp/csr/$$LIBTARGET/*.obj
csp:TEMP_CLEAN_ALL5 = ../../../../../temp/csp/$$LIBTARGET/*.obj
cdr:TEMP_CLEAN_ALL5 = ../../../../../temp/cdr/$$LIBTARGET/*.obj
cdd:TEMP_CLEAN_ALL5 = ../../../../../temp/cdd/$$LIBTARGET/*.obj

win32:CLEAN_FILES = ../../../../../bin/*.map ../../../../../bin/*._xe ../../../../../bin/*.tds ../../../../../bin/*.pdb ../../../../../bin/*.pbo ../../../../../bin/*.pbi ../../../../../bin/*.pbt $$TEMP_CLEAN_ALL $$TEMP_CLEAN_ALL2 $$TEMP_CLEAN_ALL3 $$TEMP_CLEAN_ALL4 $$TEMP_CLEAN_ALL5
