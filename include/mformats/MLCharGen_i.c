

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IMLCharGenCallback,0x19E97AA0,0xBB5A,0x4446,0x89,0x7A,0x6A,0x61,0x77,0xAF,0x96,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMLCharGen,0x19E97A91,0xBB5A,0x4446,0x89,0x7A,0x6A,0x61,0x77,0xAF,0x96,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMLCharGenSchedule,0x19E97A92,0xBB5A,0x4446,0x89,0x7A,0x6A,0x61,0x77,0xAF,0x96,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMLCharGenEdit,0x19E97AC0,0xBB5A,0x4446,0x89,0x7A,0x6A,0x61,0x77,0xAF,0x96,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMLCGObject,0x19E97AB0,0xBB5A,0x4446,0x89,0x7A,0x6A,0x61,0x77,0xAF,0x96,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMLProperties,0x4D4C7A00,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMLXMLPersist,0x3D8D5BCD,0x714F,0x4e15,0xB7,0x4B,0xEC,0xB2,0x0D,0x6A,0x11,0x34);


MIDL_DEFINE_GUID(IID, LIBID_MLCHARGENLib,0xA792045E,0xB55C,0x473B,0x8C,0x61,0x86,0x1E,0x93,0xA1,0xD3,0x70);


MIDL_DEFINE_GUID(IID, DIID_IMLCharGenEvents,0x19E97A90,0xBB5A,0x4446,0x89,0x7A,0x6A,0x61,0x77,0xAF,0x96,0x3E);


MIDL_DEFINE_GUID(CLSID, CLSID_CoMLCharGen,0x0F56D2E7,0x033C,0x4A05,0xBC,0xDA,0xDF,0x58,0xC9,0xBB,0xF0,0x6F);


MIDL_DEFINE_GUID(CLSID, CLSID_MLCharGenPage,0x06D779D1,0x967F,0x4744,0xB6,0x2F,0x46,0x3F,0x1B,0x89,0xAA,0xDE);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



