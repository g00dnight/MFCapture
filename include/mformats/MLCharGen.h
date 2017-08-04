

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed Jul 19 12:51:03 2017
 */
/* Compiler settings for MLCharGen.idl:
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

#ifndef __MLCharGen_h__
#define __MLCharGen_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMLCharGenCallback_FWD_DEFINED__
#define __IMLCharGenCallback_FWD_DEFINED__
typedef interface IMLCharGenCallback IMLCharGenCallback;
#endif 	/* __IMLCharGenCallback_FWD_DEFINED__ */


#ifndef __IMLCharGen_FWD_DEFINED__
#define __IMLCharGen_FWD_DEFINED__
typedef interface IMLCharGen IMLCharGen;
#endif 	/* __IMLCharGen_FWD_DEFINED__ */


#ifndef __IMLCharGenSchedule_FWD_DEFINED__
#define __IMLCharGenSchedule_FWD_DEFINED__
typedef interface IMLCharGenSchedule IMLCharGenSchedule;
#endif 	/* __IMLCharGenSchedule_FWD_DEFINED__ */


#ifndef __IMLCharGenEdit_FWD_DEFINED__
#define __IMLCharGenEdit_FWD_DEFINED__
typedef interface IMLCharGenEdit IMLCharGenEdit;
#endif 	/* __IMLCharGenEdit_FWD_DEFINED__ */


#ifndef __IMLCGObject_FWD_DEFINED__
#define __IMLCGObject_FWD_DEFINED__
typedef interface IMLCGObject IMLCGObject;
#endif 	/* __IMLCGObject_FWD_DEFINED__ */


#ifndef __IMLProperties_FWD_DEFINED__
#define __IMLProperties_FWD_DEFINED__
typedef interface IMLProperties IMLProperties;
#endif 	/* __IMLProperties_FWD_DEFINED__ */


#ifndef __IMLXMLPersist_FWD_DEFINED__
#define __IMLXMLPersist_FWD_DEFINED__
typedef interface IMLXMLPersist IMLXMLPersist;
#endif 	/* __IMLXMLPersist_FWD_DEFINED__ */


#ifndef __IMLCharGenEvents_FWD_DEFINED__
#define __IMLCharGenEvents_FWD_DEFINED__
typedef interface IMLCharGenEvents IMLCharGenEvents;
#endif 	/* __IMLCharGenEvents_FWD_DEFINED__ */


#ifndef __CoMLCharGen_FWD_DEFINED__
#define __CoMLCharGen_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoMLCharGen CoMLCharGen;
#else
typedef struct CoMLCharGen CoMLCharGen;
#endif /* __cplusplus */

#endif 	/* __CoMLCharGen_FWD_DEFINED__ */


#ifndef __MLCharGenPage_FWD_DEFINED__
#define __MLCharGenPage_FWD_DEFINED__

#ifdef __cplusplus
typedef class MLCharGenPage MLCharGenPage;
#else
typedef struct MLCharGenPage MLCharGenPage;
#endif /* __cplusplus */

#endif 	/* __MLCharGenPage_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_MLCharGen_0000_0000 */
/* [local] */ 

#ifndef RGBA
#define RGBA(r,g,b, alpha) ((COLORREF)( ((DWORD)r & 0xFF)|(((DWORD)g & 0xFF)<<8)|(((DWORD)b & 0xFF)<<16)|(((DWORD)alpha & 0xFF)<<24) ) )
#endif
#ifndef GetAlphaValue
#define GetAlphaValue(argb)      (LOBYTE(((DWORD)(argb))>>24))
#endif
typedef 
enum eCG_ItemType
    {	eCGIT_Empty	= 0,
	eCGIT_Text	= ( eCGIT_Empty + 1 ) ,
	eCGIT_Flash	= ( eCGIT_Text + 1 ) ,
	eCGIT_Image	= ( eCGIT_Flash + 1 ) ,
	eCGIT_Graphics	= ( eCGIT_Image + 1 ) ,
	eCGIT_MediaFile	= ( eCGIT_Graphics + 1 ) ,
	eCGIT_Group	= 0x100,
	eCGIT_Text_Group	= ( eCGIT_Group + 1 ) ,
	eCGIT_Flash_Group	= ( eCGIT_Text_Group + 1 ) ,
	eCGIT_Image_Group	= ( eCGIT_Flash_Group + 1 ) ,
	eCGIT_Graphics_Group	= ( eCGIT_Image_Group + 1 ) ,
	eCGIT_Reference	= 0x200,
	eCGIT_Text_Reference	= ( eCGIT_Reference + 1 ) ,
	eCGIT_Flash_Reference	= ( eCGIT_Text_Reference + 1 ) ,
	eCGIT_Image_Reference	= ( eCGIT_Flash_Reference + 1 ) ,
	eCGIT_Graphics_Reference	= ( eCGIT_Image_Reference + 1 ) 
    } 	eCG_ItemType;

typedef 
enum eCG_PlayingMode
    {	eCGPM_Loop	= 0,
	eCGPM_OneTime	= ( eCGPM_Loop + 1 ) ,
	eCGPM_OneTime_n_Hide	= ( eCGPM_OneTime + 1 ) 
    } 	eCG_PlayingMode;

#ifndef CG_SCALE_ALIGN_DEFINED
#define CG_SCALE_ALIGN_DEFINED
typedef 
enum eCG_Scale
    {	eCGS_FitAR	= 0,
	eCGS_ExactFit	= ( eCGS_FitAR + 1 ) ,
	eCGS_NoScale	= ( eCGS_ExactFit + 1 ) ,
	eCGS_ShrinkToFit	= ( eCGS_NoScale + 1 ) ,
	eCGS_ShrinkToFitAR	= ( eCGS_ShrinkToFit + 1 ) ,
	eCGS_CoverAR	= ( eCGS_ShrinkToFitAR + 1 ) ,
	eCGS_Text	= ( eCGS_CoverAR + 1 ) 
    } 	eCG_Scale;

typedef 
enum eCG_Align
    {	eCGA_Center	= 0,
	eCGA_Left	= 0x1,
	eCGA_Right	= 0x2,
	eCGA_Top	= 0x4,
	eCGA_TopLeft	= 0x5,
	eCGA_TopRight	= 0x6,
	eCGA_Bottom	= 0x8,
	eCGA_BottomLeft	= 0x9,
	eCGA_BottomRight	= 0xa,
	eCGA_Auto	= 0xf,
	eCGA_Safe	= 0x10,
	eCGA_SafeLeft	= 0x11,
	eCGA_SafeRight	= 0x12,
	eCGA_SafeTop	= 0x14,
	eCGA_SafeTopLeft	= 0x15,
	eCGA_SafeTopRight	= 0x16,
	eCGA_SafeBottom	= 0x18,
	eCGA_SafeBottomLeft	= 0x19,
	eCGA_SafeBottomRight	= 0x1a
    } 	eCG_Align;

#endif // CG_SCALE_ALIGN_DEFINED
typedef 
enum eCG_Interlace
    {	eCGI_Auto	= 0,
	eCGI_Field1First	= ( eCGI_Auto + 1 ) ,
	eCGI_Field2First	= ( eCGI_Field1First + 1 ) ,
	eCGI_Progressive	= ( eCGI_Field2First + 1 ) 
    } 	eCG_Interlace;

typedef struct CG_VIDEO_PROPS
    {
    double dblFPS;
    BSTR bsColorSpace;
    int nWidth;
    int nHeight;
    eCG_Interlace eInterlace;
    int nApsectX;
    int nApsectY;
    } 	CG_VIDEO_PROPS;

typedef struct CG_AUTO_BLEND
    {
    int nMsecStart;
    int nMsecRamp;
    int nMsecOn;
    int nMsecOff;
    BOOL bRepeat;
    BOOL bRewind;
    } 	CG_AUTO_BLEND;

typedef struct CG_ITEM_PROPS
    {
    POINT ptPos;
    SIZE szItem;
    RECT rcIndent;
    eCG_ItemType eType;
    int nAlpha;
    int nBackColor;
    int nEdgesSmooth;
    double dblPixelAR;
    BOOL bShowItem;
    BOOL bPauseItem;
    eCG_PlayingMode ePlayingMode;
    eCG_Interlace eInterlace;
    eCG_Scale eScale;
    eCG_Align eAlign;
    } 	CG_ITEM_PROPS;

typedef 
enum eCG_TextType
    {	eCGTT_Text	= 0,
	eCGTT_DateTime	= ( eCGTT_Text + 1 ) ,
	eCGTT_Timecode	= ( eCGTT_DateTime + 1 ) ,
	eCGTT_Timecode_NDF	= ( eCGTT_Timecode + 1 ) ,
	eCGTT_FrameTime	= ( eCGTT_Timecode_NDF + 1 ) ,
	eCGTT_Subtitles	= ( eCGTT_FrameTime + 1 ) ,
	eCGTT_FrameNumber	= ( eCGTT_Subtitles + 1 ) ,
	eCGTT_Counter	= ( eCGTT_FrameNumber + 1 ) ,
	eCGTT_Timer	= ( eCGTT_Counter + 1 ) ,
	eCGTT_StopWatch	= ( eCGTT_Timer + 1 ) 
    } 	eCG_TextType;

typedef 
enum eCG_DTFlags
    {	eCGDT_TOP_LEFT	= 0,
	eCGDT_CENTER	= 0x1,
	eCGDT_RIGHT	= 0x2,
	eCGDT_VCENTER	= 0x4,
	eCGDT_BOTTOM	= 0x8,
	eCGDT_PATH_ELLIPSIS	= 0x4000,
	eCGDT_END_ELLIPSIS	= 0x8000,
	eCGDT_WORD_ELLIPSIS	= 0x40000,
	eCGDT_TRIMMING_CHAR	= 0x10000,
	eCGDT_TRIMMING_WORD	= 0x80000,
	eCGDT_WORDBREAK	= 0x10,
	eCGDT_SINGLELINE	= 0x20,
	eCGDT_NO_TAB	= 0x80,
	eCGDT_RTLREADING	= 0x20000,
	eCGDT_VERTICAL	= 0x200000,
	eCGDT_MEASURE_TRAILING_SPACE	= 0x400000,
	eCGDT_UPPERCASE	= 0x800000,
	eCGDT_LOWERCASE	= 0x1000000,
	eCGDT_FLIP_VERT	= 0x4000000,
	eCGDT_FLIP_HORZ	= 0x8000000
    } 	eCG_DTFlags;

typedef struct CG_TEXT_PROPS
    {
    BSTR bsTextString;
    BSTR bsFontFace;
    eCG_TextType eTextType;
    int nFontHeight;
    int nTextColor;
    int nOutlineColor;
    eCG_DTFlags nDTFlags;
    double dblOutlineWidth;
    int nTimeOffset;
    } 	CG_TEXT_PROPS;

typedef struct CG_ITEM_MOVEMENT
    {
    double dblXSpeed;
    double dblYSpeed;
    } 	CG_ITEM_MOVEMENT;

typedef 
enum eCG_FileType
    {	eCGFT_BMP32	= 0,
	eCGFT_PNG	= ( eCGFT_BMP32 + 1 ) ,
	eCGFT_GIF	= ( eCGFT_PNG + 1 ) ,
	eCGFT_JPG	= ( eCGFT_GIF + 1 ) ,
	eCGFT_TIFF	= ( eCGFT_JPG + 1 ) 
    } 	eCG_FileType;

typedef 
enum eCG_GroupItemsRemoveType
    {	eCGRT_Ungroup	= 0,
	eCGRT_RemoveOnlyGroup	= ( eCGRT_Ungroup + 1 ) ,
	eCGRT_RemoveOnlyItems	= ( eCGRT_RemoveOnlyGroup + 1 ) 
    } 	eCG_GroupItemsRemoveType;



extern RPC_IF_HANDLE __MIDL_itf_MLCharGen_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MLCharGen_0000_0000_v0_0_s_ifspec;

#ifndef __IMLCharGenCallback_INTERFACE_DEFINED__
#define __IMLCharGenCallback_INTERFACE_DEFINED__

/* interface IMLCharGenCallback */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLCharGenCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19E97AA0-BB5A-4446-897A-6A6177AF963E")
    IMLCharGenCallback : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnFrame( 
            /* [in] */ LONGLONG llCallbackCookie,
            /* [in] */ double dblTime,
            /* [in] */ int nMediaTime,
            /* [in] */ int nFrameNum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnEndOfClip( 
            /* [in] */ LONGLONG llCallbackCookie,
            /* [in] */ BSTR bsItemID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnTransitionDone( 
            /* [in] */ LONGLONG llCallbackCookie,
            /* [in] */ BSTR bsItemID,
            /* [in] */ VARIANT_BOOL bShow) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnFlashCallback( 
            /* [in] */ LONGLONG llCallbackCookie,
            /* [in] */ BSTR bsItemID,
            /* [in] */ BSTR bsMethodName,
            /* [in] */ BSTR bsParameters) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnCGEvent( 
            /* [in] */ LONGLONG llCallbackCookie,
            /* [in] */ BSTR bsItemOrCompositionID,
            /* [in] */ BSTR bsEventType,
            /* [in] */ BSTR bsEventParam) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLCharGenCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLCharGenCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLCharGenCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLCharGenCallback * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnFrame )( 
            IMLCharGenCallback * This,
            /* [in] */ LONGLONG llCallbackCookie,
            /* [in] */ double dblTime,
            /* [in] */ int nMediaTime,
            /* [in] */ int nFrameNum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnEndOfClip )( 
            IMLCharGenCallback * This,
            /* [in] */ LONGLONG llCallbackCookie,
            /* [in] */ BSTR bsItemID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnTransitionDone )( 
            IMLCharGenCallback * This,
            /* [in] */ LONGLONG llCallbackCookie,
            /* [in] */ BSTR bsItemID,
            /* [in] */ VARIANT_BOOL bShow);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnFlashCallback )( 
            IMLCharGenCallback * This,
            /* [in] */ LONGLONG llCallbackCookie,
            /* [in] */ BSTR bsItemID,
            /* [in] */ BSTR bsMethodName,
            /* [in] */ BSTR bsParameters);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnCGEvent )( 
            IMLCharGenCallback * This,
            /* [in] */ LONGLONG llCallbackCookie,
            /* [in] */ BSTR bsItemOrCompositionID,
            /* [in] */ BSTR bsEventType,
            /* [in] */ BSTR bsEventParam);
        
        END_INTERFACE
    } IMLCharGenCallbackVtbl;

    interface IMLCharGenCallback
    {
        CONST_VTBL struct IMLCharGenCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLCharGenCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLCharGenCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLCharGenCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLCharGenCallback_OnFrame(This,llCallbackCookie,dblTime,nMediaTime,nFrameNum)	\
    ( (This)->lpVtbl -> OnFrame(This,llCallbackCookie,dblTime,nMediaTime,nFrameNum) ) 

#define IMLCharGenCallback_OnEndOfClip(This,llCallbackCookie,bsItemID)	\
    ( (This)->lpVtbl -> OnEndOfClip(This,llCallbackCookie,bsItemID) ) 

#define IMLCharGenCallback_OnTransitionDone(This,llCallbackCookie,bsItemID,bShow)	\
    ( (This)->lpVtbl -> OnTransitionDone(This,llCallbackCookie,bsItemID,bShow) ) 

#define IMLCharGenCallback_OnFlashCallback(This,llCallbackCookie,bsItemID,bsMethodName,bsParameters)	\
    ( (This)->lpVtbl -> OnFlashCallback(This,llCallbackCookie,bsItemID,bsMethodName,bsParameters) ) 

#define IMLCharGenCallback_OnCGEvent(This,llCallbackCookie,bsItemOrCompositionID,bsEventType,bsEventParam)	\
    ( (This)->lpVtbl -> OnCGEvent(This,llCallbackCookie,bsItemOrCompositionID,bsEventType,bsEventParam) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLCharGenCallback_INTERFACE_DEFINED__ */


#ifndef __IMLCharGen_INTERFACE_DEFINED__
#define __IMLCharGen_INTERFACE_DEFINED__

/* interface IMLCharGen */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLCharGen;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19E97A91-BB5A-4446-897A-6A6177AF963E")
    IMLCharGen : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UseExtraBuffer( 
            /* [in] */ int _nUse) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsUseExtraBuffer( 
            /* [out] */ int *_pnUse) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetVideoProperties( 
            /* [in] */ CG_VIDEO_PROPS *_pVideoProps) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetVideoProperties( 
            /* [out] */ CG_VIDEO_PROPS *_pVideoPropsSet,
            /* [out] */ CG_VIDEO_PROPS *_pVideoPropsOrigin) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetVideoOutputRect( 
            /* [in] */ RECT *_prcSource,
            /* [in] */ RECT *_prcTarget,
            /* [in] */ int _crBackColor,
            /* [in] */ BOOL _bTopmostVideo) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetVideoOutputRect( 
            /* [out] */ RECT *_prcSource,
            /* [out] */ RECT *_prcTarget,
            /* [out] */ int *_pcrBackColor,
            /* [out] */ BOOL *_pbTopmostVideo) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddNewItem( 
            /* [in] */ BSTR _bsFileNameOrItemDesc,
            /* [in] */ double _dblPosX,
            /* [in] */ double _dblPosY,
            /* [in] */ BOOL _bRelativePosAndSize,
            /* [in] */ BOOL _bShow,
            /* [out][in] */ BSTR *_pbsItemID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddNewTextItem( 
            /* [in] */ CG_TEXT_PROPS *_pTextProps,
            /* [in] */ double _dblPosX,
            /* [in] */ double _dblPosY,
            /* [in] */ BOOL _bRelativePos,
            /* [in] */ BOOL _bShow,
            /* [out][in] */ BSTR *_pbsItemID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddImageByHandle( 
            /* [in] */ LONG _hBitmap,
            /* [in] */ double _dblPosX,
            /* [in] */ double _dblPosY,
            /* [in] */ BOOL _bRelativePos,
            /* [in] */ BOOL _bShow,
            /* [out][in] */ BSTR *_pbsItemID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveItem( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ int _nFadeOutMsec) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveItemWithDelay( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ int _nMsecDelay,
            /* [in] */ int _nFadeOutMsec) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CloneItem( 
            /* [in] */ BSTR _bsOriginalItemID,
            /* [in] */ BOOL _bMakeReference,
            /* [out][in] */ BSTR *_pbsNewItemID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ChangeItemID( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BSTR _bsItemNewID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetItemsCount( 
            /* [out] */ int *_pnItems) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetItem( 
            /* [in] */ int _nIndex,
            /* [out] */ BSTR *_pbsItemID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetItemBaseProps( 
            /* [in] */ BSTR _bsItemID,
            /* [out] */ BSTR *_pbsFileNameOrDesc,
            /* [out] */ CG_ITEM_PROPS *_pItemProps) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetItemProperties( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BSTR _bsPropertyName,
            /* [out] */ BSTR *_pbsPropertyDesc) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetItemOriginalSize( 
            /* [in] */ BSTR _bsItemID,
            /* [out] */ SIZE *_pSize) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ChangeItemZOrder( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ int _nChange) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetItemBaseProps( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ CG_ITEM_PROPS *_pItemInfo,
            /* [in] */ int _nMsecForChange) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetItemProperties( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BSTR _bsPropertyName,
            /* [in] */ BSTR _bsPropertyValue,
            /* [in] */ BSTR _bsChangeType,
            /* [in] */ int _nMsecForChange) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ShowItem( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BOOL _bShow,
            /* [in] */ int _nMsecForChange) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ShowItemWithDelay( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BOOL _bShow,
            /* [in] */ int _nMsecDelay,
            /* [in] */ int _nMsecForChange) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetItemPos( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ double _dblPosX,
            /* [in] */ double _dblPosY,
            /* [in] */ BOOL _bRelativePos,
            /* [in] */ int _nMsecForChange) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetItemAlpha( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ int _nNewAlpha,
            /* [in] */ int _nMsecForChange) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetItemSize( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ double _dblSizeX,
            /* [in] */ double _dblSizeY,
            /* [in] */ BOOL _bRelativeSize,
            /* [in] */ int _nMsecForChange) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetItemBackground( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ int _nBackground,
            /* [in] */ int _nMsecForChange) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetItemAnchorPos( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ eCG_Align _eItemRelAnchor,
            /* [in] */ eCG_Align _eScreenRelAnchor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetItemAnchorPos( 
            /* [in] */ BSTR _bsItemID,
            /* [out] */ eCG_Align *_peItemRelAnchor,
            /* [out] */ eCG_Align *_peScreenRelAnchor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PauseItem( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BOOL _bPause) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RewindItem( 
            /* [in] */ BSTR _bsItemID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetPlayingFrame( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ int _nFrame) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPlayingFrame( 
            /* [in] */ BSTR _bsItemID,
            /* [out] */ int *_pnFrame,
            /* [out] */ BSTR *_bsCurrentImage) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GroupAddItem( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BOOL _bAddAsReference,
            /* [in] */ BSTR _bsGroupType,
            /* [out][in] */ BSTR *_pbsGroupID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GroupItemsCount( 
            /* [in] */ BSTR _bsGroupID,
            /* [out] */ int *_pnItemsCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GroupGetItem( 
            /* [in] */ BSTR _bsGroupID,
            /* [in] */ int _nIndex,
            /* [out] */ BSTR *_pbsItemID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GroupRemoveItem( 
            /* [in] */ BSTR _bsGroupID,
            /* [in] */ BSTR _bsItemID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GroupRemoveAll( 
            /* [in] */ BSTR _bsGroupID,
            /* [in] */ eCG_GroupItemsRemoveType _eRemoveType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GroupGetItemGroup( 
            /* [in] */ BSTR _bsItemID,
            /* [out] */ BSTR *_pbsGroupID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FlashGetClipInfo( 
            /* [in] */ BSTR _bsItemID,
            /* [out] */ int *_pnTotalFrames,
            /* [out] */ double *_pdblFrameRate) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FlashSetVariable( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BSTR _bsVarName,
            /* [in] */ BSTR _bsVarValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FlashGetVariable( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BSTR _bsVarName,
            /* [out] */ BSTR *_pbsVarValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FlashGetVariablesCount( 
            /* [in] */ BSTR _bsItemID,
            /* [out] */ int *_pnCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FlashGetVariableName( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ int _nIndex,
            /* [out] */ BSTR *_pbsVarName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FlashCallFunction( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BSTR _bsRequest,
            /* [out] */ BSTR *_pbsResponce) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FlashGoToLabel( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BSTR _bsTarget,
            /* [in] */ BSTR _bsLabel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FlashGoToFrame( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BSTR _bsTarget,
            /* [in] */ int _nFrame) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TextSetProps( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ CG_TEXT_PROPS *_pItemInfo,
            /* [in] */ BOOL _bUpdateItemSize,
            /* [in] */ int _nMsecForChange) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TextGetProps( 
            /* [in] */ BSTR _bsItemID,
            /* [out] */ CG_TEXT_PROPS *_pTextProps) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAutoBlend( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ CG_AUTO_BLEND *_pAutoBlend) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAutoBlend( 
            /* [in] */ BSTR _bsItemID,
            /* [out] */ CG_AUTO_BLEND *_pAutoBlend) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetItemMovement( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ CG_ITEM_MOVEMENT *_pItemMove) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetItemMovement( 
            /* [in] */ BSTR _bsItemID,
            /* [out] */ CG_ITEM_MOVEMENT *_pItemMove) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetItemRate( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BOOL _bOriginalRate,
            /* [in] */ double _dblSpeed) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetItemRate( 
            /* [in] */ BSTR _bsItemID,
            /* [out] */ BOOL *_pbOriginalRate,
            /* [out] */ double *_pdblSpeed) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IMLCharGenCallback *_pCallback,
            /* [in] */ int _nCookie) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IMLCharGenCallback *_pCallback) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveCallback2( 
            /* [in] */ int _nCookie) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TickerAddNew( 
            /* [in] */ BSTR _bsItemTypeOrXMLDesc,
            /* [in] */ double _dblPosX,
            /* [in] */ double _dblPosY,
            /* [in] */ double _dblSizeX,
            /* [in] */ double _dblSizeY,
            /* [in] */ BOOL _bRelativePos,
            /* [in] */ BOOL _bShow,
            /* [out][in] */ BSTR *_pbsTickerID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TickerAddContent( 
            /* [in] */ BSTR _bsTickerItemID,
            /* [in] */ BSTR _bsTickerTextOrFile,
            /* [in] */ BSTR _bsAddType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CaptureItemImage( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BSTR _bsFileName,
            /* [in] */ eCG_FileType _eFileType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CompositionsGetCount( 
            /* [out] */ int *_pnCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CompositionsGetByIndex( 
            /* [in] */ int _nIndex,
            /* [out] */ BSTR *_pbsName,
            /* [out] */ BSTR *_pbsComment) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CompositionsAddItems( 
            /* [in] */ BSTR _bsItemsID,
            /* [in] */ BOOL _bClearBeforeAdd,
            /* [in] */ BSTR _bsCompositionComment,
            /* [out][in] */ BSTR *_pbsCompositionName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CompositionsSaveToFile( 
            /* [in] */ BSTR _bsCompositionName,
            /* [in] */ BSTR _bsFileName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CompositionsLoadOne( 
            /* [in] */ BSTR _bsFileNameOrXMLDescription,
            /* [out][in] */ BSTR *_pbsCompositionName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CompositionsLoadAll( 
            /* [in] */ BSTR _bsFileNameOrXMLDescription,
            /* [in] */ BOOL _bClearBeforeLoad) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CompositionsDisplay( 
            /* [in] */ BSTR _bsCompositionName,
            /* [in] */ BSTR _bsParamString,
            /* [in] */ double _dblTimeIntro,
            /* [in] */ double _dblShowTime,
            /* [in] */ double _dblTimeExit) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CompositionsChangeName( 
            /* [in] */ BSTR _bsCompositionName,
            /* [in] */ BSTR _bsNewCompositionName,
            /* [in] */ BSTR _bsNewCommment) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CompositionsRemove( 
            /* [in] */ BSTR _bsCompositionName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CompositionsGetItemsCount( 
            /* [in] */ BSTR _bsCompositionName,
            /* [in] */ int *_pnCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CompositionsGetItem( 
            /* [in] */ BSTR _bsCompositionName,
            /* [in] */ int _nIndex,
            /* [out] */ BSTR *_pbsItemID,
            /* [out] */ BSTR *_pbsItemXMLDesc) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CompositionsRemoveItem( 
            /* [in] */ BSTR _bsCompositionName,
            /* [in] */ BSTR _bsItemID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ShowPropertiesPage( 
            /* [in] */ LONG _lHWndParent) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EnableKeyingMode( 
            /* [in] */ BOOL _bEnable) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsKeyingMode( 
            /* [out] */ BOOL *_pbKeying) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CompositionsSaveToString( 
            /* [in] */ BSTR _bsCompositionName,
            /* [out] */ BSTR *_pbsXMLDesc) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoadConfig( 
            /* [in] */ BSTR _bsConfigPathXML,
            /* [in] */ BOOL _bDefaultClear,
            /* [in] */ BSTR _bsParam) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CompositionsDisplayInLayer( 
            /* [in] */ BSTR _bsCompositionName,
            /* [in] */ BSTR _bsParamString,
            /* [in] */ BSTR _bsLayerID,
            /* [in] */ double _dblTimeIntro,
            /* [in] */ double _dblShowTime,
            /* [in] */ double _dblTimeExit) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetVideoOutputRectWithDelay( 
            /* [in] */ RECT *_prcSource,
            /* [in] */ RECT *_prcTarget,
            /* [in] */ int _crBackColor,
            /* [in] */ BOOL _bTopmostVideo,
            /* [in] */ int _nMsecDelay,
            /* [in] */ int _nMsecForChange) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetTimeOffset( 
            /* [in] */ double _dblTime,
            /* [in] */ BOOL _bStreamTime) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FlashSetReturnValueCB( 
            /* [in] */ BSTR _bsReturnValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLCharGenVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLCharGen * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLCharGen * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLCharGen * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UseExtraBuffer )( 
            IMLCharGen * This,
            /* [in] */ int _nUse);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsUseExtraBuffer )( 
            IMLCharGen * This,
            /* [out] */ int *_pnUse);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetVideoProperties )( 
            IMLCharGen * This,
            /* [in] */ CG_VIDEO_PROPS *_pVideoProps);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetVideoProperties )( 
            IMLCharGen * This,
            /* [out] */ CG_VIDEO_PROPS *_pVideoPropsSet,
            /* [out] */ CG_VIDEO_PROPS *_pVideoPropsOrigin);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetVideoOutputRect )( 
            IMLCharGen * This,
            /* [in] */ RECT *_prcSource,
            /* [in] */ RECT *_prcTarget,
            /* [in] */ int _crBackColor,
            /* [in] */ BOOL _bTopmostVideo);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetVideoOutputRect )( 
            IMLCharGen * This,
            /* [out] */ RECT *_prcSource,
            /* [out] */ RECT *_prcTarget,
            /* [out] */ int *_pcrBackColor,
            /* [out] */ BOOL *_pbTopmostVideo);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddNewItem )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsFileNameOrItemDesc,
            /* [in] */ double _dblPosX,
            /* [in] */ double _dblPosY,
            /* [in] */ BOOL _bRelativePosAndSize,
            /* [in] */ BOOL _bShow,
            /* [out][in] */ BSTR *_pbsItemID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddNewTextItem )( 
            IMLCharGen * This,
            /* [in] */ CG_TEXT_PROPS *_pTextProps,
            /* [in] */ double _dblPosX,
            /* [in] */ double _dblPosY,
            /* [in] */ BOOL _bRelativePos,
            /* [in] */ BOOL _bShow,
            /* [out][in] */ BSTR *_pbsItemID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddImageByHandle )( 
            IMLCharGen * This,
            /* [in] */ LONG _hBitmap,
            /* [in] */ double _dblPosX,
            /* [in] */ double _dblPosY,
            /* [in] */ BOOL _bRelativePos,
            /* [in] */ BOOL _bShow,
            /* [out][in] */ BSTR *_pbsItemID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveItem )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ int _nFadeOutMsec);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveItemWithDelay )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ int _nMsecDelay,
            /* [in] */ int _nFadeOutMsec);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CloneItem )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsOriginalItemID,
            /* [in] */ BOOL _bMakeReference,
            /* [out][in] */ BSTR *_pbsNewItemID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ChangeItemID )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BSTR _bsItemNewID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetItemsCount )( 
            IMLCharGen * This,
            /* [out] */ int *_pnItems);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            IMLCharGen * This,
            /* [in] */ int _nIndex,
            /* [out] */ BSTR *_pbsItemID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetItemBaseProps )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [out] */ BSTR *_pbsFileNameOrDesc,
            /* [out] */ CG_ITEM_PROPS *_pItemProps);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetItemProperties )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BSTR _bsPropertyName,
            /* [out] */ BSTR *_pbsPropertyDesc);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetItemOriginalSize )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [out] */ SIZE *_pSize);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ChangeItemZOrder )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ int _nChange);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetItemBaseProps )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ CG_ITEM_PROPS *_pItemInfo,
            /* [in] */ int _nMsecForChange);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetItemProperties )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BSTR _bsPropertyName,
            /* [in] */ BSTR _bsPropertyValue,
            /* [in] */ BSTR _bsChangeType,
            /* [in] */ int _nMsecForChange);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ShowItem )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BOOL _bShow,
            /* [in] */ int _nMsecForChange);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ShowItemWithDelay )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BOOL _bShow,
            /* [in] */ int _nMsecDelay,
            /* [in] */ int _nMsecForChange);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetItemPos )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ double _dblPosX,
            /* [in] */ double _dblPosY,
            /* [in] */ BOOL _bRelativePos,
            /* [in] */ int _nMsecForChange);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetItemAlpha )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ int _nNewAlpha,
            /* [in] */ int _nMsecForChange);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetItemSize )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ double _dblSizeX,
            /* [in] */ double _dblSizeY,
            /* [in] */ BOOL _bRelativeSize,
            /* [in] */ int _nMsecForChange);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetItemBackground )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ int _nBackground,
            /* [in] */ int _nMsecForChange);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetItemAnchorPos )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ eCG_Align _eItemRelAnchor,
            /* [in] */ eCG_Align _eScreenRelAnchor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetItemAnchorPos )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [out] */ eCG_Align *_peItemRelAnchor,
            /* [out] */ eCG_Align *_peScreenRelAnchor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PauseItem )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BOOL _bPause);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RewindItem )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPlayingFrame )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ int _nFrame);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPlayingFrame )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [out] */ int *_pnFrame,
            /* [out] */ BSTR *_bsCurrentImage);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GroupAddItem )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BOOL _bAddAsReference,
            /* [in] */ BSTR _bsGroupType,
            /* [out][in] */ BSTR *_pbsGroupID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GroupItemsCount )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsGroupID,
            /* [out] */ int *_pnItemsCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GroupGetItem )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsGroupID,
            /* [in] */ int _nIndex,
            /* [out] */ BSTR *_pbsItemID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GroupRemoveItem )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsGroupID,
            /* [in] */ BSTR _bsItemID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GroupRemoveAll )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsGroupID,
            /* [in] */ eCG_GroupItemsRemoveType _eRemoveType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GroupGetItemGroup )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [out] */ BSTR *_pbsGroupID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FlashGetClipInfo )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [out] */ int *_pnTotalFrames,
            /* [out] */ double *_pdblFrameRate);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FlashSetVariable )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BSTR _bsVarName,
            /* [in] */ BSTR _bsVarValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FlashGetVariable )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BSTR _bsVarName,
            /* [out] */ BSTR *_pbsVarValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FlashGetVariablesCount )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [out] */ int *_pnCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FlashGetVariableName )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ int _nIndex,
            /* [out] */ BSTR *_pbsVarName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FlashCallFunction )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BSTR _bsRequest,
            /* [out] */ BSTR *_pbsResponce);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FlashGoToLabel )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BSTR _bsTarget,
            /* [in] */ BSTR _bsLabel);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FlashGoToFrame )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BSTR _bsTarget,
            /* [in] */ int _nFrame);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TextSetProps )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ CG_TEXT_PROPS *_pItemInfo,
            /* [in] */ BOOL _bUpdateItemSize,
            /* [in] */ int _nMsecForChange);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TextGetProps )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [out] */ CG_TEXT_PROPS *_pTextProps);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAutoBlend )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ CG_AUTO_BLEND *_pAutoBlend);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAutoBlend )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [out] */ CG_AUTO_BLEND *_pAutoBlend);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetItemMovement )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ CG_ITEM_MOVEMENT *_pItemMove);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetItemMovement )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [out] */ CG_ITEM_MOVEMENT *_pItemMove);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetItemRate )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BOOL _bOriginalRate,
            /* [in] */ double _dblSpeed);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetItemRate )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [out] */ BOOL *_pbOriginalRate,
            /* [out] */ double *_pdblSpeed);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IMLCharGen * This,
            /* [in] */ IMLCharGenCallback *_pCallback,
            /* [in] */ int _nCookie);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IMLCharGen * This,
            /* [in] */ IMLCharGenCallback *_pCallback);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveCallback2 )( 
            IMLCharGen * This,
            /* [in] */ int _nCookie);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TickerAddNew )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemTypeOrXMLDesc,
            /* [in] */ double _dblPosX,
            /* [in] */ double _dblPosY,
            /* [in] */ double _dblSizeX,
            /* [in] */ double _dblSizeY,
            /* [in] */ BOOL _bRelativePos,
            /* [in] */ BOOL _bShow,
            /* [out][in] */ BSTR *_pbsTickerID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TickerAddContent )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsTickerItemID,
            /* [in] */ BSTR _bsTickerTextOrFile,
            /* [in] */ BSTR _bsAddType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CaptureItemImage )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BSTR _bsFileName,
            /* [in] */ eCG_FileType _eFileType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CompositionsGetCount )( 
            IMLCharGen * This,
            /* [out] */ int *_pnCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CompositionsGetByIndex )( 
            IMLCharGen * This,
            /* [in] */ int _nIndex,
            /* [out] */ BSTR *_pbsName,
            /* [out] */ BSTR *_pbsComment);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CompositionsAddItems )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsItemsID,
            /* [in] */ BOOL _bClearBeforeAdd,
            /* [in] */ BSTR _bsCompositionComment,
            /* [out][in] */ BSTR *_pbsCompositionName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CompositionsSaveToFile )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsCompositionName,
            /* [in] */ BSTR _bsFileName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CompositionsLoadOne )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsFileNameOrXMLDescription,
            /* [out][in] */ BSTR *_pbsCompositionName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CompositionsLoadAll )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsFileNameOrXMLDescription,
            /* [in] */ BOOL _bClearBeforeLoad);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CompositionsDisplay )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsCompositionName,
            /* [in] */ BSTR _bsParamString,
            /* [in] */ double _dblTimeIntro,
            /* [in] */ double _dblShowTime,
            /* [in] */ double _dblTimeExit);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CompositionsChangeName )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsCompositionName,
            /* [in] */ BSTR _bsNewCompositionName,
            /* [in] */ BSTR _bsNewCommment);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CompositionsRemove )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsCompositionName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CompositionsGetItemsCount )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsCompositionName,
            /* [in] */ int *_pnCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CompositionsGetItem )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsCompositionName,
            /* [in] */ int _nIndex,
            /* [out] */ BSTR *_pbsItemID,
            /* [out] */ BSTR *_pbsItemXMLDesc);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CompositionsRemoveItem )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsCompositionName,
            /* [in] */ BSTR _bsItemID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ShowPropertiesPage )( 
            IMLCharGen * This,
            /* [in] */ LONG _lHWndParent);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EnableKeyingMode )( 
            IMLCharGen * This,
            /* [in] */ BOOL _bEnable);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsKeyingMode )( 
            IMLCharGen * This,
            /* [out] */ BOOL *_pbKeying);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CompositionsSaveToString )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsCompositionName,
            /* [out] */ BSTR *_pbsXMLDesc);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoadConfig )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsConfigPathXML,
            /* [in] */ BOOL _bDefaultClear,
            /* [in] */ BSTR _bsParam);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CompositionsDisplayInLayer )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsCompositionName,
            /* [in] */ BSTR _bsParamString,
            /* [in] */ BSTR _bsLayerID,
            /* [in] */ double _dblTimeIntro,
            /* [in] */ double _dblShowTime,
            /* [in] */ double _dblTimeExit);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetVideoOutputRectWithDelay )( 
            IMLCharGen * This,
            /* [in] */ RECT *_prcSource,
            /* [in] */ RECT *_prcTarget,
            /* [in] */ int _crBackColor,
            /* [in] */ BOOL _bTopmostVideo,
            /* [in] */ int _nMsecDelay,
            /* [in] */ int _nMsecForChange);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetTimeOffset )( 
            IMLCharGen * This,
            /* [in] */ double _dblTime,
            /* [in] */ BOOL _bStreamTime);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FlashSetReturnValueCB )( 
            IMLCharGen * This,
            /* [in] */ BSTR _bsReturnValue);
        
        END_INTERFACE
    } IMLCharGenVtbl;

    interface IMLCharGen
    {
        CONST_VTBL struct IMLCharGenVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLCharGen_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLCharGen_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLCharGen_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLCharGen_UseExtraBuffer(This,_nUse)	\
    ( (This)->lpVtbl -> UseExtraBuffer(This,_nUse) ) 

#define IMLCharGen_IsUseExtraBuffer(This,_pnUse)	\
    ( (This)->lpVtbl -> IsUseExtraBuffer(This,_pnUse) ) 

#define IMLCharGen_SetVideoProperties(This,_pVideoProps)	\
    ( (This)->lpVtbl -> SetVideoProperties(This,_pVideoProps) ) 

#define IMLCharGen_GetVideoProperties(This,_pVideoPropsSet,_pVideoPropsOrigin)	\
    ( (This)->lpVtbl -> GetVideoProperties(This,_pVideoPropsSet,_pVideoPropsOrigin) ) 

#define IMLCharGen_SetVideoOutputRect(This,_prcSource,_prcTarget,_crBackColor,_bTopmostVideo)	\
    ( (This)->lpVtbl -> SetVideoOutputRect(This,_prcSource,_prcTarget,_crBackColor,_bTopmostVideo) ) 

#define IMLCharGen_GetVideoOutputRect(This,_prcSource,_prcTarget,_pcrBackColor,_pbTopmostVideo)	\
    ( (This)->lpVtbl -> GetVideoOutputRect(This,_prcSource,_prcTarget,_pcrBackColor,_pbTopmostVideo) ) 

#define IMLCharGen_AddNewItem(This,_bsFileNameOrItemDesc,_dblPosX,_dblPosY,_bRelativePosAndSize,_bShow,_pbsItemID)	\
    ( (This)->lpVtbl -> AddNewItem(This,_bsFileNameOrItemDesc,_dblPosX,_dblPosY,_bRelativePosAndSize,_bShow,_pbsItemID) ) 

#define IMLCharGen_AddNewTextItem(This,_pTextProps,_dblPosX,_dblPosY,_bRelativePos,_bShow,_pbsItemID)	\
    ( (This)->lpVtbl -> AddNewTextItem(This,_pTextProps,_dblPosX,_dblPosY,_bRelativePos,_bShow,_pbsItemID) ) 

#define IMLCharGen_AddImageByHandle(This,_hBitmap,_dblPosX,_dblPosY,_bRelativePos,_bShow,_pbsItemID)	\
    ( (This)->lpVtbl -> AddImageByHandle(This,_hBitmap,_dblPosX,_dblPosY,_bRelativePos,_bShow,_pbsItemID) ) 

#define IMLCharGen_RemoveItem(This,_bsItemID,_nFadeOutMsec)	\
    ( (This)->lpVtbl -> RemoveItem(This,_bsItemID,_nFadeOutMsec) ) 

#define IMLCharGen_RemoveItemWithDelay(This,_bsItemID,_nMsecDelay,_nFadeOutMsec)	\
    ( (This)->lpVtbl -> RemoveItemWithDelay(This,_bsItemID,_nMsecDelay,_nFadeOutMsec) ) 

#define IMLCharGen_CloneItem(This,_bsOriginalItemID,_bMakeReference,_pbsNewItemID)	\
    ( (This)->lpVtbl -> CloneItem(This,_bsOriginalItemID,_bMakeReference,_pbsNewItemID) ) 

#define IMLCharGen_ChangeItemID(This,_bsItemID,_bsItemNewID)	\
    ( (This)->lpVtbl -> ChangeItemID(This,_bsItemID,_bsItemNewID) ) 

#define IMLCharGen_GetItemsCount(This,_pnItems)	\
    ( (This)->lpVtbl -> GetItemsCount(This,_pnItems) ) 

#define IMLCharGen_GetItem(This,_nIndex,_pbsItemID)	\
    ( (This)->lpVtbl -> GetItem(This,_nIndex,_pbsItemID) ) 

#define IMLCharGen_GetItemBaseProps(This,_bsItemID,_pbsFileNameOrDesc,_pItemProps)	\
    ( (This)->lpVtbl -> GetItemBaseProps(This,_bsItemID,_pbsFileNameOrDesc,_pItemProps) ) 

#define IMLCharGen_GetItemProperties(This,_bsItemID,_bsPropertyName,_pbsPropertyDesc)	\
    ( (This)->lpVtbl -> GetItemProperties(This,_bsItemID,_bsPropertyName,_pbsPropertyDesc) ) 

#define IMLCharGen_GetItemOriginalSize(This,_bsItemID,_pSize)	\
    ( (This)->lpVtbl -> GetItemOriginalSize(This,_bsItemID,_pSize) ) 

#define IMLCharGen_ChangeItemZOrder(This,_bsItemID,_nChange)	\
    ( (This)->lpVtbl -> ChangeItemZOrder(This,_bsItemID,_nChange) ) 

#define IMLCharGen_SetItemBaseProps(This,_bsItemID,_pItemInfo,_nMsecForChange)	\
    ( (This)->lpVtbl -> SetItemBaseProps(This,_bsItemID,_pItemInfo,_nMsecForChange) ) 

#define IMLCharGen_SetItemProperties(This,_bsItemID,_bsPropertyName,_bsPropertyValue,_bsChangeType,_nMsecForChange)	\
    ( (This)->lpVtbl -> SetItemProperties(This,_bsItemID,_bsPropertyName,_bsPropertyValue,_bsChangeType,_nMsecForChange) ) 

#define IMLCharGen_ShowItem(This,_bsItemID,_bShow,_nMsecForChange)	\
    ( (This)->lpVtbl -> ShowItem(This,_bsItemID,_bShow,_nMsecForChange) ) 

#define IMLCharGen_ShowItemWithDelay(This,_bsItemID,_bShow,_nMsecDelay,_nMsecForChange)	\
    ( (This)->lpVtbl -> ShowItemWithDelay(This,_bsItemID,_bShow,_nMsecDelay,_nMsecForChange) ) 

#define IMLCharGen_SetItemPos(This,_bsItemID,_dblPosX,_dblPosY,_bRelativePos,_nMsecForChange)	\
    ( (This)->lpVtbl -> SetItemPos(This,_bsItemID,_dblPosX,_dblPosY,_bRelativePos,_nMsecForChange) ) 

#define IMLCharGen_SetItemAlpha(This,_bsItemID,_nNewAlpha,_nMsecForChange)	\
    ( (This)->lpVtbl -> SetItemAlpha(This,_bsItemID,_nNewAlpha,_nMsecForChange) ) 

#define IMLCharGen_SetItemSize(This,_bsItemID,_dblSizeX,_dblSizeY,_bRelativeSize,_nMsecForChange)	\
    ( (This)->lpVtbl -> SetItemSize(This,_bsItemID,_dblSizeX,_dblSizeY,_bRelativeSize,_nMsecForChange) ) 

#define IMLCharGen_SetItemBackground(This,_bsItemID,_nBackground,_nMsecForChange)	\
    ( (This)->lpVtbl -> SetItemBackground(This,_bsItemID,_nBackground,_nMsecForChange) ) 

#define IMLCharGen_SetItemAnchorPos(This,_bsItemID,_eItemRelAnchor,_eScreenRelAnchor)	\
    ( (This)->lpVtbl -> SetItemAnchorPos(This,_bsItemID,_eItemRelAnchor,_eScreenRelAnchor) ) 

#define IMLCharGen_GetItemAnchorPos(This,_bsItemID,_peItemRelAnchor,_peScreenRelAnchor)	\
    ( (This)->lpVtbl -> GetItemAnchorPos(This,_bsItemID,_peItemRelAnchor,_peScreenRelAnchor) ) 

#define IMLCharGen_PauseItem(This,_bsItemID,_bPause)	\
    ( (This)->lpVtbl -> PauseItem(This,_bsItemID,_bPause) ) 

#define IMLCharGen_RewindItem(This,_bsItemID)	\
    ( (This)->lpVtbl -> RewindItem(This,_bsItemID) ) 

#define IMLCharGen_SetPlayingFrame(This,_bsItemID,_nFrame)	\
    ( (This)->lpVtbl -> SetPlayingFrame(This,_bsItemID,_nFrame) ) 

#define IMLCharGen_GetPlayingFrame(This,_bsItemID,_pnFrame,_bsCurrentImage)	\
    ( (This)->lpVtbl -> GetPlayingFrame(This,_bsItemID,_pnFrame,_bsCurrentImage) ) 

#define IMLCharGen_GroupAddItem(This,_bsItemID,_bAddAsReference,_bsGroupType,_pbsGroupID)	\
    ( (This)->lpVtbl -> GroupAddItem(This,_bsItemID,_bAddAsReference,_bsGroupType,_pbsGroupID) ) 

#define IMLCharGen_GroupItemsCount(This,_bsGroupID,_pnItemsCount)	\
    ( (This)->lpVtbl -> GroupItemsCount(This,_bsGroupID,_pnItemsCount) ) 

#define IMLCharGen_GroupGetItem(This,_bsGroupID,_nIndex,_pbsItemID)	\
    ( (This)->lpVtbl -> GroupGetItem(This,_bsGroupID,_nIndex,_pbsItemID) ) 

#define IMLCharGen_GroupRemoveItem(This,_bsGroupID,_bsItemID)	\
    ( (This)->lpVtbl -> GroupRemoveItem(This,_bsGroupID,_bsItemID) ) 

#define IMLCharGen_GroupRemoveAll(This,_bsGroupID,_eRemoveType)	\
    ( (This)->lpVtbl -> GroupRemoveAll(This,_bsGroupID,_eRemoveType) ) 

#define IMLCharGen_GroupGetItemGroup(This,_bsItemID,_pbsGroupID)	\
    ( (This)->lpVtbl -> GroupGetItemGroup(This,_bsItemID,_pbsGroupID) ) 

#define IMLCharGen_FlashGetClipInfo(This,_bsItemID,_pnTotalFrames,_pdblFrameRate)	\
    ( (This)->lpVtbl -> FlashGetClipInfo(This,_bsItemID,_pnTotalFrames,_pdblFrameRate) ) 

#define IMLCharGen_FlashSetVariable(This,_bsItemID,_bsVarName,_bsVarValue)	\
    ( (This)->lpVtbl -> FlashSetVariable(This,_bsItemID,_bsVarName,_bsVarValue) ) 

#define IMLCharGen_FlashGetVariable(This,_bsItemID,_bsVarName,_pbsVarValue)	\
    ( (This)->lpVtbl -> FlashGetVariable(This,_bsItemID,_bsVarName,_pbsVarValue) ) 

#define IMLCharGen_FlashGetVariablesCount(This,_bsItemID,_pnCount)	\
    ( (This)->lpVtbl -> FlashGetVariablesCount(This,_bsItemID,_pnCount) ) 

#define IMLCharGen_FlashGetVariableName(This,_bsItemID,_nIndex,_pbsVarName)	\
    ( (This)->lpVtbl -> FlashGetVariableName(This,_bsItemID,_nIndex,_pbsVarName) ) 

#define IMLCharGen_FlashCallFunction(This,_bsItemID,_bsRequest,_pbsResponce)	\
    ( (This)->lpVtbl -> FlashCallFunction(This,_bsItemID,_bsRequest,_pbsResponce) ) 

#define IMLCharGen_FlashGoToLabel(This,_bsItemID,_bsTarget,_bsLabel)	\
    ( (This)->lpVtbl -> FlashGoToLabel(This,_bsItemID,_bsTarget,_bsLabel) ) 

#define IMLCharGen_FlashGoToFrame(This,_bsItemID,_bsTarget,_nFrame)	\
    ( (This)->lpVtbl -> FlashGoToFrame(This,_bsItemID,_bsTarget,_nFrame) ) 

#define IMLCharGen_TextSetProps(This,_bsItemID,_pItemInfo,_bUpdateItemSize,_nMsecForChange)	\
    ( (This)->lpVtbl -> TextSetProps(This,_bsItemID,_pItemInfo,_bUpdateItemSize,_nMsecForChange) ) 

#define IMLCharGen_TextGetProps(This,_bsItemID,_pTextProps)	\
    ( (This)->lpVtbl -> TextGetProps(This,_bsItemID,_pTextProps) ) 

#define IMLCharGen_SetAutoBlend(This,_bsItemID,_pAutoBlend)	\
    ( (This)->lpVtbl -> SetAutoBlend(This,_bsItemID,_pAutoBlend) ) 

#define IMLCharGen_GetAutoBlend(This,_bsItemID,_pAutoBlend)	\
    ( (This)->lpVtbl -> GetAutoBlend(This,_bsItemID,_pAutoBlend) ) 

#define IMLCharGen_SetItemMovement(This,_bsItemID,_pItemMove)	\
    ( (This)->lpVtbl -> SetItemMovement(This,_bsItemID,_pItemMove) ) 

#define IMLCharGen_GetItemMovement(This,_bsItemID,_pItemMove)	\
    ( (This)->lpVtbl -> GetItemMovement(This,_bsItemID,_pItemMove) ) 

#define IMLCharGen_SetItemRate(This,_bsItemID,_bOriginalRate,_dblSpeed)	\
    ( (This)->lpVtbl -> SetItemRate(This,_bsItemID,_bOriginalRate,_dblSpeed) ) 

#define IMLCharGen_GetItemRate(This,_bsItemID,_pbOriginalRate,_pdblSpeed)	\
    ( (This)->lpVtbl -> GetItemRate(This,_bsItemID,_pbOriginalRate,_pdblSpeed) ) 

#define IMLCharGen_AddCallback(This,_pCallback,_nCookie)	\
    ( (This)->lpVtbl -> AddCallback(This,_pCallback,_nCookie) ) 

#define IMLCharGen_RemoveCallback(This,_pCallback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,_pCallback) ) 

#define IMLCharGen_RemoveCallback2(This,_nCookie)	\
    ( (This)->lpVtbl -> RemoveCallback2(This,_nCookie) ) 

#define IMLCharGen_TickerAddNew(This,_bsItemTypeOrXMLDesc,_dblPosX,_dblPosY,_dblSizeX,_dblSizeY,_bRelativePos,_bShow,_pbsTickerID)	\
    ( (This)->lpVtbl -> TickerAddNew(This,_bsItemTypeOrXMLDesc,_dblPosX,_dblPosY,_dblSizeX,_dblSizeY,_bRelativePos,_bShow,_pbsTickerID) ) 

#define IMLCharGen_TickerAddContent(This,_bsTickerItemID,_bsTickerTextOrFile,_bsAddType)	\
    ( (This)->lpVtbl -> TickerAddContent(This,_bsTickerItemID,_bsTickerTextOrFile,_bsAddType) ) 

#define IMLCharGen_CaptureItemImage(This,_bsItemID,_bsFileName,_eFileType)	\
    ( (This)->lpVtbl -> CaptureItemImage(This,_bsItemID,_bsFileName,_eFileType) ) 

#define IMLCharGen_CompositionsGetCount(This,_pnCount)	\
    ( (This)->lpVtbl -> CompositionsGetCount(This,_pnCount) ) 

#define IMLCharGen_CompositionsGetByIndex(This,_nIndex,_pbsName,_pbsComment)	\
    ( (This)->lpVtbl -> CompositionsGetByIndex(This,_nIndex,_pbsName,_pbsComment) ) 

#define IMLCharGen_CompositionsAddItems(This,_bsItemsID,_bClearBeforeAdd,_bsCompositionComment,_pbsCompositionName)	\
    ( (This)->lpVtbl -> CompositionsAddItems(This,_bsItemsID,_bClearBeforeAdd,_bsCompositionComment,_pbsCompositionName) ) 

#define IMLCharGen_CompositionsSaveToFile(This,_bsCompositionName,_bsFileName)	\
    ( (This)->lpVtbl -> CompositionsSaveToFile(This,_bsCompositionName,_bsFileName) ) 

#define IMLCharGen_CompositionsLoadOne(This,_bsFileNameOrXMLDescription,_pbsCompositionName)	\
    ( (This)->lpVtbl -> CompositionsLoadOne(This,_bsFileNameOrXMLDescription,_pbsCompositionName) ) 

#define IMLCharGen_CompositionsLoadAll(This,_bsFileNameOrXMLDescription,_bClearBeforeLoad)	\
    ( (This)->lpVtbl -> CompositionsLoadAll(This,_bsFileNameOrXMLDescription,_bClearBeforeLoad) ) 

#define IMLCharGen_CompositionsDisplay(This,_bsCompositionName,_bsParamString,_dblTimeIntro,_dblShowTime,_dblTimeExit)	\
    ( (This)->lpVtbl -> CompositionsDisplay(This,_bsCompositionName,_bsParamString,_dblTimeIntro,_dblShowTime,_dblTimeExit) ) 

#define IMLCharGen_CompositionsChangeName(This,_bsCompositionName,_bsNewCompositionName,_bsNewCommment)	\
    ( (This)->lpVtbl -> CompositionsChangeName(This,_bsCompositionName,_bsNewCompositionName,_bsNewCommment) ) 

#define IMLCharGen_CompositionsRemove(This,_bsCompositionName)	\
    ( (This)->lpVtbl -> CompositionsRemove(This,_bsCompositionName) ) 

#define IMLCharGen_CompositionsGetItemsCount(This,_bsCompositionName,_pnCount)	\
    ( (This)->lpVtbl -> CompositionsGetItemsCount(This,_bsCompositionName,_pnCount) ) 

#define IMLCharGen_CompositionsGetItem(This,_bsCompositionName,_nIndex,_pbsItemID,_pbsItemXMLDesc)	\
    ( (This)->lpVtbl -> CompositionsGetItem(This,_bsCompositionName,_nIndex,_pbsItemID,_pbsItemXMLDesc) ) 

#define IMLCharGen_CompositionsRemoveItem(This,_bsCompositionName,_bsItemID)	\
    ( (This)->lpVtbl -> CompositionsRemoveItem(This,_bsCompositionName,_bsItemID) ) 

#define IMLCharGen_ShowPropertiesPage(This,_lHWndParent)	\
    ( (This)->lpVtbl -> ShowPropertiesPage(This,_lHWndParent) ) 

#define IMLCharGen_EnableKeyingMode(This,_bEnable)	\
    ( (This)->lpVtbl -> EnableKeyingMode(This,_bEnable) ) 

#define IMLCharGen_IsKeyingMode(This,_pbKeying)	\
    ( (This)->lpVtbl -> IsKeyingMode(This,_pbKeying) ) 

#define IMLCharGen_CompositionsSaveToString(This,_bsCompositionName,_pbsXMLDesc)	\
    ( (This)->lpVtbl -> CompositionsSaveToString(This,_bsCompositionName,_pbsXMLDesc) ) 

#define IMLCharGen_LoadConfig(This,_bsConfigPathXML,_bDefaultClear,_bsParam)	\
    ( (This)->lpVtbl -> LoadConfig(This,_bsConfigPathXML,_bDefaultClear,_bsParam) ) 

#define IMLCharGen_CompositionsDisplayInLayer(This,_bsCompositionName,_bsParamString,_bsLayerID,_dblTimeIntro,_dblShowTime,_dblTimeExit)	\
    ( (This)->lpVtbl -> CompositionsDisplayInLayer(This,_bsCompositionName,_bsParamString,_bsLayerID,_dblTimeIntro,_dblShowTime,_dblTimeExit) ) 

#define IMLCharGen_SetVideoOutputRectWithDelay(This,_prcSource,_prcTarget,_crBackColor,_bTopmostVideo,_nMsecDelay,_nMsecForChange)	\
    ( (This)->lpVtbl -> SetVideoOutputRectWithDelay(This,_prcSource,_prcTarget,_crBackColor,_bTopmostVideo,_nMsecDelay,_nMsecForChange) ) 

#define IMLCharGen_SetTimeOffset(This,_dblTime,_bStreamTime)	\
    ( (This)->lpVtbl -> SetTimeOffset(This,_dblTime,_bStreamTime) ) 

#define IMLCharGen_FlashSetReturnValueCB(This,_bsReturnValue)	\
    ( (This)->lpVtbl -> FlashSetReturnValueCB(This,_bsReturnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLCharGen_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MLCharGen_0000_0002 */
/* [local] */ 

#ifndef CG_SCHEDULE_TIMES_DEFINED
#define CG_SCHEDULE_TIMES_DEFINED
typedef struct CG_SCHEDULE_TIMES
    {
    double dblScheduledTime;
    double dblIntroTime;
    double dblShowTime;
    double dblExitTime;
    int nShowHide;
    } 	CG_SCHEDULE_TIMES;

#endif // CG_SCHEDULE_TIMES_DEFINED
typedef 
enum eCG_TimelineState
    {	eCGTS_Stopped	= 0,
	eCGTS_Paused	= ( eCGTS_Stopped + 1 ) ,
	eCGTS_Running	= ( eCGTS_Paused + 1 ) 
    } 	eCG_TimelineState;



extern RPC_IF_HANDLE __MIDL_itf_MLCharGen_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MLCharGen_0000_0002_v0_0_s_ifspec;

#ifndef __IMLCharGenSchedule_INTERFACE_DEFINED__
#define __IMLCharGenSchedule_INTERFACE_DEFINED__

/* interface IMLCharGenSchedule */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLCharGenSchedule;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19E97A92-BB5A-4446-897A-6A6177AF963E")
    IMLCharGenSchedule : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScheduleGetCount( 
            /* [in] */ BSTR _bsTimelineID,
            /* [out] */ int *_pnCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScheduleGet( 
            /* [in] */ BSTR _bsTimelineID,
            /* [in] */ int _nIndex,
            /* [out] */ BSTR *_pbsItemOrCompositionID,
            /* [out] */ BSTR *_pbsParamStringOrXMLFullDesc,
            /* [out] */ CG_SCHEDULE_TIMES *_pTimes) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScheduleAdd( 
            /* [in] */ BSTR _bsTimelineID,
            /* [in] */ BSTR _bsItemOrCompositionID,
            /* [in] */ BSTR _bsParamStringOrXMLFullDesc,
            /* [in] */ CG_SCHEDULE_TIMES *_pTimes) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScheduleRemove( 
            /* [in] */ BSTR _bsTimelineID,
            /* [in] */ int _nIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScheduleTimelineStart( 
            /* [in] */ BSTR _bsTimelineID,
            /* [in] */ double _dblStartTime,
            /* [in] */ double _dblCycleTime,
            /* [in] */ BOOL _bStopAllOthers) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScheduleTimelinePause( 
            /* [in] */ BSTR _bsTimelineID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScheduleTimelineContinue( 
            /* [in] */ BSTR _bsTimelineID,
            /* [in] */ double _dblSeekTime) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScheduleTimelineStop( 
            /* [in] */ BSTR _bsTimelineID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScheduleTimelineGetCount( 
            /* [out] */ int *_pnTimelines) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScheduleTimelineGetID( 
            /* [in] */ int _nIndex,
            /* [out] */ BSTR *_pbsTimelineID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScheduleTimelineGetTimes( 
            /* [in] */ BSTR _bsTimelineID,
            /* [out] */ double *_pdblTime,
            /* [out] */ double *_pdblCicleTime,
            /* [out] */ eCG_TimelineState *_ptState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScheduleSaveToString( 
            /* [in] */ BSTR _bsTimeLineID,
            /* [out] */ BSTR *_pbsTimeLineXMLDesc) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScheduleSaveToFile( 
            /* [in] */ BSTR _bsTimeLineID,
            /* [in] */ BSTR _bsFileName,
            /* [in] */ BOOL _bUnicode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScheduleLoadFromXML( 
            /* [in] */ BSTR _bsPathNameOrXMLDesc,
            /* [in] */ BOOL _bRemoveAllTimelines) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScheduleBasic( 
            /* [in] */ BSTR _bsItemOrCompositionID,
            /* [in] */ BOOL _bItem,
            /* [in] */ BSTR _bsParamString,
            /* [in] */ CG_SCHEDULE_TIMES *_pTimes) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScheduleBasicCancel( 
            /* [in] */ BSTR _bsItemOrCompositionID,
            /* [in] */ BOOL _bItem,
            /* [in] */ int _nShowHide) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLCharGenScheduleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLCharGenSchedule * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLCharGenSchedule * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLCharGenSchedule * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScheduleGetCount )( 
            IMLCharGenSchedule * This,
            /* [in] */ BSTR _bsTimelineID,
            /* [out] */ int *_pnCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScheduleGet )( 
            IMLCharGenSchedule * This,
            /* [in] */ BSTR _bsTimelineID,
            /* [in] */ int _nIndex,
            /* [out] */ BSTR *_pbsItemOrCompositionID,
            /* [out] */ BSTR *_pbsParamStringOrXMLFullDesc,
            /* [out] */ CG_SCHEDULE_TIMES *_pTimes);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScheduleAdd )( 
            IMLCharGenSchedule * This,
            /* [in] */ BSTR _bsTimelineID,
            /* [in] */ BSTR _bsItemOrCompositionID,
            /* [in] */ BSTR _bsParamStringOrXMLFullDesc,
            /* [in] */ CG_SCHEDULE_TIMES *_pTimes);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScheduleRemove )( 
            IMLCharGenSchedule * This,
            /* [in] */ BSTR _bsTimelineID,
            /* [in] */ int _nIndex);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScheduleTimelineStart )( 
            IMLCharGenSchedule * This,
            /* [in] */ BSTR _bsTimelineID,
            /* [in] */ double _dblStartTime,
            /* [in] */ double _dblCycleTime,
            /* [in] */ BOOL _bStopAllOthers);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScheduleTimelinePause )( 
            IMLCharGenSchedule * This,
            /* [in] */ BSTR _bsTimelineID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScheduleTimelineContinue )( 
            IMLCharGenSchedule * This,
            /* [in] */ BSTR _bsTimelineID,
            /* [in] */ double _dblSeekTime);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScheduleTimelineStop )( 
            IMLCharGenSchedule * This,
            /* [in] */ BSTR _bsTimelineID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScheduleTimelineGetCount )( 
            IMLCharGenSchedule * This,
            /* [out] */ int *_pnTimelines);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScheduleTimelineGetID )( 
            IMLCharGenSchedule * This,
            /* [in] */ int _nIndex,
            /* [out] */ BSTR *_pbsTimelineID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScheduleTimelineGetTimes )( 
            IMLCharGenSchedule * This,
            /* [in] */ BSTR _bsTimelineID,
            /* [out] */ double *_pdblTime,
            /* [out] */ double *_pdblCicleTime,
            /* [out] */ eCG_TimelineState *_ptState);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScheduleSaveToString )( 
            IMLCharGenSchedule * This,
            /* [in] */ BSTR _bsTimeLineID,
            /* [out] */ BSTR *_pbsTimeLineXMLDesc);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScheduleSaveToFile )( 
            IMLCharGenSchedule * This,
            /* [in] */ BSTR _bsTimeLineID,
            /* [in] */ BSTR _bsFileName,
            /* [in] */ BOOL _bUnicode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScheduleLoadFromXML )( 
            IMLCharGenSchedule * This,
            /* [in] */ BSTR _bsPathNameOrXMLDesc,
            /* [in] */ BOOL _bRemoveAllTimelines);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScheduleBasic )( 
            IMLCharGenSchedule * This,
            /* [in] */ BSTR _bsItemOrCompositionID,
            /* [in] */ BOOL _bItem,
            /* [in] */ BSTR _bsParamString,
            /* [in] */ CG_SCHEDULE_TIMES *_pTimes);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScheduleBasicCancel )( 
            IMLCharGenSchedule * This,
            /* [in] */ BSTR _bsItemOrCompositionID,
            /* [in] */ BOOL _bItem,
            /* [in] */ int _nShowHide);
        
        END_INTERFACE
    } IMLCharGenScheduleVtbl;

    interface IMLCharGenSchedule
    {
        CONST_VTBL struct IMLCharGenScheduleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLCharGenSchedule_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLCharGenSchedule_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLCharGenSchedule_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLCharGenSchedule_ScheduleGetCount(This,_bsTimelineID,_pnCount)	\
    ( (This)->lpVtbl -> ScheduleGetCount(This,_bsTimelineID,_pnCount) ) 

#define IMLCharGenSchedule_ScheduleGet(This,_bsTimelineID,_nIndex,_pbsItemOrCompositionID,_pbsParamStringOrXMLFullDesc,_pTimes)	\
    ( (This)->lpVtbl -> ScheduleGet(This,_bsTimelineID,_nIndex,_pbsItemOrCompositionID,_pbsParamStringOrXMLFullDesc,_pTimes) ) 

#define IMLCharGenSchedule_ScheduleAdd(This,_bsTimelineID,_bsItemOrCompositionID,_bsParamStringOrXMLFullDesc,_pTimes)	\
    ( (This)->lpVtbl -> ScheduleAdd(This,_bsTimelineID,_bsItemOrCompositionID,_bsParamStringOrXMLFullDesc,_pTimes) ) 

#define IMLCharGenSchedule_ScheduleRemove(This,_bsTimelineID,_nIndex)	\
    ( (This)->lpVtbl -> ScheduleRemove(This,_bsTimelineID,_nIndex) ) 

#define IMLCharGenSchedule_ScheduleTimelineStart(This,_bsTimelineID,_dblStartTime,_dblCycleTime,_bStopAllOthers)	\
    ( (This)->lpVtbl -> ScheduleTimelineStart(This,_bsTimelineID,_dblStartTime,_dblCycleTime,_bStopAllOthers) ) 

#define IMLCharGenSchedule_ScheduleTimelinePause(This,_bsTimelineID)	\
    ( (This)->lpVtbl -> ScheduleTimelinePause(This,_bsTimelineID) ) 

#define IMLCharGenSchedule_ScheduleTimelineContinue(This,_bsTimelineID,_dblSeekTime)	\
    ( (This)->lpVtbl -> ScheduleTimelineContinue(This,_bsTimelineID,_dblSeekTime) ) 

#define IMLCharGenSchedule_ScheduleTimelineStop(This,_bsTimelineID)	\
    ( (This)->lpVtbl -> ScheduleTimelineStop(This,_bsTimelineID) ) 

#define IMLCharGenSchedule_ScheduleTimelineGetCount(This,_pnTimelines)	\
    ( (This)->lpVtbl -> ScheduleTimelineGetCount(This,_pnTimelines) ) 

#define IMLCharGenSchedule_ScheduleTimelineGetID(This,_nIndex,_pbsTimelineID)	\
    ( (This)->lpVtbl -> ScheduleTimelineGetID(This,_nIndex,_pbsTimelineID) ) 

#define IMLCharGenSchedule_ScheduleTimelineGetTimes(This,_bsTimelineID,_pdblTime,_pdblCicleTime,_ptState)	\
    ( (This)->lpVtbl -> ScheduleTimelineGetTimes(This,_bsTimelineID,_pdblTime,_pdblCicleTime,_ptState) ) 

#define IMLCharGenSchedule_ScheduleSaveToString(This,_bsTimeLineID,_pbsTimeLineXMLDesc)	\
    ( (This)->lpVtbl -> ScheduleSaveToString(This,_bsTimeLineID,_pbsTimeLineXMLDesc) ) 

#define IMLCharGenSchedule_ScheduleSaveToFile(This,_bsTimeLineID,_bsFileName,_bUnicode)	\
    ( (This)->lpVtbl -> ScheduleSaveToFile(This,_bsTimeLineID,_bsFileName,_bUnicode) ) 

#define IMLCharGenSchedule_ScheduleLoadFromXML(This,_bsPathNameOrXMLDesc,_bRemoveAllTimelines)	\
    ( (This)->lpVtbl -> ScheduleLoadFromXML(This,_bsPathNameOrXMLDesc,_bRemoveAllTimelines) ) 

#define IMLCharGenSchedule_ScheduleBasic(This,_bsItemOrCompositionID,_bItem,_bsParamString,_pTimes)	\
    ( (This)->lpVtbl -> ScheduleBasic(This,_bsItemOrCompositionID,_bItem,_bsParamString,_pTimes) ) 

#define IMLCharGenSchedule_ScheduleBasicCancel(This,_bsItemOrCompositionID,_bItem,_nShowHide)	\
    ( (This)->lpVtbl -> ScheduleBasicCancel(This,_bsItemOrCompositionID,_bItem,_nShowHide) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLCharGenSchedule_INTERFACE_DEFINED__ */


#ifndef __IMLCharGenEdit_INTERFACE_DEFINED__
#define __IMLCharGenEdit_INTERFACE_DEFINED__

/* interface IMLCharGenEdit */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLCharGenEdit;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19E97AC0-BB5A-4446-897A-6A6177AF963E")
    IMLCharGenEdit : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EditItemGetByPoint( 
            /* [in] */ BSTR _bsGroupID,
            /* [in] */ int _nPosX,
            /* [in] */ int _nPosY,
            /* [out] */ BSTR *_pbsItemID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EditItemsGetByRect( 
            /* [in] */ BSTR _bsGroupID,
            /* [in] */ int _nLeft,
            /* [in] */ int _nTop,
            /* [in] */ int _nRight,
            /* [in] */ int _nBottom,
            /* [out] */ BSTR *_pbsItemsIDs) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EditSelectionGetCount( 
            /* [out] */ int *_pnSelCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EditSelectionGetByIndex( 
            /* [in] */ int _nIndex,
            /* [out] */ BSTR *_pbsItemID,
            /* [out] */ BSTR *_pbsColor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EditSelectionAdd( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BSTR _bsColor,
            /* [in] */ BOOL _bClearSel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EditSelectionRemove( 
            /* [in] */ BSTR _bsItemID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EditItemAbsoluteRectGet( 
            /* [in] */ BSTR _bsItemID,
            /* [out] */ RECT *_prcItemRect) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EditItemAbsoluteRectSet( 
            /* [in] */ BSTR _bsItemID,
            /* [in] */ RECT *_prcItemRect) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLCharGenEditVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLCharGenEdit * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLCharGenEdit * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLCharGenEdit * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EditItemGetByPoint )( 
            IMLCharGenEdit * This,
            /* [in] */ BSTR _bsGroupID,
            /* [in] */ int _nPosX,
            /* [in] */ int _nPosY,
            /* [out] */ BSTR *_pbsItemID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EditItemsGetByRect )( 
            IMLCharGenEdit * This,
            /* [in] */ BSTR _bsGroupID,
            /* [in] */ int _nLeft,
            /* [in] */ int _nTop,
            /* [in] */ int _nRight,
            /* [in] */ int _nBottom,
            /* [out] */ BSTR *_pbsItemsIDs);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EditSelectionGetCount )( 
            IMLCharGenEdit * This,
            /* [out] */ int *_pnSelCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EditSelectionGetByIndex )( 
            IMLCharGenEdit * This,
            /* [in] */ int _nIndex,
            /* [out] */ BSTR *_pbsItemID,
            /* [out] */ BSTR *_pbsColor);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EditSelectionAdd )( 
            IMLCharGenEdit * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ BSTR _bsColor,
            /* [in] */ BOOL _bClearSel);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EditSelectionRemove )( 
            IMLCharGenEdit * This,
            /* [in] */ BSTR _bsItemID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EditItemAbsoluteRectGet )( 
            IMLCharGenEdit * This,
            /* [in] */ BSTR _bsItemID,
            /* [out] */ RECT *_prcItemRect);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EditItemAbsoluteRectSet )( 
            IMLCharGenEdit * This,
            /* [in] */ BSTR _bsItemID,
            /* [in] */ RECT *_prcItemRect);
        
        END_INTERFACE
    } IMLCharGenEditVtbl;

    interface IMLCharGenEdit
    {
        CONST_VTBL struct IMLCharGenEditVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLCharGenEdit_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLCharGenEdit_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLCharGenEdit_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLCharGenEdit_EditItemGetByPoint(This,_bsGroupID,_nPosX,_nPosY,_pbsItemID)	\
    ( (This)->lpVtbl -> EditItemGetByPoint(This,_bsGroupID,_nPosX,_nPosY,_pbsItemID) ) 

#define IMLCharGenEdit_EditItemsGetByRect(This,_bsGroupID,_nLeft,_nTop,_nRight,_nBottom,_pbsItemsIDs)	\
    ( (This)->lpVtbl -> EditItemsGetByRect(This,_bsGroupID,_nLeft,_nTop,_nRight,_nBottom,_pbsItemsIDs) ) 

#define IMLCharGenEdit_EditSelectionGetCount(This,_pnSelCount)	\
    ( (This)->lpVtbl -> EditSelectionGetCount(This,_pnSelCount) ) 

#define IMLCharGenEdit_EditSelectionGetByIndex(This,_nIndex,_pbsItemID,_pbsColor)	\
    ( (This)->lpVtbl -> EditSelectionGetByIndex(This,_nIndex,_pbsItemID,_pbsColor) ) 

#define IMLCharGenEdit_EditSelectionAdd(This,_bsItemID,_bsColor,_bClearSel)	\
    ( (This)->lpVtbl -> EditSelectionAdd(This,_bsItemID,_bsColor,_bClearSel) ) 

#define IMLCharGenEdit_EditSelectionRemove(This,_bsItemID)	\
    ( (This)->lpVtbl -> EditSelectionRemove(This,_bsItemID) ) 

#define IMLCharGenEdit_EditItemAbsoluteRectGet(This,_bsItemID,_prcItemRect)	\
    ( (This)->lpVtbl -> EditItemAbsoluteRectGet(This,_bsItemID,_prcItemRect) ) 

#define IMLCharGenEdit_EditItemAbsoluteRectSet(This,_bsItemID,_prcItemRect)	\
    ( (This)->lpVtbl -> EditItemAbsoluteRectSet(This,_bsItemID,_prcItemRect) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLCharGenEdit_INTERFACE_DEFINED__ */


#ifndef __IMLCGObject_INTERFACE_DEFINED__
#define __IMLCGObject_INTERFACE_DEFINED__

/* interface IMLCGObject */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLCGObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19E97AB0-BB5A-4446-897A-6A6177AF963E")
    IMLCGObject : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StartCG( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StopCG( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DoMixingOnBitmap( 
            /* [in] */ LONG _lHBitmapIn,
            /* [out] */ LONG *_plHBitmapOut,
            /* [in] */ BOOL _bFreeInput,
            /* [in] */ double _dblTime) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DoMixingOnMemory( 
            /* [in] */ BYTE *_pbImageRow,
            /* [in] */ BOOL _bTopRow,
            /* [in] */ double _dblTime) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DoMixingOnMemoryAligned( 
            /* [in] */ LONGLONG _pbImageRow,
            /* [in] */ int _nRowStride,
            /* [in] */ BOOL _bTopRow,
            /* [in] */ double _dblTime) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLCGObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLCGObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLCGObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLCGObject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StartCG )( 
            IMLCGObject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StopCG )( 
            IMLCGObject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DoMixingOnBitmap )( 
            IMLCGObject * This,
            /* [in] */ LONG _lHBitmapIn,
            /* [out] */ LONG *_plHBitmapOut,
            /* [in] */ BOOL _bFreeInput,
            /* [in] */ double _dblTime);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DoMixingOnMemory )( 
            IMLCGObject * This,
            /* [in] */ BYTE *_pbImageRow,
            /* [in] */ BOOL _bTopRow,
            /* [in] */ double _dblTime);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DoMixingOnMemoryAligned )( 
            IMLCGObject * This,
            /* [in] */ LONGLONG _pbImageRow,
            /* [in] */ int _nRowStride,
            /* [in] */ BOOL _bTopRow,
            /* [in] */ double _dblTime);
        
        END_INTERFACE
    } IMLCGObjectVtbl;

    interface IMLCGObject
    {
        CONST_VTBL struct IMLCGObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLCGObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLCGObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLCGObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLCGObject_StartCG(This)	\
    ( (This)->lpVtbl -> StartCG(This) ) 

#define IMLCGObject_StopCG(This)	\
    ( (This)->lpVtbl -> StopCG(This) ) 

#define IMLCGObject_DoMixingOnBitmap(This,_lHBitmapIn,_plHBitmapOut,_bFreeInput,_dblTime)	\
    ( (This)->lpVtbl -> DoMixingOnBitmap(This,_lHBitmapIn,_plHBitmapOut,_bFreeInput,_dblTime) ) 

#define IMLCGObject_DoMixingOnMemory(This,_pbImageRow,_bTopRow,_dblTime)	\
    ( (This)->lpVtbl -> DoMixingOnMemory(This,_pbImageRow,_bTopRow,_dblTime) ) 

#define IMLCGObject_DoMixingOnMemoryAligned(This,_pbImageRow,_nRowStride,_bTopRow,_dblTime)	\
    ( (This)->lpVtbl -> DoMixingOnMemoryAligned(This,_pbImageRow,_nRowStride,_bTopRow,_dblTime) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLCGObject_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MLCharGen_0000_0005 */
/* [local] */ 

#ifndef IMLXMLPersist_DEFINDED
#define IMLXMLPersist_DEFINDED


extern RPC_IF_HANDLE __MIDL_itf_MLCharGen_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MLCharGen_0000_0005_v0_0_s_ifspec;

#ifndef __IMLProperties_INTERFACE_DEFINED__
#define __IMLProperties_INTERFACE_DEFINED__

/* interface IMLProperties */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4D4C7A00-473F-4ad5-A5C2-428FE0C8E03E")
    IMLProperties : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMLProps( 
            /* [in] */ BSTR _bsPropName,
            /* [in] */ BSTR _bsPropValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMLProps( 
            /* [in] */ BSTR _bsPropName,
            /* [out] */ BSTR *_pbsPropValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLPropertiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLProperties * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLProperties * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLProperties * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMLProps )( 
            IMLProperties * This,
            /* [in] */ BSTR _bsPropName,
            /* [in] */ BSTR _bsPropValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMLProps )( 
            IMLProperties * This,
            /* [in] */ BSTR _bsPropName,
            /* [out] */ BSTR *_pbsPropValue);
        
        END_INTERFACE
    } IMLPropertiesVtbl;

    interface IMLProperties
    {
        CONST_VTBL struct IMLPropertiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLProperties_SetMLProps(This,_bsPropName,_bsPropValue)	\
    ( (This)->lpVtbl -> SetMLProps(This,_bsPropName,_bsPropValue) ) 

#define IMLProperties_GetMLProps(This,_bsPropName,_pbsPropValue)	\
    ( (This)->lpVtbl -> GetMLProps(This,_bsPropName,_pbsPropValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLProperties_INTERFACE_DEFINED__ */


#ifndef __IMLXMLPersist_INTERFACE_DEFINED__
#define __IMLXMLPersist_INTERFACE_DEFINED__

/* interface IMLXMLPersist */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLXMLPersist;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3D8D5BCD-714F-4e15-B74B-ECB20D6A1134")
    IMLXMLPersist : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SaveToXMLFile( 
            /* [in] */ BSTR _bsFileName,
            /* [in] */ BOOL _bUnicode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SaveToXMLString( 
            /* [out] */ BSTR *_pbsXMLDesc,
            /* [in] */ int _nTabs) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoadFromXML( 
            /* [in] */ BSTR _bsXMLDescOrFile,
            /* [in] */ int _nLength) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SaveToXMLFileParam( 
            /* [in] */ BSTR _bsFileName,
            /* [in] */ BOOL _bUnicode,
            /* [in] */ BSTR _bsAdditionParam) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SaveToXMLStringParam( 
            /* [out] */ BSTR *_pbsXMLDesc,
            /* [in] */ int _nTabs,
            /* [in] */ BSTR _bsAdditionParam) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLXMLPersistVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLXMLPersist * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLXMLPersist * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLXMLPersist * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveToXMLFile )( 
            IMLXMLPersist * This,
            /* [in] */ BSTR _bsFileName,
            /* [in] */ BOOL _bUnicode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveToXMLString )( 
            IMLXMLPersist * This,
            /* [out] */ BSTR *_pbsXMLDesc,
            /* [in] */ int _nTabs);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoadFromXML )( 
            IMLXMLPersist * This,
            /* [in] */ BSTR _bsXMLDescOrFile,
            /* [in] */ int _nLength);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveToXMLFileParam )( 
            IMLXMLPersist * This,
            /* [in] */ BSTR _bsFileName,
            /* [in] */ BOOL _bUnicode,
            /* [in] */ BSTR _bsAdditionParam);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveToXMLStringParam )( 
            IMLXMLPersist * This,
            /* [out] */ BSTR *_pbsXMLDesc,
            /* [in] */ int _nTabs,
            /* [in] */ BSTR _bsAdditionParam);
        
        END_INTERFACE
    } IMLXMLPersistVtbl;

    interface IMLXMLPersist
    {
        CONST_VTBL struct IMLXMLPersistVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLXMLPersist_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLXMLPersist_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLXMLPersist_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLXMLPersist_SaveToXMLFile(This,_bsFileName,_bUnicode)	\
    ( (This)->lpVtbl -> SaveToXMLFile(This,_bsFileName,_bUnicode) ) 

#define IMLXMLPersist_SaveToXMLString(This,_pbsXMLDesc,_nTabs)	\
    ( (This)->lpVtbl -> SaveToXMLString(This,_pbsXMLDesc,_nTabs) ) 

#define IMLXMLPersist_LoadFromXML(This,_bsXMLDescOrFile,_nLength)	\
    ( (This)->lpVtbl -> LoadFromXML(This,_bsXMLDescOrFile,_nLength) ) 

#define IMLXMLPersist_SaveToXMLFileParam(This,_bsFileName,_bUnicode,_bsAdditionParam)	\
    ( (This)->lpVtbl -> SaveToXMLFileParam(This,_bsFileName,_bUnicode,_bsAdditionParam) ) 

#define IMLXMLPersist_SaveToXMLStringParam(This,_pbsXMLDesc,_nTabs,_bsAdditionParam)	\
    ( (This)->lpVtbl -> SaveToXMLStringParam(This,_pbsXMLDesc,_nTabs,_bsAdditionParam) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLXMLPersist_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MLCharGen_0000_0007 */
/* [local] */ 

#endif


extern RPC_IF_HANDLE __MIDL_itf_MLCharGen_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MLCharGen_0000_0007_v0_0_s_ifspec;


#ifndef __MLCHARGENLib_LIBRARY_DEFINED__
#define __MLCHARGENLib_LIBRARY_DEFINED__

/* library MLCHARGENLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_MLCHARGENLib;

#ifndef __IMLCharGenEvents_DISPINTERFACE_DEFINED__
#define __IMLCharGenEvents_DISPINTERFACE_DEFINED__

/* dispinterface IMLCharGenEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IMLCharGenEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("19E97A90-BB5A-4446-897A-6A6177AF963E")
    IMLCharGenEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IMLCharGenEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLCharGenEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLCharGenEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLCharGenEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMLCharGenEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMLCharGenEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMLCharGenEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMLCharGenEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IMLCharGenEventsVtbl;

    interface IMLCharGenEvents
    {
        CONST_VTBL struct IMLCharGenEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLCharGenEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLCharGenEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLCharGenEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLCharGenEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMLCharGenEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMLCharGenEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMLCharGenEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IMLCharGenEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CoMLCharGen;

#ifdef __cplusplus

class DECLSPEC_UUID("0F56D2E7-033C-4A05-BCDA-DF58C9BBF06F")
CoMLCharGen;
#endif

EXTERN_C const CLSID CLSID_MLCharGenPage;

#ifdef __cplusplus

class DECLSPEC_UUID("06D779D1-967F-4744-B62F-463F1B89AADE")
MLCharGenPage;
#endif
#endif /* __MLCHARGENLib_LIBRARY_DEFINED__ */

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


