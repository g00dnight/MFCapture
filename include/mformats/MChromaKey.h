

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed Jul 19 12:50:12 2017
 */
/* Compiler settings for MChromaKey.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __MChromaKey_h__
#define __MChromaKey_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMKey_FWD_DEFINED__
#define __IMKey_FWD_DEFINED__
typedef interface IMKey IMKey;
#endif 	/* __IMKey_FWD_DEFINED__ */


#ifndef __IMChromaKey_FWD_DEFINED__
#define __IMChromaKey_FWD_DEFINED__
typedef interface IMChromaKey IMChromaKey;
#endif 	/* __IMChromaKey_FWD_DEFINED__ */


#ifndef __MChromaKey_FWD_DEFINED__
#define __MChromaKey_FWD_DEFINED__

#ifdef __cplusplus
typedef class MChromaKey MChromaKey;
#else
typedef struct MChromaKey MChromaKey;
#endif /* __cplusplus */

#endif 	/* __MChromaKey_FWD_DEFINED__ */


#ifndef __MKey_FWD_DEFINED__
#define __MKey_FWD_DEFINED__

#ifdef __cplusplus
typedef class MKey MKey;
#else
typedef struct MKey MKey;
#endif /* __cplusplus */

#endif 	/* __MKey_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_MChromaKey_0000_0000 */
/* [local] */ 

#ifndef CHROMA_KEY_RAW_DEFINED
#define CHROMA_KEY_RAW_DEFINED
typedef 
enum eCK_Type
    {	eCKT_Alpha	= 0,
	eCKT_None	= ( eCKT_Alpha + 1 ) ,
	eCKT_RGB	= ( eCKT_None + 1 ) ,
	eCKT_HLS	= ( eCKT_RGB + 1 ) ,
	eCKT_YUV	= ( eCKT_HLS + 1 ) ,
	eCKT_Auto	= ( eCKT_YUV + 1 ) 
    } 	eCK_Type;

typedef struct SINGLE_KEY
    {
    int nValue;
    int nDelta;
    int nSmoothRange;
    int nAlpha;
    int nCancelRange;
    int nCancelPower;
    int nCancelChroma;
    int nCancelLuma;
    int nCancelAlpha;
    int nReverseKey;
    } 	SINGLE_KEY;

typedef struct CHROMA_KEY_RAW
    {
    eCK_Type eType;
    int nKeysUsed;
    SINGLE_KEY arrKeys[ 16 ];
    int nMinTransparent;
    int nMaxTransparent;
    int nEdgesSmooth;
    BOOL bColorCancel;
    int nInterlacedVideo;
    int nInverseKey;
    } 	CHROMA_KEY_RAW;

#endif // CHROMA_KEY_RAW_DEFINED
typedef 
enum eCK_Adjust
    {	eCKA_KeyType	= 0,
	eCKA_Power	= ( eCKA_KeyType + 1 ) ,
	eCKA_Transparent	= ( eCKA_Power + 1 ) ,
	eCKA_Smooth	= ( eCKA_Transparent + 1 ) ,
	eCKA_Colors	= ( eCKA_Smooth + 1 ) ,
	eCKA_MinTransparent	= ( eCKA_Colors + 1 ) ,
	eCKA_MaxTransparent	= ( eCKA_MinTransparent + 1 ) ,
	eCKA_ExcludePower	= ( eCKA_MaxTransparent + 1 ) ,
	eCKA_ExcludeTransparent	= ( eCKA_ExcludePower + 1 ) ,
	eCKA_Power_R_H_Y	= ( eCKA_ExcludeTransparent + 1 ) ,
	eCKA_Power_G_L_U	= ( eCKA_Power_R_H_Y + 1 ) ,
	eCKA_Power_B_S_V	= ( eCKA_Power_G_L_U + 1 ) ,
	eCKA_Colors_Range	= ( eCKA_Power_B_S_V + 1 ) ,
	eCKA_Colors_Power	= ( eCKA_Colors_Range + 1 ) ,
	eCKA_Colors_Chroma	= ( eCKA_Colors_Power + 1 ) ,
	eCKA_Colors_Luma	= ( eCKA_Colors_Chroma + 1 ) ,
	eCKA_Colors_Alpha	= ( eCKA_Colors_Luma + 1 ) 
    } 	eCK_Adjust;

typedef struct CK_COLOR_ADJUST
    {
    double dblCancelRange;
    double dblCancelPower;
    double dblCancelChroma;
    double dblCancelLuma;
    double dblCancelAlpha;
    } 	CK_COLOR_ADJUST;

typedef struct CK_RANGE_ADJUST
    {
    double dblRangeR_H_Y;
    double dblRangeG_L_U;
    double dblRangeB_S_V;
    } 	CK_RANGE_ADJUST;

typedef struct CK_ADJUST
    {
    double dblPower;
    double dblTransparent;
    double dblColors;
    double dblSmooth;
    double dblMinTransparent;
    double dblMaxTransparent;
    double dblExclPower;
    double dblExclTransparent;
    CK_COLOR_ADJUST colAdjust;
    CK_RANGE_ADJUST rangeAdjust;
    } 	CK_ADJUST;



extern RPC_IF_HANDLE __MIDL_itf_MChromaKey_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MChromaKey_0000_0000_v0_0_s_ifspec;

#ifndef __IMKey_INTERFACE_DEFINED__
#define __IMKey_INTERFACE_DEFINED__

/* interface IMKey */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B731001C-C777-4CBA-9033-D823782A005E")
    IMKey : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE KeyFrameSet( 
            /* [in] */ IUnknown *_pMFrameKeyingOrNull,
            /* [in] */ IUnknown *_pMFrameBGOrNull) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE KeyFrameGet( 
            /* [out] */ IUnknown **_ppMFrameRes,
            /* [out] */ IUnknown **_ppMFrameBG) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE KeyDetect( 
            /* [in] */ BSTR _bsProps,
            /* [out] */ IUnknown **_ppMFrameRes) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE KeyAddPoint( 
            /* [in] */ int _nXPosPixels,
            /* [in] */ int _nYPosPixels,
            /* [in] */ BSTR _bsProps,
            /* [out] */ IUnknown **_ppMFrameRes) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE KeyExcludePoint( 
            /* [in] */ int _nXPosPixels,
            /* [in] */ int _nYPosPixels,
            /* [in] */ BSTR _bsProps,
            /* [out] */ IUnknown **_ppMFrameRes) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE KeyAddRect( 
            /* [in] */ int _nX1PosPixels,
            /* [in] */ int _nY1PosPixels,
            /* [in] */ int _nX2PosPixels,
            /* [in] */ int _nY2PosPixels,
            /* [in] */ BSTR _bsProps,
            /* [out] */ IUnknown **_ppMFrameRes) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE KeyAdjustSet( 
            /* [in] */ eCK_Adjust _eAdjust,
            /* [in] */ double _dblValue,
            /* [out] */ IUnknown **_ppMFrameRes) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE KeyAdjustGet( 
            /* [in] */ eCK_Adjust _eAdjust,
            /* [out] */ double *_pdblValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE KeyStepBack( 
            /* [in] */ int _nSteps,
            /* [out] */ IUnknown **_ppMFrameRes) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE KeyStepFwd( 
            /* [in] */ int _nSteps,
            /* [out] */ IUnknown **_ppMFrameRes) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE KeyReset( 
            /* [out] */ IUnknown **_ppMFrameRes) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE KeyRawSet( 
            /* [in] */ const CHROMA_KEY_RAW *_pvmKey,
            /* [in] */ const CK_ADJUST *_pKeyAdjust) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE KeyRawGet( 
            /* [out] */ CHROMA_KEY_RAW *_pvmKey,
            /* [out] */ CK_ADJUST *_pKeyAdjust) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMKeyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMKey * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMKey * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMKey * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeyFrameSet )( 
            IMKey * This,
            /* [in] */ IUnknown *_pMFrameKeyingOrNull,
            /* [in] */ IUnknown *_pMFrameBGOrNull);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeyFrameGet )( 
            IMKey * This,
            /* [out] */ IUnknown **_ppMFrameRes,
            /* [out] */ IUnknown **_ppMFrameBG);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeyDetect )( 
            IMKey * This,
            /* [in] */ BSTR _bsProps,
            /* [out] */ IUnknown **_ppMFrameRes);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeyAddPoint )( 
            IMKey * This,
            /* [in] */ int _nXPosPixels,
            /* [in] */ int _nYPosPixels,
            /* [in] */ BSTR _bsProps,
            /* [out] */ IUnknown **_ppMFrameRes);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeyExcludePoint )( 
            IMKey * This,
            /* [in] */ int _nXPosPixels,
            /* [in] */ int _nYPosPixels,
            /* [in] */ BSTR _bsProps,
            /* [out] */ IUnknown **_ppMFrameRes);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeyAddRect )( 
            IMKey * This,
            /* [in] */ int _nX1PosPixels,
            /* [in] */ int _nY1PosPixels,
            /* [in] */ int _nX2PosPixels,
            /* [in] */ int _nY2PosPixels,
            /* [in] */ BSTR _bsProps,
            /* [out] */ IUnknown **_ppMFrameRes);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeyAdjustSet )( 
            IMKey * This,
            /* [in] */ eCK_Adjust _eAdjust,
            /* [in] */ double _dblValue,
            /* [out] */ IUnknown **_ppMFrameRes);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeyAdjustGet )( 
            IMKey * This,
            /* [in] */ eCK_Adjust _eAdjust,
            /* [out] */ double *_pdblValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeyStepBack )( 
            IMKey * This,
            /* [in] */ int _nSteps,
            /* [out] */ IUnknown **_ppMFrameRes);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeyStepFwd )( 
            IMKey * This,
            /* [in] */ int _nSteps,
            /* [out] */ IUnknown **_ppMFrameRes);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeyReset )( 
            IMKey * This,
            /* [out] */ IUnknown **_ppMFrameRes);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeyRawSet )( 
            IMKey * This,
            /* [in] */ const CHROMA_KEY_RAW *_pvmKey,
            /* [in] */ const CK_ADJUST *_pKeyAdjust);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeyRawGet )( 
            IMKey * This,
            /* [out] */ CHROMA_KEY_RAW *_pvmKey,
            /* [out] */ CK_ADJUST *_pKeyAdjust);
        
        END_INTERFACE
    } IMKeyVtbl;

    interface IMKey
    {
        CONST_VTBL struct IMKeyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMKey_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMKey_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMKey_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMKey_KeyFrameSet(This,_pMFrameKeyingOrNull,_pMFrameBGOrNull)	\
    ( (This)->lpVtbl -> KeyFrameSet(This,_pMFrameKeyingOrNull,_pMFrameBGOrNull) ) 

#define IMKey_KeyFrameGet(This,_ppMFrameRes,_ppMFrameBG)	\
    ( (This)->lpVtbl -> KeyFrameGet(This,_ppMFrameRes,_ppMFrameBG) ) 

#define IMKey_KeyDetect(This,_bsProps,_ppMFrameRes)	\
    ( (This)->lpVtbl -> KeyDetect(This,_bsProps,_ppMFrameRes) ) 

#define IMKey_KeyAddPoint(This,_nXPosPixels,_nYPosPixels,_bsProps,_ppMFrameRes)	\
    ( (This)->lpVtbl -> KeyAddPoint(This,_nXPosPixels,_nYPosPixels,_bsProps,_ppMFrameRes) ) 

#define IMKey_KeyExcludePoint(This,_nXPosPixels,_nYPosPixels,_bsProps,_ppMFrameRes)	\
    ( (This)->lpVtbl -> KeyExcludePoint(This,_nXPosPixels,_nYPosPixels,_bsProps,_ppMFrameRes) ) 

#define IMKey_KeyAddRect(This,_nX1PosPixels,_nY1PosPixels,_nX2PosPixels,_nY2PosPixels,_bsProps,_ppMFrameRes)	\
    ( (This)->lpVtbl -> KeyAddRect(This,_nX1PosPixels,_nY1PosPixels,_nX2PosPixels,_nY2PosPixels,_bsProps,_ppMFrameRes) ) 

#define IMKey_KeyAdjustSet(This,_eAdjust,_dblValue,_ppMFrameRes)	\
    ( (This)->lpVtbl -> KeyAdjustSet(This,_eAdjust,_dblValue,_ppMFrameRes) ) 

#define IMKey_KeyAdjustGet(This,_eAdjust,_pdblValue)	\
    ( (This)->lpVtbl -> KeyAdjustGet(This,_eAdjust,_pdblValue) ) 

#define IMKey_KeyStepBack(This,_nSteps,_ppMFrameRes)	\
    ( (This)->lpVtbl -> KeyStepBack(This,_nSteps,_ppMFrameRes) ) 

#define IMKey_KeyStepFwd(This,_nSteps,_ppMFrameRes)	\
    ( (This)->lpVtbl -> KeyStepFwd(This,_nSteps,_ppMFrameRes) ) 

#define IMKey_KeyReset(This,_ppMFrameRes)	\
    ( (This)->lpVtbl -> KeyReset(This,_ppMFrameRes) ) 

#define IMKey_KeyRawSet(This,_pvmKey,_pKeyAdjust)	\
    ( (This)->lpVtbl -> KeyRawSet(This,_pvmKey,_pKeyAdjust) ) 

#define IMKey_KeyRawGet(This,_pvmKey,_pKeyAdjust)	\
    ( (This)->lpVtbl -> KeyRawGet(This,_pvmKey,_pKeyAdjust) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMKey_INTERFACE_DEFINED__ */


#ifndef __IMChromaKey_INTERFACE_DEFINED__
#define __IMChromaKey_INTERFACE_DEFINED__

/* interface IMChromaKey */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMChromaKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B731001C-C811-4CBA-9033-D823782A005E")
    IMChromaKey : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE KeySet( 
            /* [in] */ IMKey *_pKeyObject) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE KeyGet( 
            /* [in] */ IUnknown *_pMFrameForAdjustOrNull,
            /* [out] */ IMKey **_ppKeyObject,
            /* [in] */ BSTR _bsProps) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE KeyRawSet( 
            /* [in] */ const CHROMA_KEY_RAW *_pvmKey) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE KeyRawGet( 
            /* [out] */ CHROMA_KEY_RAW *_pvmKey) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMChromaKeyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMChromaKey * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMChromaKey * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMChromaKey * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeySet )( 
            IMChromaKey * This,
            /* [in] */ IMKey *_pKeyObject);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeyGet )( 
            IMChromaKey * This,
            /* [in] */ IUnknown *_pMFrameForAdjustOrNull,
            /* [out] */ IMKey **_ppKeyObject,
            /* [in] */ BSTR _bsProps);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeyRawSet )( 
            IMChromaKey * This,
            /* [in] */ const CHROMA_KEY_RAW *_pvmKey);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeyRawGet )( 
            IMChromaKey * This,
            /* [out] */ CHROMA_KEY_RAW *_pvmKey);
        
        END_INTERFACE
    } IMChromaKeyVtbl;

    interface IMChromaKey
    {
        CONST_VTBL struct IMChromaKeyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMChromaKey_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMChromaKey_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMChromaKey_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMChromaKey_KeySet(This,_pKeyObject)	\
    ( (This)->lpVtbl -> KeySet(This,_pKeyObject) ) 

#define IMChromaKey_KeyGet(This,_pMFrameForAdjustOrNull,_ppKeyObject,_bsProps)	\
    ( (This)->lpVtbl -> KeyGet(This,_pMFrameForAdjustOrNull,_ppKeyObject,_bsProps) ) 

#define IMChromaKey_KeyRawSet(This,_pvmKey)	\
    ( (This)->lpVtbl -> KeyRawSet(This,_pvmKey) ) 

#define IMChromaKey_KeyRawGet(This,_pvmKey)	\
    ( (This)->lpVtbl -> KeyRawGet(This,_pvmKey) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMChromaKey_INTERFACE_DEFINED__ */



#ifndef __MCHROMAKEYLib_LIBRARY_DEFINED__
#define __MCHROMAKEYLib_LIBRARY_DEFINED__

/* library MCHROMAKEYLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_MCHROMAKEYLib;

EXTERN_C const CLSID CLSID_MChromaKey;

#ifdef __cplusplus

class DECLSPEC_UUID("FF12951C-DC32-42B7-B676-583883EF574E")
MChromaKey;
#endif

EXTERN_C const CLSID CLSID_MKey;

#ifdef __cplusplus

class DECLSPEC_UUID("F74E5C32-D592-4C20-A4E7-A470A713FF8A")
MKey;
#endif
#endif /* __MCHROMAKEYLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


