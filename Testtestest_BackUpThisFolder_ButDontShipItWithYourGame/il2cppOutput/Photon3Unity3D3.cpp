#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.StructWrapping.StructWrapperPool>
struct Dictionary_2_tEAE2DF00751C80F437F3C5601EDE17B54180B563;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.List`1<System.IDisposable>
struct List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<System.Boolean>
struct StructWrapperPool_1_t5E8DDB80FC1520CEC4AFE16039D7AC4A74287B66;
// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<System.Byte>
struct StructWrapperPool_1_t1F18293FA806E29C458D31A841C65D654CEC8B26;
// ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Boolean>
struct StructWrapper_1_t4F4C221A84B6F717727CD3FFCD4A7F39996A2BE5;
// ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Byte>
struct StructWrapper_1_t0B890213C8A744E6FCF9F862FACF3EB2AA92CCB1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54;
// ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Boolean>[]
struct StructWrapper_1U5BU5D_tE8AC3685DFE32D1B08571822E3A006934789903B;
// ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Byte>[]
struct StructWrapper_1U5BU5D_t8E4598CAB9AD1B21ACE9F797026CF0489B7DA513;
// Photon.SocketServer.Numeric.BigInteger[]
struct BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.Security.Cryptography.Aes
struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517;
// Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative
struct DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479;
// ExitGames.Client.Photon.Encryption.EncryptorNative
struct EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0;
// ExitGames.Client.Photon.Encryption.EncryptorNet
struct EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214;
// System.Exception
struct Exception_t;
// System.Security.Cryptography.HMACSHA256
struct HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// System.Security.Cryptography.Rijndael
struct Rijndael_t282661761E53E282457A31F5675ACF53D64EE807;
// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39;
// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate
struct LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StructWrapperPools_t578C08F079D4A055E0ED8EF8196750B3DEDCEBBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____1C59D529081415FBF853112CA22696E6E2909DC7131A9778E6D29D65EF51B9BB_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____1D920AA24CC00C3B7BBC1397D39DE20128DDED0DC4FB04967ED4959F99075D69_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____364BB9909344098EBFEC9D6590CE0E1C0DA480431594FDA19BF8DA05C37A8BFE_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____573EAD3B1C3E9D9EAE4FEA52F2F4B4FF4E05C3A47F126655D66867547AAD96D6_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_6_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_8_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____C06E2A4B592787D6DD076FCE44AD1518B3E742726EE0690FA60EE59E1BD25823_9_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral074D22CAAED9BC0505D91A9D389B998630D9E693;
IL2CPP_EXTERN_C String_t* _stringLiteral08ADDECC8A306A237F75DCFE180BB43B38C81975;
IL2CPP_EXTERN_C String_t* _stringLiteral0C674C434602F2C350E8DEC293E708D4CC2CE339;
IL2CPP_EXTERN_C String_t* _stringLiteral0D21CE941021E39AD2C57FBD4359FA329931BB30;
IL2CPP_EXTERN_C String_t* _stringLiteral1673B4D06ED01C7C0212BB2E7412E02E9578984F;
IL2CPP_EXTERN_C String_t* _stringLiteral1E5857F88C98EF4778F4624474792582147667EB;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3CAC0E89F582C12F00FAE58FC662A28C5C85A49E;
IL2CPP_EXTERN_C String_t* _stringLiteral3D0E5DBBF3FB8346802EC002475FE7C208CD28AD;
IL2CPP_EXTERN_C String_t* _stringLiteral420C015E6084500174F1912E91954C1A742F270F;
IL2CPP_EXTERN_C String_t* _stringLiteral42DB72C446F339CA615722C0E834FE1D8D1AFB75;
IL2CPP_EXTERN_C String_t* _stringLiteral4DEE5D207E901D1E406396DF24292E0DA4933427;
IL2CPP_EXTERN_C String_t* _stringLiteral4FD880CA5D311C1C431BD0CB104456E35EF84148;
IL2CPP_EXTERN_C String_t* _stringLiteral55F382C39F1E1109801BCD818996B4A8109B4266;
IL2CPP_EXTERN_C String_t* _stringLiteral5F0552FD39D0662CC057CFE2B43FEC612634CD8B;
IL2CPP_EXTERN_C String_t* _stringLiteral61CFF8B83A13CFDF7F33B0313F5B95E05C5BDE32;
IL2CPP_EXTERN_C String_t* _stringLiteral6BFD938E23883996BB53ADC717A30381323307E1;
IL2CPP_EXTERN_C String_t* _stringLiteral6DFAC00850B42052C386B06FF9FA1A0235058280;
IL2CPP_EXTERN_C String_t* _stringLiteral72301265348C6F8E4100593716DC0052838CF626;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral87E0FA1376B6339890B9CCE01F2815BB75405E00;
IL2CPP_EXTERN_C String_t* _stringLiteral8F35A290E0C52584695F3B0342580DAB07F7B8D3;
IL2CPP_EXTERN_C String_t* _stringLiteral8FB103804FD17212C338F3B05015F3C72602E6AF;
IL2CPP_EXTERN_C String_t* _stringLiteral947F50311E9CB6A65F16D5E098A7C924CB9B7ED5;
IL2CPP_EXTERN_C String_t* _stringLiteral9FF79147338E8CA6DE2548D641B7A2B3B8B92BD3;
IL2CPP_EXTERN_C String_t* _stringLiteralA1675DFBFC5732886C66DA31E108291B179069B3;
IL2CPP_EXTERN_C String_t* _stringLiteralA37EF8AD7DEABEF988E748C47A435D6BB3F6FC3B;
IL2CPP_EXTERN_C String_t* _stringLiteralA5E96470B64DD3DB50F2E9C79034F94898F64537;
IL2CPP_EXTERN_C String_t* _stringLiteralA9AFEBAB5E371E8B24466D4A2FBB943F2E675545;
IL2CPP_EXTERN_C String_t* _stringLiteralAB29DFF90E23218E1AA65656A44E1AAE9E278BD3;
IL2CPP_EXTERN_C String_t* _stringLiteralB1316B3900C007A342106359F4F3088B6EEFB104;
IL2CPP_EXTERN_C String_t* _stringLiteralB3D98A6506BE85B88A90E9097DABCC33A269F921;
IL2CPP_EXTERN_C String_t* _stringLiteralB6B5E50FCFD2E00B81E013DDA8DB088C83669E3D;
IL2CPP_EXTERN_C String_t* _stringLiteralB9DA96E4398E04C75ACA0CBE183972952BDB1A28;
IL2CPP_EXTERN_C String_t* _stringLiteralC1FF1DE164A9917F6C580B0C58E85CB5DB28AA81;
IL2CPP_EXTERN_C String_t* _stringLiteralC73AB4B40196928982A166205AF79F31A274B647;
IL2CPP_EXTERN_C String_t* _stringLiteralC8DF79069DEE119BB056F796290A0FB67EAC4897;
IL2CPP_EXTERN_C String_t* _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE1AD25D9D9631F7CBBA002BF41B32E922006C993;
IL2CPP_EXTERN_C String_t* _stringLiteralE2A815C62D1F89548AB5402DDD7F0DB069879D87;
IL2CPP_EXTERN_C String_t* _stringLiteralE8E6EF22A371EC7502EE6EF955025CF0739E6292;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFE867641BA2826180B2167D7038C421CA025C7A2;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_Jacobi_m7C5D665977F8A200A37C62928C0277DD78ACE512_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_LucasSequenceHelper_mB578EB685122683D3DD3043640F541831B39F1B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger__ctor_m3367C113DAF52BD63DBDFD251C80496E0D289F5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger__ctor_m3B37C425E83F9F09CDD537BFC764E768BCCC52A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger__ctor_m5054EE528124CBCE64654DA6C962554ACF727343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger__ctor_m6F11E40726FC618FAB5D9008FBEF6E1EA3207C9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger__ctor_m875CE004B9AE5B62C28C4AA139F62027FB0422EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_modInverse_mF434720FE230F436E78F7E68177134DFCEBC876B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Addition_m530E1AD8E6D64195B4645033819D2A24B764C237_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Decrement_m057D997DACCCB45E98B2AB32C6A4D7073A498E0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Increment_m0B307D465B5F4377E1B42F2BC6B34F60DCDEB47B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiffieHellmanCryptoProviderNative_DeriveSharedKey_mECB771F095B062C9A043C5FDE0FC366995136915_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiffieHellmanCryptoProviderNative__ctor_m96D8C73732EB7CFE196DC01D45D1934E659E971E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiffieHellmanCryptoProviderNative_get_PublicKey_m491036EBAE985F11D5DFB638897C40BC17B57B66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EncryptorNative_OnNativeLog_mF789D066763D9F5D5684DBA29A9DF074EFBFBEBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EncryptorNet_CalculateEncryptedSize_mA339782931F2C6D63A37E77EFE50A72A080FED4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EncryptorNet_CalculateFragmentLength_mCB232E8A17E352D77FB83E2A7F8633570BE63656_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EncryptorNet_Decrypt2_m13F64655C76BCD1777374D17F3FBA7995818A292_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EncryptorNet_Encrypt2_mD5CEC938BBCCFC9BEF74D679E4E979CA70889946_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EncryptorNet_Init_m9266A04A195F70744F3DB04BF2BDF4FCB542DF24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StructWrapper_1U5BU5D_tE8AC3685DFE32D1B08571822E3A006934789903B;
struct StructWrapper_1U5BU5D_t8E4598CAB9AD1B21ACE9F797026CF0489B7DA513;
struct BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
};
struct Il2CppArrayBounds;

// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94  : public RuntimeObject
{
	// System.UInt32[] Photon.SocketServer.Numeric.BigInteger::data
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___data_2;
	// System.Int32 Photon.SocketServer.Numeric.BigInteger::dataLength
	int32_t ___dataLength_3;
};

struct BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_StaticFields
{
	// System.Int32[] Photon.SocketServer.Numeric.BigInteger::primesBelow2000
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___primesBelow2000_1;
};

// ExitGames.Client.Photon.Encryption.EncryptorNet
struct EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214  : public RuntimeObject
{
	// System.Security.Cryptography.Aes ExitGames.Client.Photon.Encryption.EncryptorNet::encryptorIn
	Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* ___encryptorIn_0;
	// System.Security.Cryptography.Aes ExitGames.Client.Photon.Encryption.EncryptorNet::encryptorOut
	Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* ___encryptorOut_1;
	// System.Security.Cryptography.HMACSHA256 ExitGames.Client.Photon.Encryption.EncryptorNet::hmacsha256In
	HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* ___hmacsha256In_2;
	// System.Security.Cryptography.HMACSHA256 ExitGames.Client.Photon.Encryption.EncryptorNet::hmacsha256Out
	HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* ___hmacsha256Out_3;
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Photon.SocketServer.Security.OakleyGroups
struct OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8  : public RuntimeObject
{
};

struct OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields
{
	// System.Int32 Photon.SocketServer.Security.OakleyGroups::Generator
	int32_t ___Generator_0;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime768
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OakleyPrime768_1;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime1024
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OakleyPrime1024_2;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime1536
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OakleyPrime1536_3;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
};

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// ExitGames.Client.Photon.StructWrapping.StructWrapper
struct StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF  : public RuntimeObject
{
	// ExitGames.Client.Photon.StructWrapping.WrappedType ExitGames.Client.Photon.StructWrapping.StructWrapper::wrappedType
	int32_t ___wrappedType_0;
	// System.Type ExitGames.Client.Photon.StructWrapping.StructWrapper::ttype
	Type_t* ___ttype_1;
};

// ExitGames.Client.Photon.StructWrapping.StructWrapperPools
struct StructWrapperPools_t578C08F079D4A055E0ED8EF8196750B3DEDCEBBD  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.StructWrapping.StructWrapperPool> ExitGames.Client.Photon.StructWrapping.StructWrapperPools::pools
	Dictionary_2_tEAE2DF00751C80F437F3C5601EDE17B54180B563* ___pools_2;
	// System.Collections.Generic.List`1<System.IDisposable> ExitGames.Client.Photon.StructWrapping.StructWrapperPools::used
	List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* ___used_3;
};

struct StructWrapperPools_t578C08F079D4A055E0ED8EF8196750B3DEDCEBBD_StaticFields
{
	// ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Byte>[] ExitGames.Client.Photon.StructWrapping.StructWrapperPools::mappedByteWrappers
	StructWrapper_1U5BU5D_t8E4598CAB9AD1B21ACE9F797026CF0489B7DA513* ___mappedByteWrappers_0;
	// ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Boolean>[] ExitGames.Client.Photon.StructWrapping.StructWrapperPools::mappedBoolWrappers
	StructWrapper_1U5BU5D_tE8AC3685DFE32D1B08571822E3A006934789903B* ___mappedBoolWrappers_1;
};

// ExitGames.Client.Photon.StructWrapping.StructWrapperUtility
struct StructWrapperUtility_t52EED288DCD9C436B8085AA8D6269666AC327F4C  : public RuntimeObject
{
};

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Boolean>
struct StructWrapper_1_t4F4C221A84B6F717727CD3FFCD4A7F39996A2BE5  : public StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF
{
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> ExitGames.Client.Photon.StructWrapping.StructWrapper`1::<ReturnPool>k__BackingField
	StructWrapperPool_1_t5E8DDB80FC1520CEC4AFE16039D7AC4A74287B66* ___U3CReturnPoolU3Ek__BackingField_2;
	// ExitGames.Client.Photon.StructWrapping.Pooling ExitGames.Client.Photon.StructWrapping.StructWrapper`1::pooling
	int32_t ___pooling_3;
	// T ExitGames.Client.Photon.StructWrapping.StructWrapper`1::value
	bool ___value_4;
};

struct StructWrapper_1_t4F4C221A84B6F717727CD3FFCD4A7F39996A2BE5_StaticFields
{
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> ExitGames.Client.Photon.StructWrapping.StructWrapper`1::staticPool
	StructWrapperPool_1_t5E8DDB80FC1520CEC4AFE16039D7AC4A74287B66* ___staticPool_5;
};

// ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Byte>
struct StructWrapper_1_t0B890213C8A744E6FCF9F862FACF3EB2AA92CCB1  : public StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF
{
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> ExitGames.Client.Photon.StructWrapping.StructWrapper`1::<ReturnPool>k__BackingField
	StructWrapperPool_1_t1F18293FA806E29C458D31A841C65D654CEC8B26* ___U3CReturnPoolU3Ek__BackingField_2;
	// ExitGames.Client.Photon.StructWrapping.Pooling ExitGames.Client.Photon.StructWrapping.StructWrapper`1::pooling
	int32_t ___pooling_3;
	// T ExitGames.Client.Photon.StructWrapping.StructWrapper`1::value
	uint8_t ___value_4;
};

struct StructWrapper_1_t0B890213C8A744E6FCF9F862FACF3EB2AA92CCB1_StaticFields
{
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> ExitGames.Client.Photon.StructWrapping.StructWrapper`1::staticPool
	StructWrapperPool_1_t1F18293FA806E29C458D31A841C65D654CEC8B26* ___staticPool_5;
};

// System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F 
{
	// System.Int32 System.Numerics.BigInteger::_sign
	int32_t ____sign_0;
	// System.UInt32[] System.Numerics.BigInteger::_bits
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____bits_1;
};

struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields
{
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnMinInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinInt_2;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnOneInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnOneInt_3;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnZeroInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnZeroInt_4;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnMinusOneInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinusOneInt_5;
	// System.Byte[] System.Numerics.BigInteger::s_success
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_success_6;
};
// Native definition for P/Invoke marshalling of System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke
{
	int32_t ____sign_0;
	Il2CppSafeArray/*NONE*/* ____bits_1;
};
// Native definition for COM marshalling of System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com
{
	int32_t ____sign_0;
	Il2CppSafeArray/*NONE*/* ____bits_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// ExitGames.Client.Photon.Hashtable
struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A  : public Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA
{
};

struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A_StaticFields
{
	// System.Object[] ExitGames.Client.Photon.Hashtable::boxedByte
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___boxedByte_14;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Security.Cryptography.Rijndael
struct Rijndael_t282661761E53E282457A31F5675ACF53D64EE807  : public SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8
{
};

struct Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_StaticFields
{
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalBlockSizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalKeySizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalKeySizes_10;
};

// System.Security.Cryptography.SHA256
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct __StaticArrayInitTypeSizeU3D120_t07CC46E257D02C84819F71DEBA3492A32B3F58E9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_t07CC46E257D02C84819F71DEBA3492A32B3F58E9__padding[120];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1212
struct __StaticArrayInitTypeSizeU3D1212_tA254A372923978BFED97198B9327F07B4822D24C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1212_tA254A372923978BFED97198B9327F07B4822D24C__padding[1212];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_t2E29695B4BC956E343FF77CA0138C0C6A5CF9A78 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t2E29695B4BC956E343FF77CA0138C0C6A5CF9A78__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192
struct __StaticArrayInitTypeSizeU3D192_tA23B8958D5BD1371FDA0012276F7C3BE0284F299 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D192_tA23B8958D5BD1371FDA0012276F7C3BE0284F299__padding[192];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_tF0FA80314AF76742592F19E889B8EBD60D077150 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_tF0FA80314AF76742592F19E889B8EBD60D077150__padding[64];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=65
struct __StaticArrayInitTypeSizeU3D65_t6BF827579CE5108884BAF21EACF54BA6EC4AF209 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D65_t6BF827579CE5108884BAF21EACF54BA6EC4AF209__padding[65];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct __StaticArrayInitTypeSizeU3D9_t1D0E5E98B1B931A2F0A0B3372679DC64E05E4E20 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t1D0E5E98B1B931A2F0A0B3372679DC64E05E4E20__padding[9];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=97
struct __StaticArrayInitTypeSizeU3D97_t4087A205A5285288E91F491C3E306E5107025859 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D97_t4087A205A5285288E91F491C3E306E5107025859__padding[97];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::1C59D529081415FBF853112CA22696E6E2909DC7131A9778E6D29D65EF51B9BB
	__StaticArrayInitTypeSizeU3D64_tF0FA80314AF76742592F19E889B8EBD60D077150 ___1C59D529081415FBF853112CA22696E6E2909DC7131A9778E6D29D65EF51B9BB_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=97 <PrivateImplementationDetails>::1D920AA24CC00C3B7BBC1397D39DE20128DDED0DC4FB04967ED4959F99075D69
	__StaticArrayInitTypeSizeU3D97_t4087A205A5285288E91F491C3E306E5107025859 ___1D920AA24CC00C3B7BBC1397D39DE20128DDED0DC4FB04967ED4959F99075D69_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::364BB9909344098EBFEC9D6590CE0E1C0DA480431594FDA19BF8DA05C37A8BFE
	__StaticArrayInitTypeSizeU3D64_tF0FA80314AF76742592F19E889B8EBD60D077150 ___364BB9909344098EBFEC9D6590CE0E1C0DA480431594FDA19BF8DA05C37A8BFE_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0
	__StaticArrayInitTypeSizeU3D128_t2E29695B4BC956E343FF77CA0138C0C6A5CF9A78 ___3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=65 <PrivateImplementationDetails>::573EAD3B1C3E9D9EAE4FEA52F2F4B4FF4E05C3A47F126655D66867547AAD96D6
	__StaticArrayInitTypeSizeU3D65_t6BF827579CE5108884BAF21EACF54BA6EC4AF209 ___573EAD3B1C3E9D9EAE4FEA52F2F4B4FF4E05C3A47F126655D66867547AAD96D6_4;
	// System.Int64 <PrivateImplementationDetails>::5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5
	int64_t ___5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192 <PrivateImplementationDetails>::64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B
	__StaticArrayInitTypeSizeU3D192_tA23B8958D5BD1371FDA0012276F7C3BE0284F299 ___64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_6;
	// System.Int32 <PrivateImplementationDetails>::7CD1DB95A7FCB1679F8F273691B862407B795BD828ECEFC7ACF4A24930677E0B
	int32_t ___7CD1DB95A7FCB1679F8F273691B862407B795BD828ECEFC7ACF4A24930677E0B_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1212 <PrivateImplementationDetails>::AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080
	__StaticArrayInitTypeSizeU3D1212_tA254A372923978BFED97198B9327F07B4822D24C ___AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=65 <PrivateImplementationDetails>::C06E2A4B592787D6DD076FCE44AD1518B3E742726EE0690FA60EE59E1BD25823
	__StaticArrayInitTypeSizeU3D65_t6BF827579CE5108884BAF21EACF54BA6EC4AF209 ___C06E2A4B592787D6DD076FCE44AD1518B3E742726EE0690FA60EE59E1BD25823_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC
	__StaticArrayInitTypeSizeU3D9_t1D0E5E98B1B931A2F0A0B3372679DC64E05E4E20 ___D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175
	__StaticArrayInitTypeSizeU3D120_t07CC46E257D02C84819F71DEBA3492A32B3F58E9 ___FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_11;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517  : public RuntimeObject
{
	// System.Numerics.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::prime
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___prime_1;
	// System.Numerics.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::secret
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___secret_2;
	// System.Numerics.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::publicKey
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___publicKey_3;
	// System.Security.Cryptography.Rijndael Photon.SocketServer.Security.DiffieHellmanCryptoProvider::crypto
	Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* ___crypto_4;
	// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::sharedKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKey_5;
};

struct DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_StaticFields
{
	// System.Numerics.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::primeRoot
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___primeRoot_0;
};

// Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative
struct DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479  : public RuntimeObject
{
	// System.IntPtr Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::cryptor
	intptr_t ___cryptor_0;
	// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::sharedKeyHash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKeyHash_1;
};

// ExitGames.Client.Photon.Encryption.EncryptorNative
struct EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0  : public RuntimeObject
{
	// System.IntPtr ExitGames.Client.Photon.Encryption.EncryptorNative::encryptor
	intptr_t ___encryptor_1;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170  : public RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3
{
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	intptr_t ____handle_1;
};

struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_StaticFields
{
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	RuntimeObject* ____lock_0;
};

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39  : public Rijndael_t282661761E53E282457A31F5675ACF53D64EE807
{
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C  : public SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9
{
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int64 System.Security.Cryptography.SHA256Managed::_count
	int64_t ____count_5;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_stateSHA256
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____stateSHA256_6;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_W
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____W_7;
};

struct SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticFields
{
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_K
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____K_8;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate
struct LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Byte>[]
struct StructWrapper_1U5BU5D_t8E4598CAB9AD1B21ACE9F797026CF0489B7DA513  : public RuntimeArray
{
	ALIGN_FIELD (8) StructWrapper_1_t0B890213C8A744E6FCF9F862FACF3EB2AA92CCB1* m_Items[1];

	inline StructWrapper_1_t0B890213C8A744E6FCF9F862FACF3EB2AA92CCB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StructWrapper_1_t0B890213C8A744E6FCF9F862FACF3EB2AA92CCB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StructWrapper_1_t0B890213C8A744E6FCF9F862FACF3EB2AA92CCB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StructWrapper_1_t0B890213C8A744E6FCF9F862FACF3EB2AA92CCB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StructWrapper_1_t0B890213C8A744E6FCF9F862FACF3EB2AA92CCB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StructWrapper_1_t0B890213C8A744E6FCF9F862FACF3EB2AA92CCB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Boolean>[]
struct StructWrapper_1U5BU5D_tE8AC3685DFE32D1B08571822E3A006934789903B  : public RuntimeArray
{
	ALIGN_FIELD (8) StructWrapper_1_t4F4C221A84B6F717727CD3FFCD4A7F39996A2BE5* m_Items[1];

	inline StructWrapper_1_t4F4C221A84B6F717727CD3FFCD4A7F39996A2BE5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StructWrapper_1_t4F4C221A84B6F717727CD3FFCD4A7F39996A2BE5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StructWrapper_1_t4F4C221A84B6F717727CD3FFCD4A7F39996A2BE5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StructWrapper_1_t4F4C221A84B6F717727CD3FFCD4A7F39996A2BE5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StructWrapper_1_t4F4C221A84B6F717727CD3FFCD4A7F39996A2BE5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StructWrapper_1_t4F4C221A84B6F717727CD3FFCD4A7F39996A2BE5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// Photon.SocketServer.Numeric.BigInteger[]
struct BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A  : public RuntimeArray
{
	ALIGN_FIELD (8) BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* m_Items[1];

	inline BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;

// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
inline Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419 (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
inline ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
inline Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8 (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB (*) (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
inline void Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8 (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB*, const RuntimeMethod*))Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB*, const RuntimeMethod*))Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032 (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB*, const RuntimeMethod*))Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared)(__this, method);
}
// System.Void ExitGames.Client.Photon.StructWrapping.StructWrapperUtility::BoxAll(ExitGames.Client.Photon.Hashtable,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StructWrapperUtility_BoxAll_m6EF87599BBD866E308F00D6B2E5CB8918B7A79D5 (Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___table0, bool ___recursive1, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::OnNativeLog(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_OnNativeLog_mF789D066763D9F5D5684DBA29A9DF074EFBFBEBD (intptr_t ___userData0, int32_t ___debugLevel1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_Dispose_mDD474757E874AAE0ABA2DD5670FCB91EFA83F160 (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, bool ___dispose0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate__ctor_m452F55663DA176EB51E2E16F8C94C6C322D96BD9 (LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egsetEncryptorLoggingCallback(System.IntPtr,ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egsetEncryptorLoggingCallback_m04DFAA5ECFD90AC1E3A76A221DB992AAA247701C (intptr_t ___userData0, LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* ___callback1, const RuntimeMethod* method) ;
// System.Boolean ExitGames.Client.Photon.Encryption.EncryptorNative::egsetEncryptorLoggingLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EncryptorNative_egsetEncryptorLoggingLevel_m592E2590A0153F956DF1D1DA0FBE32E7032B46BE (int32_t ___level0, const RuntimeMethod* method) ;
// System.IntPtr ExitGames.Client.Photon.Encryption.EncryptorNative::egconstructEncryptor2(System.Byte[],System.Byte[],ExitGames.Client.Photon.Encryption.EncryptorNative/ChainingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EncryptorNative_egconstructEncryptor2_mC56AF6EB4CE8A1175E0BC8A5517666E643982CEF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pEncryptSecret0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pHMACSecret1, int32_t ___chainingMode2, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egdestructEncryptor2(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egdestructEncryptor2_m667CA293DEF296BFC04BF970B3F4EE7BFEA75A66 (intptr_t ___pEncryptor0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egencrypt2(System.IntPtr,System.Byte[],System.Int32,System.Byte[],System.Byte[],System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egencrypt2_m964A7503A1797FFC0211E55E26BE8176A6DBA5E6 (intptr_t ___pEncryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pIn1, int32_t ___inSize2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pHeader3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pOut4, int32_t ___outOffset5, int32_t* ___outSize6, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egdecrypt2(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egdecrypt2_m8D11C47A6BCD90C1C93A5753F2F290A6167ADC2F (intptr_t ___pEncryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pIn1, int32_t ___inSize2, int32_t ___inOffset3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pHeader4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pOut5, int32_t* ___outSize6, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNative::egcalculateEncryptedSize(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncryptorNative_egcalculateEncryptedSize_m0877B95FB6150FEFF14112961686A3172BE5FC13 (intptr_t ___pEncryptor0, int32_t ___unencryptedSize1, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNative::egcalculateFragmentLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncryptorNative_egcalculateFragmentLength_m994A13DBA529A0BD789B76FA5B67E038E1F82640 (intptr_t ___pEncryptor0, const RuntimeMethod* method) ;
// System.Void System.Numerics.BigInteger::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F DiffieHellmanCryptoProvider_GenerateRandomSecret_m95C657C24D2F7F6F92C09F47AA10484D40ABA311 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, int32_t ___secretLength0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F DiffieHellmanCryptoProvider_CalculatePublicKey_m148C933BC2BD188C70D0A089CF87E936CF401E21 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManaged__ctor_mACBA07A36FCD3FE3858C4B1FBBC57D7CBB7109C7 (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Numerics.BigInteger::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_ToByteArray_mC501D315AF605FB0EF172628E9D4C95D2F015EB3 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) ;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::MsBigIntArrayToPhotonBigIntArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_MsBigIntArrayToPhotonBigIntArray_mCC22AF1882F123D3F9F3B8834F8E463E56EE90F6 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::PhotonBigIntArrayToMsBigIntArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_PhotonBigIntArrayToMsBigIntArray_m82C648C9548C183CC8CC62C590E510CFED2FC1B8 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F DiffieHellmanCryptoProvider_CalculateSharedKey_mBD63B81C33804F448AECC08D2C838D3757B61116 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___otherPartyPublicKey0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.SHA256Managed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA256Managed__ctor_mB95C91954ECF9E74B133ABC3BC72FAE4D5BF9B4F (SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void System.Array::Reverse(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_m33655BE7BBF2BE04AB16C27BD48F17F800B9A7F7 (RuntimeArray* ___array0, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_Encrypt_m2FE785BD6C29653FA2E50ADE2D63DC3CCCC2A563 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Decrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_Decrypt_mE867D145E9EC7B883E6A512D7E51DE1F429925A3 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_m272B6C274E95DE4862C6B4B0FF36D9B995F0B8B1 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::ModPow(System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_ModPow_mDC564B0C06A25246B75133C640D6A1C6F85EA112 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___exponent1, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___modulus2, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNGCryptoServiceProvider__ctor_m605146E692C0209B3FFE83F7AC94335CA089CA09 (RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* __this, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Implicit_m727B3C507042A16CD36B63DA4D1B66D66EA1ED73 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Subtraction(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Subtraction_m34372D07D2CAE48629B8E0768A6655576F02A075 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_GreaterThanOrEqual(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_mF378EAE0DF2E78D3A9A1DF8C8795986655365E46 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_LessThan(System.Numerics.BigInteger,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_m1E0EF64800B210466A473C6852B37E54636A1973 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, int64_t ___right1, const RuntimeMethod* method) ;
// System.Void System.Numerics.BigInteger::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mFEDEDA4A6AFC2BA534FEEF4EB3431B9C5AC3F9D9 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.IntPtr Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DiffieHellmanCryptoProviderNative_egCryptorCreate_m17D0BFA5DFD181AA82501C0AF1436AC09E12F1A9 (const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorIsEncryptionAvailable(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DiffieHellmanCryptoProviderNative_egCryptorIsEncryptionAvailable_m22A5234BE0EBBCF1EE82E21F20616CED8EFDA54B (intptr_t ___cryptor0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorPublicKey(System.IntPtr,System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorPublicKey_m68EA65FF458F521635FF4EC5AE66387EC5EB08F8 (intptr_t ___cryptor0, intptr_t* ___key1, int32_t* ___keySize2, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E (intptr_t ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDeriveSharedKey(System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorDeriveSharedKey_m5586AD606260F5141F3AC439098519F44EFB529F (intptr_t ___cryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___serverPublicKey1, int32_t ___keySize2, const RuntimeMethod* method) ;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Encrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProviderNative_Encrypt_m5B3F30527EF804357E7A914DBD9C2589AF222BA6 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorEncrypt(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorEncrypt_mDC8512C19FD13974ABEB6A23C969CB08A0049F64 (intptr_t ___cryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___plainData1, int32_t ___plainDataOffset2, int32_t ___plainDataSize3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKeyHash4, intptr_t* ___encodedData5, int32_t* ___encodedDataSize6, const RuntimeMethod* method) ;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Decrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProviderNative_Decrypt_m5361BC3B147ECE265B2E13C2F433F7E0318BCA88 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDecrypt(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorDecrypt_m473EBE94702065CBA6C6405E7B72D4B9D48E0085 (intptr_t ___cryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encodedData1, int32_t ___encodedDataOffset2, int32_t ___encodedDataSize3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKeyHash4, intptr_t* ___plainData5, int32_t* ___plainDataSize6, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_Dispose_m8996FBEDD15D70F410496F234B60F1EF9E54EAB2 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_egCryptorDispose_mC79AB5F12B3EE23BDF28D93907113190D210B85B (intptr_t ___cryptor0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void System.ArithmeticException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) ;
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49 (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA (int32_t ___value0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Multiply(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Addition(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Addition_m530E1AD8E6D64195B4645033819D2A24B764C237 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m875CE004B9AE5B62C28C4AA139F62027FB0422EF (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.Void System.ArithmeticException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m1CD22804E6929CDFBE5CB651FCE80C0C668D3FB0 (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_UnaryNegation(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftLeft(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_shiftLeft_m0034BAAB082A614E52BA019B3F475D43DD88C742 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___buffer0, int32_t ___shiftVal1, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftRight(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_shiftRight_m191C98C28276C28DCFE1D31E0066FD7FA3D7837D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___buffer0, int32_t ___shiftVal1, const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Equality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_mFF395F5866F1B4E7BD78D208A3BEEF209DA7F861 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_mEC24356D763AC4FB6EDEED48C590B1811FEABF5E (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_LessThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_m107B3A67008253C0CF06DF05391CF0D774868636 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_LeftShift(Photon.SocketServer.Numeric.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_LeftShift_m52BF16486FF642F88B505336617A60F65F59836E (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m5054EE528124CBCE64654DA6C962554ACF727343 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___inData0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Implicit_m62A9E398786981AEBDAE4BB3F2EF702FADD15CA3 (int64_t ___value0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Subtraction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::singleByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_singleByteDivide_m46DA1A0FC412956D80B5F509897E78AE5114426A (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outQuotient2, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outRemainder3, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::multiByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_multiByteDivide_m95E26DBD75B9B3E5F71E5DEA71E96BA68C606CF0 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outQuotient2, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outRemainder3, const RuntimeMethod* method) ;
// System.String Photon.SocketServer.Numeric.BigInteger::ToString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___radix0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.UInt32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154 (uint32_t* __this, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.String System.UInt32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m6A665131BC9DC1F70D66117712027604B16EB6C6 (uint32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Modulus(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Division(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Division_m0E65A659BB326213D738370A903EBF2491ECAA68 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::bitCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_bitCount_m50C89176444C22EFBC8F061FFC210A9DFA9C33F6 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::BarrettReduction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_BarrettReduction_mBFEB2DE54E275465CAE9B32334779280949B1DD9 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___x0, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___n1, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___constant2, const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_mDCDEAF660FABF6A1545726684FB38A78F1835448 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::genRandomBits(System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___bits0, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rand1, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::gcd(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_gcd_m1A5651E10622C6987DD65408225991106B51D45E (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::ModPow(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___exp0, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___n1, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_RightShift(Photon.SocketServer.Numeric.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_RightShift_mFF8501FDA582B6AD9771C141BCC7DC77ACD742F3 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::Jacobi(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_Jacobi_m7C5D665977F8A200A37C62928C0277DD78ACE512 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___a0, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___b1, const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Inequality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_m2AF6EE02B7EE566B383DAB2CC09C9ACEF3C2635C (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::LucasStrongTestHelper(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_LucasStrongTestHelper_m6B814BAB2836618BD0219D49E8154C273B70E132 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___thisVal0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::sqrt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_sqrt_m2A5F0379E06ABB1165142C57F3F11CCFE9F726AE (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger[] Photon.SocketServer.Numeric.BigInteger::LucasSequenceHelper(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* BigInteger_LucasSequenceHelper_mB578EB685122683D3DD3043640F541831B39F1B4 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___P0, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___Q1, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___k2, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___n3, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___constant4, int32_t ___s5, const RuntimeMethod* method) ;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::IntValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_IntValue_m44B5AA5FF60A8136FE0521602CB2EBB4ED8A361B (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::RabinMillerTest(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_RabinMillerTest_mCA4EA9AC31EF0FDA9ACFFCDEE925C0CE3B88D0A3 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___confidence0, const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::isProbablePrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_isProbablePrime_m00357D4514F40581EF9F877B3269C2CE7052C9B3 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___confidence0, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m379B83C0670954BD79F405DB48800CFC19D97E17 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m6F11E40726FC618FAB5D9008FBEF6E1EA3207C9A (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inData0, int32_t ___inLen1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, int32_t ___Seed0, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m3367C113DAF52BD63DBDFD251C80496E0D289F5C (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, String_t* ___value0, int32_t ___radix1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Console::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_Write_m24361910B9595463F9D14D41F3121C0B631FFBBF (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m3B37C425E83F9F09CDD537BFC764E768BCCC52A9 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inData0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::genCoPrime(System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_genCoPrime_m60816777CE0C5C7823948A843416E1820AC2AE06 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___bits0, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rand1, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::modInverse(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_modInverse_mF434720FE230F436E78F7E68177134DFCEBC876B (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___modulus0, const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_LessThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThanOrEqual_mBC05B3ED352EE3F4919F557D65FF2F2558FC7EB1 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m3C40D585DE03250053C5EA3AA4753BA25FDCC2B1 (const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::isProbablePrime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_isProbablePrime_mFF3304960D220ED39A856FE6512C24046E43C0E7 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::SolovayStrassenTest(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_SolovayStrassenTest_m9F02AE87545710145437490BC88B8CFEA22FEC77 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___confidence0, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::FermatLittleTest(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_FermatLittleTest_m3F14DDD38E4E70B5965A80F9ECC054E69D2979BF (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___confidence0, const RuntimeMethod* method) ;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::genPseudoPrime(System.Int32,System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_genPseudoPrime_mC3F589A1361242351D735167C1CE8D22237B732C (int32_t ___bits0, int32_t ___confidence1, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rand2, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL egconstructEncryptor2(uint8_t*, uint8_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL egdestructEncryptor2(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL egencrypt2(intptr_t, uint8_t*, int32_t, uint8_t*, uint8_t*, int32_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL egdecrypt2(intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, uint8_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egcalculateEncryptedSize(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egcalculateFragmentLength(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL egsetEncryptorLoggingCallback(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egsetEncryptorLoggingLevel(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL egCryptorCreate();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egCryptorPublicKey(intptr_t, intptr_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egCryptorDeriveSharedKey(intptr_t, uint8_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egCryptorEncrypt(intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, intptr_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egCryptorDecrypt(intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, intptr_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egCryptorIsEncryptionAvailable(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL egCryptorDispose(intptr_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type ExitGames.Client.Photon.StructWrapping.StructWrapperUtility::GetWrappedType(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* StructWrapperUtility_GetWrappedType_m393DD8C7C2F9EDED6BD519B16177A4413B6FB435 (RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF* V_0 = NULL;
	bool V_1 = false;
	Type_t* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF*)IsInstClass((RuntimeObject*)L_0, StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF_il2cpp_TypeInfo_var));
		StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF* L_1 = V_0;
		V_1 = (bool)((((RuntimeObject*)(StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_3 = ___obj0;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		V_2 = L_4;
		goto IL_0022;
	}

IL_0019:
	{
		StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF* L_5 = V_0;
		NullCheck(L_5);
		Type_t* L_6 = L_5->___ttype_1;
		V_2 = L_6;
		goto IL_0022;
	}

IL_0022:
	{
		Type_t* L_7 = V_2;
		return L_7;
	}
}
// ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Byte> ExitGames.Client.Photon.StructWrapping.StructWrapperUtility::Wrap(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StructWrapper_1_t0B890213C8A744E6FCF9F862FACF3EB2AA92CCB1* StructWrapperUtility_Wrap_m506ACA0B5D14E25528B18570FE2CD26115EF5E0C (uint8_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StructWrapperPools_t578C08F079D4A055E0ED8EF8196750B3DEDCEBBD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StructWrapper_1_t0B890213C8A744E6FCF9F862FACF3EB2AA92CCB1* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(StructWrapperPools_t578C08F079D4A055E0ED8EF8196750B3DEDCEBBD_il2cpp_TypeInfo_var);
		StructWrapper_1U5BU5D_t8E4598CAB9AD1B21ACE9F797026CF0489B7DA513* L_0 = ((StructWrapperPools_t578C08F079D4A055E0ED8EF8196750B3DEDCEBBD_StaticFields*)il2cpp_codegen_static_fields_for(StructWrapperPools_t578C08F079D4A055E0ED8EF8196750B3DEDCEBBD_il2cpp_TypeInfo_var))->___mappedByteWrappers_0;
		uint8_t L_1 = ___value0;
		NullCheck(L_0);
		uint8_t L_2 = L_1;
		StructWrapper_1_t0B890213C8A744E6FCF9F862FACF3EB2AA92CCB1* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		goto IL_000b;
	}

IL_000b:
	{
		StructWrapper_1_t0B890213C8A744E6FCF9F862FACF3EB2AA92CCB1* L_4 = V_0;
		return L_4;
	}
}
// ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Boolean> ExitGames.Client.Photon.StructWrapping.StructWrapperUtility::Wrap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StructWrapper_1_t4F4C221A84B6F717727CD3FFCD4A7F39996A2BE5* StructWrapperUtility_Wrap_m63F00B4BC2B10B07FE8F486D965FACAE98710E83 (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StructWrapperPools_t578C08F079D4A055E0ED8EF8196750B3DEDCEBBD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StructWrapper_1_t4F4C221A84B6F717727CD3FFCD4A7F39996A2BE5* V_0 = NULL;
	StructWrapper_1U5BU5D_tE8AC3685DFE32D1B08571822E3A006934789903B* G_B2_0 = NULL;
	StructWrapper_1U5BU5D_tE8AC3685DFE32D1B08571822E3A006934789903B* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	StructWrapper_1U5BU5D_tE8AC3685DFE32D1B08571822E3A006934789903B* G_B3_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(StructWrapperPools_t578C08F079D4A055E0ED8EF8196750B3DEDCEBBD_il2cpp_TypeInfo_var);
		StructWrapper_1U5BU5D_tE8AC3685DFE32D1B08571822E3A006934789903B* L_0 = ((StructWrapperPools_t578C08F079D4A055E0ED8EF8196750B3DEDCEBBD_StaticFields*)il2cpp_codegen_static_fields_for(StructWrapperPools_t578C08F079D4A055E0ED8EF8196750B3DEDCEBBD_il2cpp_TypeInfo_var))->___mappedBoolWrappers_1;
		bool L_1 = ___value0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		int32_t L_2 = G_B3_0;
		StructWrapper_1_t4F4C221A84B6F717727CD3FFCD4A7F39996A2BE5* L_3 = (G_B3_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		StructWrapper_1_t4F4C221A84B6F717727CD3FFCD4A7F39996A2BE5* L_4 = V_0;
		return L_4;
	}
}
// System.Collections.Generic.List`1<System.Object> ExitGames.Client.Photon.StructWrapping.StructWrapperUtility::ReleaseAllWrappers(System.Collections.Generic.List`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* StructWrapperUtility_ReleaseAllWrappers_m1AAE8603346AC92678E286C0331BA8AD6DD0FE5D (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___collection0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF* V_2 = NULL;
	bool V_3 = false;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_4 = NULL;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___collection0;
		NullCheck(L_0);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_1;
		L_1 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_0, List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_0), Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_000b_1:
			{
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_0), Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var);
				V_1 = L_2;
				RuntimeObject* L_3 = V_1;
				V_2 = ((StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF*)IsInstClass((RuntimeObject*)L_3, StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF_il2cpp_TypeInfo_var));
				StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF* L_4 = V_2;
				V_3 = (bool)((((RuntimeObject*)(StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_5 = V_3;
				if (!L_5)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_002d_1;
			}

IL_0025_1:
			{
				StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF* L_6 = V_2;
				NullCheck(L_6);
				VirtualActionInvoker0::Invoke(7 /* System.Void ExitGames.Client.Photon.StructWrapping.StructWrapper::Dispose() */, L_6);
			}

IL_002d_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_0), Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_0047;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_8 = ___collection0;
		V_4 = L_8;
		goto IL_004c;
	}

IL_004c:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = V_4;
		return L_9;
	}
}
// System.Object[] ExitGames.Client.Photon.StructWrapping.StructWrapperUtility::ReleaseAllWrappers(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* StructWrapperUtility_ReleaseAllWrappers_mE3AFC9A02D25D9D306BDB562D5D2A51173696412 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___collection0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF* V_3 = NULL;
	bool V_4 = false;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_5 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___collection0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_002c;
	}

IL_0008:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		RuntimeObject* L_5 = V_2;
		V_3 = ((StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF*)IsInstClass((RuntimeObject*)L_5, StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF_il2cpp_TypeInfo_var));
		StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF* L_6 = V_3;
		V_4 = (bool)((((RuntimeObject*)(StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0020;
		}
	}
	{
		goto IL_0028;
	}

IL_0020:
	{
		StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF* L_8 = V_3;
		NullCheck(L_8);
		VirtualActionInvoker0::Invoke(7 /* System.Void ExitGames.Client.Photon.StructWrapping.StructWrapper::Dispose() */, L_8);
	}

IL_0028:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002c:
	{
		int32_t L_10 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = ___collection0;
		V_5 = L_12;
		goto IL_0037;
	}

IL_0037:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = V_5;
		return L_13;
	}
}
// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.StructWrapping.StructWrapperUtility::ReleaseAllWrappers(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tD626399B3ADFD501225241D7366103F35472542A* StructWrapperUtility_ReleaseAllWrappers_mE71590E95D3FFCA934A368ECF56E331FCC23ECBF (Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___table0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF* V_2 = NULL;
	bool V_3 = false;
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* V_4 = NULL;
	{
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_0 = ___table0;
		NullCheck(L_0);
		ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* L_1;
		L_1 = Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5(L_0, Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB L_2;
		L_2 = ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8(L_1, ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8((&V_0), Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0032_1;
			}

IL_0010_1:
			{
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_inline((&V_0), Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_RuntimeMethod_var);
				V_1 = L_3;
				RuntimeObject* L_4 = V_1;
				V_2 = ((StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF*)IsInstClass((RuntimeObject*)L_4, StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF_il2cpp_TypeInfo_var));
				StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF* L_5 = V_2;
				V_3 = (bool)((((RuntimeObject*)(StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_6 = V_3;
				if (!L_6)
				{
					goto IL_002a_1;
				}
			}
			{
				goto IL_0032_1;
			}

IL_002a_1:
			{
				StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF* L_7 = V_2;
				NullCheck(L_7);
				VirtualActionInvoker0::Invoke(7 /* System.Void ExitGames.Client.Photon.StructWrapping.StructWrapper::Dispose() */, L_7);
			}

IL_0032_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032((&V_0), Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_004c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_9 = ___table0;
		V_4 = L_9;
		goto IL_0051;
	}

IL_0051:
	{
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_10 = V_4;
		return L_10;
	}
}
// System.Void ExitGames.Client.Photon.StructWrapping.StructWrapperUtility::BoxAll(ExitGames.Client.Photon.Hashtable,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StructWrapperUtility_BoxAll_m6EF87599BBD866E308F00D6B2E5CB8918B7A79D5 (Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___table0, bool ___recursive1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF* V_2 = NULL;
	bool V_3 = false;
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	{
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_0 = ___table0;
		NullCheck(L_0);
		ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* L_1;
		L_1 = Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5(L_0, Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB L_2;
		L_2 = ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8(L_1, ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8((&V_0), Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0059_1;
			}

IL_0010_1:
			{
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_inline((&V_0), Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_RuntimeMethod_var);
				V_1 = L_3;
				bool L_4 = ___recursive1;
				V_3 = L_4;
				bool L_5 = V_3;
				if (!L_5)
				{
					goto IL_003e_1;
				}
			}
			{
				RuntimeObject* L_6 = V_1;
				V_4 = ((Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)IsInstClass((RuntimeObject*)L_6, Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var));
				Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_7 = V_4;
				V_5 = (bool)((!(((RuntimeObject*)(Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_8 = V_5;
				if (!L_8)
				{
					goto IL_003d_1;
				}
			}
			{
				Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_9 = V_4;
				StructWrapperUtility_BoxAll_m6EF87599BBD866E308F00D6B2E5CB8918B7A79D5(L_9, (bool)0, NULL);
			}

IL_003d_1:
			{
			}

IL_003e_1:
			{
				RuntimeObject* L_10 = V_1;
				V_2 = ((StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF*)IsInstClass((RuntimeObject*)L_10, StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF_il2cpp_TypeInfo_var));
				StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF* L_11 = V_2;
				V_6 = (bool)((((RuntimeObject*)(StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_12 = V_6;
				if (!L_12)
				{
					goto IL_0051_1;
				}
			}
			{
				goto IL_0059_1;
			}

IL_0051_1:
			{
				StructWrapper_tB38E5A18477B4F833825B75E4B669FE015DE9DCF* L_13 = V_2;
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Object ExitGames.Client.Photon.StructWrapping.StructWrapper::Box() */, L_13);
			}

IL_0059_1:
			{
				bool L_15;
				L_15 = Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032((&V_0), Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0073;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0073:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNet::Init(System.Byte[],System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNet_Init_m9266A04A195F70744F3DB04BF2BDF4FCB542DF24 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encryptionSecret0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hmacSecret1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ivBytes2, bool ___chainingModeGCM3, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptorNet_Init_m9266A04A195F70744F3DB04BF2BDF4FCB542DF24_RuntimeMethod_var)));
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNet::Encrypt2(System.Byte[],System.Int32,System.Byte[],System.Byte[],System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNet_Encrypt2_mD5CEC938BBCCFC9BEF74D679E4E979CA70889946 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___len1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___header2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output3, int32_t ___outOffset4, int32_t* ___outSize5, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptorNet_Encrypt2_mD5CEC938BBCCFC9BEF74D679E4E979CA70889946_RuntimeMethod_var)));
	}
}
// System.Byte[] ExitGames.Client.Photon.Encryption.EncryptorNet::Decrypt2(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncryptorNet_Decrypt2_m13F64655C76BCD1777374D17F3FBA7995818A292 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___len2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___header3, int32_t* ___outLen4, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptorNet_Decrypt2_m13F64655C76BCD1777374D17F3FBA7995818A292_RuntimeMethod_var)));
	}
}
// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNet::CalculateEncryptedSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncryptorNet_CalculateEncryptedSize_mA339782931F2C6D63A37E77EFE50A72A080FED4A (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, int32_t ___unencryptedSize0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptorNet_CalculateEncryptedSize_mA339782931F2C6D63A37E77EFE50A72A080FED4A_RuntimeMethod_var)));
	}
}
// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNet::CalculateFragmentLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncryptorNet_CalculateFragmentLength_mCB232E8A17E352D77FB83E2A7F8633570BE63656 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncryptorNet_CalculateFragmentLength_mCB232E8A17E352D77FB83E2A7F8633570BE63656_RuntimeMethod_var)));
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNet__ctor_m2957F804DA7D56350E57F5D63DD2E79AA7F57963 (EncryptorNet_tBB295B3BD0B56E2FA757A5FD38280C962E985214* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void CDECL ReversePInvokeWrapper_EncryptorNative_OnNativeLog_mF789D066763D9F5D5684DBA29A9DF074EFBFBEBD(intptr_t ___userData0, int32_t ___debugLevel1, char* ___message2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message2' to managed representation
	String_t* ____message2_unmarshaled = NULL;
	____message2_unmarshaled = il2cpp_codegen_marshal_string_result(___message2);

	// Managed method invocation
	EncryptorNative_OnNativeLog_mF789D066763D9F5D5684DBA29A9DF074EFBFBEBD(___userData0, ___debugLevel1, ____message2_unmarshaled, NULL);

}
// System.IntPtr ExitGames.Client.Photon.Encryption.EncryptorNative::egconstructEncryptor2(System.Byte[],System.Byte[],ExitGames.Client.Photon.Encryption.EncryptorNative/ChainingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EncryptorNative_egconstructEncryptor2_mC56AF6EB4CE8A1175E0BC8A5517666E643982CEF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pEncryptSecret0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pHMACSecret1, int32_t ___chainingMode2, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (uint8_t*, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egconstructEncryptor2", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pEncryptSecret0' to native representation
	uint8_t* ____pEncryptSecret0_marshaled = NULL;
	if (___pEncryptSecret0 != NULL)
	{
		____pEncryptSecret0_marshaled = reinterpret_cast<uint8_t*>((___pEncryptSecret0)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___pHMACSecret1' to native representation
	uint8_t* ____pHMACSecret1_marshaled = NULL;
	if (___pHMACSecret1 != NULL)
	{
		____pHMACSecret1_marshaled = reinterpret_cast<uint8_t*>((___pHMACSecret1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(egconstructEncryptor2)(____pEncryptSecret0_marshaled, ____pHMACSecret1_marshaled, ___chainingMode2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____pEncryptSecret0_marshaled, ____pHMACSecret1_marshaled, ___chainingMode2);
	#endif

	return returnValue;
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egdestructEncryptor2(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egdestructEncryptor2_m667CA293DEF296BFC04BF970B3F4EE7BFEA75A66 (intptr_t ___pEncryptor0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egdestructEncryptor2", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(egdestructEncryptor2)(___pEncryptor0);
	#else
	il2cppPInvokeFunc(___pEncryptor0);
	#endif

}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egencrypt2(System.IntPtr,System.Byte[],System.Int32,System.Byte[],System.Byte[],System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egencrypt2_m964A7503A1797FFC0211E55E26BE8176A6DBA5E6 (intptr_t ___pEncryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pIn1, int32_t ___inSize2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pHeader3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pOut4, int32_t ___outOffset5, int32_t* ___outSize6, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, uint8_t*, uint8_t*, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(void*) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egencrypt2", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pIn1' to native representation
	uint8_t* ____pIn1_marshaled = NULL;
	if (___pIn1 != NULL)
	{
		____pIn1_marshaled = reinterpret_cast<uint8_t*>((___pIn1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___pHeader3' to native representation
	uint8_t* ____pHeader3_marshaled = NULL;
	if (___pHeader3 != NULL)
	{
		____pHeader3_marshaled = reinterpret_cast<uint8_t*>((___pHeader3)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___pOut4' to native representation
	uint8_t* ____pOut4_marshaled = NULL;
	if (___pOut4 != NULL)
	{
		____pOut4_marshaled = reinterpret_cast<uint8_t*>((___pOut4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(egencrypt2)(___pEncryptor0, ____pIn1_marshaled, ___inSize2, ____pHeader3_marshaled, ____pOut4_marshaled, ___outOffset5, ___outSize6);
	#else
	il2cppPInvokeFunc(___pEncryptor0, ____pIn1_marshaled, ___inSize2, ____pHeader3_marshaled, ____pOut4_marshaled, ___outOffset5, ___outSize6);
	#endif

}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egdecrypt2(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egdecrypt2_m8D11C47A6BCD90C1C93A5753F2F290A6167ADC2F (intptr_t ___pEncryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pIn1, int32_t ___inSize2, int32_t ___inOffset3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pHeader4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pOut5, int32_t* ___outSize6, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, uint8_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egdecrypt2", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pIn1' to native representation
	uint8_t* ____pIn1_marshaled = NULL;
	if (___pIn1 != NULL)
	{
		____pIn1_marshaled = reinterpret_cast<uint8_t*>((___pIn1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___pHeader4' to native representation
	uint8_t* ____pHeader4_marshaled = NULL;
	if (___pHeader4 != NULL)
	{
		____pHeader4_marshaled = reinterpret_cast<uint8_t*>((___pHeader4)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___pOut5' to native representation
	uint8_t* ____pOut5_marshaled = NULL;
	if (___pOut5 != NULL)
	{
		____pOut5_marshaled = reinterpret_cast<uint8_t*>((___pOut5)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(egdecrypt2)(___pEncryptor0, ____pIn1_marshaled, ___inSize2, ___inOffset3, ____pHeader4_marshaled, ____pOut5_marshaled, ___outSize6);
	#else
	il2cppPInvokeFunc(___pEncryptor0, ____pIn1_marshaled, ___inSize2, ___inOffset3, ____pHeader4_marshaled, ____pOut5_marshaled, ___outSize6);
	#endif

}
// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNative::egcalculateEncryptedSize(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncryptorNative_egcalculateEncryptedSize_m0877B95FB6150FEFF14112961686A3172BE5FC13 (intptr_t ___pEncryptor0, int32_t ___unencryptedSize1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egcalculateEncryptedSize", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egcalculateEncryptedSize)(___pEncryptor0, ___unencryptedSize1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pEncryptor0, ___unencryptedSize1);
	#endif

	return returnValue;
}
// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNative::egcalculateFragmentLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncryptorNative_egcalculateFragmentLength_m994A13DBA529A0BD789B76FA5B67E038E1F82640 (intptr_t ___pEncryptor0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egcalculateFragmentLength", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egcalculateFragmentLength)(___pEncryptor0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pEncryptor0);
	#endif

	return returnValue;
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::egsetEncryptorLoggingCallback(System.IntPtr,ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_egsetEncryptorLoggingCallback_m04DFAA5ECFD90AC1E3A76A221DB992AAA247701C (intptr_t ___userData0, LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* ___callback1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egsetEncryptorLoggingCallback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(egsetEncryptorLoggingCallback)(___userData0, ____callback1_marshaled);
	#else
	il2cppPInvokeFunc(___userData0, ____callback1_marshaled);
	#endif

}
// System.Boolean ExitGames.Client.Photon.Encryption.EncryptorNative::egsetEncryptorLoggingLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EncryptorNative_egsetEncryptorLoggingLevel_m592E2590A0153F956DF1D1DA0FBE32E7032B46BE (int32_t ___level0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonEncryptorPlugin"), "egsetEncryptorLoggingLevel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonEncryptorPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egsetEncryptorLoggingLevel)(___level0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___level0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_Finalize_m2FC8EBF92FFBE5D6E01DB86F0CBB56631EA1238F (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			EncryptorNative_Dispose_mDD474757E874AAE0ABA2DD5670FCB91EFA83F160(__this, (bool)0, NULL);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::OnNativeLog(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_OnNativeLog_mF789D066763D9F5D5684DBA29A9DF074EFBFBEBD (intptr_t ___userData0, int32_t ___debugLevel1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CAC0E89F582C12F00FAE58FC662A28C5C85A49E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___debugLevel1;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_0047;
			}
			case 4:
			{
				goto IL_0047;
			}
		}
	}
	{
		goto IL_005a;
	}

IL_0021:
	{
		String_t* L_3 = ___message2;
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3CAC0E89F582C12F00FAE58FC662A28C5C85A49E, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_4, NULL);
		goto IL_005a;
	}

IL_0034:
	{
		String_t* L_5 = ___message2;
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3CAC0E89F582C12F00FAE58FC662A28C5C85A49E, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_6, NULL);
		goto IL_005a;
	}

IL_0047:
	{
		String_t* L_7 = ___message2;
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3CAC0E89F582C12F00FAE58FC662A28C5C85A49E, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_8, NULL);
		goto IL_005a;
	}

IL_005a:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::Init(System.Byte[],System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_Init_mFA0B1EF9B57DE411AA72B1E42D4E78BF5CD832BA (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encryptionSecret0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hmacSecret1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ivBytes2, bool ___chainingModeGCM3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptorNative_OnNativeLog_mF789D066763D9F5D5684DBA29A9DF074EFBFBEBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_1 = NULL;
	EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* G_B2_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_1 = NULL;
	EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_2 = NULL;
	EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* G_B3_3 = NULL;
	{
		LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* L_0 = (LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913*)il2cpp_codegen_object_new(LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallbackDelegate__ctor_m452F55663DA176EB51E2E16F8C94C6C322D96BD9(L_0, NULL, (intptr_t)((void*)EncryptorNative_OnNativeLog_mF789D066763D9F5D5684DBA29A9DF074EFBFBEBD_RuntimeMethod_var), NULL);
		EncryptorNative_egsetEncryptorLoggingCallback_m04DFAA5ECFD90AC1E3A76A221DB992AAA247701C((0), L_0, NULL);
		bool L_1;
		L_1 = EncryptorNative_egsetEncryptorLoggingLevel_m592E2590A0153F956DF1D1DA0FBE32E7032B46BE(1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___encryptionSecret0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___hmacSecret1;
		bool L_4 = ___chainingModeGCM3;
		G_B1_0 = L_3;
		G_B1_1 = L_2;
		G_B1_2 = __this;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_2;
			G_B2_2 = __this;
			goto IL_0029;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_002a:
	{
		intptr_t L_5;
		L_5 = EncryptorNative_egconstructEncryptor2_mC56AF6EB4CE8A1175E0BC8A5517666E643982CEF(G_B3_2, G_B3_1, G_B3_0, NULL);
		NullCheck(G_B3_3);
		G_B3_3->___encryptor_1 = L_5;
		return;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_Dispose_m20393E70F15FBA987AFE2FCF3D5FD0867A7FB6A6 (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EncryptorNative_Dispose_mDD474757E874AAE0ABA2DD5670FCB91EFA83F160(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_Dispose_mDD474757E874AAE0ABA2DD5670FCB91EFA83F160 (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, bool ___dispose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->___encryptor_1;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->___encryptor_1;
		EncryptorNative_egdestructEncryptor2_m667CA293DEF296BFC04BF970B3F4EE7BFEA75A66(L_3, NULL);
		__this->___encryptor_1 = (0);
	}

IL_002e:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::Encrypt2(System.Byte[],System.Int32,System.Byte[],System.Byte[],System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative_Encrypt2_mBA1DF356FFAE0BAC03C286CE9457C7D658D59077 (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___len1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___header2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output3, int32_t ___outOffset4, int32_t* ___outSize5, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___encryptor_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		int32_t L_2 = ___len1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___header2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output3;
		int32_t L_5 = ___outOffset4;
		int32_t* L_6 = ___outSize5;
		EncryptorNative_egencrypt2_m964A7503A1797FFC0211E55E26BE8176A6DBA5E6(L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Byte[] ExitGames.Client.Photon.Encryption.EncryptorNative::Decrypt2(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncryptorNative_Decrypt2_mC88F3A90DE38A688AC75487C9DC60F4D2487A69A (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___len2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___header3, int32_t* ___outLen4, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		int32_t* L_0 = ___outLen4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		NullCheck(L_1);
		*((int32_t*)L_0) = (int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length));
		intptr_t L_2 = __this->___encryptor_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___data0;
		int32_t L_4 = ___len2;
		int32_t L_5 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___header3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___data0;
		int32_t* L_8 = ___outLen4;
		EncryptorNative_egdecrypt2_m8D11C47A6BCD90C1C93A5753F2F290A6167ADC2F(L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___data0;
		V_0 = L_9;
		goto IL_001f;
	}

IL_001f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		return L_10;
	}
}
// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNative::CalculateEncryptedSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncryptorNative_CalculateEncryptedSize_m0EF198BCE6570B7A90304B60505BE16AFDCE75E1 (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, int32_t ___unencryptedSize0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		intptr_t L_0 = __this->___encryptor_1;
		int32_t L_1 = ___unencryptedSize0;
		int32_t L_2;
		L_2 = EncryptorNative_egcalculateEncryptedSize_m0877B95FB6150FEFF14112961686A3172BE5FC13(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNative::CalculateFragmentLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncryptorNative_CalculateFragmentLength_mB267429EEE88296D3E126D5848751CCA053B9C06 (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		intptr_t L_0 = __this->___encryptor_1;
		int32_t L_1;
		L_1 = EncryptorNative_egcalculateFragmentLength_m994A13DBA529A0BD789B76FA5B67E038E1F82640(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptorNative__ctor_m021D66E62997DA345BB611363FE26B3980B7D031 (EncryptorNative_t8D9BB59D41E9E6B1E99B7BFD2B554C331C1EA1A0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_Multicast(LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* currentDelegate = reinterpret_cast<LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___userData0, ___level1, ___msg2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_OpenInst(LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___userData0, ___level1, ___msg2, method);
}
void LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_OpenStatic(LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___userData0, ___level1, ___msg2, method);
}
void LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_OpenStaticInvoker(LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___userData0, ___level1, ___msg2);
}
void LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_ClosedStaticInvoker(LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___userData0, ___level1, ___msg2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913 (LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___userData0, ___level1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate__ctor_m452F55663DA176EB51E2E16F8C94C6C322D96BD9 (LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9_Multicast;
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::Invoke(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_Invoke_m1967505AB9EA4C8FB5BBD53A9AEEC2CA571446E9 (LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___userData0, ___level1, ___msg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::BeginInvoke(System.IntPtr,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogCallbackDelegate_BeginInvoke_m5AA2200017A6E67ED58BAD46203280CD43D121EF (LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___userData0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___level1);
	__d_args[2] = ___msg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_EndInvoke_m8729E1E731210AF4956DEB5C966C777E937306F8 (LogCallbackDelegate_t55FC2ABBD5034B9839AB24FABC56739FC8365913* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider__ctor_mB0961B8367CE25888BF77E12A5515AA595EDA392 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime768_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		memset((&L_1), 0, sizeof(L_1));
		BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371((&L_1), L_0, /*hidden argument*/NULL);
		__this->___prime_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___prime_1))->____bits_1), (void*)NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = DiffieHellmanCryptoProvider_GenerateRandomSecret_m95C657C24D2F7F6F92C09F47AA10484D40ABA311(__this, ((int32_t)160), NULL);
		__this->___secret_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___secret_2))->____bits_1), (void*)NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = DiffieHellmanCryptoProvider_CalculatePublicKey_m148C933BC2BD188C70D0A089CF87E936CF401E21(__this, NULL);
		__this->___publicKey_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___publicKey_3))->____bits_1), (void*)NULL);
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider__ctor_m2183C5CD4BEB69F1E9024E5D2F6355DF37497A91 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cryptoKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* L_0 = (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39*)il2cpp_codegen_object_new(RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RijndaelManaged__ctor_mACBA07A36FCD3FE3858C4B1FBBC57D7CBB7109C7(L_0, NULL);
		__this->___crypto_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crypto_4), (void*)L_0);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_1 = __this->___crypto_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___cryptoKey0;
		NullCheck(L_1);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(13 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_1, L_2);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_3 = __this->___crypto_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		NullCheck(L_3);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_3, L_4);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_5 = __this->___crypto_4;
		NullCheck(L_5);
		VirtualActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_5, 2);
		return;
	}
}
// System.Boolean Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DiffieHellmanCryptoProvider_get_IsInitialized_mD0B968B7E8EE6F90B0E6CFA2132227230C05922A (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_0 = __this->___crypto_4;
		V_0 = (bool)((!(((RuntimeObject*)(Rijndael_t282661761E53E282457A31F5675ACF53D64EE807*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_PublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_get_PublicKey_m6835C493E240517B934D3ECD1B0B0AE5B693F6F0 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) 
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___publicKey_3;
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = BigInteger_ToByteArray_mC501D315AF605FB0EF172628E9D4C95D2F015EB3((&V_0), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = DiffieHellmanCryptoProvider_MsBigIntArrayToPhotonBigIntArray_mCC22AF1882F123D3F9F3B8834F8E463E56EE90F6(__this, L_1, NULL);
		V_1 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		return L_3;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::DeriveSharedKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_DeriveSharedKey_m8FB84859C4CB3A1F2CED2562DF55FBD014568646 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___otherPartyPublicKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___otherPartyPublicKey0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = DiffieHellmanCryptoProvider_PhotonBigIntArrayToMsBigIntArray_m82C648C9548C183CC8CC62C590E510CFED2FC1B8(__this, L_0, NULL);
		___otherPartyPublicKey0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___otherPartyPublicKey0;
		BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371((&V_0), L_2, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3 = V_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = DiffieHellmanCryptoProvider_CalculateSharedKey_mBD63B81C33804F448AECC08D2C838D3757B61116(__this, L_3, NULL);
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = BigInteger_ToByteArray_mC501D315AF605FB0EF172628E9D4C95D2F015EB3((&V_1), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = DiffieHellmanCryptoProvider_MsBigIntArrayToPhotonBigIntArray_mCC22AF1882F123D3F9F3B8834F8E463E56EE90F6(__this, L_5, NULL);
		__this->___sharedKey_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sharedKey_5), (void*)L_6);
		SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C* L_7 = (SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C*)il2cpp_codegen_object_new(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		SHA256Managed__ctor_mB95C91954ECF9E74B133ABC3BC72FAE4D5BF9B4F(L_7, NULL);
		V_3 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_8 = V_3;
					if (!L_8)
					{
						goto IL_004e;
					}
				}
				{
					SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_9 = V_3;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_004e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_10 = V_3;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___sharedKey_5;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
			L_12 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_10, L_11, NULL);
			V_2 = L_12;
			goto IL_004f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* L_13 = (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39*)il2cpp_codegen_object_new(RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		RijndaelManaged__ctor_mACBA07A36FCD3FE3858C4B1FBBC57D7CBB7109C7(L_13, NULL);
		__this->___crypto_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crypto_4), (void*)L_13);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_14 = __this->___crypto_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_14);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(13 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_14, L_15);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_16 = __this->___crypto_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		NullCheck(L_16);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_16, L_17);
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_18 = __this->___crypto_4;
		NullCheck(L_18);
		VirtualActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_18, 2);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::PhotonBigIntArrayToMsBigIntArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_PhotonBigIntArrayToMsBigIntArray_m82C648C9548C183CC8CC62C590E510CFED2FC1B8 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		Array_Reverse_m33655BE7BBF2BE04AB16C27BD48F17F800B9A7F7((RuntimeArray*)L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___array0;
		NullCheck(L_2);
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_4&((int32_t)128)))) == ((int32_t)((int32_t)128)))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___array0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1)));
		V_1 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___array0;
		NullCheck(L_10);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, ((int32_t)(((RuntimeArray*)L_10)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		V_2 = L_11;
		goto IL_0041;
	}

IL_003d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___array0;
		V_2 = L_12;
		goto IL_0041;
	}

IL_0041:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		return L_13;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::MsBigIntArrayToPhotonBigIntArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_MsBigIntArrayToPhotonBigIntArray_mCC22AF1882F123D3F9F3B8834F8E463E56EE90F6 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		Array_Reverse_m33655BE7BBF2BE04AB16C27BD48F17F800B9A7F7((RuntimeArray*)L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___array0;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1)));
		V_1 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___array0;
		NullCheck(L_9);
		Buffer_BlockCopy_mD8CF7EC96ADA7A542CCA3F3C73510624E10197A9((RuntimeArray*)L_7, 1, (RuntimeArray*)L_8, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), 1)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		V_2 = L_10;
		goto IL_0035;
	}

IL_0031:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___array0;
		V_2 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_2;
		return L_12;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_Encrypt_m689D6880215872C908E41D72CC671A8FF002387F (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = DiffieHellmanCryptoProvider_Encrypt_m2FE785BD6C29653FA2E50ADE2D63DC3CCCC2A563(__this, L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_Encrypt_m2FE785BD6C29653FA2E50ADE2D63DC3CCCC2A563 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_0 = __this->___crypto_4;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(22 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor() */, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0024;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0024:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data0;
			int32_t L_6 = ___offset1;
			int32_t L_7 = ___count2;
			NullCheck(L_4);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7);
			V_1 = L_8;
			goto IL_0025;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0025:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		return L_9;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Decrypt(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_Decrypt_m13C9340640F30DDAF4AA2F8B6456A70DE7B07800 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = DiffieHellmanCryptoProvider_Decrypt_mE867D145E9EC7B883E6A512D7E51DE1F429925A3(__this, L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Decrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProvider_Decrypt_mE867D145E9EC7B883E6A512D7E51DE1F429925A3 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* L_0 = __this->___crypto_4;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(24 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor() */, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0024;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0024:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data0;
			int32_t L_6 = ___offset1;
			int32_t L_7 = ___count2;
			NullCheck(L_4);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7);
			V_1 = L_8;
			goto IL_0025;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0025:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		return L_9;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_mF87C3E8E916083DDAE4F1696E0CE8A1662F1B71F (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DiffieHellmanCryptoProvider_Dispose_m272B6C274E95DE4862C6B4B0FF36D9B995F0B8B1(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_m272B6C274E95DE4862C6B4B0FF36D9B995F0B8B1 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = ___disposing0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		return;
	}
}
// System.Numerics.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F DiffieHellmanCryptoProvider_CalculatePublicKey_m148C933BC2BD188C70D0A089CF87E936CF401E21 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ((DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_StaticFields*)il2cpp_codegen_static_fields_for(DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var))->___primeRoot_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = __this->___secret_2;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = __this->___prime_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_ModPow_mDC564B0C06A25246B75133C640D6A1C6F85EA112(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = V_0;
		return L_4;
	}
}
// System.Numerics.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F DiffieHellmanCryptoProvider_CalculateSharedKey_mBD63B81C33804F448AECC08D2C838D3757B61116 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___otherPartyPublicKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___otherPartyPublicKey0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = __this->___secret_2;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = __this->___prime_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_ModPow_mDC564B0C06A25246B75133C640D6A1C6F85EA112(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = V_0;
		return L_4;
	}
}
// System.Numerics.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F DiffieHellmanCryptoProvider_GenerateRandomSecret_m95C657C24D2F7F6F92C09F47AA10484D40ABA311 (DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517* __this, int32_t ___secretLength0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B4_0 = 0;
	{
		RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* L_0 = (RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170*)il2cpp_codegen_object_new(RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RNGCryptoServiceProvider__ctor_m605146E692C0209B3FFE83F7AC94335CA089CA09(L_0, NULL);
		V_1 = L_0;
		int32_t L_1 = ___secretLength0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_1/8)));
		V_2 = L_2;
	}

IL_0010:
	{
		RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_2;
		NullCheck(L_3);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_3, L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_2;
		BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371((&V_0), L_5, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6 = V_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7 = __this->___prime_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_8;
		L_8 = BigInteger_op_Implicit_m727B3C507042A16CD36B63DA4D1B66D66EA1ED73(1, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9;
		L_9 = BigInteger_op_Subtraction_m34372D07D2CAE48629B8E0768A6655576F02A075(L_7, L_8, NULL);
		bool L_10;
		L_10 = BigInteger_op_GreaterThanOrEqual_mF378EAE0DF2E78D3A9A1DF8C8795986655365E46(L_6, L_9, NULL);
		if (L_10)
		{
			goto IL_0045;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = BigInteger_op_LessThan_m1E0EF64800B210466A473C6852B37E54636A1973(L_11, ((int64_t)2), NULL);
		G_B4_0 = ((int32_t)(L_12));
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_3 = (bool)G_B4_0;
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_0010;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_14 = V_0;
		V_4 = L_14;
		goto IL_004f;
	}

IL_004f:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_15 = V_4;
		return L_15;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider__cctor_m04380EEC1668A3C9CABEE52AEB8C7BB85A9F9646 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___Generator_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		memset((&L_1), 0, sizeof(L_1));
		BigInteger__ctor_mFEDEDA4A6AFC2BA534FEEF4EB3431B9C5AC3F9D9((&L_1), L_0, /*hidden argument*/NULL);
		((DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_StaticFields*)il2cpp_codegen_static_fields_for(DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var))->___primeRoot_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&((DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_StaticFields*)il2cpp_codegen_static_fields_for(DiffieHellmanCryptoProvider_tB8125911540E29466B775B8A136C2FCD24790517_il2cpp_TypeInfo_var))->___primeRoot_0))->____bits_1), (void*)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DiffieHellmanCryptoProviderNative_egCryptorCreate_m17D0BFA5DFD181AA82501C0AF1436AC09E12F1A9 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorCreate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorCreate)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorPublicKey(System.IntPtr,System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorPublicKey_m68EA65FF458F521635FF4EC5AE66387EC5EB08F8 (intptr_t ___cryptor0, intptr_t* ___key1, int32_t* ___keySize2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorPublicKey", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorPublicKey)(___cryptor0, ___key1, ___keySize2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cryptor0, ___key1, ___keySize2);
	#endif

	return returnValue;
}
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDeriveSharedKey(System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorDeriveSharedKey_m5586AD606260F5141F3AC439098519F44EFB529F (intptr_t ___cryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___serverPublicKey1, int32_t ___keySize2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorDeriveSharedKey", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___serverPublicKey1' to native representation
	uint8_t* ____serverPublicKey1_marshaled = NULL;
	if (___serverPublicKey1 != NULL)
	{
		____serverPublicKey1_marshaled = reinterpret_cast<uint8_t*>((___serverPublicKey1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorDeriveSharedKey)(___cryptor0, ____serverPublicKey1_marshaled, ___keySize2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cryptor0, ____serverPublicKey1_marshaled, ___keySize2);
	#endif

	return returnValue;
}
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorEncrypt(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorEncrypt_mDC8512C19FD13974ABEB6A23C969CB08A0049F64 (intptr_t ___cryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___plainData1, int32_t ___plainDataOffset2, int32_t ___plainDataSize3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKeyHash4, intptr_t* ___encodedData5, int32_t* ___encodedDataSize6, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, intptr_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(intptr_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorEncrypt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___plainData1' to native representation
	uint8_t* ____plainData1_marshaled = NULL;
	if (___plainData1 != NULL)
	{
		____plainData1_marshaled = reinterpret_cast<uint8_t*>((___plainData1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___sharedKeyHash4' to native representation
	uint8_t* ____sharedKeyHash4_marshaled = NULL;
	if (___sharedKeyHash4 != NULL)
	{
		____sharedKeyHash4_marshaled = reinterpret_cast<uint8_t*>((___sharedKeyHash4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorEncrypt)(___cryptor0, ____plainData1_marshaled, ___plainDataOffset2, ___plainDataSize3, ____sharedKeyHash4_marshaled, ___encodedData5, ___encodedDataSize6);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cryptor0, ____plainData1_marshaled, ___plainDataOffset2, ___plainDataSize3, ____sharedKeyHash4_marshaled, ___encodedData5, ___encodedDataSize6);
	#endif

	return returnValue;
}
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDecrypt(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorDecrypt_m473EBE94702065CBA6C6405E7B72D4B9D48E0085 (intptr_t ___cryptor0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encodedData1, int32_t ___encodedDataOffset2, int32_t ___encodedDataSize3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKeyHash4, intptr_t* ___plainData5, int32_t* ___plainDataSize6, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, intptr_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(intptr_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorDecrypt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___encodedData1' to native representation
	uint8_t* ____encodedData1_marshaled = NULL;
	if (___encodedData1 != NULL)
	{
		____encodedData1_marshaled = reinterpret_cast<uint8_t*>((___encodedData1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___sharedKeyHash4' to native representation
	uint8_t* ____sharedKeyHash4_marshaled = NULL;
	if (___sharedKeyHash4 != NULL)
	{
		____sharedKeyHash4_marshaled = reinterpret_cast<uint8_t*>((___sharedKeyHash4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorDecrypt)(___cryptor0, ____encodedData1_marshaled, ___encodedDataOffset2, ___encodedDataSize3, ____sharedKeyHash4_marshaled, ___plainData5, ___plainDataSize6);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cryptor0, ____encodedData1_marshaled, ___encodedDataOffset2, ___encodedDataSize3, ____sharedKeyHash4_marshaled, ___plainData5, ___plainDataSize6);
	#endif

	return returnValue;
}
// System.Boolean Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorIsEncryptionAvailable(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DiffieHellmanCryptoProviderNative_egCryptorIsEncryptionAvailable_m22A5234BE0EBBCF1EE82E21F20616CED8EFDA54B (intptr_t ___cryptor0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorIsEncryptionAvailable", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorIsEncryptionAvailable)(___cryptor0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cryptor0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_egCryptorDispose_mC79AB5F12B3EE23BDF28D93907113190D210B85B (intptr_t ___cryptor0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorDispose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonCryptoPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(egCryptorDispose)(___cryptor0);
	#else
	il2cppPInvokeFunc(___cryptor0);
	#endif

}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative__ctor_mBD08D87430C43103482A94798B7BC11BF8B15BD3 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0;
		L_0 = DiffieHellmanCryptoProviderNative_egCryptorCreate_m17D0BFA5DFD181AA82501C0AF1436AC09E12F1A9(NULL);
		__this->___cryptor_0 = L_0;
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative__ctor_m96D8C73732EB7CFE196DC01D45D1934E659E971E (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sharedKeyHash0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___sharedKeyHash0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA5E96470B64DD3DB50F2E9C79034F94898F64537)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DiffieHellmanCryptoProviderNative__ctor_m96D8C73732EB7CFE196DC01D45D1934E659E971E_RuntimeMethod_var)));
	}

IL_001c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___sharedKeyHash0;
		__this->___sharedKeyHash_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sharedKeyHash_1), (void*)L_3);
		return;
	}
}
// System.Boolean Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DiffieHellmanCryptoProviderNative_get_IsInitialized_m741F9BE41BC93B515A7DC12C59D2E49DB57D9C81 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___sharedKeyHash_1;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		intptr_t L_1 = __this->___cryptor_0;
		bool L_2;
		L_2 = DiffieHellmanCryptoProviderNative_egCryptorIsEncryptionAvailable_m22A5234BE0EBBCF1EE82E21F20616CED8EFDA54B(L_1, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::get_PublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProviderNative_get_PublicKey_m491036EBAE985F11D5DFB638897C40BC17B57B66 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___sharedKeyHash_1;
		V_3 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9AFEBAB5E371E8B24466D4A2FBB943F2E675545)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DiffieHellmanCryptoProviderNative_get_PublicKey_m491036EBAE985F11D5DFB638897C40BC17B57B66_RuntimeMethod_var)));
	}

IL_001a:
	{
		intptr_t L_3 = __this->___cryptor_0;
		int32_t L_4;
		L_4 = DiffieHellmanCryptoProviderNative_egCryptorPublicKey_m68EA65FF458F521635FF4EC5AE66387EC5EB08F8(L_3, (&V_0), (&V_1), NULL);
		int32_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_2 = L_6;
		intptr_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_2;
		int32_t L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E(L_7, L_8, 0, L_9, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		V_4 = L_10;
		goto IL_0040;
	}

IL_0040:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_4;
		return L_11;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::DeriveSharedKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_DeriveSharedKey_mECB771F095B062C9A043C5FDE0FC366995136915 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___otherPartyPublicKey0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___sharedKeyHash_1;
		V_0 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C674C434602F2C350E8DEC293E708D4CC2CE339)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DiffieHellmanCryptoProviderNative_DeriveSharedKey_mECB771F095B062C9A043C5FDE0FC366995136915_RuntimeMethod_var)));
	}

IL_001a:
	{
		intptr_t L_3 = __this->___cryptor_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___otherPartyPublicKey0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___otherPartyPublicKey0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = DiffieHellmanCryptoProviderNative_egCryptorDeriveSharedKey_m5586AD606260F5141F3AC439098519F44EFB529F(L_3, L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Encrypt(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProviderNative_Encrypt_mA17D764F64B8DA184ED22F85BD58F3C469D52D10 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = DiffieHellmanCryptoProviderNative_Encrypt_m5B3F30527EF804357E7A914DBD9C2589AF222BA6(__this, L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Encrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProviderNative_Encrypt_m5B3F30527EF804357E7A914DBD9C2589AF222BA6 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		intptr_t L_0 = __this->___cryptor_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___sharedKeyHash_1;
		int32_t L_5;
		L_5 = DiffieHellmanCryptoProviderNative_egCryptorEncrypt_mDC8512C19FD13974ABEB6A23C969CB08A0049F64(L_0, L_1, L_2, L_3, L_4, (&V_0), (&V_1), NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_3 = L_8;
		intptr_t L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_3;
		int32_t L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E(L_9, L_10, 0, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_3;
		V_4 = L_12;
		goto IL_003d;
	}

IL_0037:
	{
		V_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		goto IL_003d;
	}

IL_003d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_4;
		return L_13;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Decrypt(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProviderNative_Decrypt_m8E6673122E73A0B7E181B07F875E8C22055F3AE4 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = DiffieHellmanCryptoProviderNative_Decrypt_m5361BC3B147ECE265B2E13C2F433F7E0318BCA88(__this, L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Decrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiffieHellmanCryptoProviderNative_Decrypt_m5361BC3B147ECE265B2E13C2F433F7E0318BCA88 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		intptr_t L_0 = __this->___cryptor_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___sharedKeyHash_1;
		int32_t L_5;
		L_5 = DiffieHellmanCryptoProviderNative_egCryptorDecrypt_m473EBE94702065CBA6C6405E7B72D4B9D48E0085(L_0, L_1, L_2, L_3, L_4, (&V_0), (&V_1), NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_3 = L_8;
		intptr_t L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_3;
		int32_t L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E(L_9, L_10, 0, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_3;
		V_4 = L_12;
		goto IL_003d;
	}

IL_0037:
	{
		V_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		goto IL_003d;
	}

IL_003d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_4;
		return L_13;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_Dispose_m21967A478B1791DB161FEEA6826EC3795D0D4F8E (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DiffieHellmanCryptoProviderNative_Dispose_m8996FBEDD15D70F410496F234B60F1EF9E54EAB2(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_Dispose_m8996FBEDD15D70F410496F234B60F1EF9E54EAB2 (DiffieHellmanCryptoProviderNative_t4AFEC92F96D5DB38BDAB9FB26623DED616A24479* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = ___disposing0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		intptr_t L_2 = __this->___cryptor_0;
		V_1 = (bool)1;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		intptr_t L_4 = __this->___cryptor_0;
		DiffieHellmanCryptoProviderNative_egCryptorDispose_mC79AB5F12B3EE23BDF28D93907113190D210B85B(L_4, NULL);
	}

IL_0021:
	{
	}

IL_0022:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.SocketServer.Security.OakleyGroups::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OakleyGroups__cctor_mC076CFEC327B41095A69D70A3F03A7272D5B2CB2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____1D920AA24CC00C3B7BBC1397D39DE20128DDED0DC4FB04967ED4959F99075D69_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_6_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___Generator_0 = ((int32_t)22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)97));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____1D920AA24CC00C3B7BBC1397D39DE20128DDED0DC4FB04967ED4959F99075D69_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime768_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime768_1), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_4, L_5, NULL);
		((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime1024_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime1024_2), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)192));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_7, L_8, NULL);
		((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime1536_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t9D8FE3BEF9AB22E897869B4AF990EF7432B2C1A8_il2cpp_TypeInfo_var))->___OakleyPrime1536_3), (void*)L_7);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___data_2 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___data_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)L_0);
		__this->___dataLength_3 = 1;
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B17_0 = 0;
	{
		__this->___data_2 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___data_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)L_0);
		int64_t L_1 = ___value0;
		V_0 = L_1;
		__this->___dataLength_3 = 0;
		goto IL_004f;
	}

IL_0027:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___data_2;
		int32_t L_3 = __this->___dataLength_3;
		int64_t L_4 = ___value0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)((int32_t)(uint32_t)((int64_t)(L_4&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		int64_t L_5 = ___value0;
		___value0 = ((int64_t)(L_5>>((int32_t)32)));
		int32_t L_6 = __this->___dataLength_3;
		__this->___dataLength_3 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_004f:
	{
		int64_t L_7 = ___value0;
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_8 = __this->___dataLength_3;
		G_B5_0 = ((((int32_t)L_8) < ((int32_t)((int32_t)70)))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B5_0 = 0;
	}

IL_005f:
	{
		V_1 = (bool)G_B5_0;
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0027;
		}
	}
	{
		int64_t L_10 = V_0;
		V_2 = (bool)((((int64_t)L_10) > ((int64_t)((int64_t)0)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0097;
		}
	}
	{
		int64_t L_12 = ___value0;
		if (L_12)
		{
			goto IL_0084;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = __this->___data_2;
		NullCheck(L_13);
		int32_t L_14 = ((int32_t)69);
		uint32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		G_B10_0 = ((!(((uint32_t)((int32_t)((int32_t)L_15&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0085;
	}

IL_0084:
	{
		G_B10_0 = 1;
	}

IL_0085:
	{
		V_3 = (bool)G_B10_0;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0094;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_17 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3D0E5DBBF3FB8346802EC002475FE7C208CD28AD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64_RuntimeMethod_var)));
	}

IL_0094:
	{
		goto IL_00d5;
	}

IL_0097:
	{
		int64_t L_18 = V_0;
		V_4 = (bool)((((int64_t)L_18) < ((int64_t)((int64_t)0)))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_00d5;
		}
	}
	{
		int64_t L_20 = ___value0;
		if ((!(((uint64_t)L_20) == ((uint64_t)((int64_t)(-1))))))
		{
			goto IL_00c2;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = __this->___data_2;
		int32_t L_22 = __this->___dataLength_3;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		G_B17_0 = ((((int32_t)((int32_t)((int32_t)L_24&((int32_t)-2147483648LL)))) == ((int32_t)0))? 1 : 0);
		goto IL_00c3;
	}

IL_00c2:
	{
		G_B17_0 = 1;
	}

IL_00c3:
	{
		V_5 = (bool)G_B17_0;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00d4;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_26 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FD880CA5D311C1C431BD0CB104456E35EF84148)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64_RuntimeMethod_var)));
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		int32_t L_27 = __this->___dataLength_3;
		V_6 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_00eb;
		}
	}
	{
		__this->___dataLength_3 = 1;
	}

IL_00eb:
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m875CE004B9AE5B62C28C4AA139F62027FB0422EF (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B9_0 = 0;
	{
		__this->___data_2 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___data_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)L_0);
		__this->___dataLength_3 = 0;
		goto IL_004d;
	}

IL_0025:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___data_2;
		int32_t L_2 = __this->___dataLength_3;
		uint64_t L_3 = ___value0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_3&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		uint64_t L_4 = ___value0;
		___value0 = ((int64_t)((uint64_t)L_4>>((int32_t)32)));
		int32_t L_5 = __this->___dataLength_3;
		__this->___dataLength_3 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_004d:
	{
		uint64_t L_6 = ___value0;
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = __this->___dataLength_3;
		G_B5_0 = ((((int32_t)L_7) < ((int32_t)((int32_t)70)))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B5_0 = 0;
	}

IL_005d:
	{
		V_0 = (bool)G_B5_0;
		bool L_8 = V_0;
		if (L_8)
		{
			goto IL_0025;
		}
	}
	{
		uint64_t L_9 = ___value0;
		if (L_9)
		{
			goto IL_0078;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___data_2;
		NullCheck(L_10);
		int32_t L_11 = ((int32_t)69);
		uint32_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		G_B9_0 = ((!(((uint32_t)((int32_t)((int32_t)L_12&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0079;
	}

IL_0078:
	{
		G_B9_0 = 1;
	}

IL_0079:
	{
		V_1 = (bool)G_B9_0;
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_0088;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_14 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3D0E5DBBF3FB8346802EC002475FE7C208CD28AD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_m875CE004B9AE5B62C28C4AA139F62027FB0422EF_RuntimeMethod_var)));
	}

IL_0088:
	{
		int32_t L_15 = __this->___dataLength_3;
		V_2 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		__this->___dataLength_3 = 1;
	}

IL_009c:
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		__this->___data_2 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___data_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)L_0);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___bi0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___dataLength_3;
		__this->___dataLength_3 = L_2;
		V_0 = 0;
		goto IL_0040;
	}

IL_002c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___data_2;
		int32_t L_4 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = ___bi0;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_2;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint32_t)L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___dataLength_3;
		V_1 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_1;
		if (L_13)
		{
			goto IL_002c;
		}
	}
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m3367C113DAF52BD63DBDFD251C80496E0D289F5C (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, String_t* ___value0, int32_t ___radix1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B11_0 = 0;
	{
		__this->___data_2 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64(L_0, ((int64_t)1), NULL);
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_1, NULL);
		V_1 = L_1;
		String_t* L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_3, NULL);
		___value0 = L_4;
		V_2 = 0;
		String_t* L_5 = ___value0;
		NullCheck(L_5);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, 0, NULL);
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)45)))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		V_2 = 1;
	}

IL_003d:
	{
		String_t* L_8 = ___value0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_010c;
	}

IL_004c:
	{
		String_t* L_10 = ___value0;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, L_11, NULL);
		V_5 = L_12;
		int32_t L_13 = V_5;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)48))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_14 = V_5;
		G_B6_0 = ((((int32_t)((((int32_t)L_14) > ((int32_t)((int32_t)57)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0069;
	}

IL_0068:
	{
		G_B6_0 = 0;
	}

IL_0069:
	{
		V_6 = (bool)G_B6_0;
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_16 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)48)));
		goto IL_00a3;
	}

IL_0078:
	{
		int32_t L_17 = V_5;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)65))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_18 = V_5;
		G_B11_0 = ((((int32_t)((((int32_t)L_18) > ((int32_t)((int32_t)90)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_008a;
	}

IL_0089:
	{
		G_B11_0 = 0;
	}

IL_008a:
	{
		V_7 = (bool)G_B11_0;
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_20 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_20, ((int32_t)65))), ((int32_t)10)));
		goto IL_00a3;
	}

IL_009c:
	{
		V_5 = ((int32_t)9999999);
	}

IL_00a3:
	{
		int32_t L_21 = V_5;
		int32_t L_22 = ___radix1;
		V_8 = (bool)((((int32_t)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_00bc;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_24 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_24);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral55F382C39F1E1109801BCD818996B4A8109B4266)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_m3367C113DAF52BD63DBDFD251C80496E0D289F5C_RuntimeMethod_var)));
	}

IL_00bc:
	{
		String_t* L_25 = ___value0;
		NullCheck(L_25);
		Il2CppChar L_26;
		L_26 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_25, 0, NULL);
		V_9 = (bool)((((int32_t)L_26) == ((int32_t)((int32_t)45)))? 1 : 0);
		bool L_27 = V_9;
		if (!L_27)
		{
			goto IL_00d3;
		}
	}
	{
		int32_t L_28 = V_5;
		V_5 = ((-L_28));
	}

IL_00d3:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = V_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_30 = V_0;
		int32_t L_31 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32;
		L_32 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(L_31, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33;
		L_33 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_30, L_32, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34;
		L_34 = BigInteger_op_Addition_m530E1AD8E6D64195B4645033819D2A24B764C237(L_29, L_33, NULL);
		V_1 = L_34;
		int32_t L_35 = V_4;
		int32_t L_36 = V_2;
		V_10 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_35, 1))) < ((int32_t)L_36))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0104;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_38 = V_0;
		int32_t L_39 = ___radix1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40;
		L_40 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(L_39, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_41;
		L_41 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_38, L_40, NULL);
		V_0 = L_41;
	}

IL_0104:
	{
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_010c:
	{
		int32_t L_43 = V_4;
		int32_t L_44 = V_2;
		V_11 = (bool)((((int32_t)((((int32_t)L_43) < ((int32_t)L_44))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_11;
		if (L_45)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_46 = ___value0;
		NullCheck(L_46);
		Il2CppChar L_47;
		L_47 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_46, 0, NULL);
		V_12 = (bool)((((int32_t)L_47) == ((int32_t)((int32_t)45)))? 1 : 0);
		bool L_48 = V_12;
		if (!L_48)
		{
			goto IL_0155;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_49 = V_1;
		NullCheck(L_49);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = L_49->___data_2;
		NullCheck(L_50);
		int32_t L_51 = ((int32_t)69);
		uint32_t L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_13 = (bool)((((int32_t)((int32_t)((int32_t)L_52&((int32_t)-2147483648LL)))) == ((int32_t)0))? 1 : 0);
		bool L_53 = V_13;
		if (!L_53)
		{
			goto IL_0152;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_54 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_54);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_54, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FD880CA5D311C1C431BD0CB104456E35EF84148)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_m3367C113DAF52BD63DBDFD251C80496E0D289F5C_RuntimeMethod_var)));
	}

IL_0152:
	{
		goto IL_017a;
	}

IL_0155:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_55 = V_1;
		NullCheck(L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = L_55->___data_2;
		NullCheck(L_56);
		int32_t L_57 = ((int32_t)69);
		uint32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_14 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_58&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_59 = V_14;
		if (!L_59)
		{
			goto IL_0179;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_60 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_60);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_60, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3D0E5DBBF3FB8346802EC002475FE7C208CD28AD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_60, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_m3367C113DAF52BD63DBDFD251C80496E0D289F5C_RuntimeMethod_var)));
	}

IL_0179:
	{
	}

IL_017a:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___data_2 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)L_61);
		V_15 = 0;
		goto IL_01a4;
	}

IL_018c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = __this->___data_2;
		int32_t L_63 = V_15;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_64 = V_1;
		NullCheck(L_64);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = L_64->___data_2;
		int32_t L_66 = V_15;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		uint32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (uint32_t)L_68);
		int32_t L_69 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_01a4:
	{
		int32_t L_70 = V_15;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_71 = V_1;
		NullCheck(L_71);
		int32_t L_72 = L_71->___dataLength_3;
		V_16 = (bool)((((int32_t)L_70) < ((int32_t)L_72))? 1 : 0);
		bool L_73 = V_16;
		if (L_73)
		{
			goto IL_018c;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_74 = V_1;
		NullCheck(L_74);
		int32_t L_75 = L_74->___dataLength_3;
		__this->___dataLength_3 = L_75;
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m3B37C425E83F9F09CDD537BFC764E768BCCC52A9 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B18_0 = 0;
	{
		__this->___data_2 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___inData0;
		NullCheck(L_0);
		__this->___dataLength_3 = ((int32_t)(((int32_t)(((RuntimeArray*)L_0)->max_length))>>2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___inData0;
		NullCheck(L_1);
		V_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_1)->max_length))&3));
		int32_t L_2 = V_0;
		V_1 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_4 = __this->___dataLength_3;
		__this->___dataLength_3 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0036:
	{
		int32_t L_5 = __this->___dataLength_3;
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_7 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral074D22CAAED9BC0505D91A9D389B998630D9E693)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_m3B37C425E83F9F09CDD537BFC764E768BCCC52A9_RuntimeMethod_var)));
	}

IL_004f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___data_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___inData0;
		NullCheck(L_9);
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), 1));
		V_4 = 0;
		goto IL_0099;
	}

IL_0067:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___data_2;
		int32_t L_11 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___inData0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___inData0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract(L_17, 2));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___inData0;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___inData0;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_15<<((int32_t)24))), ((int32_t)((int32_t)L_19<<((int32_t)16))))), ((int32_t)((int32_t)L_23<<8)))), (int32_t)L_27)));
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_28, 4));
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0099:
	{
		int32_t L_30 = V_3;
		V_5 = (bool)((((int32_t)((((int32_t)L_30) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_5;
		if (L_31)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_32 = V_0;
		V_6 = (bool)((((int32_t)L_32) == ((int32_t)1))? 1 : 0);
		bool L_33 = V_6;
		if (!L_33)
		{
			goto IL_00c4;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = __this->___data_2;
		int32_t L_35 = __this->___dataLength_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___inData0;
		NullCheck(L_36);
		int32_t L_37 = 0;
		uint8_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_35, 1))), (uint32_t)L_38);
		goto IL_0111;
	}

IL_00c4:
	{
		int32_t L_39 = V_0;
		V_7 = (bool)((((int32_t)L_39) == ((int32_t)2))? 1 : 0);
		bool L_40 = V_7;
		if (!L_40)
		{
			goto IL_00e8;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = __this->___data_2;
		int32_t L_42 = __this->___dataLength_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___inData0;
		NullCheck(L_43);
		int32_t L_44 = 0;
		uint8_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___inData0;
		NullCheck(L_46);
		int32_t L_47 = 1;
		uint8_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_42, 1))), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_45<<8)), (int32_t)L_48)));
		goto IL_0111;
	}

IL_00e8:
	{
		int32_t L_49 = V_0;
		V_8 = (bool)((((int32_t)L_49) == ((int32_t)3))? 1 : 0);
		bool L_50 = V_8;
		if (!L_50)
		{
			goto IL_0111;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = __this->___data_2;
		int32_t L_52 = __this->___dataLength_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ___inData0;
		NullCheck(L_53);
		int32_t L_54 = 0;
		uint8_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___inData0;
		NullCheck(L_56);
		int32_t L_57 = 1;
		uint8_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = ___inData0;
		NullCheck(L_59);
		int32_t L_60 = 2;
		uint8_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_52, 1))), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_55<<((int32_t)16))), ((int32_t)((int32_t)L_58<<8)))), (int32_t)L_61)));
	}

IL_0111:
	{
		goto IL_0121;
	}

IL_0113:
	{
		int32_t L_62 = __this->___dataLength_3;
		__this->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_62, 1));
	}

IL_0121:
	{
		int32_t L_63 = __this->___dataLength_3;
		if ((((int32_t)L_63) <= ((int32_t)1)))
		{
			goto IL_013e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = __this->___data_2;
		int32_t L_65 = __this->___dataLength_3;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
		uint32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		G_B18_0 = ((((int32_t)L_67) == ((int32_t)0))? 1 : 0);
		goto IL_013f;
	}

IL_013e:
	{
		G_B18_0 = 0;
	}

IL_013f:
	{
		V_9 = (bool)G_B18_0;
		bool L_68 = V_9;
		if (L_68)
		{
			goto IL_0113;
		}
	}
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m6F11E40726FC618FAB5D9008FBEF6E1EA3207C9A (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inData0, int32_t ___inLen1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B23_0 = 0;
	{
		__this->___data_2 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___inLen1;
		__this->___dataLength_3 = ((int32_t)(L_0>>2));
		int32_t L_1 = ___inLen1;
		V_0 = ((int32_t)(L_1&3));
		int32_t L_2 = V_0;
		V_1 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_4 = __this->___dataLength_3;
		__this->___dataLength_3 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0032:
	{
		int32_t L_5 = __this->___dataLength_3;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)70))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_6 = ___inLen1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___inData0;
		NullCheck(L_7);
		G_B5_0 = ((((int32_t)L_6) > ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B5_0 = 1;
	}

IL_0045:
	{
		V_2 = (bool)G_B5_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_9 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral074D22CAAED9BC0505D91A9D389B998630D9E693)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_m6F11E40726FC618FAB5D9008FBEF6E1EA3207C9A_RuntimeMethod_var)));
	}

IL_0054:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___data_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)L_10);
		int32_t L_11 = ___inLen1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		V_4 = 0;
		goto IL_009c;
	}

IL_006a:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = __this->___data_2;
		int32_t L_13 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___inData0;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, 3));
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___inData0;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(L_19, 2));
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___inData0;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___inData0;
		int32_t L_27 = V_3;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		uint8_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_17<<((int32_t)24))), ((int32_t)((int32_t)L_21<<((int32_t)16))))), ((int32_t)((int32_t)L_25<<8)))), (int32_t)L_29)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_30, 4));
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_009c:
	{
		int32_t L_32 = V_3;
		V_5 = (bool)((((int32_t)((((int32_t)L_32) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_5;
		if (L_33)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_34 = V_0;
		V_6 = (bool)((((int32_t)L_34) == ((int32_t)1))? 1 : 0);
		bool L_35 = V_6;
		if (!L_35)
		{
			goto IL_00c7;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = __this->___data_2;
		int32_t L_37 = __this->___dataLength_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___inData0;
		NullCheck(L_38);
		int32_t L_39 = 0;
		uint8_t L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_37, 1))), (uint32_t)L_40);
		goto IL_0114;
	}

IL_00c7:
	{
		int32_t L_41 = V_0;
		V_7 = (bool)((((int32_t)L_41) == ((int32_t)2))? 1 : 0);
		bool L_42 = V_7;
		if (!L_42)
		{
			goto IL_00eb;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = __this->___data_2;
		int32_t L_44 = __this->___dataLength_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = ___inData0;
		NullCheck(L_45);
		int32_t L_46 = 0;
		uint8_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ___inData0;
		NullCheck(L_48);
		int32_t L_49 = 1;
		uint8_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_44, 1))), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_47<<8)), (int32_t)L_50)));
		goto IL_0114;
	}

IL_00eb:
	{
		int32_t L_51 = V_0;
		V_8 = (bool)((((int32_t)L_51) == ((int32_t)3))? 1 : 0);
		bool L_52 = V_8;
		if (!L_52)
		{
			goto IL_0114;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = __this->___data_2;
		int32_t L_54 = __this->___dataLength_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = ___inData0;
		NullCheck(L_55);
		int32_t L_56 = 0;
		uint8_t L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = ___inData0;
		NullCheck(L_58);
		int32_t L_59 = 1;
		uint8_t L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = ___inData0;
		NullCheck(L_61);
		int32_t L_62 = 2;
		uint8_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_54, 1))), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_57<<((int32_t)16))), ((int32_t)((int32_t)L_60<<8)))), (int32_t)L_63)));
	}

IL_0114:
	{
		int32_t L_64 = __this->___dataLength_3;
		V_9 = (bool)((((int32_t)L_64) == ((int32_t)0))? 1 : 0);
		bool L_65 = V_9;
		if (!L_65)
		{
			goto IL_012a;
		}
	}
	{
		__this->___dataLength_3 = 1;
	}

IL_012a:
	{
		goto IL_013a;
	}

IL_012c:
	{
		int32_t L_66 = __this->___dataLength_3;
		__this->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
	}

IL_013a:
	{
		int32_t L_67 = __this->___dataLength_3;
		if ((((int32_t)L_67) <= ((int32_t)1)))
		{
			goto IL_0157;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = __this->___data_2;
		int32_t L_69 = __this->___dataLength_3;
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)il2cpp_codegen_subtract(L_69, 1));
		uint32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		G_B23_0 = ((((int32_t)L_71) == ((int32_t)0))? 1 : 0);
		goto IL_0158;
	}

IL_0157:
	{
		G_B23_0 = 0;
	}

IL_0158:
	{
		V_10 = (bool)G_B23_0;
		bool L_72 = V_10;
		if (L_72)
		{
			goto IL_012c;
		}
	}
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m5054EE528124CBCE64654DA6C962554ACF727343 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___inData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B10_0 = 0;
	{
		__this->___data_2 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___inData0;
		NullCheck(L_0);
		__this->___dataLength_3 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = __this->___dataLength_3;
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_3 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral074D22CAAED9BC0505D91A9D389B998630D9E693)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger__ctor_m5054EE528124CBCE64654DA6C962554ACF727343_RuntimeMethod_var)));
	}

IL_0031:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___data_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_2), (void*)L_4);
		int32_t L_5 = __this->___dataLength_3;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		V_2 = 0;
		goto IL_005e;
	}

IL_004b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->___data_2;
		int32_t L_7 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___inData0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint32_t)L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005e:
	{
		int32_t L_14 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_14) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0079;
	}

IL_006b:
	{
		int32_t L_16 = __this->___dataLength_3;
		__this->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0079:
	{
		int32_t L_17 = __this->___dataLength_3;
		if ((((int32_t)L_17) <= ((int32_t)1)))
		{
			goto IL_0096;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = __this->___data_2;
		int32_t L_19 = __this->___dataLength_3;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		G_B10_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_0097;
	}

IL_0096:
	{
		G_B10_0 = 0;
	}

IL_0097:
	{
		V_4 = (bool)G_B10_0;
		bool L_22 = V_4;
		if (L_22)
		{
			goto IL_006b;
		}
	}
	{
		return;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Implicit_m62A9E398786981AEBDAE4BB3F2EF702FADD15CA3 (int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	{
		int64_t L_0 = ___value0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		return L_2;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Implicit_m50F46EE2BBE4A698B7D7DB009199B46076EB9FFB (uint64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	{
		uint64_t L_0 = ___value0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_m875CE004B9AE5B62C28C4AA139F62027FB0422EF(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		return L_2;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	{
		int32_t L_0 = ___value0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64(L_1, ((int64_t)L_0), NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		return L_2;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Implicit_m5C9DBFAFF5C3DC43EC8D3B4D3E422665C3BAE339 (uint32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	{
		uint32_t L_0 = ___value0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_m875CE004B9AE5B62C28C4AA139F62027FB0422EF(L_1, ((int64_t)(uint64_t)L_0), NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		return L_2;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Addition(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Addition_m530E1AD8E6D64195B4645033819D2A24B764C237 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_9 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B2_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B3_1 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B20_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_0, NULL);
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = ___bi10;
		NullCheck(L_2);
		int32_t L_3 = L_2->___dataLength_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = ___bi21;
		NullCheck(L_4);
		int32_t L_5 = L_4->___dataLength_3;
		G_B1_0 = L_1;
		if ((((int32_t)L_3) > ((int32_t)L_5)))
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_6 = ___bi21;
		NullCheck(L_6);
		int32_t L_7 = L_6->___dataLength_3;
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_001e:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = ___bi10;
		NullCheck(L_8);
		int32_t L_9 = L_8->___dataLength_3;
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		NullCheck(G_B3_1);
		G_B3_1->___dataLength_3 = G_B3_0;
		V_1 = ((int64_t)0);
		V_3 = 0;
		goto IL_0061;
	}

IL_0030:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10 = ___bi10;
		NullCheck(L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___data_2;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15 = ___bi21;
		NullCheck(L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15->___data_2;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int64_t L_20 = V_1;
		V_4 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_14), ((int64_t)(uint64_t)L_19))), L_20));
		int64_t L_21 = V_4;
		V_1 = ((int64_t)(L_21>>((int32_t)32)));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = V_0;
		NullCheck(L_22);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = L_22->___data_2;
		int32_t L_24 = V_3;
		int64_t L_25 = V_4;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint32_t)((int32_t)(uint32_t)((int64_t)(L_25&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0061:
	{
		int32_t L_27 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->___dataLength_3;
		V_5 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_5;
		if (L_30)
		{
			goto IL_0030;
		}
	}
	{
		int64_t L_31 = V_1;
		if (!L_31)
		{
			goto IL_007f;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = L_32->___dataLength_3;
		G_B9_0 = ((((int32_t)L_33) < ((int32_t)((int32_t)70)))? 1 : 0);
		goto IL_0080;
	}

IL_007f:
	{
		G_B9_0 = 0;
	}

IL_0080:
	{
		V_6 = (bool)G_B9_0;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_00a5;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_35 = V_0;
		NullCheck(L_35);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = L_35->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38 = L_37->___dataLength_3;
		int64_t L_39 = V_1;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint32_t)((int32_t)(uint32_t)L_39));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_41 = L_40;
		NullCheck(L_41);
		int32_t L_42 = L_41->___dataLength_3;
		NullCheck(L_41);
		L_41->___dataLength_3 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00a5:
	{
		goto IL_00b5;
	}

IL_00a7:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_43 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_44 = L_43;
		NullCheck(L_44);
		int32_t L_45 = L_44->___dataLength_3;
		NullCheck(L_44);
		L_44->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
	}

IL_00b5:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = V_0;
		NullCheck(L_46);
		int32_t L_47 = L_46->___dataLength_3;
		if ((((int32_t)L_47) <= ((int32_t)1)))
		{
			goto IL_00d2;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = V_0;
		NullCheck(L_48);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = L_48->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_50 = V_0;
		NullCheck(L_50);
		int32_t L_51 = L_50->___dataLength_3;
		NullCheck(L_49);
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
		uint32_t L_53 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		G_B16_0 = ((((int32_t)L_53) == ((int32_t)0))? 1 : 0);
		goto IL_00d3;
	}

IL_00d2:
	{
		G_B16_0 = 0;
	}

IL_00d3:
	{
		V_7 = (bool)G_B16_0;
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_00a7;
		}
	}
	{
		V_2 = ((int32_t)69);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_55 = ___bi10;
		NullCheck(L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = L_55->___data_2;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_60 = ___bi21;
		NullCheck(L_60);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = L_60->___data_2;
		int32_t L_62 = V_2;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		uint32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		if ((!(((uint32_t)((int32_t)((int32_t)L_59&((int32_t)-2147483648LL)))) == ((uint32_t)((int32_t)((int32_t)L_64&((int32_t)-2147483648LL)))))))
		{
			goto IL_011d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_65 = V_0;
		NullCheck(L_65);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = L_65->___data_2;
		int32_t L_67 = V_2;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_70 = ___bi10;
		NullCheck(L_70);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = L_70->___data_2;
		int32_t L_72 = V_2;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		G_B20_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_69&((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_74&((int32_t)-2147483648LL)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B20_0 = 0;
	}

IL_011e:
	{
		V_8 = (bool)G_B20_0;
		bool L_75 = V_8;
		if (!L_75)
		{
			goto IL_012b;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_76 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_76);
		ArithmeticException__ctor_m1CD22804E6929CDFBE5CB651FCE80C0C668D3FB0(L_76, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_76, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Addition_m530E1AD8E6D64195B4645033819D2A24B764C237_RuntimeMethod_var)));
	}

IL_012b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_77 = V_0;
		V_9 = L_77;
		goto IL_0130;
	}

IL_0130:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_78 = V_9;
		return L_78;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Increment(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Increment_m0B307D465B5F4377E1B42F2BC6B34F60DCDEB47B (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_9 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3(L_1, L_0, NULL);
		V_0 = L_1;
		V_2 = ((int64_t)1);
		V_3 = 0;
		goto IL_0036;
	}

IL_000f:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		NullCheck(L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2->___data_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = ((int64_t)(uint64_t)L_6);
		int64_t L_7 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_7, ((int64_t)1)));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = V_0;
		NullCheck(L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___data_2;
		int32_t L_10 = V_3;
		int64_t L_11 = V_1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)((int64_t)(L_11&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		int64_t L_12 = V_1;
		V_2 = ((int64_t)(L_12>>((int32_t)32)));
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0036:
	{
		int64_t L_14 = V_2;
		if (!L_14)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_15 = V_3;
		G_B5_0 = ((((int32_t)L_15) < ((int32_t)((int32_t)70)))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B5_0 = 0;
	}

IL_0041:
	{
		V_5 = (bool)G_B5_0;
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_17 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = L_18->___dataLength_3;
		V_6 = (bool)((((int32_t)L_17) > ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_005f;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = V_0;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		L_21->___dataLength_3 = L_22;
		goto IL_0095;
	}

IL_005f:
	{
		goto IL_0070;
	}

IL_0062:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_23 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = L_23;
		NullCheck(L_24);
		int32_t L_25 = L_24->___dataLength_3;
		NullCheck(L_24);
		L_24->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
	}

IL_0070:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = L_26->___dataLength_3;
		if ((((int32_t)L_27) <= ((int32_t)1)))
		{
			goto IL_008d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = V_0;
		NullCheck(L_28);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = L_28->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31 = L_30->___dataLength_3;
		NullCheck(L_29);
		int32_t L_32 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		uint32_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		G_B13_0 = ((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
		goto IL_008e;
	}

IL_008d:
	{
		G_B13_0 = 0;
	}

IL_008e:
	{
		V_7 = (bool)G_B13_0;
		bool L_34 = V_7;
		if (L_34)
		{
			goto IL_0062;
		}
	}
	{
	}

IL_0095:
	{
		V_4 = ((int32_t)69);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_35 = ___bi10;
		NullCheck(L_35);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = L_35->___data_2;
		int32_t L_37 = V_4;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		uint32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		if (((int32_t)((int32_t)L_39&((int32_t)-2147483648LL))))
		{
			goto IL_00cf;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_0;
		NullCheck(L_40);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = L_40->___data_2;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		uint32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_45 = ___bi10;
		NullCheck(L_45);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = L_45->___data_2;
		int32_t L_47 = V_4;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		uint32_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		G_B18_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_44&((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_49&((int32_t)-2147483648LL)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d0;
	}

IL_00cf:
	{
		G_B18_0 = 0;
	}

IL_00d0:
	{
		V_8 = (bool)G_B18_0;
		bool L_50 = V_8;
		if (!L_50)
		{
			goto IL_00e2;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_51 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_51);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_51, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8FB103804FD17212C338F3B05015F3C72602E6AF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Increment_m0B307D465B5F4377E1B42F2BC6B34F60DCDEB47B_RuntimeMethod_var)));
	}

IL_00e2:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_52 = V_0;
		V_9 = L_52;
		goto IL_00e7;
	}

IL_00e7:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_53 = V_9;
		return L_53;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Subtraction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_12 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B2_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B3_1 = NULL;
	int32_t G_B19_0 = 0;
	int32_t G_B23_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_0, NULL);
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = ___bi10;
		NullCheck(L_2);
		int32_t L_3 = L_2->___dataLength_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = ___bi21;
		NullCheck(L_4);
		int32_t L_5 = L_4->___dataLength_3;
		G_B1_0 = L_1;
		if ((((int32_t)L_3) > ((int32_t)L_5)))
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_6 = ___bi21;
		NullCheck(L_6);
		int32_t L_7 = L_6->___dataLength_3;
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_001e:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = ___bi10;
		NullCheck(L_8);
		int32_t L_9 = L_8->___dataLength_3;
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		NullCheck(G_B3_1);
		G_B3_1->___dataLength_3 = G_B3_0;
		V_1 = ((int64_t)0);
		V_3 = 0;
		goto IL_006f;
	}

IL_0030:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10 = ___bi10;
		NullCheck(L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___data_2;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15 = ___bi21;
		NullCheck(L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15->___data_2;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int64_t L_20 = V_1;
		V_4 = ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_14), ((int64_t)(uint64_t)L_19))), L_20));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = V_0;
		NullCheck(L_21);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = L_21->___data_2;
		int32_t L_23 = V_3;
		int64_t L_24 = V_4;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint32_t)((int32_t)(uint32_t)((int64_t)(L_24&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		int64_t L_25 = V_4;
		V_5 = (bool)((((int64_t)L_25) < ((int64_t)((int64_t)0)))? 1 : 0);
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_0067;
		}
	}
	{
		V_1 = ((int64_t)1);
		goto IL_006a;
	}

IL_0067:
	{
		V_1 = ((int64_t)0);
	}

IL_006a:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_006f:
	{
		int32_t L_28 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = L_29->___dataLength_3;
		V_6 = (bool)((((int32_t)L_28) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_6;
		if (L_31)
		{
			goto IL_0030;
		}
	}
	{
		int64_t L_32 = V_1;
		V_7 = (bool)((!(((uint64_t)L_32) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00b9;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34 = V_0;
		NullCheck(L_34);
		int32_t L_35 = L_34->___dataLength_3;
		V_8 = L_35;
		goto IL_00a4;
	}

IL_0094:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36 = V_0;
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___data_2;
		int32_t L_38 = V_8;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint32_t)(-1));
		int32_t L_39 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00a4:
	{
		int32_t L_40 = V_8;
		V_9 = (bool)((((int32_t)L_40) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_41 = V_9;
		if (L_41)
		{
			goto IL_0094;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_42 = V_0;
		NullCheck(L_42);
		L_42->___dataLength_3 = ((int32_t)70);
	}

IL_00b9:
	{
		goto IL_00c9;
	}

IL_00bb:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_43 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_44 = L_43;
		NullCheck(L_44);
		int32_t L_45 = L_44->___dataLength_3;
		NullCheck(L_44);
		L_44->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
	}

IL_00c9:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = V_0;
		NullCheck(L_46);
		int32_t L_47 = L_46->___dataLength_3;
		if ((((int32_t)L_47) <= ((int32_t)1)))
		{
			goto IL_00e6;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = V_0;
		NullCheck(L_48);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = L_48->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_50 = V_0;
		NullCheck(L_50);
		int32_t L_51 = L_50->___dataLength_3;
		NullCheck(L_49);
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
		uint32_t L_53 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		G_B19_0 = ((((int32_t)L_53) == ((int32_t)0))? 1 : 0);
		goto IL_00e7;
	}

IL_00e6:
	{
		G_B19_0 = 0;
	}

IL_00e7:
	{
		V_10 = (bool)G_B19_0;
		bool L_54 = V_10;
		if (L_54)
		{
			goto IL_00bb;
		}
	}
	{
		V_2 = ((int32_t)69);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_55 = ___bi10;
		NullCheck(L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = L_55->___data_2;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_60 = ___bi21;
		NullCheck(L_60);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = L_60->___data_2;
		int32_t L_62 = V_2;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		uint32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		if ((((int32_t)((int32_t)((int32_t)L_59&((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_64&((int32_t)-2147483648LL))))))
		{
			goto IL_0131;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_65 = V_0;
		NullCheck(L_65);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = L_65->___data_2;
		int32_t L_67 = V_2;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_70 = ___bi10;
		NullCheck(L_70);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = L_70->___data_2;
		int32_t L_72 = V_2;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		G_B23_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_69&((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_74&((int32_t)-2147483648LL)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0132;
	}

IL_0131:
	{
		G_B23_0 = 0;
	}

IL_0132:
	{
		V_11 = (bool)G_B23_0;
		bool L_75 = V_11;
		if (!L_75)
		{
			goto IL_013f;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_76 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_76);
		ArithmeticException__ctor_m1CD22804E6929CDFBE5CB651FCE80C0C668D3FB0(L_76, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_76, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7_RuntimeMethod_var)));
	}

IL_013f:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_77 = V_0;
		V_12 = L_77;
		goto IL_0144;
	}

IL_0144:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_78 = V_12;
		return L_78;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Decrement(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Decrement_m057D997DACCCB45E98B2AB32C6A4D7073A498E0B (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	int64_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_10 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B19_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3(L_1, L_0, NULL);
		V_0 = L_1;
		V_2 = (bool)1;
		V_3 = 0;
		goto IL_0040;
	}

IL_000e:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		NullCheck(L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2->___data_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = ((int64_t)(uint64_t)L_6);
		int64_t L_7 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_subtract(L_7, ((int64_t)1)));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = V_0;
		NullCheck(L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___data_2;
		int32_t L_10 = V_3;
		int64_t L_11 = V_1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)((int64_t)(L_11&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		int64_t L_12 = V_1;
		V_5 = (bool)((((int32_t)((((int64_t)L_12) < ((int64_t)((int64_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_003b;
		}
	}
	{
		V_2 = (bool)0;
	}

IL_003b:
	{
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0040:
	{
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_16 = V_3;
		G_B7_0 = ((((int32_t)L_16) < ((int32_t)((int32_t)70)))? 1 : 0);
		goto IL_004b;
	}

IL_004a:
	{
		G_B7_0 = 0;
	}

IL_004b:
	{
		V_6 = (bool)G_B7_0;
		bool L_17 = V_6;
		if (L_17)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_18 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = L_19->___dataLength_3;
		V_7 = (bool)((((int32_t)L_18) > ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = V_0;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		L_22->___dataLength_3 = L_23;
	}

IL_0067:
	{
		goto IL_0077;
	}

IL_0069:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_25 = L_24;
		NullCheck(L_25);
		int32_t L_26 = L_25->___dataLength_3;
		NullCheck(L_25);
		L_25->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
	}

IL_0077:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = L_27->___dataLength_3;
		if ((((int32_t)L_28) <= ((int32_t)1)))
		{
			goto IL_0094;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = V_0;
		NullCheck(L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = L_29->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = L_31->___dataLength_3;
		NullCheck(L_30);
		int32_t L_33 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		uint32_t L_34 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		G_B15_0 = ((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		goto IL_0095;
	}

IL_0094:
	{
		G_B15_0 = 0;
	}

IL_0095:
	{
		V_8 = (bool)G_B15_0;
		bool L_35 = V_8;
		if (L_35)
		{
			goto IL_0069;
		}
	}
	{
		V_4 = ((int32_t)69);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36 = ___bi10;
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___data_2;
		int32_t L_38 = V_4;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		if (!((int32_t)((int32_t)L_40&((int32_t)-2147483648LL))))
		{
			goto IL_00d5;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_41 = V_0;
		NullCheck(L_41);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = L_41->___data_2;
		int32_t L_43 = V_4;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		uint32_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = ___bi10;
		NullCheck(L_46);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = L_46->___data_2;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		uint32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		G_B19_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_45&((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_50&((int32_t)-2147483648LL)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d6;
	}

IL_00d5:
	{
		G_B19_0 = 0;
	}

IL_00d6:
	{
		V_9 = (bool)G_B19_0;
		bool L_51 = V_9;
		if (!L_51)
		{
			goto IL_00e8;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_52 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_52);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_52, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA1675DFBFC5732886C66DA31E108291B179069B3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_52, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Decrement_m057D997DACCCB45E98B2AB32C6A4D7073A498E0B_RuntimeMethod_var)));
	}

IL_00e8:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_53 = V_0;
		V_10 = L_53;
		goto IL_00ed;
	}

IL_00ed:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_54 = V_10;
		return L_54;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Multiply(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	uint64_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint64_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_20 = NULL;
	bool V_21 = false;
	int32_t V_22 = 0;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B28_0 = 0;
	int32_t G_B33_0 = 0;
	{
		V_0 = ((int32_t)69);
		V_1 = (bool)0;
		V_2 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
			NullCheck(L_0);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___data_2;
			int32_t L_2 = V_0;
			NullCheck(L_1);
			int32_t L_3 = L_2;
			uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
			V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_4&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
			bool L_5 = V_4;
			if (!L_5)
			{
				goto IL_002c_1;
			}
		}
		{
			V_1 = (bool)1;
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_6 = ___bi10;
			il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7;
			L_7 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_6, NULL);
			___bi10 = L_7;
		}

IL_002c_1:
		{
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = ___bi21;
			NullCheck(L_8);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___data_2;
			int32_t L_10 = V_0;
			NullCheck(L_9);
			int32_t L_11 = L_10;
			uint32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_12&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
			bool L_13 = V_5;
			if (!L_13)
			{
				goto IL_004f_1;
			}
		}
		{
			V_2 = (bool)1;
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_14 = ___bi21;
			il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15;
			L_15 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_14, NULL);
			___bi21 = L_15;
		}

IL_004f_1:
		{
			goto IL_0057;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Exception)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0057;
	}// end catch (depth: 1)

IL_0057:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_16, NULL);
		V_3 = L_16;
	}
	try
	{// begin try (depth: 1)
		{
			V_6 = 0;
			goto IL_010a_1;
		}

IL_0066_1:
		{
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = ___bi10;
			NullCheck(L_17);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___data_2;
			int32_t L_19 = V_6;
			NullCheck(L_18);
			int32_t L_20 = L_19;
			uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
			V_8 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
			bool L_22 = V_8;
			if (!L_22)
			{
				goto IL_007e_1;
			}
		}
		{
			goto IL_0104_1;
		}

IL_007e_1:
		{
			V_7 = ((int64_t)0);
			V_9 = 0;
			int32_t L_23 = V_6;
			V_10 = L_23;
			goto IL_00d4_1;
		}

IL_008b_1:
		{
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = ___bi10;
			NullCheck(L_24);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = L_24->___data_2;
			int32_t L_26 = V_6;
			NullCheck(L_25);
			int32_t L_27 = L_26;
			uint32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = ___bi21;
			NullCheck(L_29);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = L_29->___data_2;
			int32_t L_31 = V_9;
			NullCheck(L_30);
			int32_t L_32 = L_31;
			uint32_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34 = V_3;
			NullCheck(L_34);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = L_34->___data_2;
			int32_t L_36 = V_10;
			NullCheck(L_35);
			int32_t L_37 = L_36;
			uint32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
			uint64_t L_39 = V_7;
			V_11 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_28), ((int64_t)(uint64_t)L_33))), ((int64_t)(uint64_t)L_38))), (int64_t)L_39));
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_3;
			NullCheck(L_40);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = L_40->___data_2;
			int32_t L_42 = V_10;
			uint64_t L_43 = V_11;
			NullCheck(L_41);
			(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (uint32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_43&((int64_t)(uint64_t)((uint32_t)(-1)))))));
			uint64_t L_44 = V_11;
			V_7 = ((int64_t)((uint64_t)L_44>>((int32_t)32)));
			int32_t L_45 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
			int32_t L_46 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		}

IL_00d4_1:
		{
			int32_t L_47 = V_9;
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = ___bi21;
			NullCheck(L_48);
			int32_t L_49 = L_48->___dataLength_3;
			V_12 = (bool)((((int32_t)L_47) < ((int32_t)L_49))? 1 : 0);
			bool L_50 = V_12;
			if (L_50)
			{
				goto IL_008b_1;
			}
		}
		{
			uint64_t L_51 = V_7;
			V_13 = (bool)((!(((uint64_t)L_51) <= ((uint64_t)((int64_t)0))))? 1 : 0);
			bool L_52 = V_13;
			if (!L_52)
			{
				goto IL_0103_1;
			}
		}
		{
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_53 = V_3;
			NullCheck(L_53);
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = L_53->___data_2;
			int32_t L_55 = V_6;
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_56 = ___bi21;
			NullCheck(L_56);
			int32_t L_57 = L_56->___dataLength_3;
			uint64_t L_58 = V_7;
			NullCheck(L_54);
			(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_55, L_57))), (uint32_t)((int32_t)(uint32_t)L_58));
		}

IL_0103_1:
		{
		}

IL_0104_1:
		{
			int32_t L_59 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		}

IL_010a_1:
		{
			int32_t L_60 = V_6;
			BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_61 = ___bi10;
			NullCheck(L_61);
			int32_t L_62 = L_61->___dataLength_3;
			V_14 = (bool)((((int32_t)L_60) < ((int32_t)L_62))? 1 : 0);
			bool L_63 = V_14;
			if (L_63)
			{
				goto IL_0066_1;
			}
		}
		{
			goto IL_012d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0120;
		}
		throw e;
	}

CATCH_0120:
	{// begin catch(System.Exception)
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_64 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_64);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_64, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42DB72C446F339CA615722C0E834FE1D8D1AFB75)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_64, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_012d:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_65 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_66 = ___bi10;
		NullCheck(L_66);
		int32_t L_67 = L_66->___dataLength_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_68 = ___bi21;
		NullCheck(L_68);
		int32_t L_69 = L_68->___dataLength_3;
		NullCheck(L_65);
		L_65->___dataLength_3 = ((int32_t)il2cpp_codegen_add(L_67, L_69));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_70 = V_3;
		NullCheck(L_70);
		int32_t L_71 = L_70->___dataLength_3;
		V_15 = (bool)((((int32_t)L_71) > ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_72 = V_15;
		if (!L_72)
		{
			goto IL_0158;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_73 = V_3;
		NullCheck(L_73);
		L_73->___dataLength_3 = ((int32_t)70);
	}

IL_0158:
	{
		goto IL_0168;
	}

IL_015a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_74 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_75 = L_74;
		NullCheck(L_75);
		int32_t L_76 = L_75->___dataLength_3;
		NullCheck(L_75);
		L_75->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_76, 1));
	}

IL_0168:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_77 = V_3;
		NullCheck(L_77);
		int32_t L_78 = L_77->___dataLength_3;
		if ((((int32_t)L_78) <= ((int32_t)1)))
		{
			goto IL_0185;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_79 = V_3;
		NullCheck(L_79);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = L_79->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_81 = V_3;
		NullCheck(L_81);
		int32_t L_82 = L_81->___dataLength_3;
		NullCheck(L_80);
		int32_t L_83 = ((int32_t)il2cpp_codegen_subtract(L_82, 1));
		uint32_t L_84 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		G_B28_0 = ((((int32_t)L_84) == ((int32_t)0))? 1 : 0);
		goto IL_0186;
	}

IL_0185:
	{
		G_B28_0 = 0;
	}

IL_0186:
	{
		V_16 = (bool)G_B28_0;
		bool L_85 = V_16;
		if (L_85)
		{
			goto IL_015a;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_86 = V_3;
		NullCheck(L_86);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = L_86->___data_2;
		int32_t L_88 = V_0;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		V_17 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_90&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_91 = V_17;
		if (!L_91)
		{
			goto IL_022d;
		}
	}
	{
		bool L_92 = V_1;
		bool L_93 = V_2;
		if ((((int32_t)L_92) == ((int32_t)L_93)))
		{
			goto IL_01bc;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_94 = V_3;
		NullCheck(L_94);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = L_94->___data_2;
		int32_t L_96 = V_0;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		uint32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		G_B33_0 = ((((int32_t)L_98) == ((int32_t)((int32_t)-2147483648LL)))? 1 : 0);
		goto IL_01bd;
	}

IL_01bc:
	{
		G_B33_0 = 0;
	}

IL_01bd:
	{
		V_18 = (bool)G_B33_0;
		bool L_99 = V_18;
		if (!L_99)
		{
			goto IL_0222;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_100 = V_3;
		NullCheck(L_100);
		int32_t L_101 = L_100->___dataLength_3;
		V_19 = (bool)((((int32_t)L_101) == ((int32_t)1))? 1 : 0);
		bool L_102 = V_19;
		if (!L_102)
		{
			goto IL_01d8;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_103 = V_3;
		V_20 = L_103;
		goto IL_0249;
	}

IL_01d8:
	{
		V_21 = (bool)1;
		V_22 = 0;
		goto IL_01fe;
	}

IL_01e1:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_104 = V_3;
		NullCheck(L_104);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_105 = L_104->___data_2;
		int32_t L_106 = V_22;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		uint32_t L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_23 = (bool)((!(((uint32_t)L_108) <= ((uint32_t)0)))? 1 : 0);
		bool L_109 = V_23;
		if (!L_109)
		{
			goto IL_01f7;
		}
	}
	{
		V_21 = (bool)0;
	}

IL_01f7:
	{
		int32_t L_110 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_110, 1));
	}

IL_01fe:
	{
		int32_t L_111 = V_22;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_112 = V_3;
		NullCheck(L_112);
		int32_t L_113 = L_112->___dataLength_3;
		bool L_114 = V_21;
		V_24 = (bool)((int32_t)(((((int32_t)L_111) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, 1))))? 1 : 0)&(int32_t)L_114));
		bool L_115 = V_24;
		if (L_115)
		{
			goto IL_01e1;
		}
	}
	{
		bool L_116 = V_21;
		V_25 = L_116;
		bool L_117 = V_25;
		if (!L_117)
		{
			goto IL_0220;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_118 = V_3;
		V_20 = L_118;
		goto IL_0249;
	}

IL_0220:
	{
	}

IL_0222:
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_119 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_119);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_119, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42DB72C446F339CA615722C0E834FE1D8D1AFB75)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_119, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251_RuntimeMethod_var)));
	}

IL_022d:
	{
		bool L_120 = V_1;
		bool L_121 = V_2;
		V_26 = (bool)((((int32_t)((((int32_t)L_120) == ((int32_t)L_121))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_122 = V_26;
		if (!L_122)
		{
			goto IL_0244;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_123 = V_3;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_124;
		L_124 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_123, NULL);
		V_20 = L_124;
		goto IL_0249;
	}

IL_0244:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_125 = V_3;
		V_20 = L_125;
		goto IL_0249;
	}

IL_0249:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_126 = V_20;
		return L_126;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_LeftShift(Photon.SocketServer.Numeric.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_LeftShift_m52BF16486FF642F88B505336617A60F65F59836E (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3(L_1, L_0, NULL);
		V_0 = L_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3 = V_0;
		NullCheck(L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3->___data_2;
		int32_t L_5 = ___shiftVal1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = BigInteger_shiftLeft_m0034BAAB082A614E52BA019B3F475D43DD88C742(L_4, L_5, NULL);
		NullCheck(L_2);
		L_2->___dataLength_3 = L_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7 = V_0;
		V_1 = L_7;
		goto IL_001e;
	}

IL_001e:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = V_1;
		return L_8;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftLeft(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_shiftLeft_m0034BAAB082A614E52BA019B3F475D43DD88C742 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___buffer0, int32_t ___shiftVal1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint64_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	uint64_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = ((int32_t)32);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___buffer0;
		NullCheck(L_0);
		V_1 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		goto IL_000e;
	}

IL_000a:
	{
		int32_t L_1 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
	}

IL_000e:
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___buffer0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B5_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B5_0 = 0;
	}

IL_001d:
	{
		V_2 = (bool)G_B5_0;
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_8 = ___shiftVal1;
		V_3 = L_8;
		goto IL_00a2;
	}

IL_0025:
	{
		int32_t L_9 = V_3;
		int32_t L_10 = V_0;
		V_5 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_12 = V_3;
		V_0 = L_12;
	}

IL_0032:
	{
		V_4 = ((int64_t)0);
		V_6 = 0;
		goto IL_0067;
	}

IL_003b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___buffer0;
		int32_t L_14 = V_6;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = V_0;
		V_7 = ((int64_t)(((int64_t)(uint64_t)L_16)<<((int32_t)(L_17&((int32_t)63)))));
		uint64_t L_18 = V_7;
		uint64_t L_19 = V_4;
		V_7 = ((int64_t)((int64_t)L_18|(int64_t)L_19));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___buffer0;
		int32_t L_21 = V_6;
		uint64_t L_22 = V_7;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_22&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		uint64_t L_23 = V_7;
		V_4 = ((int64_t)((uint64_t)L_23>>((int32_t)32)));
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0067:
	{
		int32_t L_25 = V_6;
		int32_t L_26 = V_1;
		V_8 = (bool)((((int32_t)L_25) < ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_8;
		if (L_27)
		{
			goto IL_003b;
		}
	}
	{
		uint64_t L_28 = V_4;
		V_9 = (bool)((!(((uint64_t)L_28) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_30 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___buffer0;
		NullCheck(L_31);
		V_10 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_30, 1))) > ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_10;
		if (!L_32)
		{
			goto IL_009c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___buffer0;
		int32_t L_34 = V_1;
		uint64_t L_35 = V_4;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (uint32_t)((int32_t)(uint32_t)L_35));
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_009c:
	{
	}

IL_009d:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_37, L_38));
	}

IL_00a2:
	{
		int32_t L_39 = V_3;
		V_11 = (bool)((((int32_t)L_39) > ((int32_t)0))? 1 : 0);
		bool L_40 = V_11;
		if (L_40)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_41 = V_1;
		V_12 = L_41;
		goto IL_00b4;
	}

IL_00b4:
	{
		int32_t L_42 = V_12;
		return L_42;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_RightShift(Photon.SocketServer.Numeric.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_RightShift_mFF8501FDA582B6AD9771C141BCC7DC77ACD742F3 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	bool V_1 = false;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_8 = NULL;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3(L_1, L_0, NULL);
		V_0 = L_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3 = V_0;
		NullCheck(L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3->___data_2;
		int32_t L_5 = ___shiftVal1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = BigInteger_shiftRight_m191C98C28276C28DCFE1D31E0066FD7FA3D7837D(L_4, L_5, NULL);
		NullCheck(L_2);
		L_2->___dataLength_3 = L_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7 = ___bi10;
		NullCheck(L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = L_7->___data_2;
		NullCheck(L_8);
		int32_t L_9 = ((int32_t)69);
		uint32_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_10&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_00b8;
		}
	}
	{
		V_3 = ((int32_t)69);
		goto IL_0046;
	}

IL_0039:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = V_0;
		NullCheck(L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12->___data_2;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint32_t)(-1));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_0046:
	{
		int32_t L_16 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = L_17->___dataLength_3;
		V_4 = (bool)((((int32_t)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_4;
		if (L_19)
		{
			goto IL_0039;
		}
	}
	{
		V_2 = ((int32_t)-2147483648LL);
		V_5 = 0;
		goto IL_00a3;
	}

IL_0063:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_20 = V_0;
		NullCheck(L_20);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = L_20->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = L_22->___dataLength_3;
		NullCheck(L_21);
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		uint32_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		uint32_t L_26 = V_2;
		V_6 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_25&(int32_t)L_26))) <= ((uint32_t)0)))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_0080;
		}
	}
	{
		goto IL_00af;
	}

IL_0080:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = V_0;
		NullCheck(L_28);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = L_28->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31 = L_30->___dataLength_3;
		NullCheck(L_29);
		uint32_t* L_32 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_31, 1)))));
		int32_t L_33 = *((uint32_t*)L_32);
		uint32_t L_34 = V_2;
		*((int32_t*)L_32) = (int32_t)((int32_t)(L_33|(int32_t)L_34));
		uint32_t L_35 = V_2;
		V_2 = ((int32_t)((uint32_t)L_35>>1));
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00a3:
	{
		int32_t L_37 = V_5;
		V_7 = (bool)((((int32_t)L_37) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_38 = V_7;
		if (L_38)
		{
			goto IL_0063;
		}
	}

IL_00af:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_39 = V_0;
		NullCheck(L_39);
		L_39->___dataLength_3 = ((int32_t)70);
	}

IL_00b8:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_0;
		V_8 = L_40;
		goto IL_00bd;
	}

IL_00bd:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_41 = V_8;
		return L_41;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftRight(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_shiftRight_m191C98C28276C28DCFE1D31E0066FD7FA3D7837D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___buffer0, int32_t ___shiftVal1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	uint64_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B19_0 = 0;
	{
		V_0 = ((int32_t)32);
		V_1 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___buffer0;
		NullCheck(L_0);
		V_2 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		goto IL_0010;
	}

IL_000c:
	{
		int32_t L_1 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
	}

IL_0010:
	{
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___buffer0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B5_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B5_0 = 0;
	}

IL_001f:
	{
		V_3 = (bool)G_B5_0;
		bool L_7 = V_3;
		if (L_7)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_8 = ___shiftVal1;
		V_4 = L_8;
		goto IL_008c;
	}

IL_0028:
	{
		int32_t L_9 = V_4;
		int32_t L_10 = V_0;
		V_6 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_12 = V_4;
		V_0 = L_12;
		int32_t L_13 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_13));
	}

IL_003e:
	{
		V_5 = ((int64_t)0);
		int32_t L_14 = V_2;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_0077;
	}

IL_0049:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___buffer0;
		int32_t L_16 = V_7;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = V_0;
		V_8 = ((int64_t)((uint64_t)((int64_t)(uint64_t)L_18)>>((int32_t)(L_19&((int32_t)63)))));
		uint64_t L_20 = V_8;
		uint64_t L_21 = V_5;
		V_8 = ((int64_t)((int64_t)L_20|(int64_t)L_21));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___buffer0;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = V_1;
		V_5 = ((int64_t)(((int64_t)(uint64_t)L_25)<<((int32_t)(L_26&((int32_t)63)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___buffer0;
		int32_t L_28 = V_7;
		uint64_t L_29 = V_8;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (uint32_t)((int32_t)(uint32_t)L_29));
		int32_t L_30 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
	}

IL_0077:
	{
		int32_t L_31 = V_7;
		V_9 = (bool)((((int32_t)((((int32_t)L_31) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_9;
		if (L_32)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_33, L_34));
	}

IL_008c:
	{
		int32_t L_35 = V_4;
		V_10 = (bool)((((int32_t)L_35) > ((int32_t)0))? 1 : 0);
		bool L_36 = V_10;
		if (L_36)
		{
			goto IL_0028;
		}
	}
	{
		goto IL_009d;
	}

IL_0099:
	{
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
	}

IL_009d:
	{
		int32_t L_38 = V_2;
		if ((((int32_t)L_38) <= ((int32_t)1)))
		{
			goto IL_00ab;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___buffer0;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
		uint32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		G_B19_0 = ((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B19_0 = 0;
	}

IL_00ac:
	{
		V_11 = (bool)G_B19_0;
		bool L_43 = V_11;
		if (L_43)
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_44 = V_2;
		V_12 = L_44;
		goto IL_00b7;
	}

IL_00b7:
	{
		int32_t L_45 = V_12;
		return L_45;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_OnesComplement(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_OnesComplement_m4ACDC3D261B435BCE4C16EB95AB479C0B8029496 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_4 = NULL;
	int32_t G_B8_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3(L_1, L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0021;
	}

IL_000c:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		NullCheck(L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2->___data_2;
		int32_t L_4 = V_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = ___bi10;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_2;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint32_t)((~L_9)));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0021:
	{
		int32_t L_11 = V_1;
		V_2 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_000c;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_13 = V_0;
		NullCheck(L_13);
		L_13->___dataLength_3 = ((int32_t)70);
		goto IL_0042;
	}

IL_0034:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_14 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->___dataLength_3;
		NullCheck(L_15);
		L_15->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0042:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = L_17->___dataLength_3;
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_19 = V_0;
		NullCheck(L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = L_19->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = L_21->___dataLength_3;
		NullCheck(L_20);
		int32_t L_23 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		uint32_t L_24 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		G_B8_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B8_0 = 0;
	}

IL_0060:
	{
		V_3 = (bool)G_B8_0;
		bool L_25 = V_3;
		if (L_25)
		{
			goto IL_0034;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = V_0;
		V_4 = L_26;
		goto IL_0069;
	}

IL_0069:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = V_4;
		return L_27;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_UnaryNegation(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B21_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		NullCheck(L_0);
		int32_t L_1 = L_0->___dataLength_3;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = ___bi10;
		NullCheck(L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2->___data_2;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_4 = (bool)G_B3_0;
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_7, NULL);
		V_5 = L_7;
		goto IL_010c;
	}

IL_002a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3(L_9, L_8, NULL);
		V_0 = L_9;
		V_6 = 0;
		goto IL_004f;
	}

IL_0036:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10 = V_0;
		NullCheck(L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___data_2;
		int32_t L_12 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_13 = ___bi10;
		NullCheck(L_13);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13->___data_2;
		int32_t L_15 = V_6;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint32_t)((~L_17)));
		int32_t L_18 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004f:
	{
		int32_t L_19 = V_6;
		V_7 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_20 = V_7;
		if (L_20)
		{
			goto IL_0036;
		}
	}
	{
		V_2 = ((int64_t)1);
		V_3 = 0;
		goto IL_0089;
	}

IL_0062:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = V_0;
		NullCheck(L_21);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = L_21->___data_2;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_1 = ((int64_t)(uint64_t)L_25);
		int64_t L_26 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)1)));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = V_0;
		NullCheck(L_27);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = L_27->___data_2;
		int32_t L_29 = V_3;
		int64_t L_30 = V_1;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint32_t)((int32_t)(uint32_t)((int64_t)(L_30&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		int64_t L_31 = V_1;
		V_2 = ((int64_t)(L_31>>((int32_t)32)));
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0089:
	{
		int64_t L_33 = V_2;
		if (!L_33)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_34 = V_3;
		G_B13_0 = ((((int32_t)L_34) < ((int32_t)((int32_t)70)))? 1 : 0);
		goto IL_0094;
	}

IL_0093:
	{
		G_B13_0 = 0;
	}

IL_0094:
	{
		V_8 = (bool)G_B13_0;
		bool L_35 = V_8;
		if (L_35)
		{
			goto IL_0062;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36 = ___bi10;
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___data_2;
		NullCheck(L_37);
		int32_t L_38 = ((int32_t)69);
		uint32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_0;
		NullCheck(L_40);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = L_40->___data_2;
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)69);
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_9 = (bool)((((int32_t)((int32_t)((int32_t)L_39&((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_43&((int32_t)-2147483648LL)))))? 1 : 0);
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_00cb;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_45 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_45);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_45, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F35A290E0C52584695F3B0342580DAB07F7B8D3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09_RuntimeMethod_var)));
	}

IL_00cb:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = V_0;
		NullCheck(L_46);
		L_46->___dataLength_3 = ((int32_t)70);
		goto IL_00e3;
	}

IL_00d5:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_47 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = L_47;
		NullCheck(L_48);
		int32_t L_49 = L_48->___dataLength_3;
		NullCheck(L_48);
		L_48->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_49, 1));
	}

IL_00e3:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_50 = V_0;
		NullCheck(L_50);
		int32_t L_51 = L_50->___dataLength_3;
		if ((((int32_t)L_51) <= ((int32_t)1)))
		{
			goto IL_0100;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_52 = V_0;
		NullCheck(L_52);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = L_52->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = L_54->___dataLength_3;
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)il2cpp_codegen_subtract(L_55, 1));
		uint32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		G_B21_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0101;
	}

IL_0100:
	{
		G_B21_0 = 0;
	}

IL_0101:
	{
		V_10 = (bool)G_B21_0;
		bool L_58 = V_10;
		if (L_58)
		{
			goto IL_00d5;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_59 = V_0;
		V_5 = L_59;
		goto IL_010c;
	}

IL_010c:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_60 = V_5;
		return L_60;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Equality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_mFF395F5866F1B4E7BD78D208A3BEEF209DA7F861 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___bi21;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Inequality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_m2AF6EE02B7EE566B383DAB2CC09C9ACEF3C2635C (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___bi21;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_Equals_m8F9DCA3E1288A4EB9FC05739BB9BAF15031FFD40 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___o0;
		V_0 = ((BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)CastclassClass((RuntimeObject*)L_0, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var));
		int32_t L_1 = __this->___dataLength_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___dataLength_3;
		V_1 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_005d;
	}

IL_0021:
	{
		V_3 = 0;
		goto IL_004a;
	}

IL_0025:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___data_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9 = V_0;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___data_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0045;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_005d;
	}

IL_0045:
	{
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004a:
	{
		int32_t L_16 = V_3;
		int32_t L_17 = __this->___dataLength_3;
		V_5 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0025;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_005d;
	}

IL_005d:
	{
		bool L_19 = V_2;
		return L_19;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_GetHashCode_mE19E5E597434F45BA186E6843010DB4AE3F8FEBB (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_mEC24356D763AC4FB6EDEED48C590B1811FEABF5E (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		V_0 = ((int32_t)69);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___data_2;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!((int32_t)((int32_t)L_4&((int32_t)-2147483648LL))))
		{
			goto IL_0027;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = ___bi21;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_2;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_9&((int32_t)-2147483648LL)))) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_2 = (bool)G_B3_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_0033:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = ___bi10;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___data_2;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if (((int32_t)((int32_t)L_15&((int32_t)-2147483648LL))))
		{
			goto IL_0056;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = ___bi21;
		NullCheck(L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = L_16->___data_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		G_B8_0 = ((!(((uint32_t)((int32_t)((int32_t)L_20&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B8_0 = 0;
	}

IL_0057:
	{
		V_4 = (bool)G_B8_0;
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0061;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00da;
	}

IL_0061:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = ___bi10;
		NullCheck(L_22);
		int32_t L_23 = L_22->___dataLength_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = ___bi21;
		NullCheck(L_24);
		int32_t L_25 = L_24->___dataLength_3;
		if ((((int32_t)L_23) > ((int32_t)L_25)))
		{
			goto IL_0077;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = ___bi21;
		NullCheck(L_26);
		int32_t L_27 = L_26->___dataLength_3;
		G_B13_0 = L_27;
		goto IL_007d;
	}

IL_0077:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = ___bi10;
		NullCheck(L_28);
		int32_t L_29 = L_28->___dataLength_3;
		G_B13_0 = L_29;
	}

IL_007d:
	{
		V_1 = G_B13_0;
		int32_t L_30 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		goto IL_0089;
	}

IL_0084:
	{
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
	}

IL_0089:
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) < ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = ___bi10;
		NullCheck(L_33);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = L_33->___data_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_38 = ___bi21;
		NullCheck(L_38);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = L_38->___data_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		G_B18_0 = ((((int32_t)L_37) == ((int32_t)L_42))? 1 : 0);
		goto IL_00a2;
	}

IL_00a1:
	{
		G_B18_0 = 0;
	}

IL_00a2:
	{
		V_5 = (bool)G_B18_0;
		bool L_43 = V_5;
		if (L_43)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_44 = V_0;
		V_6 = (bool)((((int32_t)((((int32_t)L_44) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_6;
		if (!L_45)
		{
			goto IL_00d6;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = ___bi10;
		NullCheck(L_46);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = L_46->___data_2;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		uint32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_51 = ___bi21;
		NullCheck(L_51);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = L_51->___data_2;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_7 = (bool)((!(((uint32_t)L_50) <= ((uint32_t)L_55)))? 1 : 0);
		bool L_56 = V_7;
		if (!L_56)
		{
			goto IL_00d2;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00da;
	}

IL_00d2:
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00d6:
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00da:
	{
		bool L_57 = V_3;
		return L_57;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_LessThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_m107B3A67008253C0CF06DF05391CF0D774868636 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		V_0 = ((int32_t)69);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___data_2;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!((int32_t)((int32_t)L_4&((int32_t)-2147483648LL))))
		{
			goto IL_0027;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = ___bi21;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_2;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_9&((int32_t)-2147483648LL)))) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_2 = (bool)G_B3_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00da;
	}

IL_0033:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = ___bi10;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___data_2;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if (((int32_t)((int32_t)L_15&((int32_t)-2147483648LL))))
		{
			goto IL_0056;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = ___bi21;
		NullCheck(L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = L_16->___data_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		G_B8_0 = ((!(((uint32_t)((int32_t)((int32_t)L_20&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B8_0 = 0;
	}

IL_0057:
	{
		V_4 = (bool)G_B8_0;
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0061;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_0061:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = ___bi10;
		NullCheck(L_22);
		int32_t L_23 = L_22->___dataLength_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = ___bi21;
		NullCheck(L_24);
		int32_t L_25 = L_24->___dataLength_3;
		if ((((int32_t)L_23) > ((int32_t)L_25)))
		{
			goto IL_0077;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = ___bi21;
		NullCheck(L_26);
		int32_t L_27 = L_26->___dataLength_3;
		G_B13_0 = L_27;
		goto IL_007d;
	}

IL_0077:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = ___bi10;
		NullCheck(L_28);
		int32_t L_29 = L_28->___dataLength_3;
		G_B13_0 = L_29;
	}

IL_007d:
	{
		V_1 = G_B13_0;
		int32_t L_30 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		goto IL_0089;
	}

IL_0084:
	{
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
	}

IL_0089:
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) < ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = ___bi10;
		NullCheck(L_33);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = L_33->___data_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_38 = ___bi21;
		NullCheck(L_38);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = L_38->___data_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		G_B18_0 = ((((int32_t)L_37) == ((int32_t)L_42))? 1 : 0);
		goto IL_00a2;
	}

IL_00a1:
	{
		G_B18_0 = 0;
	}

IL_00a2:
	{
		V_5 = (bool)G_B18_0;
		bool L_43 = V_5;
		if (L_43)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_44 = V_0;
		V_6 = (bool)((((int32_t)((((int32_t)L_44) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_6;
		if (!L_45)
		{
			goto IL_00d6;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = ___bi10;
		NullCheck(L_46);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = L_46->___data_2;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		uint32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_51 = ___bi21;
		NullCheck(L_51);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = L_51->___data_2;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_7 = (bool)((!(((uint32_t)L_50) >= ((uint32_t)L_55)))? 1 : 0);
		bool L_56 = V_7;
		if (!L_56)
		{
			goto IL_00d2;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00da;
	}

IL_00d2:
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00d6:
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00da:
	{
		bool L_57 = V_3;
		return L_57;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_mDCDEAF660FABF6A1545726684FB38A78F1835448 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BigInteger_op_Equality_mFF395F5866F1B4E7BD78D208A3BEEF209DA7F861(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = BigInteger_op_GreaterThan_mEC24356D763AC4FB6EDEED48C590B1811FEABF5E(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_LessThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThanOrEqual_mBC05B3ED352EE3F4919F557D65FF2F2558FC7EB1 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BigInteger_op_Equality_mFF395F5866F1B4E7BD78D208A3BEEF209DA7F861(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = BigInteger_op_LessThan_m107B3A67008253C0CF06DF05391CF0D774868636(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::multiByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_multiByteDivide_m95E26DBD75B9B3E5F71E5DEA71E96BA68C606CF0 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outQuotient2, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outRemainder3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	int32_t V_11 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_12 = NULL;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	bool V_20 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_21 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_22 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_23 = NULL;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	int32_t V_27 = 0;
	bool V_28 = false;
	bool V_29 = false;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	int32_t V_33 = 0;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B42_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___bi10;
		NullCheck(L_1);
		int32_t L_2 = L_1->___dataLength_3;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_2 = L_4;
		V_3 = ((int32_t)-2147483648LL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = ___bi21;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7 = ___bi21;
		NullCheck(L_7);
		int32_t L_8 = L_7->___dataLength_3;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		uint32_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		V_5 = 0;
		V_6 = 0;
		goto IL_0044;
	}

IL_0038:
	{
		int32_t L_11 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		uint32_t L_12 = V_3;
		V_3 = ((int32_t)((uint32_t)L_12>>1));
	}

IL_0044:
	{
		uint32_t L_13 = V_3;
		if (!L_13)
		{
			goto IL_0050;
		}
	}
	{
		uint32_t L_14 = V_4;
		uint32_t L_15 = V_3;
		G_B5_0 = ((((int32_t)((int32_t)((int32_t)L_14&(int32_t)L_15))) == ((int32_t)0))? 1 : 0);
		goto IL_0051;
	}

IL_0050:
	{
		G_B5_0 = 0;
	}

IL_0051:
	{
		V_14 = (bool)G_B5_0;
		bool L_16 = V_14;
		if (L_16)
		{
			goto IL_0038;
		}
	}
	{
		V_15 = 0;
		goto IL_006f;
	}

IL_005c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_2;
		int32_t L_18 = V_15;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_19 = ___bi10;
		NullCheck(L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = L_19->___data_2;
		int32_t L_21 = V_15;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint32_t)L_23);
		int32_t L_24 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_006f:
	{
		int32_t L_25 = V_15;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = ___bi10;
		NullCheck(L_26);
		int32_t L_27 = L_26->___dataLength_3;
		V_16 = (bool)((((int32_t)L_25) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_16;
		if (L_28)
		{
			goto IL_005c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_2;
		int32_t L_30 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		int32_t L_31;
		L_31 = BigInteger_shiftLeft_m0034BAAB082A614E52BA019B3F475D43DD88C742(L_29, L_30, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32 = ___bi21;
		int32_t L_33 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34;
		L_34 = BigInteger_op_LeftShift_m52BF16486FF642F88B505336617A60F65F59836E(L_32, L_33, NULL);
		___bi21 = L_34;
		int32_t L_35 = V_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36 = ___bi21;
		NullCheck(L_36);
		int32_t L_37 = L_36->___dataLength_3;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_35, L_37));
		int32_t L_38 = V_1;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_39 = ___bi21;
		NullCheck(L_39);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = L_39->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_41 = ___bi21;
		NullCheck(L_41);
		int32_t L_42 = L_41->___dataLength_3;
		NullCheck(L_40);
		int32_t L_43 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		uint32_t L_44 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_9 = ((int64_t)(uint64_t)L_44);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_45 = ___bi21;
		NullCheck(L_45);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = L_45->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_47 = ___bi21;
		NullCheck(L_47);
		int32_t L_48 = L_47->___dataLength_3;
		NullCheck(L_46);
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract(L_48, 2));
		uint32_t L_50 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_10 = ((int64_t)(uint64_t)L_50);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_51 = ___bi21;
		NullCheck(L_51);
		int32_t L_52 = L_51->___dataLength_3;
		V_11 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		int32_t L_53 = V_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_53);
		V_12 = L_54;
		goto IL_0215;
	}

IL_00dd:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = V_2;
		int32_t L_56 = V_8;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		uint32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = V_2;
		int32_t L_60 = V_8;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_subtract(L_60, 1));
		uint32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_17 = ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)L_58)<<((int32_t)32))), ((int64_t)(uint64_t)L_62)));
		uint64_t L_63 = V_17;
		uint64_t L_64 = V_9;
		V_18 = ((int64_t)((uint64_t)(int64_t)L_63/(uint64_t)(int64_t)L_64));
		uint64_t L_65 = V_17;
		uint64_t L_66 = V_9;
		V_19 = ((int64_t)((uint64_t)(int64_t)L_65%(uint64_t)(int64_t)L_66));
		V_20 = (bool)0;
		goto IL_0158;
	}

IL_0103:
	{
		V_20 = (bool)1;
		uint64_t L_67 = V_18;
		if ((((int64_t)L_67) == ((int64_t)((int64_t)4294967296LL))))
		{
			goto IL_012a;
		}
	}
	{
		uint64_t L_68 = V_18;
		uint64_t L_69 = V_10;
		uint64_t L_70 = V_19;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = V_2;
		int32_t L_72 = V_8;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_subtract(L_72, 2));
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		G_B14_0 = ((!(((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_68, (int64_t)L_69))) <= ((uint64_t)((int64_t)il2cpp_codegen_add(((int64_t)((int64_t)L_70<<((int32_t)32))), ((int64_t)(uint64_t)L_74))))))? 1 : 0);
		goto IL_012b;
	}

IL_012a:
	{
		G_B14_0 = 1;
	}

IL_012b:
	{
		V_24 = (bool)G_B14_0;
		bool L_75 = V_24;
		if (!L_75)
		{
			goto IL_0157;
		}
	}
	{
		uint64_t L_76 = V_18;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_76, ((int64_t)1)));
		uint64_t L_77 = V_19;
		uint64_t L_78 = V_9;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_77, (int64_t)L_78));
		uint64_t L_79 = V_19;
		V_25 = (bool)((!(((uint64_t)L_79) >= ((uint64_t)((int64_t)4294967296LL))))? 1 : 0);
		bool L_80 = V_25;
		if (!L_80)
		{
			goto IL_0156;
		}
	}
	{
		V_20 = (bool)0;
	}

IL_0156:
	{
	}

IL_0157:
	{
	}

IL_0158:
	{
		bool L_81 = V_20;
		V_26 = (bool)((((int32_t)L_81) == ((int32_t)0))? 1 : 0);
		bool L_82 = V_26;
		if (L_82)
		{
			goto IL_0103;
		}
	}
	{
		V_27 = 0;
		goto IL_017a;
	}

IL_0168:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = V_12;
		int32_t L_84 = V_27;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = V_2;
		int32_t L_86 = V_8;
		int32_t L_87 = V_27;
		NullCheck(L_85);
		int32_t L_88 = ((int32_t)il2cpp_codegen_subtract(L_86, L_87));
		uint32_t L_89 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (uint32_t)L_89);
		int32_t L_90 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_017a:
	{
		int32_t L_91 = V_27;
		int32_t L_92 = V_11;
		V_28 = (bool)((((int32_t)L_91) < ((int32_t)L_92))? 1 : 0);
		bool L_93 = V_28;
		if (L_93)
		{
			goto IL_0168;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = V_12;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_95 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		BigInteger__ctor_m5054EE528124CBCE64654DA6C962554ACF727343(L_95, L_94, NULL);
		V_21 = L_95;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_96 = ___bi21;
		uint64_t L_97 = V_18;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_98;
		L_98 = BigInteger_op_Implicit_m62A9E398786981AEBDAE4BB3F2EF702FADD15CA3(L_97, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_99;
		L_99 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_96, L_98, NULL);
		V_22 = L_99;
		goto IL_01b3;
	}

IL_01a0:
	{
		uint64_t L_100 = V_18;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_100, ((int64_t)1)));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_101 = V_22;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_102 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_103;
		L_103 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_101, L_102, NULL);
		V_22 = L_103;
	}

IL_01b3:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_104 = V_22;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_105 = V_21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_106;
		L_106 = BigInteger_op_GreaterThan_mEC24356D763AC4FB6EDEED48C590B1811FEABF5E(L_104, L_105, NULL);
		V_29 = L_106;
		bool L_107 = V_29;
		if (L_107)
		{
			goto IL_01a0;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_108 = V_21;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_109 = V_22;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_110;
		L_110 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_108, L_109, NULL);
		V_23 = L_110;
		V_30 = 0;
		goto IL_01f0;
	}

IL_01d2:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_111 = V_2;
		int32_t L_112 = V_8;
		int32_t L_113 = V_30;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_114 = V_23;
		NullCheck(L_114);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_115 = L_114->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_116 = ___bi21;
		NullCheck(L_116);
		int32_t L_117 = L_116->___dataLength_3;
		int32_t L_118 = V_30;
		NullCheck(L_115);
		int32_t L_119 = ((int32_t)il2cpp_codegen_subtract(L_117, L_118));
		uint32_t L_120 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_112, L_113))), (uint32_t)L_120);
		int32_t L_121 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_01f0:
	{
		int32_t L_122 = V_30;
		int32_t L_123 = V_11;
		V_31 = (bool)((((int32_t)L_122) < ((int32_t)L_123))? 1 : 0);
		bool L_124 = V_31;
		if (L_124)
		{
			goto IL_01d2;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_125 = V_0;
		int32_t L_126 = V_6;
		int32_t L_127 = L_126;
		V_6 = ((int32_t)il2cpp_codegen_add(L_127, 1));
		uint64_t L_128 = V_18;
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(L_127), (uint32_t)((int32_t)(uint32_t)L_128));
		int32_t L_129 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_129, 1));
		int32_t L_130 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_130, 1));
	}

IL_0215:
	{
		int32_t L_131 = V_7;
		V_32 = (bool)((((int32_t)L_131) > ((int32_t)0))? 1 : 0);
		bool L_132 = V_32;
		if (L_132)
		{
			goto IL_00dd;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_133 = ___outQuotient2;
		int32_t L_134 = V_6;
		NullCheck(L_133);
		L_133->___dataLength_3 = L_134;
		V_13 = 0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_135 = ___outQuotient2;
		NullCheck(L_135);
		int32_t L_136 = L_135->___dataLength_3;
		V_33 = ((int32_t)il2cpp_codegen_subtract(L_136, 1));
		goto IL_0253;
	}

IL_023a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_137 = ___outQuotient2;
		NullCheck(L_137);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_138 = L_137->___data_2;
		int32_t L_139 = V_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_140 = V_0;
		int32_t L_141 = V_33;
		NullCheck(L_140);
		int32_t L_142 = L_141;
		uint32_t L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(L_139), (uint32_t)L_143);
		int32_t L_144 = V_33;
		V_33 = ((int32_t)il2cpp_codegen_subtract(L_144, 1));
		int32_t L_145 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_145, 1));
	}

IL_0253:
	{
		int32_t L_146 = V_33;
		V_34 = (bool)((((int32_t)((((int32_t)L_146) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_147 = V_34;
		if (L_147)
		{
			goto IL_023a;
		}
	}
	{
		goto IL_0273;
	}

IL_0263:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_148 = ___outQuotient2;
		NullCheck(L_148);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_149 = L_148->___data_2;
		int32_t L_150 = V_13;
		NullCheck(L_149);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(L_150), (uint32_t)0);
		int32_t L_151 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_151, 1));
	}

IL_0273:
	{
		int32_t L_152 = V_13;
		V_35 = (bool)((((int32_t)L_152) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_153 = V_35;
		if (L_153)
		{
			goto IL_0263;
		}
	}
	{
		goto IL_028f;
	}

IL_0281:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_154 = ___outQuotient2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_155 = L_154;
		NullCheck(L_155);
		int32_t L_156 = L_155->___dataLength_3;
		NullCheck(L_155);
		L_155->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_156, 1));
	}

IL_028f:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_157 = ___outQuotient2;
		NullCheck(L_157);
		int32_t L_158 = L_157->___dataLength_3;
		if ((((int32_t)L_158) <= ((int32_t)1)))
		{
			goto IL_02ac;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_159 = ___outQuotient2;
		NullCheck(L_159);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_160 = L_159->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_161 = ___outQuotient2;
		NullCheck(L_161);
		int32_t L_162 = L_161->___dataLength_3;
		NullCheck(L_160);
		int32_t L_163 = ((int32_t)il2cpp_codegen_subtract(L_162, 1));
		uint32_t L_164 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		G_B42_0 = ((((int32_t)L_164) == ((int32_t)0))? 1 : 0);
		goto IL_02ad;
	}

IL_02ac:
	{
		G_B42_0 = 0;
	}

IL_02ad:
	{
		V_36 = (bool)G_B42_0;
		bool L_165 = V_36;
		if (L_165)
		{
			goto IL_0281;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_166 = ___outQuotient2;
		NullCheck(L_166);
		int32_t L_167 = L_166->___dataLength_3;
		V_37 = (bool)((((int32_t)L_167) == ((int32_t)0))? 1 : 0);
		bool L_168 = V_37;
		if (!L_168)
		{
			goto IL_02c9;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_169 = ___outQuotient2;
		NullCheck(L_169);
		L_169->___dataLength_3 = 1;
	}

IL_02c9:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_170 = ___outRemainder3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_171 = V_2;
		int32_t L_172 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		int32_t L_173;
		L_173 = BigInteger_shiftRight_m191C98C28276C28DCFE1D31E0066FD7FA3D7837D(L_171, L_172, NULL);
		NullCheck(L_170);
		L_170->___dataLength_3 = L_173;
		V_13 = 0;
		goto IL_02ef;
	}

IL_02dc:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_174 = ___outRemainder3;
		NullCheck(L_174);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_175 = L_174->___data_2;
		int32_t L_176 = V_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_177 = V_2;
		int32_t L_178 = V_13;
		NullCheck(L_177);
		int32_t L_179 = L_178;
		uint32_t L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		NullCheck(L_175);
		(L_175)->SetAt(static_cast<il2cpp_array_size_t>(L_176), (uint32_t)L_180);
		int32_t L_181 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_181, 1));
	}

IL_02ef:
	{
		int32_t L_182 = V_13;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_183 = ___outRemainder3;
		NullCheck(L_183);
		int32_t L_184 = L_183->___dataLength_3;
		V_38 = (bool)((((int32_t)L_182) < ((int32_t)L_184))? 1 : 0);
		bool L_185 = V_38;
		if (L_185)
		{
			goto IL_02dc;
		}
	}
	{
		goto IL_0311;
	}

IL_0301:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_186 = ___outRemainder3;
		NullCheck(L_186);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_187 = L_186->___data_2;
		int32_t L_188 = V_13;
		NullCheck(L_187);
		(L_187)->SetAt(static_cast<il2cpp_array_size_t>(L_188), (uint32_t)0);
		int32_t L_189 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_189, 1));
	}

IL_0311:
	{
		int32_t L_190 = V_13;
		V_39 = (bool)((((int32_t)L_190) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_191 = V_39;
		if (L_191)
		{
			goto IL_0301;
		}
	}
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::singleByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_singleByteDivide_m46DA1A0FC412956D80B5F509897E78AE5114426A (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outQuotient2, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___outRemainder3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	int32_t V_3 = 0;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B33_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		V_0 = L_0;
		V_1 = 0;
		V_6 = 0;
		goto IL_0028;
	}

IL_0010:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___outRemainder3;
		NullCheck(L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = L_1->___data_2;
		int32_t L_3 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = ___bi10;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___data_2;
		int32_t L_6 = V_6;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)L_8);
		int32_t L_9 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0028:
	{
		int32_t L_10 = V_6;
		V_7 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_11 = V_7;
		if (L_11)
		{
			goto IL_0010;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = ___outRemainder3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_13 = ___bi10;
		NullCheck(L_13);
		int32_t L_14 = L_13->___dataLength_3;
		NullCheck(L_12);
		L_12->___dataLength_3 = L_14;
		goto IL_0050;
	}

IL_0042:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15 = ___outRemainder3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = L_15;
		NullCheck(L_16);
		int32_t L_17 = L_16->___dataLength_3;
		NullCheck(L_16);
		L_16->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
	}

IL_0050:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_18 = ___outRemainder3;
		NullCheck(L_18);
		int32_t L_19 = L_18->___dataLength_3;
		if ((((int32_t)L_19) <= ((int32_t)1)))
		{
			goto IL_006d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_20 = ___outRemainder3;
		NullCheck(L_20);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = L_20->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = ___outRemainder3;
		NullCheck(L_22);
		int32_t L_23 = L_22->___dataLength_3;
		NullCheck(L_21);
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		uint32_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		G_B8_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B8_0 = 0;
	}

IL_006e:
	{
		V_8 = (bool)G_B8_0;
		bool L_26 = V_8;
		if (L_26)
		{
			goto IL_0042;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = ___bi21;
		NullCheck(L_27);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = L_27->___data_2;
		NullCheck(L_28);
		int32_t L_29 = 0;
		uint32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_2 = ((int64_t)(uint64_t)L_30);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = ___outRemainder3;
		NullCheck(L_31);
		int32_t L_32 = L_31->___dataLength_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = ___outRemainder3;
		NullCheck(L_33);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = L_33->___data_2;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_4 = ((int64_t)(uint64_t)L_37);
		uint64_t L_38 = V_4;
		uint64_t L_39 = V_2;
		V_9 = (bool)((((int32_t)((!(((uint64_t)L_38) >= ((uint64_t)L_39)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_9;
		if (!L_40)
		{
			goto IL_00bf;
		}
	}
	{
		uint64_t L_41 = V_4;
		uint64_t L_42 = V_2;
		V_10 = ((int64_t)((uint64_t)(int64_t)L_41/(uint64_t)(int64_t)L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = V_0;
		int32_t L_44 = V_1;
		int32_t L_45 = L_44;
		V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		uint64_t L_46 = V_10;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (uint32_t)((int32_t)(uint32_t)L_46));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_47 = ___outRemainder3;
		NullCheck(L_47);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = L_47->___data_2;
		int32_t L_49 = V_3;
		uint64_t L_50 = V_4;
		uint64_t L_51 = V_2;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_50%(uint64_t)(int64_t)L_51))));
	}

IL_00bf:
	{
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		goto IL_010d;
	}

IL_00c5:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_53 = ___outRemainder3;
		NullCheck(L_53);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = L_53->___data_2;
		int32_t L_55 = V_3;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		uint32_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_58 = ___outRemainder3;
		NullCheck(L_58);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = L_58->___data_2;
		int32_t L_60 = V_3;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		uint32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_4 = ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)L_57)<<((int32_t)32))), ((int64_t)(uint64_t)L_62)));
		uint64_t L_63 = V_4;
		uint64_t L_64 = V_2;
		V_11 = ((int64_t)((uint64_t)(int64_t)L_63/(uint64_t)(int64_t)L_64));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_0;
		int32_t L_66 = V_1;
		int32_t L_67 = L_66;
		V_1 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		uint64_t L_68 = V_11;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (uint32_t)((int32_t)(uint32_t)L_68));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_69 = ___outRemainder3;
		NullCheck(L_69);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = L_69->___data_2;
		int32_t L_71 = V_3;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_71, 1))), (uint32_t)0);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_72 = ___outRemainder3;
		NullCheck(L_72);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = L_72->___data_2;
		int32_t L_74 = V_3;
		int32_t L_75 = L_74;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_75, 1));
		uint64_t L_76 = V_4;
		uint64_t L_77 = V_2;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(L_75), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_76%(uint64_t)(int64_t)L_77))));
	}

IL_010d:
	{
		int32_t L_78 = V_3;
		V_12 = (bool)((((int32_t)((((int32_t)L_78) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_79 = V_12;
		if (L_79)
		{
			goto IL_00c5;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_80 = ___outQuotient2;
		int32_t L_81 = V_1;
		NullCheck(L_80);
		L_80->___dataLength_3 = L_81;
		V_5 = 0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_82 = ___outQuotient2;
		NullCheck(L_82);
		int32_t L_83 = L_82->___dataLength_3;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_83, 1));
		goto IL_0149;
	}

IL_0130:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_84 = ___outQuotient2;
		NullCheck(L_84);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = L_84->___data_2;
		int32_t L_86 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = V_0;
		int32_t L_88 = V_13;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_86), (uint32_t)L_90);
		int32_t L_91 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_91, 1));
		int32_t L_92 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0149:
	{
		int32_t L_93 = V_13;
		V_14 = (bool)((((int32_t)((((int32_t)L_93) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_94 = V_14;
		if (L_94)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_0169;
	}

IL_0159:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_95 = ___outQuotient2;
		NullCheck(L_95);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = L_95->___data_2;
		int32_t L_97 = V_5;
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(L_97), (uint32_t)0);
		int32_t L_98 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0169:
	{
		int32_t L_99 = V_5;
		V_15 = (bool)((((int32_t)L_99) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_100 = V_15;
		if (L_100)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_0185;
	}

IL_0177:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_101 = ___outQuotient2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_102 = L_101;
		NullCheck(L_102);
		int32_t L_103 = L_102->___dataLength_3;
		NullCheck(L_102);
		L_102->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_103, 1));
	}

IL_0185:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_104 = ___outQuotient2;
		NullCheck(L_104);
		int32_t L_105 = L_104->___dataLength_3;
		if ((((int32_t)L_105) <= ((int32_t)1)))
		{
			goto IL_01a2;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_106 = ___outQuotient2;
		NullCheck(L_106);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_107 = L_106->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_108 = ___outQuotient2;
		NullCheck(L_108);
		int32_t L_109 = L_108->___dataLength_3;
		NullCheck(L_107);
		int32_t L_110 = ((int32_t)il2cpp_codegen_subtract(L_109, 1));
		uint32_t L_111 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		G_B25_0 = ((((int32_t)L_111) == ((int32_t)0))? 1 : 0);
		goto IL_01a3;
	}

IL_01a2:
	{
		G_B25_0 = 0;
	}

IL_01a3:
	{
		V_16 = (bool)G_B25_0;
		bool L_112 = V_16;
		if (L_112)
		{
			goto IL_0177;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_113 = ___outQuotient2;
		NullCheck(L_113);
		int32_t L_114 = L_113->___dataLength_3;
		V_17 = (bool)((((int32_t)L_114) == ((int32_t)0))? 1 : 0);
		bool L_115 = V_17;
		if (!L_115)
		{
			goto IL_01bf;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_116 = ___outQuotient2;
		NullCheck(L_116);
		L_116->___dataLength_3 = 1;
	}

IL_01bf:
	{
		goto IL_01cf;
	}

IL_01c1:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_117 = ___outRemainder3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_118 = L_117;
		NullCheck(L_118);
		int32_t L_119 = L_118->___dataLength_3;
		NullCheck(L_118);
		L_118->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_119, 1));
	}

IL_01cf:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_120 = ___outRemainder3;
		NullCheck(L_120);
		int32_t L_121 = L_120->___dataLength_3;
		if ((((int32_t)L_121) <= ((int32_t)1)))
		{
			goto IL_01ec;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_122 = ___outRemainder3;
		NullCheck(L_122);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_123 = L_122->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_124 = ___outRemainder3;
		NullCheck(L_124);
		int32_t L_125 = L_124->___dataLength_3;
		NullCheck(L_123);
		int32_t L_126 = ((int32_t)il2cpp_codegen_subtract(L_125, 1));
		uint32_t L_127 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		G_B33_0 = ((((int32_t)L_127) == ((int32_t)0))? 1 : 0);
		goto IL_01ed;
	}

IL_01ec:
	{
		G_B33_0 = 0;
	}

IL_01ed:
	{
		V_18 = (bool)G_B33_0;
		bool L_128 = V_18;
		if (L_128)
		{
			goto IL_01c1;
		}
	}
	{
		return;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Division(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Division_m0E65A659BB326213D738370A903EBF2491ECAA68 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_0, NULL);
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_1, NULL);
		V_1 = L_1;
		V_2 = ((int32_t)69);
		V_3 = (bool)0;
		V_4 = (bool)0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = ___bi10;
		NullCheck(L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2->___data_2;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_6&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = ___bi10;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9;
		L_9 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_8, NULL);
		___bi10 = L_9;
		V_4 = (bool)1;
	}

IL_0039:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10 = ___bi21;
		NullCheck(L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___data_2;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_6 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_14&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_005c;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17;
		L_17 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_16, NULL);
		___bi21 = L_17;
		V_3 = (bool)1;
	}

IL_005c:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_18 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_19 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = BigInteger_op_LessThan_m107B3A67008253C0CF06DF05391CF0D774868636(L_18, L_19, NULL);
		V_7 = L_20;
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_006f;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = V_0;
		V_8 = L_22;
		goto IL_00b2;
	}

IL_006f:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_23 = ___bi21;
		NullCheck(L_23);
		int32_t L_24 = L_23->___dataLength_3;
		V_9 = (bool)((((int32_t)L_24) == ((int32_t)1))? 1 : 0);
		bool L_25 = V_9;
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = ___bi21;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_singleByteDivide_m46DA1A0FC412956D80B5F509897E78AE5114426A(L_26, L_27, L_28, L_29, NULL);
		goto IL_0095;
	}

IL_008b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_30 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = ___bi21;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_multiByteDivide_m95E26DBD75B9B3E5F71E5DEA71E96BA68C606CF0(L_30, L_31, L_32, L_33, NULL);
	}

IL_0095:
	{
		bool L_34 = V_4;
		bool L_35 = V_3;
		V_10 = (bool)((((int32_t)((((int32_t)L_34) == ((int32_t)L_35))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_00ad;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_37 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_38;
		L_38 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_37, NULL);
		V_8 = L_38;
		goto IL_00b2;
	}

IL_00ad:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_39 = V_0;
		V_8 = L_39;
		goto IL_00b2;
	}

IL_00b2:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_8;
		return L_40;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Modulus(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_0, NULL);
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3(L_2, L_1, NULL);
		V_1 = L_2;
		V_2 = ((int32_t)69);
		V_3 = (bool)0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3 = ___bi10;
		NullCheck(L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3->___data_2;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_7&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9 = ___bi10;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10;
		L_10 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_9, NULL);
		___bi10 = L_10;
		V_3 = (bool)1;
	}

IL_0036:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = ___bi21;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___data_2;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_15&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0055;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_18;
		L_18 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_17, NULL);
		___bi21 = L_18;
	}

IL_0055:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_19 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_20 = ___bi21;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = BigInteger_op_LessThan_m107B3A67008253C0CF06DF05391CF0D774868636(L_19, L_20, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_23 = V_1;
		V_7 = L_23;
		goto IL_00a4;
	}

IL_0068:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = ___bi21;
		NullCheck(L_24);
		int32_t L_25 = L_24->___dataLength_3;
		V_8 = (bool)((((int32_t)L_25) == ((int32_t)1))? 1 : 0);
		bool L_26 = V_8;
		if (!L_26)
		{
			goto IL_0084;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = ___bi21;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_30 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_singleByteDivide_m46DA1A0FC412956D80B5F509897E78AE5114426A(L_27, L_28, L_29, L_30, NULL);
		goto IL_008e;
	}

IL_0084:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = ___bi10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32 = ___bi21;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_multiByteDivide_m95E26DBD75B9B3E5F71E5DEA71E96BA68C606CF0(L_31, L_32, L_33, L_34, NULL);
	}

IL_008e:
	{
		bool L_35 = V_3;
		V_9 = L_35;
		bool L_36 = V_9;
		if (!L_36)
		{
			goto IL_009f;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_37 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_38;
		L_38 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_37, NULL);
		V_7 = L_38;
		goto IL_00a4;
	}

IL_009f:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_39 = V_1;
		V_7 = L_39;
		goto IL_00a4;
	}

IL_00a4:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_7;
		return L_40;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_BitwiseAnd(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_BitwiseAnd_m6904E4A73B6380525E58065BDD014A4934C246C8 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_6 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_0, NULL);
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___bi10;
		NullCheck(L_1);
		int32_t L_2 = L_1->___dataLength_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3 = ___bi21;
		NullCheck(L_3);
		int32_t L_4 = L_3->___dataLength_3;
		if ((((int32_t)L_2) > ((int32_t)L_4)))
		{
			goto IL_001d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = ___bi21;
		NullCheck(L_5);
		int32_t L_6 = L_5->___dataLength_3;
		G_B3_0 = L_6;
		goto IL_0023;
	}

IL_001d:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7 = ___bi10;
		NullCheck(L_7);
		int32_t L_8 = L_7->___dataLength_3;
		G_B3_0 = L_8;
	}

IL_0023:
	{
		V_1 = G_B3_0;
		V_2 = 0;
		goto IL_0049;
	}

IL_0028:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9 = ___bi10;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___data_2;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_14 = ___bi21;
		NullCheck(L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = L_14->___data_2;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_3 = ((int32_t)((int32_t)L_13&(int32_t)L_18));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_19 = V_0;
		NullCheck(L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = L_19->___data_2;
		int32_t L_21 = V_2;
		uint32_t L_22 = V_3;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint32_t)L_22);
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0049:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_1;
		V_4 = (bool)((((int32_t)L_24) < ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_4;
		if (L_26)
		{
			goto IL_0028;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = V_0;
		NullCheck(L_27);
		L_27->___dataLength_3 = ((int32_t)70);
		goto IL_006b;
	}

IL_005d:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = L_28;
		NullCheck(L_29);
		int32_t L_30 = L_29->___dataLength_3;
		NullCheck(L_29);
		L_29->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
	}

IL_006b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = L_31->___dataLength_3;
		if ((((int32_t)L_32) <= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = V_0;
		NullCheck(L_33);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = L_33->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_35 = V_0;
		NullCheck(L_35);
		int32_t L_36 = L_35->___dataLength_3;
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		uint32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		G_B11_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		goto IL_0089;
	}

IL_0088:
	{
		G_B11_0 = 0;
	}

IL_0089:
	{
		V_5 = (bool)G_B11_0;
		bool L_39 = V_5;
		if (L_39)
		{
			goto IL_005d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_0;
		V_6 = L_40;
		goto IL_0094;
	}

IL_0094:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_41 = V_6;
		return L_41;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_BitwiseOr(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_BitwiseOr_m507B07A81A640A553233895F6388052613783F54 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_6 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_0, NULL);
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___bi10;
		NullCheck(L_1);
		int32_t L_2 = L_1->___dataLength_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3 = ___bi21;
		NullCheck(L_3);
		int32_t L_4 = L_3->___dataLength_3;
		if ((((int32_t)L_2) > ((int32_t)L_4)))
		{
			goto IL_001d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = ___bi21;
		NullCheck(L_5);
		int32_t L_6 = L_5->___dataLength_3;
		G_B3_0 = L_6;
		goto IL_0023;
	}

IL_001d:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7 = ___bi10;
		NullCheck(L_7);
		int32_t L_8 = L_7->___dataLength_3;
		G_B3_0 = L_8;
	}

IL_0023:
	{
		V_1 = G_B3_0;
		V_2 = 0;
		goto IL_0049;
	}

IL_0028:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9 = ___bi10;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___data_2;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_14 = ___bi21;
		NullCheck(L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = L_14->___data_2;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_3 = ((int32_t)((int32_t)L_13|(int32_t)L_18));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_19 = V_0;
		NullCheck(L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = L_19->___data_2;
		int32_t L_21 = V_2;
		uint32_t L_22 = V_3;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint32_t)L_22);
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0049:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_1;
		V_4 = (bool)((((int32_t)L_24) < ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_4;
		if (L_26)
		{
			goto IL_0028;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = V_0;
		NullCheck(L_27);
		L_27->___dataLength_3 = ((int32_t)70);
		goto IL_006b;
	}

IL_005d:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = L_28;
		NullCheck(L_29);
		int32_t L_30 = L_29->___dataLength_3;
		NullCheck(L_29);
		L_29->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
	}

IL_006b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = L_31->___dataLength_3;
		if ((((int32_t)L_32) <= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = V_0;
		NullCheck(L_33);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = L_33->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_35 = V_0;
		NullCheck(L_35);
		int32_t L_36 = L_35->___dataLength_3;
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		uint32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		G_B11_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		goto IL_0089;
	}

IL_0088:
	{
		G_B11_0 = 0;
	}

IL_0089:
	{
		V_5 = (bool)G_B11_0;
		bool L_39 = V_5;
		if (L_39)
		{
			goto IL_005d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_0;
		V_6 = L_40;
		goto IL_0094;
	}

IL_0094:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_41 = V_6;
		return L_41;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_ExclusiveOr(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_op_ExclusiveOr_mF023658ABEB34FB32C45776E9CD60AA992CA7DFC (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi10, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_6 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_0, NULL);
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___bi10;
		NullCheck(L_1);
		int32_t L_2 = L_1->___dataLength_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3 = ___bi21;
		NullCheck(L_3);
		int32_t L_4 = L_3->___dataLength_3;
		if ((((int32_t)L_2) > ((int32_t)L_4)))
		{
			goto IL_001d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = ___bi21;
		NullCheck(L_5);
		int32_t L_6 = L_5->___dataLength_3;
		G_B3_0 = L_6;
		goto IL_0023;
	}

IL_001d:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7 = ___bi10;
		NullCheck(L_7);
		int32_t L_8 = L_7->___dataLength_3;
		G_B3_0 = L_8;
	}

IL_0023:
	{
		V_1 = G_B3_0;
		V_2 = 0;
		goto IL_0049;
	}

IL_0028:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9 = ___bi10;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___data_2;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_14 = ___bi21;
		NullCheck(L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = L_14->___data_2;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_3 = ((int32_t)((int32_t)L_13^(int32_t)L_18));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_19 = V_0;
		NullCheck(L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = L_19->___data_2;
		int32_t L_21 = V_2;
		uint32_t L_22 = V_3;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint32_t)L_22);
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0049:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_1;
		V_4 = (bool)((((int32_t)L_24) < ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_4;
		if (L_26)
		{
			goto IL_0028;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = V_0;
		NullCheck(L_27);
		L_27->___dataLength_3 = ((int32_t)70);
		goto IL_006b;
	}

IL_005d:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = L_28;
		NullCheck(L_29);
		int32_t L_30 = L_29->___dataLength_3;
		NullCheck(L_29);
		L_29->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
	}

IL_006b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = L_31->___dataLength_3;
		if ((((int32_t)L_32) <= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = V_0;
		NullCheck(L_33);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = L_33->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_35 = V_0;
		NullCheck(L_35);
		int32_t L_36 = L_35->___dataLength_3;
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		uint32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		G_B11_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		goto IL_0089;
	}

IL_0088:
	{
		G_B11_0 = 0;
	}

IL_0089:
	{
		V_5 = (bool)G_B11_0;
		bool L_39 = V_5;
		if (L_39)
		{
			goto IL_005d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_0;
		V_6 = L_40;
		goto IL_0094;
	}

IL_0094:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_41 = V_6;
		return L_41;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::max(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_max_m48F1A96157971E9D56BD11EAF159E64BFE05C27C (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BigInteger_op_GreaterThan_mEC24356D763AC4FB6EDEED48C590B1811FEABF5E(__this, L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3(L_3, __this, NULL);
		V_1 = L_3;
		goto IL_001e;
	}

IL_0015:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = ___bi0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3(L_5, L_4, NULL);
		V_1 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_6 = V_1;
		return L_6;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::min(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_min_m0067E6895BA12749F94D7C4BD7E95069A2060D42 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___bi0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BigInteger_op_LessThan_m107B3A67008253C0CF06DF05391CF0D774868636(__this, L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3(L_3, __this, NULL);
		V_1 = L_3;
		goto IL_001e;
	}

IL_0015:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = ___bi0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3(L_5, L_4, NULL);
		V_1 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_6 = V_1;
		return L_6;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::abs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_abs_m77B07C6B51A618C84B2135F090B50D7CA8E9AA7B (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___data_2;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)69);
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_2&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4;
		L_4 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(__this, NULL);
		V_1 = L_4;
		goto IL_0029;
	}

IL_0020:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		BigInteger__ctor_mC732D3F07B26CBFD17DE27C5182C6322FCBFADB3(L_5, __this, NULL);
		V_1 = L_5;
		goto IL_0029;
	}

IL_0029:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_6 = V_1;
		return L_6;
	}
}
// System.String Photon.SocketServer.Numeric.BigInteger::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m4A6DFFE0BB8633647E773E5C70FFA8900E461D63 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25(__this, ((int32_t)10), NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String Photon.SocketServer.Numeric.BigInteger::ToString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___radix0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420C015E6084500174F1912E91954C1A742F270F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_2 = NULL;
	bool V_3 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_4 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_5 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	Il2CppChar V_11 = 0x0;
	bool V_12 = false;
	bool V_13 = false;
	String_t* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B3_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B26_0 = 0;
	{
		int32_t L_0 = ___radix0;
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___radix0;
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)((int32_t)36)))? 1 : 0);
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
	}

IL_000d:
	{
		V_7 = (bool)G_B3_0;
		bool L_2 = V_7;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA37EF8AD7DEABEF988E748C47A435D6BB3F6FC3B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25_RuntimeMethod_var)));
	}

IL_001e:
	{
		V_0 = _stringLiteral420C015E6084500174F1912E91954C1A742F270F;
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_2 = __this;
		V_3 = (bool)0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = V_2;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___data_2;
		NullCheck(L_5);
		int32_t L_6 = ((int32_t)69);
		uint32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_8 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_7&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_8;
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		V_3 = (bool)1;
	}
	try
	{// begin try (depth: 1)
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10;
		L_10 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_9, NULL);
		V_2 = L_10;
		goto IL_0059;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0054;
		}
		throw e;
	}

CATCH_0054:
	{// begin catch(System.Exception)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0059;
	}// end catch (depth: 1)

IL_0059:
	{
	}

IL_005a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_11, NULL);
		V_4 = L_11;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_12, NULL);
		V_5 = L_12;
		int32_t L_13 = ___radix0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_14 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64(L_14, ((int64_t)L_13), NULL);
		V_6 = L_14;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___dataLength_3;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_0087;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = V_2;
		NullCheck(L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___data_2;
		NullCheck(L_18);
		int32_t L_19 = 0;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		G_B13_0 = ((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		goto IL_0088;
	}

IL_0087:
	{
		G_B13_0 = 0;
	}

IL_0088:
	{
		V_9 = (bool)G_B13_0;
		bool L_21 = V_9;
		if (!L_21)
		{
			goto IL_0099;
		}
	}
	{
		V_1 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
		goto IL_013e;
	}

IL_0099:
	{
		goto IL_00fe;
	}

IL_009c:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = V_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_23 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_25 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_singleByteDivide_m46DA1A0FC412956D80B5F509897E78AE5114426A(L_22, L_23, L_24, L_25, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = V_5;
		NullCheck(L_26);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = L_26->___data_2;
		NullCheck(L_27);
		int32_t L_28 = 0;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_10 = (bool)((!(((uint32_t)L_29) >= ((uint32_t)((int32_t)10))))? 1 : 0);
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_00d8;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = V_5;
		NullCheck(L_31);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = L_31->___data_2;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154(((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		String_t* L_34 = V_1;
		String_t* L_35;
		L_35 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_33, L_34, NULL);
		V_1 = L_35;
		goto IL_00fa;
	}

IL_00d8:
	{
		String_t* L_36 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_37 = V_5;
		NullCheck(L_37);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = L_37->___data_2;
		NullCheck(L_38);
		int32_t L_39 = 0;
		uint32_t L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_36);
		Il2CppChar L_41;
		L_41 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_36, ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, ((int32_t)10))), NULL);
		V_11 = L_41;
		String_t* L_42;
		L_42 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_11), NULL);
		String_t* L_43 = V_1;
		String_t* L_44;
		L_44 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_42, L_43, NULL);
		V_1 = L_44;
	}

IL_00fa:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_45 = V_4;
		V_2 = L_45;
	}

IL_00fe:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = V_2;
		NullCheck(L_46);
		int32_t L_47 = L_46->___dataLength_3;
		if ((((int32_t)L_47) > ((int32_t)1)))
		{
			goto IL_0120;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = V_2;
		NullCheck(L_48);
		int32_t L_49 = L_48->___dataLength_3;
		if ((!(((uint32_t)L_49) == ((uint32_t)1))))
		{
			goto IL_011d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_50 = V_2;
		NullCheck(L_50);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = L_50->___data_2;
		NullCheck(L_51);
		int32_t L_52 = 0;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		G_B24_0 = ((!(((uint32_t)L_53) <= ((uint32_t)0)))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B24_0 = 0;
	}

IL_011e:
	{
		G_B26_0 = G_B24_0;
		goto IL_0121;
	}

IL_0120:
	{
		G_B26_0 = 1;
	}

IL_0121:
	{
		V_12 = (bool)G_B26_0;
		bool L_54 = V_12;
		if (L_54)
		{
			goto IL_009c;
		}
	}
	{
		bool L_55 = V_3;
		V_13 = L_55;
		bool L_56 = V_13;
		if (!L_56)
		{
			goto IL_013d;
		}
	}
	{
		String_t* L_57 = V_1;
		String_t* L_58;
		L_58 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, L_57, NULL);
		V_1 = L_58;
	}

IL_013d:
	{
	}

IL_013e:
	{
		String_t* L_59 = V_1;
		V_14 = L_59;
		goto IL_0143;
	}

IL_0143:
	{
		String_t* L_60 = V_14;
		return L_60;
	}
}
// System.String Photon.SocketServer.Numeric.BigInteger::ToHexString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToHexString_mC2250D2253D02ACAA90D46A1FC0147FE4B35171A (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1673B4D06ED01C7C0212BB2E7412E02E9578984F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___data_2;
		int32_t L_1 = __this->___dataLength_3;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = UInt32_ToString_m6A665131BC9DC1F70D66117712027604B16EB6C6(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_1, 1))))), _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, NULL);
		V_0 = L_2;
		int32_t L_3 = __this->___dataLength_3;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_3, 2));
		goto IL_004d;
	}

IL_002a:
	{
		String_t* L_4 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___data_2;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = UInt32_ToString_m6A665131BC9DC1F70D66117712027604B16EB6C6(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), _stringLiteral1673B4D06ED01C7C0212BB2E7412E02E9578984F, NULL);
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_4, L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_004d:
	{
		int32_t L_10 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_10) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_12 = V_0;
		V_3 = L_12;
		goto IL_005c;
	}

IL_005c:
	{
		String_t* L_13 = V_3;
		return L_13;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::ModPow(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___exp0, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___n1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	bool V_2 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_16 = NULL;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	int32_t G_B14_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B30_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___exp0;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___data_2;
		NullCheck(L_1);
		int32_t L_2 = ((int32_t)69);
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_7 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_7;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_5 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9DA96E4398E04C75ACA0CBE183972952BDB1A28)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F_RuntimeMethod_var)));
	}

IL_0024:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_6;
		L_6 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(1, NULL);
		V_0 = L_6;
		V_2 = (bool)0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___data_2;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)69);
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_8 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_9&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_10 = V_8;
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11;
		L_11 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(__this, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = ___n1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_13;
		L_13 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_11, L_12, NULL);
		V_1 = L_13;
		V_2 = (bool)1;
		goto IL_0060;
	}

IL_0058:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_14 = ___n1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15;
		L_15 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(__this, L_14, NULL);
		V_1 = L_15;
	}

IL_0060:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = ___n1;
		NullCheck(L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = L_16->___data_2;
		NullCheck(L_17);
		int32_t L_18 = ((int32_t)69);
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_9 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_19&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_20 = V_9;
		if (!L_20)
		{
			goto IL_0080;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = ___n1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22;
		L_22 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_21, NULL);
		___n1 = L_22;
	}

IL_0080:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_23 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_23, NULL);
		V_3 = L_23;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = ___n1;
		NullCheck(L_24);
		int32_t L_25 = L_24->___dataLength_3;
		V_4 = ((int32_t)(L_25<<1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = V_3;
		NullCheck(L_26);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = L_26->___data_2;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (uint32_t)1);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = V_3;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		L_29->___dataLength_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32 = ___n1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33;
		L_33 = BigInteger_op_Division_m0E65A659BB326213D738370A903EBF2491ECAA68(L_31, L_32, NULL);
		V_3 = L_33;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34 = ___exp0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = BigInteger_bitCount_m50C89176444C22EFBC8F061FFC210A9DFA9C33F6(L_34, NULL);
		V_5 = L_35;
		V_6 = 0;
		V_10 = 0;
		goto IL_017e;
	}

IL_00bf:
	{
		V_11 = 1;
		V_12 = 0;
		goto IL_0168;
	}

IL_00cb:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36 = ___exp0;
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___data_2;
		int32_t L_38 = V_10;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		uint32_t L_41 = V_11;
		V_13 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_40&(int32_t)L_41))) <= ((uint32_t)0)))? 1 : 0);
		bool L_42 = V_13;
		if (!L_42)
		{
			goto IL_00f1;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_43 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_44 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_45;
		L_45 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_43, L_44, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = ___n1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_47 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48;
		L_48 = BigInteger_BarrettReduction_mBFEB2DE54E275465CAE9B32334779280949B1DD9(__this, L_45, L_46, L_47, NULL);
		V_0 = L_48;
	}

IL_00f1:
	{
		uint32_t L_49 = V_11;
		V_11 = ((int32_t)((int32_t)L_49<<1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_50 = V_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_51 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_52;
		L_52 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_50, L_51, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_53 = ___n1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_54 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_55;
		L_55 = BigInteger_BarrettReduction_mBFEB2DE54E275465CAE9B32334779280949B1DD9(__this, L_52, L_53, L_54, NULL);
		V_1 = L_55;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_56 = V_1;
		NullCheck(L_56);
		int32_t L_57 = L_56->___dataLength_3;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_011d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_58 = V_1;
		NullCheck(L_58);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = L_58->___data_2;
		NullCheck(L_59);
		int32_t L_60 = 0;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		G_B14_0 = ((((int32_t)L_61) == ((int32_t)1))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B14_0 = 0;
	}

IL_011e:
	{
		V_14 = (bool)G_B14_0;
		bool L_62 = V_14;
		if (!L_62)
		{
			goto IL_014d;
		}
	}
	{
		bool L_63 = V_2;
		if (!L_63)
		{
			goto IL_0137;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_64 = ___exp0;
		NullCheck(L_64);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = L_64->___data_2;
		NullCheck(L_65);
		int32_t L_66 = 0;
		uint32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		G_B18_0 = ((!(((uint32_t)((int32_t)((int32_t)L_67&1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0138;
	}

IL_0137:
	{
		G_B18_0 = 0;
	}

IL_0138:
	{
		V_15 = (bool)G_B18_0;
		bool L_68 = V_15;
		if (!L_68)
		{
			goto IL_0148;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_69 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_70;
		L_70 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_69, NULL);
		V_16 = L_70;
		goto IL_01b9;
	}

IL_0148:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_71 = V_0;
		V_16 = L_71;
		goto IL_01b9;
	}

IL_014d:
	{
		int32_t L_72 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_72, 1));
		int32_t L_73 = V_6;
		int32_t L_74 = V_5;
		V_17 = (bool)((((int32_t)L_73) == ((int32_t)L_74))? 1 : 0);
		bool L_75 = V_17;
		if (!L_75)
		{
			goto IL_0161;
		}
	}
	{
		goto IL_0177;
	}

IL_0161:
	{
		int32_t L_76 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_0168:
	{
		int32_t L_77 = V_12;
		V_18 = (bool)((((int32_t)L_77) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_78 = V_18;
		if (L_78)
		{
			goto IL_00cb;
		}
	}

IL_0177:
	{
		int32_t L_79 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_017e:
	{
		int32_t L_80 = V_10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_81 = ___exp0;
		NullCheck(L_81);
		int32_t L_82 = L_81->___dataLength_3;
		V_19 = (bool)((((int32_t)L_80) < ((int32_t)L_82))? 1 : 0);
		bool L_83 = V_19;
		if (L_83)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_84 = V_2;
		if (!L_84)
		{
			goto IL_01a3;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_85 = ___exp0;
		NullCheck(L_85);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = L_85->___data_2;
		NullCheck(L_86);
		int32_t L_87 = 0;
		uint32_t L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		G_B30_0 = ((!(((uint32_t)((int32_t)((int32_t)L_88&1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_01a4;
	}

IL_01a3:
	{
		G_B30_0 = 0;
	}

IL_01a4:
	{
		V_20 = (bool)G_B30_0;
		bool L_89 = V_20;
		if (!L_89)
		{
			goto IL_01b4;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_90 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_91;
		L_91 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_90, NULL);
		V_16 = L_91;
		goto IL_01b9;
	}

IL_01b4:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_92 = V_0;
		V_16 = L_92;
		goto IL_01b9;
	}

IL_01b9:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_93 = V_16;
		return L_93;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::BarrettReduction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_BarrettReduction_mBFEB2DE54E275465CAE9B32334779280949B1DD9 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___x0, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___n1, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___constant2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_3 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_4 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_5 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_6 = NULL;
	int32_t V_7 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	bool V_18 = false;
	int32_t V_19 = 0;
	uint64_t V_20 = 0;
	int32_t V_21 = 0;
	bool V_22 = false;
	int32_t V_23 = 0;
	uint64_t V_24 = 0;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_30 = NULL;
	bool V_31 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_32 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B35_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___n1;
		NullCheck(L_0);
		int32_t L_1 = L_0->___dataLength_3;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_4, NULL);
		V_3 = L_4;
		int32_t L_5 = V_2;
		V_9 = L_5;
		V_10 = 0;
		goto IL_003c;
	}

IL_001e:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_6 = V_3;
		NullCheck(L_6);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6->___data_2;
		int32_t L_8 = V_10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9 = ___x0;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___data_2;
		int32_t L_11 = V_9;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)L_13);
		int32_t L_14 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003c:
	{
		int32_t L_16 = V_9;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = ___x0;
		NullCheck(L_17);
		int32_t L_18 = L_17->___dataLength_3;
		V_11 = (bool)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_11;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_20 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = ___x0;
		NullCheck(L_21);
		int32_t L_22 = L_21->___dataLength_3;
		int32_t L_23 = V_2;
		NullCheck(L_20);
		L_20->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_22, L_23));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = V_3;
		NullCheck(L_24);
		int32_t L_25 = L_24->___dataLength_3;
		V_12 = (bool)((((int32_t)((((int32_t)L_25) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_12;
		if (!L_26)
		{
			goto IL_0073;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = V_3;
		NullCheck(L_27);
		L_27->___dataLength_3 = 1;
	}

IL_0073:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = ___constant2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_30;
		L_30 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_28, L_29, NULL);
		V_4 = L_30;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_31, NULL);
		V_5 = L_31;
		int32_t L_32 = V_1;
		V_13 = L_32;
		V_14 = 0;
		goto IL_00ab;
	}

IL_008b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = V_5;
		NullCheck(L_33);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = L_33->___data_2;
		int32_t L_35 = V_14;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36 = V_4;
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___data_2;
		int32_t L_38 = V_13;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (uint32_t)L_40);
		int32_t L_41 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00ab:
	{
		int32_t L_43 = V_13;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = L_44->___dataLength_3;
		V_15 = (bool)((((int32_t)L_43) < ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_15;
		if (L_46)
		{
			goto IL_008b;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_47 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = L_48->___dataLength_3;
		int32_t L_50 = V_1;
		NullCheck(L_47);
		L_47->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_49, L_50));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_51 = V_5;
		NullCheck(L_51);
		int32_t L_52 = L_51->___dataLength_3;
		V_16 = (bool)((((int32_t)((((int32_t)L_52) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_53 = V_16;
		if (!L_53)
		{
			goto IL_00e7;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_54 = V_5;
		NullCheck(L_54);
		L_54->___dataLength_3 = 1;
	}

IL_00e7:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_55 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_55, NULL);
		V_6 = L_55;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_56 = ___x0;
		NullCheck(L_56);
		int32_t L_57 = L_56->___dataLength_3;
		int32_t L_58 = V_1;
		if ((((int32_t)L_57) > ((int32_t)L_58)))
		{
			goto IL_00ff;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_59 = ___x0;
		NullCheck(L_59);
		int32_t L_60 = L_59->___dataLength_3;
		G_B13_0 = L_60;
		goto IL_0100;
	}

IL_00ff:
	{
		int32_t L_61 = V_1;
		G_B13_0 = L_61;
	}

IL_0100:
	{
		V_7 = G_B13_0;
		V_17 = 0;
		goto IL_0120;
	}

IL_0107:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_62 = V_6;
		NullCheck(L_62);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = L_62->___data_2;
		int32_t L_64 = V_17;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_65 = ___x0;
		NullCheck(L_65);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = L_65->___data_2;
		int32_t L_67 = V_17;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint32_t)L_69);
		int32_t L_70 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_0120:
	{
		int32_t L_71 = V_17;
		int32_t L_72 = V_7;
		V_18 = (bool)((((int32_t)L_71) < ((int32_t)L_72))? 1 : 0);
		bool L_73 = V_18;
		if (L_73)
		{
			goto IL_0107;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_74 = V_6;
		int32_t L_75 = V_7;
		NullCheck(L_74);
		L_74->___dataLength_3 = L_75;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_76 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_76);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_76, NULL);
		V_8 = L_76;
		V_19 = 0;
		goto IL_01ed;
	}

IL_0144:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_77 = V_5;
		NullCheck(L_77);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = L_77->___data_2;
		int32_t L_79 = V_19;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		uint32_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		V_22 = (bool)((((int32_t)L_81) == ((int32_t)0))? 1 : 0);
		bool L_82 = V_22;
		if (!L_82)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01e7;
	}

IL_015d:
	{
		V_20 = ((int64_t)0);
		int32_t L_83 = V_19;
		V_21 = L_83;
		V_23 = 0;
		goto IL_01b6;
	}

IL_016a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_84 = V_5;
		NullCheck(L_84);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = L_84->___data_2;
		int32_t L_86 = V_19;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		uint32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_89 = ___n1;
		NullCheck(L_89);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = L_89->___data_2;
		int32_t L_91 = V_23;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		uint32_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_94 = V_8;
		NullCheck(L_94);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = L_94->___data_2;
		int32_t L_96 = V_21;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		uint32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		uint64_t L_99 = V_20;
		V_24 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_88), ((int64_t)(uint64_t)L_93))), ((int64_t)(uint64_t)L_98))), (int64_t)L_99));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_100 = V_8;
		NullCheck(L_100);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = L_100->___data_2;
		int32_t L_102 = V_21;
		uint64_t L_103 = V_24;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_102), (uint32_t)((int32_t)(uint32_t)((int64_t)((int64_t)L_103&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		uint64_t L_104 = V_24;
		V_20 = ((int64_t)((uint64_t)L_104>>((int32_t)32)));
		int32_t L_105 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_105, 1));
		int32_t L_106 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_106, 1));
	}

IL_01b6:
	{
		int32_t L_107 = V_23;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_108 = ___n1;
		NullCheck(L_108);
		int32_t L_109 = L_108->___dataLength_3;
		if ((((int32_t)L_107) >= ((int32_t)L_109)))
		{
			goto IL_01c7;
		}
	}
	{
		int32_t L_110 = V_21;
		int32_t L_111 = V_1;
		G_B24_0 = ((((int32_t)L_110) < ((int32_t)L_111))? 1 : 0);
		goto IL_01c8;
	}

IL_01c7:
	{
		G_B24_0 = 0;
	}

IL_01c8:
	{
		V_25 = (bool)G_B24_0;
		bool L_112 = V_25;
		if (L_112)
		{
			goto IL_016a;
		}
	}
	{
		int32_t L_113 = V_21;
		int32_t L_114 = V_1;
		V_26 = (bool)((((int32_t)L_113) < ((int32_t)L_114))? 1 : 0);
		bool L_115 = V_26;
		if (!L_115)
		{
			goto IL_01e6;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_116 = V_8;
		NullCheck(L_116);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = L_116->___data_2;
		int32_t L_118 = V_21;
		uint64_t L_119 = V_20;
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(L_118), (uint32_t)((int32_t)(uint32_t)L_119));
	}

IL_01e6:
	{
	}

IL_01e7:
	{
		int32_t L_120 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_120, 1));
	}

IL_01ed:
	{
		int32_t L_121 = V_19;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_122 = V_5;
		NullCheck(L_122);
		int32_t L_123 = L_122->___dataLength_3;
		V_27 = (bool)((((int32_t)L_121) < ((int32_t)L_123))? 1 : 0);
		bool L_124 = V_27;
		if (L_124)
		{
			goto IL_0144;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_125 = V_8;
		int32_t L_126 = V_1;
		NullCheck(L_125);
		L_125->___dataLength_3 = L_126;
		goto IL_021a;
	}

IL_020b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_127 = V_8;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_128 = L_127;
		NullCheck(L_128);
		int32_t L_129 = L_128->___dataLength_3;
		NullCheck(L_128);
		L_128->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_129, 1));
	}

IL_021a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_130 = V_8;
		NullCheck(L_130);
		int32_t L_131 = L_130->___dataLength_3;
		if ((((int32_t)L_131) <= ((int32_t)1)))
		{
			goto IL_023a;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_132 = V_8;
		NullCheck(L_132);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_133 = L_132->___data_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_134 = V_8;
		NullCheck(L_134);
		int32_t L_135 = L_134->___dataLength_3;
		NullCheck(L_133);
		int32_t L_136 = ((int32_t)il2cpp_codegen_subtract(L_135, 1));
		uint32_t L_137 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		G_B35_0 = ((((int32_t)L_137) == ((int32_t)0))? 1 : 0);
		goto IL_023b;
	}

IL_023a:
	{
		G_B35_0 = 0;
	}

IL_023b:
	{
		V_28 = (bool)G_B35_0;
		bool L_138 = V_28;
		if (L_138)
		{
			goto IL_020b;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_139 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_140 = V_8;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_141;
		L_141 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_139, L_140, NULL);
		V_6 = L_141;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_142 = V_6;
		NullCheck(L_142);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = L_142->___data_2;
		NullCheck(L_143);
		int32_t L_144 = ((int32_t)69);
		uint32_t L_145 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		V_29 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_145&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_29;
		if (!L_146)
		{
			goto IL_028d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_147 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_147);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_147, NULL);
		V_30 = L_147;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_148 = V_30;
		NullCheck(L_148);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_149 = L_148->___data_2;
		int32_t L_150 = V_1;
		NullCheck(L_149);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(L_150), (uint32_t)1);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_151 = V_30;
		int32_t L_152 = V_1;
		NullCheck(L_151);
		L_151->___dataLength_3 = ((int32_t)il2cpp_codegen_add(L_152, 1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_153 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_154 = V_30;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_155;
		L_155 = BigInteger_op_Addition_m530E1AD8E6D64195B4645033819D2A24B764C237(L_153, L_154, NULL);
		V_6 = L_155;
	}

IL_028d:
	{
		goto IL_0299;
	}

IL_028f:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_156 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_157 = ___n1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_158;
		L_158 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_156, L_157, NULL);
		V_6 = L_158;
	}

IL_0299:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_159 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_160 = ___n1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_161;
		L_161 = BigInteger_op_GreaterThanOrEqual_mDCDEAF660FABF6A1545726684FB38A78F1835448(L_159, L_160, NULL);
		V_31 = L_161;
		bool L_162 = V_31;
		if (L_162)
		{
			goto IL_028f;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_163 = V_6;
		V_32 = L_163;
		goto IL_02ad;
	}

IL_02ad:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_164 = V_32;
		return L_164;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::gcd(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_gcd_m1A5651E10622C6987DD65408225991106B51D45E (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___bi0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_6 = NULL;
	int32_t G_B12_0 = 0;
	int32_t G_B14_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___data_2;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)69);
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_3 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_2&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4;
		L_4 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(__this, NULL);
		V_0 = L_4;
		goto IL_0022;
	}

IL_0020:
	{
		V_0 = __this;
	}

IL_0022:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = ___bi0;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data_2;
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)69);
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_8&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10 = ___bi0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11;
		L_11 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_10, NULL);
		V_1 = L_11;
		goto IL_0045;
	}

IL_0043:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = ___bi0;
		V_1 = L_12;
	}

IL_0045:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_13 = V_1;
		V_2 = L_13;
		goto IL_0057;
	}

IL_0049:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_14 = V_0;
		V_2 = L_14;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15 = V_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17;
		L_17 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_15, L_16, NULL);
		V_0 = L_17;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_18 = V_2;
		V_1 = L_18;
	}

IL_0057:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = L_19->___dataLength_3;
		if ((((int32_t)L_20) > ((int32_t)1)))
		{
			goto IL_0079;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = L_21->___dataLength_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_0076;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_23 = V_0;
		NullCheck(L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = L_23->___data_2;
		NullCheck(L_24);
		int32_t L_25 = 0;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		G_B12_0 = ((!(((uint32_t)L_26) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0077;
	}

IL_0076:
	{
		G_B12_0 = 0;
	}

IL_0077:
	{
		G_B14_0 = G_B12_0;
		goto IL_007a;
	}

IL_0079:
	{
		G_B14_0 = 1;
	}

IL_007a:
	{
		V_5 = (bool)G_B14_0;
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0049;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = V_2;
		V_6 = L_28;
		goto IL_0085;
	}

IL_0085:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29 = V_6;
		return L_29;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::GenerateRandom(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_GenerateRandom_mE298EF34ECB20269436BDF2765DBE9F8E593C4F9 (int32_t ___bits0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_0, NULL);
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = V_0;
		int32_t L_2 = ___bits0;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_3 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_3, NULL);
		NullCheck(L_1);
		BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB(L_1, L_2, L_3, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = V_0;
		V_1 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = V_1;
		return L_5;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::genRandomBits(System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___bits0, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rand1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	uint32_t V_9 = 0;
	bool V_10 = false;
	{
		int32_t L_0 = ___bits0;
		V_0 = ((int32_t)(L_0>>5));
		int32_t L_1 = ___bits0;
		V_1 = ((int32_t)(L_1&((int32_t)31)));
		int32_t L_2 = V_1;
		V_2 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0016:
	{
		int32_t L_5 = V_0;
		V_3 = (bool)((((int32_t)L_5) > ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_7 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE867641BA2826180B2167D7038C421CA025C7A2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB_RuntimeMethod_var)));
	}

IL_002a:
	{
		V_4 = 0;
		goto IL_004f;
	}

IL_002f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->___data_2;
		int32_t L_9 = V_4;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_10 = ___rand1;
		NullCheck(L_10);
		double L_11;
		L_11 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_10);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)il2cpp_codegen_cast_floating_point<uint32_t, int32_t, double>(((double)il2cpp_codegen_multiply(L_11, (4294967296.0)))));
		int32_t L_12 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004f:
	{
		int32_t L_13 = V_4;
		int32_t L_14 = V_0;
		V_5 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_16 = V_0;
		V_6 = L_16;
		goto IL_006f;
	}

IL_005f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = __this->___data_2;
		int32_t L_18 = V_6;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint32_t)0);
		int32_t L_19 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006f:
	{
		int32_t L_20 = V_6;
		V_7 = (bool)((((int32_t)L_20) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_21 = V_7;
		if (L_21)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_22 = V_1;
		V_8 = (bool)((!(((uint32_t)L_22) <= ((uint32_t)0)))? 1 : 0);
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_24 = V_1;
		V_9 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_24, 1))&((int32_t)31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = __this->___data_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		uint32_t* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_26, 1)))));
		int32_t L_28 = *((uint32_t*)L_27);
		uint32_t L_29 = V_9;
		*((int32_t*)L_27) = (int32_t)((int32_t)(L_28|(int32_t)L_29));
		int32_t L_30 = V_1;
		V_9 = ((int32_t)((uint32_t)(-1)>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_30))&((int32_t)31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->___data_2;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		uint32_t* L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_32, 1)))));
		int32_t L_34 = *((uint32_t*)L_33);
		uint32_t L_35 = V_9;
		*((int32_t*)L_33) = (int32_t)((int32_t)(L_34&(int32_t)L_35));
		goto IL_00dd;
	}

IL_00c6:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = __this->___data_2;
		int32_t L_37 = V_0;
		NullCheck(L_36);
		uint32_t* L_38 = ((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_37, 1)))));
		int32_t L_39 = *((uint32_t*)L_38);
		*((int32_t*)L_38) = (int32_t)((int32_t)(L_39|((int32_t)-2147483648LL)));
	}

IL_00dd:
	{
		int32_t L_40 = V_0;
		__this->___dataLength_3 = L_40;
		int32_t L_41 = __this->___dataLength_3;
		V_10 = (bool)((((int32_t)L_41) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_10;
		if (!L_42)
		{
			goto IL_00fa;
		}
	}
	{
		__this->___dataLength_3 = 1;
	}

IL_00fa:
	{
		return;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::bitCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_bitCount_m50C89176444C22EFBC8F061FFC210A9DFA9C33F6 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	{
		goto IL_0011;
	}

IL_0003:
	{
		int32_t L_0 = __this->___dataLength_3;
		__this->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
	}

IL_0011:
	{
		int32_t L_1 = __this->___dataLength_3;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___data_2;
		int32_t L_3 = __this->___dataLength_3;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B5_0 = 0;
	}

IL_002f:
	{
		V_3 = (bool)G_B5_0;
		bool L_6 = V_3;
		if (L_6)
		{
			goto IL_0003;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___data_2;
		int32_t L_8 = __this->___dataLength_3;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = L_10;
		V_1 = ((int32_t)-2147483648LL);
		V_2 = ((int32_t)32);
		goto IL_0058;
	}

IL_004e:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		uint32_t L_12 = V_1;
		V_1 = ((int32_t)((uint32_t)L_12>>1));
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_14 = V_0;
		uint32_t L_15 = V_1;
		G_B11_0 = ((((int32_t)((int32_t)((int32_t)L_14&(int32_t)L_15))) == ((int32_t)0))? 1 : 0);
		goto IL_0065;
	}

IL_0064:
	{
		G_B11_0 = 0;
	}

IL_0065:
	{
		V_4 = (bool)G_B11_0;
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_17 = V_2;
		int32_t L_18 = __this->___dataLength_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_18, 1))<<5))));
		int32_t L_19 = V_2;
		V_5 = L_19;
		goto IL_007d;
	}

IL_007d:
	{
		int32_t L_20 = V_5;
		return L_20;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::FermatLittleTest(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_FermatLittleTest_m3F14DDD38E4E70B5965A80F9ECC054E69D2979BF (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___confidence0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	int32_t V_1 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_2 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_3 = NULL;
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_13 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_14 = NULL;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	int32_t G_B43_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___data_2;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)69);
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_2&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4;
		L_4 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(__this, NULL);
		V_0 = L_4;
		goto IL_0024;
	}

IL_0022:
	{
		V_0 = __this;
	}

IL_0024:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___dataLength_3;
		V_6 = (bool)((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
		bool L_7 = V_6;
		if (!L_7)
		{
			goto IL_0082;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = V_0;
		NullCheck(L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___data_2;
		NullCheck(L_9);
		int32_t L_10 = 0;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = V_0;
		NullCheck(L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12->___data_2;
		NullCheck(L_13);
		int32_t L_14 = 0;
		uint32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		G_B7_0 = ((((int32_t)L_15) == ((int32_t)1))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B7_0 = 1;
	}

IL_004c:
	{
		V_7 = (bool)G_B7_0;
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_005a;
		}
	}
	{
		V_8 = (bool)0;
		goto IL_01b9;
	}

IL_005a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = V_0;
		NullCheck(L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___data_2;
		NullCheck(L_18);
		int32_t L_19 = 0;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((((int32_t)L_20) == ((int32_t)2)))
		{
			goto IL_0072;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = V_0;
		NullCheck(L_21);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = L_21->___data_2;
		NullCheck(L_22);
		int32_t L_23 = 0;
		uint32_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		G_B12_0 = ((((int32_t)L_24) == ((int32_t)3))? 1 : 0);
		goto IL_0073;
	}

IL_0072:
	{
		G_B12_0 = 1;
	}

IL_0073:
	{
		V_9 = (bool)G_B12_0;
		bool L_25 = V_9;
		if (!L_25)
		{
			goto IL_0081;
		}
	}
	{
		V_8 = (bool)1;
		goto IL_01b9;
	}

IL_0081:
	{
	}

IL_0082:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = V_0;
		NullCheck(L_26);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = L_26->___data_2;
		NullCheck(L_27);
		int32_t L_28 = 0;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_10 = (bool)((((int32_t)((int32_t)((int32_t)L_29&1))) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_009d;
		}
	}
	{
		V_8 = (bool)0;
		goto IL_01b9;
	}

IL_009d:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = BigInteger_bitCount_m50C89176444C22EFBC8F061FFC210A9DFA9C33F6(L_31, NULL);
		V_1 = L_32;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_33, NULL);
		V_2 = L_33;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_35 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64(L_35, ((int64_t)1), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36;
		L_36 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_34, L_35, NULL);
		V_3 = L_36;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_37 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_37, NULL);
		V_4 = L_37;
		V_11 = 0;
		goto IL_01a6;
	}

IL_00c7:
	{
		V_12 = (bool)0;
		goto IL_0126;
	}

IL_00cd:
	{
		V_16 = 0;
		goto IL_00e0;
	}

IL_00d3:
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_38 = V_4;
		NullCheck(L_38);
		double L_39;
		L_39 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_38);
		int32_t L_40 = V_1;
		V_16 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(L_39, ((double)L_40))));
	}

IL_00e0:
	{
		int32_t L_41 = V_16;
		V_18 = (bool)((((int32_t)L_41) < ((int32_t)2))? 1 : 0);
		bool L_42 = V_18;
		if (L_42)
		{
			goto IL_00d3;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_43 = V_2;
		int32_t L_44 = V_16;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_45 = V_4;
		NullCheck(L_43);
		BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB(L_43, L_44, L_45, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = V_2;
		NullCheck(L_46);
		int32_t L_47 = L_46->___dataLength_3;
		V_17 = L_47;
		int32_t L_48 = V_17;
		if ((((int32_t)L_48) > ((int32_t)1)))
		{
			goto IL_011b;
		}
	}
	{
		int32_t L_49 = V_17;
		if ((!(((uint32_t)L_49) == ((uint32_t)1))))
		{
			goto IL_0118;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_50 = V_2;
		NullCheck(L_50);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = L_50->___data_2;
		NullCheck(L_51);
		int32_t L_52 = 0;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		G_B26_0 = ((((int32_t)((((int32_t)L_53) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0119;
	}

IL_0118:
	{
		G_B26_0 = 0;
	}

IL_0119:
	{
		G_B28_0 = G_B26_0;
		goto IL_011c;
	}

IL_011b:
	{
		G_B28_0 = 1;
	}

IL_011c:
	{
		V_19 = (bool)G_B28_0;
		bool L_54 = V_19;
		if (!L_54)
		{
			goto IL_0125;
		}
	}
	{
		V_12 = (bool)1;
	}

IL_0125:
	{
	}

IL_0126:
	{
		bool L_55 = V_12;
		V_20 = (bool)((((int32_t)L_55) == ((int32_t)0))? 1 : 0);
		bool L_56 = V_20;
		if (L_56)
		{
			goto IL_00cd;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_57 = V_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_58 = V_0;
		NullCheck(L_57);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_59;
		L_59 = BigInteger_gcd_m1A5651E10622C6987DD65408225991106B51D45E(L_57, L_58, NULL);
		V_13 = L_59;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_60 = V_13;
		NullCheck(L_60);
		int32_t L_61 = L_60->___dataLength_3;
		if ((!(((uint32_t)L_61) == ((uint32_t)1))))
		{
			goto IL_0155;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_62 = V_13;
		NullCheck(L_62);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = L_62->___data_2;
		NullCheck(L_63);
		int32_t L_64 = 0;
		uint32_t L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		G_B35_0 = ((((int32_t)((((int32_t)L_65) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0156;
	}

IL_0155:
	{
		G_B35_0 = 0;
	}

IL_0156:
	{
		V_21 = (bool)G_B35_0;
		bool L_66 = V_21;
		if (!L_66)
		{
			goto IL_0161;
		}
	}
	{
		V_8 = (bool)0;
		goto IL_01b9;
	}

IL_0161:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_67 = V_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_68 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_69 = V_0;
		NullCheck(L_67);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_70;
		L_70 = BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F(L_67, L_68, L_69, NULL);
		V_14 = L_70;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_71 = V_14;
		NullCheck(L_71);
		int32_t L_72 = L_71->___dataLength_3;
		V_15 = L_72;
		int32_t L_73 = V_15;
		if ((((int32_t)L_73) > ((int32_t)1)))
		{
			goto IL_0192;
		}
	}
	{
		int32_t L_74 = V_15;
		if ((!(((uint32_t)L_74) == ((uint32_t)1))))
		{
			goto IL_018f;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_75 = V_14;
		NullCheck(L_75);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = L_75->___data_2;
		NullCheck(L_76);
		int32_t L_77 = 0;
		uint32_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		G_B41_0 = ((((int32_t)((((int32_t)L_78) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0190;
	}

IL_018f:
	{
		G_B41_0 = 0;
	}

IL_0190:
	{
		G_B43_0 = G_B41_0;
		goto IL_0193;
	}

IL_0192:
	{
		G_B43_0 = 1;
	}

IL_0193:
	{
		V_22 = (bool)G_B43_0;
		bool L_79 = V_22;
		if (!L_79)
		{
			goto IL_019f;
		}
	}
	{
		V_8 = (bool)0;
		goto IL_01b9;
	}

IL_019f:
	{
		int32_t L_80 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_01a6:
	{
		int32_t L_81 = V_11;
		int32_t L_82 = ___confidence0;
		V_23 = (bool)((((int32_t)L_81) < ((int32_t)L_82))? 1 : 0);
		bool L_83 = V_23;
		if (L_83)
		{
			goto IL_00c7;
		}
	}
	{
		V_8 = (bool)1;
		goto IL_01b9;
	}

IL_01b9:
	{
		bool L_84 = V_8;
		return L_84;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::RabinMillerTest(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_RabinMillerTest_mCA4EA9AC31EF0FDA9ACFFCDEE925C0CE3B88D0A3 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___confidence0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	int32_t V_2 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_3 = NULL;
	int32_t V_4 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_5 = NULL;
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	uint32_t V_14 = 0;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_21 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_22 = NULL;
	bool V_23 = false;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	int32_t V_31 = 0;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B43_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B57_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___data_2;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)69);
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_7 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_2&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_7;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4;
		L_4 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(__this, NULL);
		V_0 = L_4;
		goto IL_0024;
	}

IL_0022:
	{
		V_0 = __this;
	}

IL_0024:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___dataLength_3;
		V_8 = (bool)((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
		bool L_7 = V_8;
		if (!L_7)
		{
			goto IL_0082;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = V_0;
		NullCheck(L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___data_2;
		NullCheck(L_9);
		int32_t L_10 = 0;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = V_0;
		NullCheck(L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12->___data_2;
		NullCheck(L_13);
		int32_t L_14 = 0;
		uint32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		G_B7_0 = ((((int32_t)L_15) == ((int32_t)1))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B7_0 = 1;
	}

IL_004c:
	{
		V_9 = (bool)G_B7_0;
		bool L_16 = V_9;
		if (!L_16)
		{
			goto IL_005a;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0276;
	}

IL_005a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = V_0;
		NullCheck(L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___data_2;
		NullCheck(L_18);
		int32_t L_19 = 0;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((((int32_t)L_20) == ((int32_t)2)))
		{
			goto IL_0072;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = V_0;
		NullCheck(L_21);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = L_21->___data_2;
		NullCheck(L_22);
		int32_t L_23 = 0;
		uint32_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		G_B12_0 = ((((int32_t)L_24) == ((int32_t)3))? 1 : 0);
		goto IL_0073;
	}

IL_0072:
	{
		G_B12_0 = 1;
	}

IL_0073:
	{
		V_11 = (bool)G_B12_0;
		bool L_25 = V_11;
		if (!L_25)
		{
			goto IL_0081;
		}
	}
	{
		V_10 = (bool)1;
		goto IL_0276;
	}

IL_0081:
	{
	}

IL_0082:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = V_0;
		NullCheck(L_26);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = L_26->___data_2;
		NullCheck(L_27);
		int32_t L_28 = 0;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_12 = (bool)((((int32_t)((int32_t)((int32_t)L_29&1))) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_12;
		if (!L_30)
		{
			goto IL_009d;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0276;
	}

IL_009d:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64(L_32, ((int64_t)1), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33;
		L_33 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_31, L_32, NULL);
		V_1 = L_33;
		V_2 = 0;
		V_13 = 0;
		goto IL_0100;
	}

IL_00b2:
	{
		V_14 = 1;
		V_15 = 0;
		goto IL_00ed;
	}

IL_00bb:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34 = V_1;
		NullCheck(L_34);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = L_34->___data_2;
		int32_t L_36 = V_13;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		uint32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		uint32_t L_39 = V_14;
		V_16 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_38&(int32_t)L_39))) <= ((uint32_t)0)))? 1 : 0);
		bool L_40 = V_16;
		if (!L_40)
		{
			goto IL_00dc;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_41 = V_1;
		NullCheck(L_41);
		int32_t L_42 = L_41->___dataLength_3;
		V_13 = L_42;
		goto IL_00f9;
	}

IL_00dc:
	{
		uint32_t L_43 = V_14;
		V_14 = ((int32_t)((int32_t)L_43<<1));
		int32_t L_44 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00ed:
	{
		int32_t L_46 = V_15;
		V_17 = (bool)((((int32_t)L_46) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_47 = V_17;
		if (L_47)
		{
			goto IL_00bb;
		}
	}

IL_00f9:
	{
		int32_t L_48 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0100:
	{
		int32_t L_49 = V_13;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_50 = V_1;
		NullCheck(L_50);
		int32_t L_51 = L_50->___dataLength_3;
		V_18 = (bool)((((int32_t)L_49) < ((int32_t)L_51))? 1 : 0);
		bool L_52 = V_18;
		if (L_52)
		{
			goto IL_00b2;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_53 = V_1;
		int32_t L_54 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_55;
		L_55 = BigInteger_op_RightShift_mFF8501FDA582B6AD9771C141BCC7DC77ACD742F3(L_53, L_54, NULL);
		V_3 = L_55;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_56 = V_0;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = BigInteger_bitCount_m50C89176444C22EFBC8F061FFC210A9DFA9C33F6(L_56, NULL);
		V_4 = L_57;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_58 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_58, NULL);
		V_5 = L_58;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_59 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_59, NULL);
		V_6 = L_59;
		V_19 = 0;
		goto IL_0263;
	}

IL_0136:
	{
		V_20 = (bool)0;
		goto IL_0199;
	}

IL_013c:
	{
		V_24 = 0;
		goto IL_0150;
	}

IL_0142:
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_60 = V_6;
		NullCheck(L_60);
		double L_61;
		L_61 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_60);
		int32_t L_62 = V_4;
		V_24 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(L_61, ((double)L_62))));
	}

IL_0150:
	{
		int32_t L_63 = V_24;
		V_26 = (bool)((((int32_t)L_63) < ((int32_t)2))? 1 : 0);
		bool L_64 = V_26;
		if (L_64)
		{
			goto IL_0142;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_65 = V_5;
		int32_t L_66 = V_24;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_67 = V_6;
		NullCheck(L_65);
		BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB(L_65, L_66, L_67, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_68 = V_5;
		NullCheck(L_68);
		int32_t L_69 = L_68->___dataLength_3;
		V_25 = L_69;
		int32_t L_70 = V_25;
		if ((((int32_t)L_70) > ((int32_t)1)))
		{
			goto IL_018e;
		}
	}
	{
		int32_t L_71 = V_25;
		if ((!(((uint32_t)L_71) == ((uint32_t)1))))
		{
			goto IL_018b;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_72 = V_5;
		NullCheck(L_72);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = L_72->___data_2;
		NullCheck(L_73);
		int32_t L_74 = 0;
		uint32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		G_B34_0 = ((((int32_t)((((int32_t)L_75) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_018c;
	}

IL_018b:
	{
		G_B34_0 = 0;
	}

IL_018c:
	{
		G_B36_0 = G_B34_0;
		goto IL_018f;
	}

IL_018e:
	{
		G_B36_0 = 1;
	}

IL_018f:
	{
		V_27 = (bool)G_B36_0;
		bool L_76 = V_27;
		if (!L_76)
		{
			goto IL_0198;
		}
	}
	{
		V_20 = (bool)1;
	}

IL_0198:
	{
	}

IL_0199:
	{
		bool L_77 = V_20;
		V_28 = (bool)((((int32_t)L_77) == ((int32_t)0))? 1 : 0);
		bool L_78 = V_28;
		if (L_78)
		{
			goto IL_013c;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_79 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_80 = V_0;
		NullCheck(L_79);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_81;
		L_81 = BigInteger_gcd_m1A5651E10622C6987DD65408225991106B51D45E(L_79, L_80, NULL);
		V_21 = L_81;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_82 = V_21;
		NullCheck(L_82);
		int32_t L_83 = L_82->___dataLength_3;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c9;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_84 = V_21;
		NullCheck(L_84);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = L_84->___data_2;
		NullCheck(L_85);
		int32_t L_86 = 0;
		uint32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		G_B43_0 = ((((int32_t)((((int32_t)L_87) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01ca;
	}

IL_01c9:
	{
		G_B43_0 = 0;
	}

IL_01ca:
	{
		V_29 = (bool)G_B43_0;
		bool L_88 = V_29;
		if (!L_88)
		{
			goto IL_01d8;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0276;
	}

IL_01d8:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_89 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_90 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_91 = V_0;
		NullCheck(L_89);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_92;
		L_92 = BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F(L_89, L_90, L_91, NULL);
		V_22 = L_92;
		V_23 = (bool)0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_93 = V_22;
		NullCheck(L_93);
		int32_t L_94 = L_93->___dataLength_3;
		if ((!(((uint32_t)L_94) == ((uint32_t)1))))
		{
			goto IL_01fe;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_95 = V_22;
		NullCheck(L_95);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = L_95->___data_2;
		NullCheck(L_96);
		int32_t L_97 = 0;
		uint32_t L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		G_B48_0 = ((((int32_t)L_98) == ((int32_t)1))? 1 : 0);
		goto IL_01ff;
	}

IL_01fe:
	{
		G_B48_0 = 0;
	}

IL_01ff:
	{
		V_30 = (bool)G_B48_0;
		bool L_99 = V_30;
		if (!L_99)
		{
			goto IL_0208;
		}
	}
	{
		V_23 = (bool)1;
	}

IL_0208:
	{
		V_31 = 0;
		goto IL_023a;
	}

IL_020d:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_100 = V_22;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_101 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_102;
		L_102 = BigInteger_op_Equality_mFF395F5866F1B4E7BD78D208A3BEEF209DA7F861(L_100, L_101, NULL);
		V_32 = L_102;
		bool L_103 = V_32;
		if (!L_103)
		{
			goto IL_0222;
		}
	}
	{
		V_23 = (bool)1;
		goto IL_024c;
	}

IL_0222:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_104 = V_22;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_105 = V_22;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_106;
		L_106 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_104, L_105, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_107 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_108;
		L_108 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_106, L_107, NULL);
		V_22 = L_108;
		int32_t L_109 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add(L_109, 1));
	}

IL_023a:
	{
		bool L_110 = V_23;
		if (L_110)
		{
			goto IL_0245;
		}
	}
	{
		int32_t L_111 = V_31;
		int32_t L_112 = V_2;
		G_B57_0 = ((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		goto IL_0246;
	}

IL_0245:
	{
		G_B57_0 = 0;
	}

IL_0246:
	{
		V_33 = (bool)G_B57_0;
		bool L_113 = V_33;
		if (L_113)
		{
			goto IL_020d;
		}
	}

IL_024c:
	{
		bool L_114 = V_23;
		V_34 = (bool)((((int32_t)L_114) == ((int32_t)0))? 1 : 0);
		bool L_115 = V_34;
		if (!L_115)
		{
			goto IL_025c;
		}
	}
	{
		V_10 = (bool)0;
		goto IL_0276;
	}

IL_025c:
	{
		int32_t L_116 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_116, 1));
	}

IL_0263:
	{
		int32_t L_117 = V_19;
		int32_t L_118 = ___confidence0;
		V_35 = (bool)((((int32_t)L_117) < ((int32_t)L_118))? 1 : 0);
		bool L_119 = V_35;
		if (L_119)
		{
			goto IL_0136;
		}
	}
	{
		V_10 = (bool)1;
		goto IL_0276;
	}

IL_0276:
	{
		bool L_120 = V_10;
		return L_120;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::SolovayStrassenTest(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_SolovayStrassenTest_m9F02AE87545710145437490BC88B8CFEA22FEC77 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___confidence0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	int32_t V_1 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_2 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_3 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_4 = NULL;
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_14 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_15 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_16 = NULL;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B35_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___data_2;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)69);
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_6 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_2&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_6;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4;
		L_4 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(__this, NULL);
		V_0 = L_4;
		goto IL_0024;
	}

IL_0022:
	{
		V_0 = __this;
	}

IL_0024:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___dataLength_3;
		V_7 = (bool)((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
		bool L_7 = V_7;
		if (!L_7)
		{
			goto IL_0082;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = V_0;
		NullCheck(L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___data_2;
		NullCheck(L_9);
		int32_t L_10 = 0;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = V_0;
		NullCheck(L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12->___data_2;
		NullCheck(L_13);
		int32_t L_14 = 0;
		uint32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		G_B7_0 = ((((int32_t)L_15) == ((int32_t)1))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B7_0 = 1;
	}

IL_004c:
	{
		V_8 = (bool)G_B7_0;
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_005a;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_01c6;
	}

IL_005a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = V_0;
		NullCheck(L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___data_2;
		NullCheck(L_18);
		int32_t L_19 = 0;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((((int32_t)L_20) == ((int32_t)2)))
		{
			goto IL_0072;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = V_0;
		NullCheck(L_21);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = L_21->___data_2;
		NullCheck(L_22);
		int32_t L_23 = 0;
		uint32_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		G_B12_0 = ((((int32_t)L_24) == ((int32_t)3))? 1 : 0);
		goto IL_0073;
	}

IL_0072:
	{
		G_B12_0 = 1;
	}

IL_0073:
	{
		V_10 = (bool)G_B12_0;
		bool L_25 = V_10;
		if (!L_25)
		{
			goto IL_0081;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_01c6;
	}

IL_0081:
	{
	}

IL_0082:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = V_0;
		NullCheck(L_26);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = L_26->___data_2;
		NullCheck(L_27);
		int32_t L_28 = 0;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_11 = (bool)((((int32_t)((int32_t)((int32_t)L_29&1))) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_11;
		if (!L_30)
		{
			goto IL_009d;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_01c6;
	}

IL_009d:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = BigInteger_bitCount_m50C89176444C22EFBC8F061FFC210A9DFA9C33F6(L_31, NULL);
		V_1 = L_32;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_33, NULL);
		V_2 = L_33;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_35;
		L_35 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(1, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36;
		L_36 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_34, L_35, NULL);
		V_3 = L_36;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_37 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_38;
		L_38 = BigInteger_op_RightShift_mFF8501FDA582B6AD9771C141BCC7DC77ACD742F3(L_37, 1, NULL);
		V_4 = L_38;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_39 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_39, NULL);
		V_5 = L_39;
		V_12 = 0;
		goto IL_01b3;
	}

IL_00cf:
	{
		V_13 = (bool)0;
		goto IL_012e;
	}

IL_00d5:
	{
		V_17 = 0;
		goto IL_00e8;
	}

IL_00db:
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_40 = V_5;
		NullCheck(L_40);
		double L_41;
		L_41 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_40);
		int32_t L_42 = V_1;
		V_17 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(L_41, ((double)L_42))));
	}

IL_00e8:
	{
		int32_t L_43 = V_17;
		V_19 = (bool)((((int32_t)L_43) < ((int32_t)2))? 1 : 0);
		bool L_44 = V_19;
		if (L_44)
		{
			goto IL_00db;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_45 = V_2;
		int32_t L_46 = V_17;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_47 = V_5;
		NullCheck(L_45);
		BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB(L_45, L_46, L_47, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = V_2;
		NullCheck(L_48);
		int32_t L_49 = L_48->___dataLength_3;
		V_18 = L_49;
		int32_t L_50 = V_18;
		if ((((int32_t)L_50) > ((int32_t)1)))
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_51 = V_18;
		if ((!(((uint32_t)L_51) == ((uint32_t)1))))
		{
			goto IL_0120;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_52 = V_2;
		NullCheck(L_52);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = L_52->___data_2;
		NullCheck(L_53);
		int32_t L_54 = 0;
		uint32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		G_B26_0 = ((((int32_t)((((int32_t)L_55) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0121;
	}

IL_0120:
	{
		G_B26_0 = 0;
	}

IL_0121:
	{
		G_B28_0 = G_B26_0;
		goto IL_0124;
	}

IL_0123:
	{
		G_B28_0 = 1;
	}

IL_0124:
	{
		V_20 = (bool)G_B28_0;
		bool L_56 = V_20;
		if (!L_56)
		{
			goto IL_012d;
		}
	}
	{
		V_13 = (bool)1;
	}

IL_012d:
	{
	}

IL_012e:
	{
		bool L_57 = V_13;
		V_21 = (bool)((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		bool L_58 = V_21;
		if (L_58)
		{
			goto IL_00d5;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_59 = V_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_60 = V_0;
		NullCheck(L_59);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_61;
		L_61 = BigInteger_gcd_m1A5651E10622C6987DD65408225991106B51D45E(L_59, L_60, NULL);
		V_14 = L_61;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_62 = V_14;
		NullCheck(L_62);
		int32_t L_63 = L_62->___dataLength_3;
		if ((!(((uint32_t)L_63) == ((uint32_t)1))))
		{
			goto IL_015d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_64 = V_14;
		NullCheck(L_64);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = L_64->___data_2;
		NullCheck(L_65);
		int32_t L_66 = 0;
		uint32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		G_B35_0 = ((((int32_t)((((int32_t)L_67) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_015e;
	}

IL_015d:
	{
		G_B35_0 = 0;
	}

IL_015e:
	{
		V_22 = (bool)G_B35_0;
		bool L_68 = V_22;
		if (!L_68)
		{
			goto IL_0169;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_01c6;
	}

IL_0169:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_69 = V_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_70 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_71 = V_0;
		NullCheck(L_69);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_72;
		L_72 = BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F(L_69, L_70, L_71, NULL);
		V_15 = L_72;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_73 = V_15;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_74 = V_3;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = BigInteger_op_Equality_mFF395F5866F1B4E7BD78D208A3BEEF209DA7F861(L_73, L_74, NULL);
		V_23 = L_75;
		bool L_76 = V_23;
		if (!L_76)
		{
			goto IL_018a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_77;
		L_77 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA((-1), NULL);
		V_15 = L_77;
	}

IL_018a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_78 = V_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_79 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		int32_t L_80;
		L_80 = BigInteger_Jacobi_m7C5D665977F8A200A37C62928C0277DD78ACE512(L_78, L_79, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_81;
		L_81 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(L_80, NULL);
		V_16 = L_81;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_82 = V_15;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_83 = V_16;
		bool L_84;
		L_84 = BigInteger_op_Inequality_m2AF6EE02B7EE566B383DAB2CC09C9ACEF3C2635C(L_82, L_83, NULL);
		V_24 = L_84;
		bool L_85 = V_24;
		if (!L_85)
		{
			goto IL_01ac;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_01c6;
	}

IL_01ac:
	{
		int32_t L_86 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_01b3:
	{
		int32_t L_87 = V_12;
		int32_t L_88 = ___confidence0;
		V_25 = (bool)((((int32_t)L_87) < ((int32_t)L_88))? 1 : 0);
		bool L_89 = V_25;
		if (L_89)
		{
			goto IL_00cf;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_01c6;
	}

IL_01c6:
	{
		bool L_90 = V_9;
		return L_90;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::LucasStrongTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_LucasStrongTest_m899F5670F290E4638FFA22F9C3C0AC444115FB17 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___data_2;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)69);
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_1 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_2&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4;
		L_4 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(__this, NULL);
		V_0 = L_4;
		goto IL_0022;
	}

IL_0020:
	{
		V_0 = __this;
	}

IL_0022:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___dataLength_3;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0076;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = V_0;
		NullCheck(L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___data_2;
		NullCheck(L_9);
		int32_t L_10 = 0;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = V_0;
		NullCheck(L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12->___data_2;
		NullCheck(L_13);
		int32_t L_14 = 0;
		uint32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		G_B7_0 = ((((int32_t)L_15) == ((int32_t)1))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B7_0 = 1;
	}

IL_0048:
	{
		V_3 = (bool)G_B7_0;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_0099;
	}

IL_0051:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = V_0;
		NullCheck(L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___data_2;
		NullCheck(L_18);
		int32_t L_19 = 0;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((((int32_t)L_20) == ((int32_t)2)))
		{
			goto IL_0069;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = V_0;
		NullCheck(L_21);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = L_21->___data_2;
		NullCheck(L_22);
		int32_t L_23 = 0;
		uint32_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		G_B12_0 = ((((int32_t)L_24) == ((int32_t)3))? 1 : 0);
		goto IL_006a;
	}

IL_0069:
	{
		G_B12_0 = 1;
	}

IL_006a:
	{
		V_5 = (bool)G_B12_0;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_0075;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_0099;
	}

IL_0075:
	{
	}

IL_0076:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = V_0;
		NullCheck(L_26);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = L_26->___data_2;
		NullCheck(L_27);
		int32_t L_28 = 0;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_6 = (bool)((((int32_t)((int32_t)((int32_t)L_29&1))) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_008e;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_0099;
	}

IL_008e:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = V_0;
		bool L_32;
		L_32 = BigInteger_LucasStrongTestHelper_m6B814BAB2836618BD0219D49E8154C273B70E132(__this, L_31, NULL);
		V_4 = L_32;
		goto IL_0099;
	}

IL_0099:
	{
		bool L_33 = V_4;
		return L_33;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::LucasStrongTestHelper(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_LucasStrongTestHelper_m6B814BAB2836618BD0219D49E8154C273B70E132 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___thisVal0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	bool V_3 = false;
	int64_t V_4 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_5 = NULL;
	int32_t V_6 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_7 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_8 = NULL;
	int32_t V_9 = 0;
	BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* V_10 = NULL;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_17 = NULL;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	uint32_t V_21 = 0;
	int32_t V_22 = 0;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	int32_t V_27 = 0;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	bool V_31 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_32 = NULL;
	bool V_33 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_34 = NULL;
	bool V_35 = false;
	BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* V_36 = NULL;
	bool V_37 = false;
	bool V_38 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B37_0 = 0;
	int32_t G_B46_0 = 0;
	{
		V_0 = ((int64_t)5);
		V_1 = ((int64_t)(-1));
		V_2 = ((int64_t)0);
		V_3 = (bool)0;
		goto IL_009f;
	}

IL_0011:
	{
		int64_t L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1;
		L_1 = BigInteger_op_Implicit_m62A9E398786981AEBDAE4BB3F2EF702FADD15CA3(L_0, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = ___thisVal0;
		int32_t L_3;
		L_3 = BigInteger_Jacobi_m7C5D665977F8A200A37C62928C0277DD78ACE512(L_1, L_2, NULL);
		V_12 = L_3;
		int32_t L_4 = V_12;
		V_13 = (bool)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0);
		bool L_5 = V_13;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0099;
	}

IL_002f:
	{
		int32_t L_6 = V_12;
		if (L_6)
		{
			goto IL_0047;
		}
	}
	{
		int64_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int64_t L_8;
		L_8 = il2cpp_codegen_abs(L_7);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9;
		L_9 = BigInteger_op_Implicit_m62A9E398786981AEBDAE4BB3F2EF702FADD15CA3(L_8, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10 = ___thisVal0;
		bool L_11;
		L_11 = BigInteger_op_LessThan_m107B3A67008253C0CF06DF05391CF0D774868636(L_9, L_10, NULL);
		G_B6_0 = ((int32_t)(L_11));
		goto IL_0048;
	}

IL_0047:
	{
		G_B6_0 = 0;
	}

IL_0048:
	{
		V_14 = (bool)G_B6_0;
		bool L_12 = V_14;
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		V_15 = (bool)0;
		goto IL_0335;
	}

IL_0056:
	{
		int64_t L_13 = V_2;
		V_16 = (bool)((((int64_t)L_13) == ((int64_t)((int64_t)((int32_t)20))))? 1 : 0);
		bool L_14 = V_16;
		if (!L_14)
		{
			goto IL_0089;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15 = ___thisVal0;
		NullCheck(L_15);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16;
		L_16 = BigInteger_sqrt_m2A5F0379E06ABB1165142C57F3F11CCFE9F726AE(L_15, NULL);
		V_17 = L_16;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = V_17;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_18 = V_17;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_19;
		L_19 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_17, L_18, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_20 = ___thisVal0;
		bool L_21;
		L_21 = BigInteger_op_Equality_mFF395F5866F1B4E7BD78D208A3BEEF209DA7F861(L_19, L_20, NULL);
		V_18 = L_21;
		bool L_22 = V_18;
		if (!L_22)
		{
			goto IL_0088;
		}
	}
	{
		V_15 = (bool)0;
		goto IL_0335;
	}

IL_0088:
	{
	}

IL_0089:
	{
		int64_t L_23 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int64_t L_24;
		L_24 = il2cpp_codegen_abs(L_23);
		int64_t L_25 = V_1;
		V_0 = ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add(L_24, ((int64_t)2))), L_25));
		int64_t L_26 = V_1;
		V_1 = ((-L_26));
	}

IL_0099:
	{
		int64_t L_27 = V_2;
		V_2 = ((int64_t)il2cpp_codegen_add(L_27, ((int64_t)1)));
	}

IL_009f:
	{
		bool L_28 = V_3;
		V_19 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_19;
		if (L_29)
		{
			goto IL_0011;
		}
	}
	{
		int64_t L_30 = V_0;
		V_4 = ((int64_t)(((int64_t)il2cpp_codegen_subtract(((int64_t)1), L_30))>>2));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = ___thisVal0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32;
		L_32 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(1, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33;
		L_33 = BigInteger_op_Addition_m530E1AD8E6D64195B4645033819D2A24B764C237(L_31, L_32, NULL);
		V_5 = L_33;
		V_6 = 0;
		V_20 = 0;
		goto IL_011c;
	}

IL_00ca:
	{
		V_21 = 1;
		V_22 = 0;
		goto IL_0109;
	}

IL_00d3:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34 = V_5;
		NullCheck(L_34);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = L_34->___data_2;
		int32_t L_36 = V_20;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		uint32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		uint32_t L_39 = V_21;
		V_23 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_38&(int32_t)L_39))) <= ((uint32_t)0)))? 1 : 0);
		bool L_40 = V_23;
		if (!L_40)
		{
			goto IL_00f6;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_41 = V_5;
		NullCheck(L_41);
		int32_t L_42 = L_41->___dataLength_3;
		V_20 = L_42;
		goto IL_0115;
	}

IL_00f6:
	{
		uint32_t L_43 = V_21;
		V_21 = ((int32_t)((int32_t)L_43<<1));
		int32_t L_44 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0109:
	{
		int32_t L_46 = V_22;
		V_24 = (bool)((((int32_t)L_46) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_47 = V_24;
		if (L_47)
		{
			goto IL_00d3;
		}
	}

IL_0115:
	{
		int32_t L_48 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_011c:
	{
		int32_t L_49 = V_20;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_50 = V_5;
		NullCheck(L_50);
		int32_t L_51 = L_50->___dataLength_3;
		V_25 = (bool)((((int32_t)L_49) < ((int32_t)L_51))? 1 : 0);
		bool L_52 = V_25;
		if (L_52)
		{
			goto IL_00ca;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_53 = V_5;
		int32_t L_54 = V_6;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_55;
		L_55 = BigInteger_op_RightShift_mFF8501FDA582B6AD9771C141BCC7DC77ACD742F3(L_53, L_54, NULL);
		V_7 = L_55;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_56 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_56, NULL);
		V_8 = L_56;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_57 = ___thisVal0;
		NullCheck(L_57);
		int32_t L_58 = L_57->___dataLength_3;
		V_9 = ((int32_t)(L_58<<1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_59 = V_8;
		NullCheck(L_59);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = L_59->___data_2;
		int32_t L_61 = V_9;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (uint32_t)1);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_62 = V_8;
		int32_t L_63 = V_9;
		NullCheck(L_62);
		L_62->___dataLength_3 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_64 = V_8;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_65 = ___thisVal0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_66;
		L_66 = BigInteger_op_Division_m0E65A659BB326213D738370A903EBF2491ECAA68(L_64, L_65, NULL);
		V_8 = L_66;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_67;
		L_67 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(1, NULL);
		int64_t L_68 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_69;
		L_69 = BigInteger_op_Implicit_m62A9E398786981AEBDAE4BB3F2EF702FADD15CA3(L_68, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_70 = V_7;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_71 = ___thisVal0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_72 = V_8;
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_73;
		L_73 = BigInteger_LucasSequenceHelper_mB578EB685122683D3DD3043640F541831B39F1B4(L_67, L_69, L_70, L_71, L_72, 0, NULL);
		V_10 = L_73;
		V_11 = (bool)0;
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_74 = V_10;
		NullCheck(L_74);
		int32_t L_75 = 0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_76);
		int32_t L_77 = L_76->___dataLength_3;
		if ((!(((uint32_t)L_77) == ((uint32_t)1))))
		{
			goto IL_019f;
		}
	}
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_78 = V_10;
		NullCheck(L_78);
		int32_t L_79 = 0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_80);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = L_80->___data_2;
		NullCheck(L_81);
		int32_t L_82 = 0;
		uint32_t L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		if (!L_83)
		{
			goto IL_01be;
		}
	}

IL_019f:
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_84 = V_10;
		NullCheck(L_84);
		int32_t L_85 = 1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_86);
		int32_t L_87 = L_86->___dataLength_3;
		if ((!(((uint32_t)L_87) == ((uint32_t)1))))
		{
			goto IL_01bb;
		}
	}
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_88 = V_10;
		NullCheck(L_88);
		int32_t L_89 = 1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_90);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_91 = L_90->___data_2;
		NullCheck(L_91);
		int32_t L_92 = 0;
		uint32_t L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		G_B28_0 = ((((int32_t)L_93) == ((int32_t)0))? 1 : 0);
		goto IL_01bc;
	}

IL_01bb:
	{
		G_B28_0 = 0;
	}

IL_01bc:
	{
		G_B30_0 = G_B28_0;
		goto IL_01bf;
	}

IL_01be:
	{
		G_B30_0 = 1;
	}

IL_01bf:
	{
		V_26 = (bool)G_B30_0;
		bool L_94 = V_26;
		if (!L_94)
		{
			goto IL_01ca;
		}
	}
	{
		V_11 = (bool)1;
	}

IL_01ca:
	{
		V_27 = 1;
		goto IL_025e;
	}

IL_01d2:
	{
		bool L_95 = V_11;
		V_28 = (bool)((((int32_t)L_95) == ((int32_t)0))? 1 : 0);
		bool L_96 = V_28;
		if (!L_96)
		{
			goto IL_023d;
		}
	}
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_97 = V_10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_98 = ___thisVal0;
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_99 = V_10;
		NullCheck(L_99);
		int32_t L_100 = 1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_102 = V_10;
		NullCheck(L_102);
		int32_t L_103 = 1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_104 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_105;
		L_105 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_101, L_104, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_106 = ___thisVal0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_107 = V_8;
		NullCheck(L_98);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_108;
		L_108 = BigInteger_BarrettReduction_mBFEB2DE54E275465CAE9B32334779280949B1DD9(L_98, L_105, L_106, L_107, NULL);
		NullCheck(L_97);
		ArrayElementTypeCheck (L_97, L_108);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)L_108);
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_109 = V_10;
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_110 = V_10;
		NullCheck(L_110);
		int32_t L_111 = 1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_112 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_113 = V_10;
		NullCheck(L_113);
		int32_t L_114 = 2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_115 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_116;
		L_116 = BigInteger_op_LeftShift_m52BF16486FF642F88B505336617A60F65F59836E(L_115, 1, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_117;
		L_117 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_112, L_116, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_118 = ___thisVal0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_119;
		L_119 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_117, L_118, NULL);
		NullCheck(L_109);
		ArrayElementTypeCheck (L_109, L_119);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)L_119);
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_120 = V_10;
		NullCheck(L_120);
		int32_t L_121 = 1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_122);
		int32_t L_123 = L_122->___dataLength_3;
		if ((!(((uint32_t)L_123) == ((uint32_t)1))))
		{
			goto IL_0232;
		}
	}
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_124 = V_10;
		NullCheck(L_124);
		int32_t L_125 = 1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_126 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		NullCheck(L_126);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_127 = L_126->___data_2;
		NullCheck(L_127);
		int32_t L_128 = 0;
		uint32_t L_129 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		G_B37_0 = ((((int32_t)L_129) == ((int32_t)0))? 1 : 0);
		goto IL_0233;
	}

IL_0232:
	{
		G_B37_0 = 0;
	}

IL_0233:
	{
		V_29 = (bool)G_B37_0;
		bool L_130 = V_29;
		if (!L_130)
		{
			goto IL_023c;
		}
	}
	{
		V_11 = (bool)1;
	}

IL_023c:
	{
	}

IL_023d:
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_131 = V_10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_132 = ___thisVal0;
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_133 = V_10;
		NullCheck(L_133);
		int32_t L_134 = 2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_136 = V_10;
		NullCheck(L_136);
		int32_t L_137 = 2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_139;
		L_139 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_135, L_138, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_140 = ___thisVal0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_141 = V_8;
		NullCheck(L_132);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_142;
		L_142 = BigInteger_BarrettReduction_mBFEB2DE54E275465CAE9B32334779280949B1DD9(L_132, L_139, L_140, L_141, NULL);
		NullCheck(L_131);
		ArrayElementTypeCheck (L_131, L_142);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(2), (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)L_142);
		int32_t L_143 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_025e:
	{
		int32_t L_144 = V_27;
		int32_t L_145 = V_6;
		V_30 = (bool)((((int32_t)L_144) < ((int32_t)L_145))? 1 : 0);
		bool L_146 = V_30;
		if (L_146)
		{
			goto IL_01d2;
		}
	}
	{
		bool L_147 = V_11;
		V_31 = L_147;
		bool L_148 = V_31;
		if (!L_148)
		{
			goto IL_032f;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_149 = ___thisVal0;
		int64_t L_150 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_151;
		L_151 = BigInteger_op_Implicit_m62A9E398786981AEBDAE4BB3F2EF702FADD15CA3(L_150, NULL);
		NullCheck(L_149);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_152;
		L_152 = BigInteger_gcd_m1A5651E10622C6987DD65408225991106B51D45E(L_149, L_151, NULL);
		V_32 = L_152;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_153 = V_32;
		NullCheck(L_153);
		int32_t L_154 = L_153->___dataLength_3;
		if ((!(((uint32_t)L_154) == ((uint32_t)1))))
		{
			goto IL_02a0;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_155 = V_32;
		NullCheck(L_155);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_156 = L_155->___data_2;
		NullCheck(L_156);
		int32_t L_157 = 0;
		uint32_t L_158 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		G_B46_0 = ((((int32_t)L_158) == ((int32_t)1))? 1 : 0);
		goto IL_02a1;
	}

IL_02a0:
	{
		G_B46_0 = 0;
	}

IL_02a1:
	{
		V_33 = (bool)G_B46_0;
		bool L_159 = V_33;
		if (!L_159)
		{
			goto IL_032e;
		}
	}
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_160 = V_10;
		NullCheck(L_160);
		int32_t L_161 = 2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_162 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		NullCheck(L_162);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_163 = L_162->___data_2;
		NullCheck(L_163);
		int32_t L_164 = ((int32_t)69);
		uint32_t L_165 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		V_35 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_165&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_166 = V_35;
		if (!L_166)
		{
			goto IL_02d8;
		}
	}
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_167 = V_10;
		V_36 = L_167;
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_168 = V_36;
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_169 = V_36;
		NullCheck(L_169);
		int32_t L_170 = 2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_171 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_172 = ___thisVal0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_173;
		L_173 = BigInteger_op_Addition_m530E1AD8E6D64195B4645033819D2A24B764C237(L_171, L_172, NULL);
		NullCheck(L_168);
		ArrayElementTypeCheck (L_168, L_173);
		(L_168)->SetAt(static_cast<il2cpp_array_size_t>(2), (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)L_173);
	}

IL_02d8:
	{
		int64_t L_174 = V_4;
		int64_t L_175 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_176;
		L_176 = BigInteger_op_Implicit_m62A9E398786981AEBDAE4BB3F2EF702FADD15CA3(L_175, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_177 = ___thisVal0;
		int32_t L_178;
		L_178 = BigInteger_Jacobi_m7C5D665977F8A200A37C62928C0277DD78ACE512(L_176, L_177, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_179;
		L_179 = BigInteger_op_Implicit_m62A9E398786981AEBDAE4BB3F2EF702FADD15CA3(((int64_t)il2cpp_codegen_multiply(L_174, ((int64_t)L_178))), NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_180 = ___thisVal0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_181;
		L_181 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_179, L_180, NULL);
		V_34 = L_181;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_182 = V_34;
		NullCheck(L_182);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_183 = L_182->___data_2;
		NullCheck(L_183);
		int32_t L_184 = ((int32_t)69);
		uint32_t L_185 = (L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		V_37 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_185&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_186 = V_37;
		if (!L_186)
		{
			goto IL_0319;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_187 = V_34;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_188 = ___thisVal0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_189;
		L_189 = BigInteger_op_Addition_m530E1AD8E6D64195B4645033819D2A24B764C237(L_187, L_188, NULL);
		V_34 = L_189;
	}

IL_0319:
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_190 = V_10;
		NullCheck(L_190);
		int32_t L_191 = 2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_192 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_191));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_193 = V_34;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_194;
		L_194 = BigInteger_op_Inequality_m2AF6EE02B7EE566B383DAB2CC09C9ACEF3C2635C(L_192, L_193, NULL);
		V_38 = L_194;
		bool L_195 = V_38;
		if (!L_195)
		{
			goto IL_032d;
		}
	}
	{
		V_11 = (bool)0;
	}

IL_032d:
	{
	}

IL_032e:
	{
	}

IL_032f:
	{
		bool L_196 = V_11;
		V_15 = L_196;
		goto IL_0335;
	}

IL_0335:
	{
		bool L_197 = V_15;
		return L_197;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::isProbablePrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_isProbablePrime_m00357D4514F40581EF9F877B3269C2CE7052C9B3 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___confidence0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_3 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___data_2;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)69);
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_1 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_2&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4;
		L_4 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(__this, NULL);
		V_0 = L_4;
		goto IL_0022;
	}

IL_0020:
	{
		V_0 = __this;
	}

IL_0022:
	{
		V_2 = 0;
		goto IL_0067;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ((BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var))->___primesBelow2000_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9;
		L_9 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(L_8, NULL);
		V_3 = L_9;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = V_0;
		bool L_12;
		L_12 = BigInteger_op_GreaterThanOrEqual_mDCDEAF660FABF6A1545726684FB38A78F1835448(L_10, L_11, NULL);
		V_5 = L_12;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0077;
	}

IL_0043:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_14 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15 = V_3;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16;
		L_16 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_14, L_15, NULL);
		V_4 = L_16;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = V_4;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = BigInteger_IntValue_m44B5AA5FF60A8136FE0521602CB2EBB4ED8A361B(L_17, NULL);
		V_6 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_0062;
		}
	}
	{
		V_7 = (bool)0;
		goto IL_008f;
	}

IL_0062:
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0067:
	{
		int32_t L_21 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = ((BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var))->___primesBelow2000_1;
		NullCheck(L_22);
		V_8 = (bool)((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))? 1 : 0);
		bool L_23 = V_8;
		if (L_23)
		{
			goto IL_0026;
		}
	}

IL_0077:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = V_0;
		int32_t L_25 = ___confidence0;
		NullCheck(L_24);
		bool L_26;
		L_26 = BigInteger_RabinMillerTest_mCA4EA9AC31EF0FDA9ACFFCDEE925C0CE3B88D0A3(L_24, L_25, NULL);
		V_9 = L_26;
		bool L_27 = V_9;
		if (!L_27)
		{
			goto IL_0089;
		}
	}
	{
		V_7 = (bool)1;
		goto IL_008f;
	}

IL_0089:
	{
		V_7 = (bool)0;
		goto IL_008f;
	}

IL_008f:
	{
		bool L_28 = V_7;
		return L_28;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::isProbablePrime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_isProbablePrime_mFF3304960D220ED39A856FE6512C24046E43C0E7 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	int32_t V_2 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_3 = NULL;
	int32_t V_4 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_5 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t V_14 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_15 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_16 = NULL;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	uint32_t V_21 = 0;
	int32_t V_22 = 0;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	int32_t V_27 = 0;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B44_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___data_2;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)69);
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_8 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_2&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_8;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4;
		L_4 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(__this, NULL);
		V_0 = L_4;
		goto IL_0024;
	}

IL_0022:
	{
		V_0 = __this;
	}

IL_0024:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___dataLength_3;
		V_9 = (bool)((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
		bool L_7 = V_9;
		if (!L_7)
		{
			goto IL_0082;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = V_0;
		NullCheck(L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___data_2;
		NullCheck(L_9);
		int32_t L_10 = 0;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = V_0;
		NullCheck(L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12->___data_2;
		NullCheck(L_13);
		int32_t L_14 = 0;
		uint32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		G_B7_0 = ((((int32_t)L_15) == ((int32_t)1))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B7_0 = 1;
	}

IL_004c:
	{
		V_10 = (bool)G_B7_0;
		bool L_16 = V_10;
		if (!L_16)
		{
			goto IL_005a;
		}
	}
	{
		V_11 = (bool)0;
		goto IL_0213;
	}

IL_005a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = V_0;
		NullCheck(L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___data_2;
		NullCheck(L_18);
		int32_t L_19 = 0;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((((int32_t)L_20) == ((int32_t)2)))
		{
			goto IL_0072;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = V_0;
		NullCheck(L_21);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = L_21->___data_2;
		NullCheck(L_22);
		int32_t L_23 = 0;
		uint32_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		G_B12_0 = ((((int32_t)L_24) == ((int32_t)3))? 1 : 0);
		goto IL_0073;
	}

IL_0072:
	{
		G_B12_0 = 1;
	}

IL_0073:
	{
		V_12 = (bool)G_B12_0;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_0081;
		}
	}
	{
		V_11 = (bool)1;
		goto IL_0213;
	}

IL_0081:
	{
	}

IL_0082:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = V_0;
		NullCheck(L_26);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = L_26->___data_2;
		NullCheck(L_27);
		int32_t L_28 = 0;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_13 = (bool)((((int32_t)((int32_t)((int32_t)L_29&1))) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_13;
		if (!L_30)
		{
			goto IL_009d;
		}
	}
	{
		V_11 = (bool)0;
		goto IL_0213;
	}

IL_009d:
	{
		V_14 = 0;
		goto IL_00ec;
	}

IL_00a2:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = ((BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var))->___primesBelow2000_1;
		int32_t L_32 = V_14;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_35;
		L_35 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(L_34, NULL);
		V_15 = L_35;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36 = V_15;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_37 = V_0;
		bool L_38;
		L_38 = BigInteger_op_GreaterThanOrEqual_mDCDEAF660FABF6A1545726684FB38A78F1835448(L_36, L_37, NULL);
		V_17 = L_38;
		bool L_39 = V_17;
		if (!L_39)
		{
			goto IL_00c2;
		}
	}
	{
		goto IL_00fd;
	}

IL_00c2:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_41 = V_15;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_42;
		L_42 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_40, L_41, NULL);
		V_16 = L_42;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_43 = V_16;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = BigInteger_IntValue_m44B5AA5FF60A8136FE0521602CB2EBB4ED8A361B(L_43, NULL);
		V_18 = (bool)((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_18;
		if (!L_45)
		{
			goto IL_00e5;
		}
	}
	{
		V_11 = (bool)0;
		goto IL_0213;
	}

IL_00e5:
	{
		int32_t L_46 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00ec:
	{
		int32_t L_47 = V_14;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = ((BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var))->___primesBelow2000_1;
		NullCheck(L_48);
		V_19 = (bool)((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))))? 1 : 0);
		bool L_49 = V_19;
		if (L_49)
		{
			goto IL_00a2;
		}
	}

IL_00fd:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_50 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_51 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64(L_51, ((int64_t)1), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_52;
		L_52 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_50, L_51, NULL);
		V_1 = L_52;
		V_2 = 0;
		V_20 = 0;
		goto IL_0160;
	}

IL_0112:
	{
		V_21 = 1;
		V_22 = 0;
		goto IL_014d;
	}

IL_011b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_53 = V_1;
		NullCheck(L_53);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = L_53->___data_2;
		int32_t L_55 = V_20;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		uint32_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		uint32_t L_58 = V_21;
		V_23 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_57&(int32_t)L_58))) <= ((uint32_t)0)))? 1 : 0);
		bool L_59 = V_23;
		if (!L_59)
		{
			goto IL_013c;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_60 = V_1;
		NullCheck(L_60);
		int32_t L_61 = L_60->___dataLength_3;
		V_20 = L_61;
		goto IL_0159;
	}

IL_013c:
	{
		uint32_t L_62 = V_21;
		V_21 = ((int32_t)((int32_t)L_62<<1));
		int32_t L_63 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		int32_t L_64 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_014d:
	{
		int32_t L_65 = V_22;
		V_24 = (bool)((((int32_t)L_65) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_66 = V_24;
		if (L_66)
		{
			goto IL_011b;
		}
	}

IL_0159:
	{
		int32_t L_67 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_0160:
	{
		int32_t L_68 = V_20;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_69 = V_1;
		NullCheck(L_69);
		int32_t L_70 = L_69->___dataLength_3;
		V_25 = (bool)((((int32_t)L_68) < ((int32_t)L_70))? 1 : 0);
		bool L_71 = V_25;
		if (L_71)
		{
			goto IL_0112;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_72 = V_1;
		int32_t L_73 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_74;
		L_74 = BigInteger_op_RightShift_mFF8501FDA582B6AD9771C141BCC7DC77ACD742F3(L_72, L_73, NULL);
		V_3 = L_74;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_75 = V_0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = BigInteger_bitCount_m50C89176444C22EFBC8F061FFC210A9DFA9C33F6(L_75, NULL);
		V_4 = L_76;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_77;
		L_77 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(2, NULL);
		V_5 = L_77;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_78 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_79 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_80 = V_0;
		NullCheck(L_78);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_81;
		L_81 = BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F(L_78, L_79, L_80, NULL);
		V_6 = L_81;
		V_7 = (bool)0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_82 = V_6;
		NullCheck(L_82);
		int32_t L_83 = L_82->___dataLength_3;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01ae;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_84 = V_6;
		NullCheck(L_84);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = L_84->___data_2;
		NullCheck(L_85);
		int32_t L_86 = 0;
		uint32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		G_B35_0 = ((((int32_t)L_87) == ((int32_t)1))? 1 : 0);
		goto IL_01af;
	}

IL_01ae:
	{
		G_B35_0 = 0;
	}

IL_01af:
	{
		V_26 = (bool)G_B35_0;
		bool L_88 = V_26;
		if (!L_88)
		{
			goto IL_01b8;
		}
	}
	{
		V_7 = (bool)1;
	}

IL_01b8:
	{
		V_27 = 0;
		goto IL_01ea;
	}

IL_01bd:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_89 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_90 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_91;
		L_91 = BigInteger_op_Equality_mFF395F5866F1B4E7BD78D208A3BEEF209DA7F861(L_89, L_90, NULL);
		V_28 = L_91;
		bool L_92 = V_28;
		if (!L_92)
		{
			goto IL_01d2;
		}
	}
	{
		V_7 = (bool)1;
		goto IL_01fc;
	}

IL_01d2:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_93 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_94 = V_6;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_95;
		L_95 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_93, L_94, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_96 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_97;
		L_97 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_95, L_96, NULL);
		V_6 = L_97;
		int32_t L_98 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_01ea:
	{
		bool L_99 = V_7;
		if (L_99)
		{
			goto IL_01f5;
		}
	}
	{
		int32_t L_100 = V_27;
		int32_t L_101 = V_2;
		G_B44_0 = ((((int32_t)L_100) < ((int32_t)L_101))? 1 : 0);
		goto IL_01f6;
	}

IL_01f5:
	{
		G_B44_0 = 0;
	}

IL_01f6:
	{
		V_29 = (bool)G_B44_0;
		bool L_102 = V_29;
		if (L_102)
		{
			goto IL_01bd;
		}
	}

IL_01fc:
	{
		bool L_103 = V_7;
		V_30 = L_103;
		bool L_104 = V_30;
		if (!L_104)
		{
			goto IL_020d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_105 = V_0;
		bool L_106;
		L_106 = BigInteger_LucasStrongTestHelper_m6B814BAB2836618BD0219D49E8154C273B70E132(__this, L_105, NULL);
		V_7 = L_106;
	}

IL_020d:
	{
		bool L_107 = V_7;
		V_11 = L_107;
		goto IL_0213;
	}

IL_0213:
	{
		bool L_108 = V_11;
		return L_108;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::IntValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_IntValue_m44B5AA5FF60A8136FE0521602CB2EBB4ED8A361B (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___data_2;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int64 Photon.SocketServer.Numeric.BigInteger::LongValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BigInteger_LongValue_mD18532EAE19BC667EE99396B79DC19145145674F (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	bool V_1 = false;
	int64_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___data_2;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
	}
	try
	{// begin try (depth: 1)
		int64_t L_3 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->___data_2;
		NullCheck(L_4);
		int32_t L_5 = 1;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)(L_3|((int64_t)(((int64_t)(uint64_t)L_6)<<((int32_t)32)))));
		goto IL_0045;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0021;
		}
		throw e;
	}

CATCH_0021:
	{// begin catch(System.Exception)
		{
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___data_2;
			NullCheck(L_7);
			int32_t L_8 = 0;
			uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			V_1 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_9&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
			bool L_10 = V_1;
			if (!L_10)
			{
				goto IL_0042;
			}
		}
		{
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = __this->___data_2;
			NullCheck(L_11);
			int32_t L_12 = 0;
			uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			V_0 = ((int64_t)((int32_t)L_13));
		}

IL_0042:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0045;
		}
	}// end catch (depth: 1)

IL_0045:
	{
		int64_t L_14 = V_0;
		V_2 = L_14;
		goto IL_0049;
	}

IL_0049:
	{
		int64_t L_15 = V_2;
		return L_15;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::Jacobi(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_Jacobi_m7C5D665977F8A200A37C62928C0277DD78ACE512 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___a0, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B32_0 = 0;
	int32_t G_B37_0 = 0;
	int32_t G_B42_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___b1;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___data_2;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_3 = (bool)((((int32_t)((int32_t)((int32_t)L_3&1))) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0D21CE941021E39AD2C57FBD4359FA329931BB30)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_Jacobi_m7C5D665977F8A200A37C62928C0277DD78ACE512_RuntimeMethod_var)));
	}

IL_001d:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_6 = ___a0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = BigInteger_op_GreaterThanOrEqual_mDCDEAF660FABF6A1545726684FB38A78F1835448(L_6, L_7, NULL);
		V_4 = L_8;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10 = ___a0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12;
		L_12 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_10, L_11, NULL);
		___a0 = L_12;
	}

IL_0033:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_13 = ___a0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___dataLength_3;
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_0049;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15 = ___a0;
		NullCheck(L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15->___data_2;
		NullCheck(L_16);
		int32_t L_17 = 0;
		uint32_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		G_B7_0 = ((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		goto IL_004a;
	}

IL_0049:
	{
		G_B7_0 = 0;
	}

IL_004a:
	{
		V_5 = (bool)G_B7_0;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_0058;
		}
	}
	{
		V_6 = 0;
		goto IL_01cc;
	}

IL_0058:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_20 = ___a0;
		NullCheck(L_20);
		int32_t L_21 = L_20->___dataLength_3;
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_006e;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = ___a0;
		NullCheck(L_22);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = L_22->___data_2;
		NullCheck(L_23);
		int32_t L_24 = 0;
		uint32_t L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		G_B12_0 = ((((int32_t)L_25) == ((int32_t)1))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B12_0 = 0;
	}

IL_006f:
	{
		V_7 = (bool)G_B12_0;
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_007d;
		}
	}
	{
		V_6 = 1;
		goto IL_01cc;
	}

IL_007d:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28;
		L_28 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(0, NULL);
		bool L_29;
		L_29 = BigInteger_op_LessThan_m107B3A67008253C0CF06DF05391CF0D774868636(L_27, L_28, NULL);
		V_8 = L_29;
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_00d5;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32;
		L_32 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(1, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33;
		L_33 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_31, L_32, NULL);
		NullCheck(L_33);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = L_33->___data_2;
		NullCheck(L_34);
		int32_t L_35 = 0;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_9 = (bool)((((int32_t)((int32_t)((int32_t)L_36&2))) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_9;
		if (!L_37)
		{
			goto IL_00c1;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_38 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_39;
		L_39 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_38, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = ___b1;
		int32_t L_41;
		L_41 = BigInteger_Jacobi_m7C5D665977F8A200A37C62928C0277DD78ACE512(L_39, L_40, NULL);
		V_6 = L_41;
		goto IL_01cc;
	}

IL_00c1:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_42 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_43;
		L_43 = BigInteger_op_UnaryNegation_mBF2DA217A1FC26C8D7DCF5B4108808EADB0E7A09(L_42, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_44 = ___b1;
		int32_t L_45;
		L_45 = BigInteger_Jacobi_m7C5D665977F8A200A37C62928C0277DD78ACE512(L_43, L_44, NULL);
		V_6 = ((-L_45));
		goto IL_01cc;
	}

IL_00d5:
	{
		V_0 = 0;
		V_10 = 0;
		goto IL_012a;
	}

IL_00dc:
	{
		V_11 = 1;
		V_12 = 0;
		goto IL_0117;
	}

IL_00e5:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = ___a0;
		NullCheck(L_46);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = L_46->___data_2;
		int32_t L_48 = V_10;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		uint32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		uint32_t L_51 = V_11;
		V_13 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_50&(int32_t)L_51))) <= ((uint32_t)0)))? 1 : 0);
		bool L_52 = V_13;
		if (!L_52)
		{
			goto IL_0106;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_53 = ___a0;
		NullCheck(L_53);
		int32_t L_54 = L_53->___dataLength_3;
		V_10 = L_54;
		goto IL_0123;
	}

IL_0106:
	{
		uint32_t L_55 = V_11;
		V_11 = ((int32_t)((int32_t)L_55<<1));
		int32_t L_56 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_0117:
	{
		int32_t L_58 = V_12;
		V_14 = (bool)((((int32_t)L_58) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_59 = V_14;
		if (L_59)
		{
			goto IL_00e5;
		}
	}

IL_0123:
	{
		int32_t L_60 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_012a:
	{
		int32_t L_61 = V_10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_62 = ___a0;
		NullCheck(L_62);
		int32_t L_63 = L_62->___dataLength_3;
		V_15 = (bool)((((int32_t)L_61) < ((int32_t)L_63))? 1 : 0);
		bool L_64 = V_15;
		if (L_64)
		{
			goto IL_00dc;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_65 = ___a0;
		int32_t L_66 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_67;
		L_67 = BigInteger_op_RightShift_mFF8501FDA582B6AD9771C141BCC7DC77ACD742F3(L_65, L_66, NULL);
		V_1 = L_67;
		V_2 = 1;
		int32_t L_68 = V_0;
		if (!((int32_t)(L_68&1)))
		{
			goto IL_0168;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_69 = ___b1;
		NullCheck(L_69);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = L_69->___data_2;
		NullCheck(L_70);
		int32_t L_71 = 0;
		uint32_t L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		if ((((int32_t)((int32_t)((int32_t)L_72&7))) == ((int32_t)3)))
		{
			goto IL_0165;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_73 = ___b1;
		NullCheck(L_73);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = L_73->___data_2;
		NullCheck(L_74);
		int32_t L_75 = 0;
		uint32_t L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		G_B30_0 = ((((int32_t)((int32_t)((int32_t)L_76&7))) == ((int32_t)5))? 1 : 0);
		goto IL_0166;
	}

IL_0165:
	{
		G_B30_0 = 1;
	}

IL_0166:
	{
		G_B32_0 = G_B30_0;
		goto IL_0169;
	}

IL_0168:
	{
		G_B32_0 = 0;
	}

IL_0169:
	{
		V_16 = (bool)G_B32_0;
		bool L_77 = V_16;
		if (!L_77)
		{
			goto IL_0171;
		}
	}
	{
		V_2 = (-1);
	}

IL_0171:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_78 = ___b1;
		NullCheck(L_78);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = L_78->___data_2;
		NullCheck(L_79);
		int32_t L_80 = 0;
		uint32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		if ((!(((uint32_t)((int32_t)((int32_t)L_81&3))) == ((uint32_t)3))))
		{
			goto IL_018d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_82 = V_1;
		NullCheck(L_82);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = L_82->___data_2;
		NullCheck(L_83);
		int32_t L_84 = 0;
		uint32_t L_85 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		G_B37_0 = ((((int32_t)((int32_t)((int32_t)L_85&3))) == ((int32_t)3))? 1 : 0);
		goto IL_018e;
	}

IL_018d:
	{
		G_B37_0 = 0;
	}

IL_018e:
	{
		V_17 = (bool)G_B37_0;
		bool L_86 = V_17;
		if (!L_86)
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_87 = V_2;
		V_2 = ((-L_87));
	}

IL_0197:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_88 = V_1;
		NullCheck(L_88);
		int32_t L_89 = L_88->___dataLength_3;
		if ((!(((uint32_t)L_89) == ((uint32_t)1))))
		{
			goto IL_01ad;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_90 = V_1;
		NullCheck(L_90);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_91 = L_90->___data_2;
		NullCheck(L_91);
		int32_t L_92 = 0;
		uint32_t L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		G_B42_0 = ((((int32_t)L_93) == ((int32_t)1))? 1 : 0);
		goto IL_01ae;
	}

IL_01ad:
	{
		G_B42_0 = 0;
	}

IL_01ae:
	{
		V_18 = (bool)G_B42_0;
		bool L_94 = V_18;
		if (!L_94)
		{
			goto IL_01b9;
		}
	}
	{
		int32_t L_95 = V_2;
		V_6 = L_95;
		goto IL_01cc;
	}

IL_01b9:
	{
		int32_t L_96 = V_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_97 = ___b1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_98 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_99;
		L_99 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_97, L_98, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_100 = V_1;
		int32_t L_101;
		L_101 = BigInteger_Jacobi_m7C5D665977F8A200A37C62928C0277DD78ACE512(L_99, L_100, NULL);
		V_6 = ((int32_t)il2cpp_codegen_multiply(L_96, L_101));
		goto IL_01cc;
	}

IL_01cc:
	{
		int32_t L_102 = V_6;
		return L_102;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::genPseudoPrime(System.Int32,System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_genPseudoPrime_mC3F589A1361242351D735167C1CE8D22237B732C (int32_t ___bits0, int32_t ___confidence1, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rand2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_3 = NULL;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_0, NULL);
		V_0 = L_0;
		V_1 = (bool)0;
		goto IL_002f;
	}

IL_000b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = V_0;
		int32_t L_2 = ___bits0;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_3 = ___rand2;
		NullCheck(L_1);
		BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB(L_1, L_2, L_3, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = V_0;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___data_2;
		NullCheck(L_5);
		uint32_t* L_6 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_7 = *((uint32_t*)L_6);
		*((int32_t*)L_6) = (int32_t)((int32_t)(L_7|1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = V_0;
		int32_t L_9 = ___confidence1;
		NullCheck(L_8);
		bool L_10;
		L_10 = BigInteger_isProbablePrime_m00357D4514F40581EF9F877B3269C2CE7052C9B3(L_8, L_9, NULL);
		V_1 = L_10;
	}

IL_002f:
	{
		bool L_11 = V_1;
		V_2 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_000b;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_13 = V_0;
		V_3 = L_13;
		goto IL_003b;
	}

IL_003b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_14 = V_3;
		return L_14;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::genCoPrime(System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_genCoPrime_m60816777CE0C5C7823948A843416E1820AC2AE06 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, int32_t ___bits0, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rand1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_1 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_5 = NULL;
	int32_t G_B4_0 = 0;
	{
		V_0 = (bool)0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_0, NULL);
		V_1 = L_0;
		goto IL_003b;
	}

IL_000b:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = V_1;
		int32_t L_2 = ___bits0;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_3 = ___rand1;
		NullCheck(L_1);
		BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB(L_1, L_2, L_3, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = V_1;
		NullCheck(L_4);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5;
		L_5 = BigInteger_gcd_m1A5651E10622C6987DD65408225991106B51D45E(L_4, __this, NULL);
		V_2 = L_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7 = L_6->___dataLength_3;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0033;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = V_2;
		NullCheck(L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___data_2;
		NullCheck(L_9);
		int32_t L_10 = 0;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		G_B4_0 = ((((int32_t)L_11) == ((int32_t)1))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 0;
	}

IL_0034:
	{
		V_3 = (bool)G_B4_0;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_003a;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_003a:
	{
	}

IL_003b:
	{
		bool L_13 = V_0;
		V_4 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_000b;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15 = V_1;
		V_5 = L_15;
		goto IL_004a;
	}

IL_004a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = V_5;
		return L_16;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::modInverse(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_modInverse_mF434720FE230F436E78F7E68177134DFCEBC876B (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___modulus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* V_0 = NULL;
	BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* V_1 = NULL;
	BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* V_2 = NULL;
	int32_t V_3 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_4 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_5 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_6 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_7 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_8 = NULL;
	bool V_9 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_15 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B20_0 = 0;
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_0 = (BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A*)(BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A*)SZArrayNew(BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2;
		L_2 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(0, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)L_2);
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_3 = L_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4;
		L_4 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(1, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)L_4);
		V_0 = L_3;
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_5 = (BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A*)(BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A*)SZArrayNew(BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A_il2cpp_TypeInfo_var, (uint32_t)2);
		V_1 = L_5;
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_6 = (BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A*)(BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A*)SZArrayNew(BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_7 = L_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8;
		L_8 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(0, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)L_8);
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_9 = L_7;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10;
		L_10 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(0, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)L_10);
		V_2 = L_9;
		V_3 = 0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = ___modulus0;
		V_4 = L_11;
		V_5 = __this;
		goto IL_00d9;
	}

IL_0047:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_12, NULL);
		V_7 = L_12;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_13 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_13, NULL);
		V_8 = L_13;
		int32_t L_14 = V_3;
		V_9 = (bool)((((int32_t)L_14) > ((int32_t)1))? 1 : 0);
		bool L_15 = V_9;
		if (!L_15)
		{
			goto IL_0088;
		}
	}
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = 0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = 1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = 0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_25;
		L_25 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_21, L_24, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26;
		L_26 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_18, L_25, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = ___modulus0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28;
		L_28 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_26, L_27, NULL);
		V_10 = L_28;
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_29 = V_0;
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31 = 1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)L_32);
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_33 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34 = V_10;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)L_34);
	}

IL_0088:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_35 = V_5;
		NullCheck(L_35);
		int32_t L_36 = L_35->___dataLength_3;
		V_11 = (bool)((((int32_t)L_36) == ((int32_t)1))? 1 : 0);
		bool L_37 = V_11;
		if (!L_37)
		{
			goto IL_00a8;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_38 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_39 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_7;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_41 = V_8;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_singleByteDivide_m46DA1A0FC412956D80B5F509897E78AE5114426A(L_38, L_39, L_40, L_41, NULL);
		goto IL_00b6;
	}

IL_00a8:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_42 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_43 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_44 = V_7;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_45 = V_8;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_multiByteDivide_m95E26DBD75B9B3E5F71E5DEA71E96BA68C606CF0(L_42, L_43, L_44, L_45, NULL);
	}

IL_00b6:
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_46 = V_1;
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_47 = V_1;
		NullCheck(L_47);
		int32_t L_48 = 1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)L_49);
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_50 = V_2;
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_51 = V_2;
		NullCheck(L_51);
		int32_t L_52 = 1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_53);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)L_53);
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_54 = V_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_55 = V_7;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)L_55);
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_56 = V_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_57 = V_8;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_57);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)L_57);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_58 = V_5;
		V_4 = L_58;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_59 = V_8;
		V_5 = L_59;
		int32_t L_60 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_00d9:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_61 = V_5;
		NullCheck(L_61);
		int32_t L_62 = L_61->___dataLength_3;
		if ((((int32_t)L_62) > ((int32_t)1)))
		{
			goto IL_00fe;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_63 = V_5;
		NullCheck(L_63);
		int32_t L_64 = L_63->___dataLength_3;
		if ((!(((uint32_t)L_64) == ((uint32_t)1))))
		{
			goto IL_00fb;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_65 = V_5;
		NullCheck(L_65);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = L_65->___data_2;
		NullCheck(L_66);
		int32_t L_67 = 0;
		uint32_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		G_B11_0 = ((!(((uint32_t)L_68) <= ((uint32_t)0)))? 1 : 0);
		goto IL_00fc;
	}

IL_00fb:
	{
		G_B11_0 = 0;
	}

IL_00fc:
	{
		G_B13_0 = G_B11_0;
		goto IL_00ff;
	}

IL_00fe:
	{
		G_B13_0 = 1;
	}

IL_00ff:
	{
		V_12 = (bool)G_B13_0;
		bool L_69 = V_12;
		if (L_69)
		{
			goto IL_0047;
		}
	}
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_70 = V_2;
		NullCheck(L_70);
		int32_t L_71 = 0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_72);
		int32_t L_73 = L_72->___dataLength_3;
		if ((((int32_t)L_73) > ((int32_t)1)))
		{
			goto IL_0133;
		}
	}
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_74 = V_2;
		NullCheck(L_74);
		int32_t L_75 = 0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_76);
		int32_t L_77 = L_76->___dataLength_3;
		if ((!(((uint32_t)L_77) == ((uint32_t)1))))
		{
			goto IL_0130;
		}
	}
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_78 = V_2;
		NullCheck(L_78);
		int32_t L_79 = 0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_80);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = L_80->___data_2;
		NullCheck(L_81);
		int32_t L_82 = 0;
		uint32_t L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		G_B18_0 = ((((int32_t)((((int32_t)L_83) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0131;
	}

IL_0130:
	{
		G_B18_0 = 0;
	}

IL_0131:
	{
		G_B20_0 = G_B18_0;
		goto IL_0134;
	}

IL_0133:
	{
		G_B20_0 = 1;
	}

IL_0134:
	{
		V_13 = (bool)G_B20_0;
		bool L_84 = V_13;
		if (!L_84)
		{
			goto IL_0145;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_85 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_85);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_85, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5F0552FD39D0662CC057CFE2B43FEC612634CD8B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_85, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_modInverse_mF434720FE230F436E78F7E68177134DFCEBC876B_RuntimeMethod_var)));
	}

IL_0145:
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_86 = V_0;
		NullCheck(L_86);
		int32_t L_87 = 0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_89 = V_0;
		NullCheck(L_89);
		int32_t L_90 = 1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_92 = V_1;
		NullCheck(L_92);
		int32_t L_93 = 0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_95;
		L_95 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_91, L_94, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_96;
		L_96 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_88, L_95, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_97 = ___modulus0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_98;
		L_98 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_96, L_97, NULL);
		V_6 = L_98;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_99 = V_6;
		NullCheck(L_99);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_100 = L_99->___data_2;
		NullCheck(L_100);
		int32_t L_101 = ((int32_t)69);
		uint32_t L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		V_14 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_102&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_103 = V_14;
		if (!L_103)
		{
			goto IL_0183;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_104 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_105 = ___modulus0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_106;
		L_106 = BigInteger_op_Addition_m530E1AD8E6D64195B4645033819D2A24B764C237(L_104, L_105, NULL);
		V_6 = L_106;
	}

IL_0183:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_107 = V_6;
		V_15 = L_107;
		goto IL_0189;
	}

IL_0189:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_108 = V_15;
		return L_108;
	}
}
// System.Byte[] Photon.SocketServer.Numeric.BigInteger::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_GetBytes_mC6816E80AE304D950E64F4D3DE37E7277042F2A8 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0;
		L_0 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(0, NULL);
		bool L_1;
		L_1 = BigInteger_op_Equality_mFF395F5866F1B4E7BD78D208A3BEEF209DA7F861(__this, L_0, NULL);
		V_5 = L_1;
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		V_6 = L_3;
		goto IL_00c7;
	}

IL_0021:
	{
		int32_t L_4;
		L_4 = BigInteger_bitCount_m50C89176444C22EFBC8F061FFC210A9DFA9C33F6(__this, NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_1 = ((int32_t)(L_5>>3));
		int32_t L_6 = V_0;
		V_7 = (bool)((!(((uint32_t)((int32_t)(L_6&7))) <= ((uint32_t)0)))? 1 : 0);
		bool L_7 = V_7;
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003e:
	{
		int32_t L_9 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_2 = L_10;
		int32_t L_11 = V_1;
		V_3 = ((int32_t)(L_11&3));
		int32_t L_12 = V_3;
		V_8 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_8;
		if (!L_13)
		{
			goto IL_0057;
		}
	}
	{
		V_3 = 4;
	}

IL_0057:
	{
		V_4 = 0;
		int32_t L_14 = __this->___dataLength_3;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_00b4;
	}

IL_0066:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->___data_2;
		int32_t L_16 = V_9;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_10 = L_18;
		int32_t L_19 = V_3;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		goto IL_0097;
	}

IL_0079:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_2;
		int32_t L_21 = V_4;
		int32_t L_22 = V_11;
		uint32_t L_23 = V_10;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_21, L_22))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_23&((int32_t)255)))));
		uint32_t L_24 = V_10;
		V_10 = ((int32_t)((uint32_t)L_24>>8));
		int32_t L_25 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
	}

IL_0097:
	{
		int32_t L_26 = V_11;
		V_12 = (bool)((((int32_t)((((int32_t)L_26) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_12;
		if (L_27)
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, L_29));
		V_3 = 4;
		int32_t L_30 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
	}

IL_00b4:
	{
		int32_t L_31 = V_9;
		V_13 = (bool)((((int32_t)((((int32_t)L_31) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_13;
		if (L_32)
		{
			goto IL_0066;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_2;
		V_6 = L_33;
		goto IL_00c7;
	}

IL_00c7:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_6;
		return L_34;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::setBit(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_setBit_mF8BE8E3A2BB37D9C6BEDAD33247EB7C7E6C9CC79 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, uint32_t ___bitNum0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	uint32_t V_2 = 0;
	bool V_3 = false;
	{
		uint32_t L_0 = ___bitNum0;
		V_0 = ((int32_t)((uint32_t)L_0>>5));
		uint32_t L_1 = ___bitNum0;
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_1&((int32_t)31))));
		uint8_t L_2 = V_1;
		V_2 = ((int32_t)(1<<((int32_t)((int32_t)L_2&((int32_t)31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___data_2;
		uint32_t L_4 = V_0;
		NullCheck(L_3);
		uint32_t* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)));
		int32_t L_6 = *((uint32_t*)L_5);
		uint32_t L_7 = V_2;
		*((int32_t*)L_5) = (int32_t)((int32_t)(L_6|(int32_t)L_7));
		uint32_t L_8 = V_0;
		int32_t L_9 = __this->___dataLength_3;
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)L_8)) < ((int64_t)((int64_t)L_9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_11 = V_0;
		__this->___dataLength_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, 1));
	}

IL_003e:
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::unsetBit(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_unsetBit_m2B25909B71277B6DAF576AA5F6903ECC05725EC7 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, uint32_t ___bitNum0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint8_t V_2 = 0x0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B4_0 = 0;
	{
		uint32_t L_0 = ___bitNum0;
		V_0 = ((int32_t)((uint32_t)L_0>>5));
		uint32_t L_1 = V_0;
		int32_t L_2 = __this->___dataLength_3;
		V_1 = (bool)((((int64_t)((int64_t)(uint64_t)L_1)) < ((int64_t)((int64_t)L_2)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_4 = ___bitNum0;
		V_2 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_4&((int32_t)31))));
		uint8_t L_5 = V_2;
		V_3 = ((int32_t)(1<<((int32_t)((int32_t)L_5&((int32_t)31)))));
		uint32_t L_6 = V_3;
		V_4 = ((int32_t)((-1)^(int32_t)L_6));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___data_2;
		uint32_t L_8 = V_0;
		NullCheck(L_7);
		uint32_t* L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)));
		int32_t L_10 = *((uint32_t*)L_9);
		uint32_t L_11 = V_4;
		*((int32_t*)L_9) = (int32_t)((int32_t)(L_10&(int32_t)L_11));
		int32_t L_12 = __this->___dataLength_3;
		if ((((int32_t)L_12) <= ((int32_t)1)))
		{
			goto IL_0056;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = __this->___data_2;
		int32_t L_14 = __this->___dataLength_3;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		uint32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		G_B4_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B4_0 = 0;
	}

IL_0057:
	{
		V_5 = (bool)G_B4_0;
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_18 = __this->___dataLength_3;
		__this->___dataLength_3 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_006b:
	{
	}

IL_006c:
	{
		return;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::sqrt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* BigInteger_sqrt_m2A5F0379E06ABB1165142C57F3F11CCFE9F726AE (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint32_t V_3 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_11 = NULL;
	{
		int32_t L_0;
		L_0 = BigInteger_bitCount_m50C89176444C22EFBC8F061FFC210A9DFA9C33F6(__this, NULL);
		V_0 = L_0;
		uint32_t L_1 = V_0;
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_1&1))) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		uint32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)L_3>>1)), 1));
		goto IL_0020;
	}

IL_001c:
	{
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)((uint32_t)L_4>>1));
	}

IL_0020:
	{
		uint32_t L_5 = V_0;
		V_1 = ((int32_t)((uint32_t)L_5>>5));
		uint32_t L_6 = V_0;
		V_2 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_6&((int32_t)31))));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_7, NULL);
		V_4 = L_7;
		uint8_t L_8 = V_2;
		V_6 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_6;
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		V_3 = ((int32_t)-2147483648LL);
		goto IL_0050;
	}

IL_0043:
	{
		uint8_t L_10 = V_2;
		V_3 = ((int32_t)(1<<((int32_t)((int32_t)L_10&((int32_t)31)))));
		uint32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, 1));
	}

IL_0050:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = V_4;
		uint32_t L_13 = V_1;
		NullCheck(L_12);
		L_12->___dataLength_3 = L_13;
		uint32_t L_14 = V_1;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, 1));
		goto IL_00ba;
	}

IL_005f:
	{
		goto IL_00a3;
	}

IL_0062:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15 = V_4;
		NullCheck(L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15->___data_2;
		int32_t L_17 = V_7;
		NullCheck(L_16);
		uint32_t* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)));
		int32_t L_19 = *((uint32_t*)L_18);
		uint32_t L_20 = V_3;
		*((int32_t*)L_18) = (int32_t)((int32_t)(L_19^(int32_t)L_20));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_23;
		L_23 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_21, L_22, NULL);
		bool L_24;
		L_24 = BigInteger_op_GreaterThan_mEC24356D763AC4FB6EDEED48C590B1811FEABF5E(L_23, __this, NULL);
		V_8 = L_24;
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_009e;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = V_4;
		NullCheck(L_26);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = L_26->___data_2;
		int32_t L_28 = V_7;
		NullCheck(L_27);
		uint32_t* L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)));
		int32_t L_30 = *((uint32_t*)L_29);
		uint32_t L_31 = V_3;
		*((int32_t*)L_29) = (int32_t)((int32_t)(L_30^(int32_t)L_31));
	}

IL_009e:
	{
		uint32_t L_32 = V_3;
		V_3 = ((int32_t)((uint32_t)L_32>>1));
	}

IL_00a3:
	{
		uint32_t L_33 = V_3;
		V_9 = (bool)((!(((uint32_t)L_33) <= ((uint32_t)0)))? 1 : 0);
		bool L_34 = V_9;
		if (L_34)
		{
			goto IL_0062;
		}
	}
	{
		V_3 = ((int32_t)-2147483648LL);
		int32_t L_35 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
	}

IL_00ba:
	{
		int32_t L_36 = V_7;
		V_10 = (bool)((((int32_t)((((int32_t)L_36) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_10;
		if (L_37)
		{
			goto IL_005f;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_38 = V_4;
		V_11 = L_38;
		goto IL_00ce;
	}

IL_00ce:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_39 = V_11;
		return L_39;
	}
}
// Photon.SocketServer.Numeric.BigInteger[] Photon.SocketServer.Numeric.BigInteger::LucasSequence(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* BigInteger_LucasSequence_m7E20465ADB01741043B20BF900F20553E68669F3 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___P0, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___Q1, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___k2, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___n3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_3 = NULL;
	bool V_4 = false;
	BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* V_5 = NULL;
	BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* V_6 = NULL;
	int32_t V_7 = 0;
	uint32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B3_0 = 0;
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_0 = ___k2;
		NullCheck(L_0);
		int32_t L_1 = L_0->___dataLength_3;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = ___k2;
		NullCheck(L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2->___data_2;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_4 = (bool)G_B3_0;
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_7 = (BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A*)(BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A*)SZArrayNew(BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A_il2cpp_TypeInfo_var, (uint32_t)3);
		V_5 = L_7;
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_8 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9;
		L_9 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(0, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)L_9);
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_10 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11;
		L_11 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(2, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_13;
		L_13 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_11, L_12, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)L_13);
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_14 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15;
		L_15 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(1, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17;
		L_17 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_15, L_16, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)L_17);
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_18 = V_5;
		V_6 = L_18;
		goto IL_00ff;
	}

IL_005a:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_19 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_19, NULL);
		V_0 = L_19;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_20 = ___n3;
		NullCheck(L_20);
		int32_t L_21 = L_20->___dataLength_3;
		V_1 = ((int32_t)(L_21<<1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = V_0;
		NullCheck(L_22);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = L_22->___data_2;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint32_t)1);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_25 = V_0;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		L_25->___dataLength_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = ___n3;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_29;
		L_29 = BigInteger_op_Division_m0E65A659BB326213D738370A903EBF2491ECAA68(L_27, L_28, NULL);
		V_0 = L_29;
		V_2 = 0;
		V_7 = 0;
		goto IL_00d8;
	}

IL_008a:
	{
		V_8 = 1;
		V_9 = 0;
		goto IL_00c5;
	}

IL_0093:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_30 = ___k2;
		NullCheck(L_30);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = L_30->___data_2;
		int32_t L_32 = V_7;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		uint32_t L_35 = V_8;
		V_10 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_34&(int32_t)L_35))) <= ((uint32_t)0)))? 1 : 0);
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_00b4;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_37 = ___k2;
		NullCheck(L_37);
		int32_t L_38 = L_37->___dataLength_3;
		V_7 = L_38;
		goto IL_00d1;
	}

IL_00b4:
	{
		uint32_t L_39 = V_8;
		V_8 = ((int32_t)((int32_t)L_39<<1));
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		int32_t L_41 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00c5:
	{
		int32_t L_42 = V_9;
		V_11 = (bool)((((int32_t)L_42) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_43 = V_11;
		if (L_43)
		{
			goto IL_0093;
		}
	}

IL_00d1:
	{
		int32_t L_44 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00d8:
	{
		int32_t L_45 = V_7;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = ___k2;
		NullCheck(L_46);
		int32_t L_47 = L_46->___dataLength_3;
		V_12 = (bool)((((int32_t)L_45) < ((int32_t)L_47))? 1 : 0);
		bool L_48 = V_12;
		if (L_48)
		{
			goto IL_008a;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_49 = ___k2;
		int32_t L_50 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_51;
		L_51 = BigInteger_op_RightShift_mFF8501FDA582B6AD9771C141BCC7DC77ACD742F3(L_49, L_50, NULL);
		V_3 = L_51;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_52 = ___P0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_53 = ___Q1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_54 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_55 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_56 = V_0;
		int32_t L_57 = V_2;
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_58;
		L_58 = BigInteger_LucasSequenceHelper_mB578EB685122683D3DD3043640F541831B39F1B4(L_52, L_53, L_54, L_55, L_56, L_57, NULL);
		V_6 = L_58;
		goto IL_00ff;
	}

IL_00ff:
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_59 = V_6;
		return L_59;
	}
}
// Photon.SocketServer.Numeric.BigInteger[] Photon.SocketServer.Numeric.BigInteger::LucasSequenceHelper(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* BigInteger_LucasSequenceHelper_mB578EB685122683D3DD3043640F541831B39F1B4 (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___P0, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___Q1, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___k2, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___n3, BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* ___constant4, int32_t ___s5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_3 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_4 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_5 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	bool V_18 = false;
	bool V_19 = false;
	BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* V_20 = NULL;
	int32_t G_B7_0 = 0;
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_0 = (BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A*)(BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A*)SZArrayNew(BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A_il2cpp_TypeInfo_var, (uint32_t)3);
		V_0 = L_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_1 = ___k2;
		NullCheck(L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = L_1->___data_2;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint32_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_8 = (bool)((((int32_t)((int32_t)((int32_t)L_4&1))) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_8;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral61CFF8B83A13CFDF7F33B0313F5B95E05C5BDE32)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_LucasSequenceHelper_mB578EB685122683D3DD3043640F541831B39F1B4_RuntimeMethod_var)));
	}

IL_0026:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7 = ___k2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = BigInteger_bitCount_m50C89176444C22EFBC8F061FFC210A9DFA9C33F6(L_7, NULL);
		V_1 = L_8;
		int32_t L_9 = V_1;
		V_2 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_9&((int32_t)31))), 1))&((int32_t)31)))));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_10;
		L_10 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(2, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12;
		L_12 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_10, L_11, NULL);
		V_3 = L_12;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_13;
		L_13 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(1, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_14 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15;
		L_15 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_13, L_14, NULL);
		V_4 = L_15;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = ___P0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_18;
		L_18 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_16, L_17, NULL);
		V_5 = L_18;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_19 = V_4;
		V_6 = L_19;
		V_7 = (bool)1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_20 = ___k2;
		NullCheck(L_20);
		int32_t L_21 = L_20->___dataLength_3;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
		goto IL_01e4;
	}

IL_0073:
	{
		goto IL_01ca;
	}

IL_0079:
	{
		int32_t L_22 = V_9;
		if (L_22)
		{
			goto IL_0084;
		}
	}
	{
		uint32_t L_23 = V_2;
		G_B7_0 = ((((int32_t)L_23) == ((int32_t)1))? 1 : 0);
		goto IL_0085;
	}

IL_0084:
	{
		G_B7_0 = 0;
	}

IL_0085:
	{
		V_10 = (bool)G_B7_0;
		bool L_24 = V_10;
		if (!L_24)
		{
			goto IL_0090;
		}
	}
	{
		goto IL_01d7;
	}

IL_0090:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_25 = ___k2;
		NullCheck(L_25);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = L_25->___data_2;
		int32_t L_27 = V_9;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		uint32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		uint32_t L_30 = V_2;
		V_11 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_29&(int32_t)L_30))) <= ((uint32_t)0)))? 1 : 0);
		bool L_31 = V_11;
		if (!L_31)
		{
			goto IL_013d;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_33 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34;
		L_34 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_32, L_33, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_35 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36;
		L_36 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_34, L_35, NULL);
		V_6 = L_36;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_37 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_38 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_39;
		L_39 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_37, L_38, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = ___P0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_41 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_42;
		L_42 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_40, L_41, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_43;
		L_43 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_39, L_42, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_44 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_45;
		L_45 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_43, L_44, NULL);
		V_3 = L_45;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_47 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_49;
		L_49 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_47, L_48, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_50 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_51 = ___constant4;
		NullCheck(L_46);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_52;
		L_52 = BigInteger_BarrettReduction_mBFEB2DE54E275465CAE9B32334779280949B1DD9(L_46, L_49, L_50, L_51, NULL);
		V_5 = L_52;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_53 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_54 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_55 = ___Q1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_56;
		L_56 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_54, L_55, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_57;
		L_57 = BigInteger_op_LeftShift_m52BF16486FF642F88B505336617A60F65F59836E(L_56, 1, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_58;
		L_58 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_53, L_57, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_59 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_60;
		L_60 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_58, L_59, NULL);
		V_5 = L_60;
		bool L_61 = V_7;
		V_12 = L_61;
		bool L_62 = V_12;
		if (!L_62)
		{
			goto IL_0113;
		}
	}
	{
		V_7 = (bool)0;
		goto IL_0127;
	}

IL_0113:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_63 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_64 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_65 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_66;
		L_66 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_64, L_65, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_67 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_68 = ___constant4;
		NullCheck(L_63);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_69;
		L_69 = BigInteger_BarrettReduction_mBFEB2DE54E275465CAE9B32334779280949B1DD9(L_63, L_66, L_67, L_68, NULL);
		V_4 = L_69;
	}

IL_0127:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_70 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_71 = ___Q1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_72;
		L_72 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_70, L_71, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_73 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_74;
		L_74 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_72, L_73, NULL);
		V_4 = L_74;
		goto IL_01c5;
	}

IL_013d:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_75 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_76 = V_3;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_77;
		L_77 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_75, L_76, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_78 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_79;
		L_79 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_77, L_78, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_80 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_81;
		L_81 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_79, L_80, NULL);
		V_6 = L_81;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_82 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_83 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_84;
		L_84 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_82, L_83, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_85 = ___P0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_86 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_87;
		L_87 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_85, L_86, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_88;
		L_88 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_84, L_87, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_89 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_90;
		L_90 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_88, L_89, NULL);
		V_5 = L_90;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_91 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_92 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_93 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_94;
		L_94 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_92, L_93, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_95 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_96 = ___constant4;
		NullCheck(L_91);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_97;
		L_97 = BigInteger_BarrettReduction_mBFEB2DE54E275465CAE9B32334779280949B1DD9(L_91, L_94, L_95, L_96, NULL);
		V_3 = L_97;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_98 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_99 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_100;
		L_100 = BigInteger_op_LeftShift_m52BF16486FF642F88B505336617A60F65F59836E(L_99, 1, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_101;
		L_101 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_98, L_100, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_102 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_103;
		L_103 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_101, L_102, NULL);
		V_3 = L_103;
		bool L_104 = V_7;
		V_13 = L_104;
		bool L_105 = V_13;
		if (!L_105)
		{
			goto IL_01b0;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_106 = ___Q1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_107 = ___n3;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_108;
		L_108 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_106, L_107, NULL);
		V_4 = L_108;
		V_7 = (bool)0;
		goto IL_01c4;
	}

IL_01b0:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_109 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_110 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_111 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_112;
		L_112 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_110, L_111, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_113 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_114 = ___constant4;
		NullCheck(L_109);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_115;
		L_115 = BigInteger_BarrettReduction_mBFEB2DE54E275465CAE9B32334779280949B1DD9(L_109, L_112, L_113, L_114, NULL);
		V_4 = L_115;
	}

IL_01c4:
	{
	}

IL_01c5:
	{
		uint32_t L_116 = V_2;
		V_2 = ((int32_t)((uint32_t)L_116>>1));
	}

IL_01ca:
	{
		uint32_t L_117 = V_2;
		V_14 = (bool)((!(((uint32_t)L_117) <= ((uint32_t)0)))? 1 : 0);
		bool L_118 = V_14;
		if (L_118)
		{
			goto IL_0079;
		}
	}

IL_01d7:
	{
		V_2 = ((int32_t)-2147483648LL);
		int32_t L_119 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_119, 1));
	}

IL_01e4:
	{
		int32_t L_120 = V_9;
		V_15 = (bool)((((int32_t)((((int32_t)L_120) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_121 = V_15;
		if (L_121)
		{
			goto IL_0073;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_122 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_123 = V_3;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_124;
		L_124 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_122, L_123, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_125 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_126;
		L_126 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_124, L_125, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_127 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_128;
		L_128 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_126, L_127, NULL);
		V_6 = L_128;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_129 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_130 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_131;
		L_131 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_129, L_130, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_132 = ___P0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_133 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_134;
		L_134 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_132, L_133, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_135;
		L_135 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_131, L_134, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_136 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_137;
		L_137 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_135, L_136, NULL);
		V_3 = L_137;
		bool L_138 = V_7;
		V_16 = L_138;
		bool L_139 = V_16;
		if (!L_139)
		{
			goto IL_0235;
		}
	}
	{
		V_7 = (bool)0;
		goto IL_0249;
	}

IL_0235:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_140 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_141 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_142 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_143;
		L_143 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_141, L_142, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_144 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_145 = ___constant4;
		NullCheck(L_140);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_146;
		L_146 = BigInteger_BarrettReduction_mBFEB2DE54E275465CAE9B32334779280949B1DD9(L_140, L_143, L_144, L_145, NULL);
		V_4 = L_146;
	}

IL_0249:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_147 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_148 = ___Q1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_149;
		L_149 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_147, L_148, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_150 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_151;
		L_151 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_149, L_150, NULL);
		V_4 = L_151;
		V_17 = 0;
		goto IL_02bd;
	}

IL_025e:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_152 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_153 = V_3;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_154;
		L_154 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_152, L_153, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_155 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_156;
		L_156 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_154, L_155, NULL);
		V_6 = L_156;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_157 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_158 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_159;
		L_159 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_157, L_158, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_160 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_161;
		L_161 = BigInteger_op_LeftShift_m52BF16486FF642F88B505336617A60F65F59836E(L_160, 1, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_162;
		L_162 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_159, L_161, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_163 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_164;
		L_164 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_162, L_163, NULL);
		V_3 = L_164;
		bool L_165 = V_7;
		V_18 = L_165;
		bool L_166 = V_18;
		if (!L_166)
		{
			goto IL_02a2;
		}
	}
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_167 = ___Q1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_168 = ___n3;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_169;
		L_169 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_167, L_168, NULL);
		V_4 = L_169;
		V_7 = (bool)0;
		goto IL_02b6;
	}

IL_02a2:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_170 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_171 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_172 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_173;
		L_173 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_171, L_172, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_174 = ___n3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_175 = ___constant4;
		NullCheck(L_170);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_176;
		L_176 = BigInteger_BarrettReduction_mBFEB2DE54E275465CAE9B32334779280949B1DD9(L_170, L_173, L_174, L_175, NULL);
		V_4 = L_176;
	}

IL_02b6:
	{
		int32_t L_177 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_177, 1));
	}

IL_02bd:
	{
		int32_t L_178 = V_17;
		int32_t L_179 = ___s5;
		V_19 = (bool)((((int32_t)L_178) < ((int32_t)L_179))? 1 : 0);
		bool L_180 = V_19;
		if (L_180)
		{
			goto IL_025e;
		}
	}
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_181 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_182 = V_6;
		NullCheck(L_181);
		ArrayElementTypeCheck (L_181, L_182);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)L_182);
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_183 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_184 = V_3;
		NullCheck(L_183);
		ArrayElementTypeCheck (L_183, L_184);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)L_184);
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_185 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_186 = V_4;
		NullCheck(L_185);
		ArrayElementTypeCheck (L_185, L_186);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(2), (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)L_186);
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_187 = V_0;
		V_20 = L_187;
		goto IL_02dc;
	}

IL_02dc:
	{
		BigIntegerU5BU5D_t08066DEC5B8767ED63D0ED753A846C77F782072A* L_188 = V_20;
		return L_188;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::MulDivTest(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_MulDivTest_m4EFE7BD93328566E5982916EA728CD663EA69C1E (int32_t ___rounds0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6B5E50FCFD2E00B81E013DDA8DB088C83669E3D);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_7 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_8 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_9 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_10 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B38_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B37_0 = NULL;
	String_t* G_B39_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B41_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B40_0 = NULL;
	String_t* G_B42_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B44_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B43_0 = NULL;
	String_t* G_B45_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B47_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B46_0 = NULL;
	String_t* G_B48_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B50_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B49_0 = NULL;
	String_t* G_B51_0 = NULL;
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_1 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_2 = L_2;
		V_3 = 0;
		goto IL_0279;
	}

IL_001e:
	{
		V_4 = 0;
		goto IL_0037;
	}

IL_0024:
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_3 = V_0;
		NullCheck(L_3);
		double L_4;
		L_4 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_3);
		V_4 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(L_4, (65.0))));
	}

IL_0037:
	{
		int32_t L_5 = V_4;
		V_12 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_12;
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		V_5 = 0;
		goto IL_005a;
	}

IL_0047:
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_7 = V_0;
		NullCheck(L_7);
		double L_8;
		L_8 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_7);
		V_5 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(L_8, (65.0))));
	}

IL_005a:
	{
		int32_t L_9 = V_5;
		V_13 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_13;
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_00bd;
	}

IL_006a:
	{
		V_14 = 0;
		goto IL_00b0;
	}

IL_0070:
	{
		int32_t L_11 = V_14;
		int32_t L_12 = V_4;
		V_15 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_15;
		if (!L_13)
		{
			goto IL_0094;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		int32_t L_15 = V_14;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_16 = V_0;
		NullCheck(L_16);
		double L_17;
		L_17 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_16);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, double>(((double)il2cpp_codegen_multiply(L_17, (256.0)))));
		goto IL_0099;
	}

IL_0094:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		int32_t L_19 = V_14;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint8_t)0);
	}

IL_0099:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_1;
		int32_t L_21 = V_14;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_16 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_16;
		if (!L_24)
		{
			goto IL_00a9;
		}
	}
	{
		V_6 = (bool)1;
	}

IL_00a9:
	{
		int32_t L_25 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_00b0:
	{
		int32_t L_26 = V_14;
		V_17 = (bool)((((int32_t)L_26) < ((int32_t)((int32_t)64)))? 1 : 0);
		bool L_27 = V_17;
		if (L_27)
		{
			goto IL_0070;
		}
	}
	{
	}

IL_00bd:
	{
		bool L_28 = V_6;
		V_18 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_18;
		if (L_29)
		{
			goto IL_006a;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_0120;
	}

IL_00cd:
	{
		V_19 = 0;
		goto IL_0113;
	}

IL_00d3:
	{
		int32_t L_30 = V_19;
		int32_t L_31 = V_5;
		V_20 = (bool)((((int32_t)L_30) < ((int32_t)L_31))? 1 : 0);
		bool L_32 = V_20;
		if (!L_32)
		{
			goto IL_00f7;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_2;
		int32_t L_34 = V_19;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_35 = V_0;
		NullCheck(L_35);
		double L_36;
		L_36 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_35);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, double>(((double)il2cpp_codegen_multiply(L_36, (256.0)))));
		goto IL_00fc;
	}

IL_00f7:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_2;
		int32_t L_38 = V_19;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint8_t)0);
	}

IL_00fc:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_2;
		int32_t L_40 = V_19;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_21 = (bool)((!(((uint32_t)L_42) <= ((uint32_t)0)))? 1 : 0);
		bool L_43 = V_21;
		if (!L_43)
		{
			goto IL_010c;
		}
	}
	{
		V_6 = (bool)1;
	}

IL_010c:
	{
		int32_t L_44 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0113:
	{
		int32_t L_45 = V_19;
		V_22 = (bool)((((int32_t)L_45) < ((int32_t)((int32_t)64)))? 1 : 0);
		bool L_46 = V_22;
		if (L_46)
		{
			goto IL_00d3;
		}
	}
	{
	}

IL_0120:
	{
		bool L_47 = V_6;
		V_23 = (bool)((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
		bool L_48 = V_23;
		if (L_48)
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_0141;
	}

IL_012d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_1;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_50 = V_0;
		NullCheck(L_50);
		double L_51;
		L_51 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_50);
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, double>(((double)il2cpp_codegen_multiply(L_51, (256.0)))));
	}

IL_0141:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_1;
		NullCheck(L_52);
		int32_t L_53 = 0;
		uint8_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_24 = (bool)((((int32_t)L_54) == ((int32_t)0))? 1 : 0);
		bool L_55 = V_24;
		if (L_55)
		{
			goto IL_012d;
		}
	}
	{
		goto IL_0163;
	}

IL_014f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_2;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_57 = V_0;
		NullCheck(L_57);
		double L_58;
		L_58 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_57);
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, double>(((double)il2cpp_codegen_multiply(L_58, (256.0)))));
	}

IL_0163:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_2;
		NullCheck(L_59);
		int32_t L_60 = 0;
		uint8_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_25 = (bool)((((int32_t)L_61) == ((int32_t)0))? 1 : 0);
		bool L_62 = V_25;
		if (L_62)
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_63 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m379B83C0670954BD79F405DB48800CFC19D97E17(L_63, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = V_1;
		int32_t L_65 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_66 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_66);
		BigInteger__ctor_m6F11E40726FC618FAB5D9008FBEF6E1EA3207C9A(L_66, L_64, L_65, NULL);
		V_7 = L_66;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_2;
		int32_t L_68 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_69 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_69);
		BigInteger__ctor_m6F11E40726FC618FAB5D9008FBEF6E1EA3207C9A(L_69, L_67, L_68, NULL);
		V_8 = L_69;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_70 = V_7;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_71 = V_8;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_72;
		L_72 = BigInteger_op_Division_m0E65A659BB326213D738370A903EBF2491ECAA68(L_70, L_71, NULL);
		V_9 = L_72;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_73 = V_7;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_74 = V_8;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_75;
		L_75 = BigInteger_op_Modulus_mF7645C63B14D0E2124145645C4AF381952DF06BD(L_73, L_74, NULL);
		V_10 = L_75;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_76 = V_9;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_77 = V_8;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_78;
		L_78 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_76, L_77, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_79 = V_10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_80;
		L_80 = BigInteger_op_Addition_m530E1AD8E6D64195B4645033819D2A24B764C237(L_78, L_79, NULL);
		V_11 = L_80;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_81 = V_11;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_82 = V_7;
		bool L_83;
		L_83 = BigInteger_op_Inequality_m2AF6EE02B7EE566B383DAB2CC09C9ACEF3C2635C(L_81, L_82, NULL);
		V_26 = L_83;
		bool L_84 = V_26;
		if (!L_84)
		{
			goto IL_0274;
		}
	}
	{
		String_t* L_85;
		L_85 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_86;
		L_86 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB6B5E50FCFD2E00B81E013DDA8DB088C83669E3D, L_85, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_86, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_87 = V_7;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_88 = L_87;
		G_B37_0 = L_88;
		if (L_88)
		{
			G_B38_0 = L_88;
			goto IL_01e5;
		}
	}
	{
		G_B39_0 = ((String_t*)(NULL));
		goto IL_01ea;
	}

IL_01e5:
	{
		NullCheck(G_B38_0);
		String_t* L_89;
		L_89 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B38_0);
		G_B39_0 = L_89;
	}

IL_01ea:
	{
		String_t* L_90;
		L_90 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B39_0, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_90, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_91 = V_8;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_92 = L_91;
		G_B40_0 = L_92;
		if (L_92)
		{
			G_B41_0 = L_92;
			goto IL_0203;
		}
	}
	{
		G_B42_0 = ((String_t*)(NULL));
		goto IL_0208;
	}

IL_0203:
	{
		NullCheck(G_B41_0);
		String_t* L_93;
		L_93 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B41_0);
		G_B42_0 = L_93;
	}

IL_0208:
	{
		String_t* L_94;
		L_94 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B42_0, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_94, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_95 = V_9;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_96 = L_95;
		G_B43_0 = L_96;
		if (L_96)
		{
			G_B44_0 = L_96;
			goto IL_0221;
		}
	}
	{
		G_B45_0 = ((String_t*)(NULL));
		goto IL_0226;
	}

IL_0221:
	{
		NullCheck(G_B44_0);
		String_t* L_97;
		L_97 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B44_0);
		G_B45_0 = L_97;
	}

IL_0226:
	{
		String_t* L_98;
		L_98 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B45_0, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_98, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_99 = V_10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_100 = L_99;
		G_B46_0 = L_100;
		if (L_100)
		{
			G_B47_0 = L_100;
			goto IL_023f;
		}
	}
	{
		G_B48_0 = ((String_t*)(NULL));
		goto IL_0244;
	}

IL_023f:
	{
		NullCheck(G_B47_0);
		String_t* L_101;
		L_101 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B47_0);
		G_B48_0 = L_101;
	}

IL_0244:
	{
		String_t* L_102;
		L_102 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B48_0, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_102, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_103 = V_11;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_104 = L_103;
		G_B49_0 = L_104;
		if (L_104)
		{
			G_B50_0 = L_104;
			goto IL_025d;
		}
	}
	{
		G_B51_0 = ((String_t*)(NULL));
		goto IL_0262;
	}

IL_025d:
	{
		NullCheck(G_B50_0);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B50_0);
		G_B51_0 = L_105;
	}

IL_0262:
	{
		String_t* L_106;
		L_106 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B51_0, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_106, NULL);
		goto IL_0286;
	}

IL_0274:
	{
		int32_t L_107 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_107, 1));
	}

IL_0279:
	{
		int32_t L_108 = V_3;
		int32_t L_109 = ___rounds0;
		V_27 = (bool)((((int32_t)L_108) < ((int32_t)L_109))? 1 : 0);
		bool L_110 = V_27;
		if (L_110)
		{
			goto IL_001e;
		}
	}

IL_0286:
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::RSATest(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_RSATest_m598F9474FF3FC75ED89D74A5D267DDB2E70F6C7F (int32_t ___rounds0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DEE5D207E901D1E406396DF24292E0DA4933427);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BFD938E23883996BB53ADC717A30381323307E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral947F50311E9CB6A65F16D5E098A7C924CB9B7ED5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB29DFF90E23218E1AA65656A44E1AAE9E278BD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1316B3900C007A342106359F4F3088B6EEFB104);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1FF1DE164A9917F6C580B0C58E85CB5DB28AA81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8DF79069DEE119BB056F796290A0FB67EAC4897);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1AD25D9D9631F7CBBA002BF41B32E922006C993);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8E6EF22A371EC7502EE6EF955025CF0739E6292);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_2 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_3 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_8 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_9 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_10 = NULL;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B21_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B20_0 = NULL;
	String_t* G_B22_0 = NULL;
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E(L_0, 1, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_1 = L_1;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_2 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BigInteger__ctor_m3367C113DAF52BD63DBDFD251C80496E0D289F5C(L_2, _stringLiteral6BFD938E23883996BB53ADC717A30381323307E1, ((int32_t)16), NULL);
		V_2 = L_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_3 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m3367C113DAF52BD63DBDFD251C80496E0D289F5C(L_3, _stringLiteralC1FF1DE164A9917F6C580B0C58E85CB5DB28AA81, ((int32_t)16), NULL);
		V_3 = L_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_4 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BigInteger__ctor_m3367C113DAF52BD63DBDFD251C80496E0D289F5C(L_4, _stringLiteralB1316B3900C007A342106359F4F3088B6EEFB104, ((int32_t)16), NULL);
		V_4 = L_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25(L_5, ((int32_t)10), NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralE1AD25D9D9631F7CBBA002BF41B32E922006C993, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_7, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = V_3;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25(L_8, ((int32_t)10), NULL);
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralE8E6EF22A371EC7502EE6EF955025CF0739E6292, L_9, NULL);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_10, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = V_4;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25(L_11, ((int32_t)10), NULL);
		String_t* L_13;
		L_13 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralAB29DFF90E23218E1AA65656A44E1AAE9E278BD3, L_12, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_13, NULL);
		V_5 = 0;
		goto IL_01c9;
	}

IL_008e:
	{
		V_6 = 0;
		goto IL_00a7;
	}

IL_0094:
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_14 = V_0;
		NullCheck(L_14);
		double L_15;
		L_15 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_14);
		V_6 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(L_15, (65.0))));
	}

IL_00a7:
	{
		int32_t L_16 = V_6;
		V_11 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_11;
		if (L_17)
		{
			goto IL_0094;
		}
	}
	{
		V_7 = (bool)0;
		goto IL_010a;
	}

IL_00b7:
	{
		V_12 = 0;
		goto IL_00fd;
	}

IL_00bd:
	{
		int32_t L_18 = V_12;
		int32_t L_19 = V_6;
		V_13 = (bool)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_13;
		if (!L_20)
		{
			goto IL_00e1;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_1;
		int32_t L_22 = V_12;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_23 = V_0;
		NullCheck(L_23);
		double L_24;
		L_24 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_23);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, double>(((double)il2cpp_codegen_multiply(L_24, (256.0)))));
		goto IL_00e6;
	}

IL_00e1:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_1;
		int32_t L_26 = V_12;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (uint8_t)0);
	}

IL_00e6:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_1;
		int32_t L_28 = V_12;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_14 = (bool)((!(((uint32_t)L_30) <= ((uint32_t)0)))? 1 : 0);
		bool L_31 = V_14;
		if (!L_31)
		{
			goto IL_00f6;
		}
	}
	{
		V_7 = (bool)1;
	}

IL_00f6:
	{
		int32_t L_32 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00fd:
	{
		int32_t L_33 = V_12;
		V_15 = (bool)((((int32_t)L_33) < ((int32_t)((int32_t)64)))? 1 : 0);
		bool L_34 = V_15;
		if (L_34)
		{
			goto IL_00bd;
		}
	}
	{
	}

IL_010a:
	{
		bool L_35 = V_7;
		V_16 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_16;
		if (L_36)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_012b;
	}

IL_0117:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_1;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_38 = V_0;
		NullCheck(L_38);
		double L_39;
		L_39 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_38);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, double>(((double)il2cpp_codegen_multiply(L_39, (256.0)))));
	}

IL_012b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_1;
		NullCheck(L_40);
		int32_t L_41 = 0;
		uint8_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_17 = (bool)((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
		bool L_43 = V_17;
		if (L_43)
		{
			goto IL_0117;
		}
	}
	{
		String_t* L_44;
		L_44 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_5), NULL);
		String_t* L_45;
		L_45 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral4DEE5D207E901D1E406396DF24292E0DA4933427, L_44, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_Write_m24361910B9595463F9D14D41F3121C0B631FFBBF(L_45, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_1;
		int32_t L_47 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		BigInteger__ctor_m6F11E40726FC618FAB5D9008FBEF6E1EA3207C9A(L_48, L_46, L_47, NULL);
		V_8 = L_48;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_49 = V_8;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_50 = V_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_51 = V_4;
		NullCheck(L_49);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_52;
		L_52 = BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F(L_49, L_50, L_51, NULL);
		V_9 = L_52;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_53 = V_9;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_54 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_55 = V_4;
		NullCheck(L_53);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_56;
		L_56 = BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F(L_53, L_54, L_55, NULL);
		V_10 = L_56;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_57 = V_10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_58 = V_8;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_59;
		L_59 = BigInteger_op_Inequality_m2AF6EE02B7EE566B383DAB2CC09C9ACEF3C2635C(L_57, L_58, NULL);
		V_18 = L_59;
		bool L_60 = V_18;
		if (!L_60)
		{
			goto IL_01b7;
		}
	}
	{
		String_t* L_61;
		L_61 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_5), NULL);
		String_t* L_62;
		L_62 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral947F50311E9CB6A65F16D5E098A7C924CB9B7ED5, L_61, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_62, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_63 = V_8;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_64 = L_63;
		G_B20_0 = L_64;
		if (L_64)
		{
			G_B21_0 = L_64;
			goto IL_01a0;
		}
	}
	{
		G_B22_0 = ((String_t*)(NULL));
		goto IL_01a5;
	}

IL_01a0:
	{
		NullCheck(G_B21_0);
		String_t* L_65;
		L_65 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B21_0);
		G_B22_0 = L_65;
	}

IL_01a5:
	{
		String_t* L_66;
		L_66 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B22_0, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_66, NULL);
		goto IL_01d7;
	}

IL_01b7:
	{
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(_stringLiteralC8DF79069DEE119BB056F796290A0FB67EAC4897, NULL);
		int32_t L_67 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_01c9:
	{
		int32_t L_68 = V_5;
		int32_t L_69 = ___rounds0;
		V_19 = (bool)((((int32_t)L_68) < ((int32_t)L_69))? 1 : 0);
		bool L_70 = V_19;
		if (L_70)
		{
			goto IL_008e;
		}
	}

IL_01d7:
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::RSATest2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_RSATest2_m0D7DC1EAE27AE47E782F77D2E18A79D5BD1D9936 (int32_t ___rounds0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____1C59D529081415FBF853112CA22696E6E2909DC7131A9778E6D29D65EF51B9BB_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____364BB9909344098EBFEC9D6590CE0E1C0DA480431594FDA19BF8DA05C37A8BFE_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DEE5D207E901D1E406396DF24292E0DA4933427);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral947F50311E9CB6A65F16D5E098A7C924CB9B7ED5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB29DFF90E23218E1AA65656A44E1AAE9E278BD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8DF79069DEE119BB056F796290A0FB67EAC4897);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2A815C62D1F89548AB5402DDD7F0DB069879D87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8E6EF22A371EC7502EE6EF955025CF0739E6292);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_4 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_5 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_6 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_7 = NULL;
	int32_t V_8 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_9 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_10 = NULL;
	int32_t V_11 = 0;
	bool V_12 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_13 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_14 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_15 = NULL;
	bool V_16 = false;
	int32_t V_17 = 0;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B21_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B20_0 = NULL;
	String_t* G_B22_0 = NULL;
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_1 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_4 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____364BB9909344098EBFEC9D6590CE0E1C0DA480431594FDA19BF8DA05C37A8BFE_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_3, L_4, NULL);
		V_2 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_5;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_7 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____1C59D529081415FBF853112CA22696E6E2909DC7131A9778E6D29D65EF51B9BB_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_6, L_7, NULL);
		V_3 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_2;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_9 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		BigInteger__ctor_m3B37C425E83F9F09CDD537BFC764E768BCCC52A9(L_9, L_8, NULL);
		V_4 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		BigInteger__ctor_m3B37C425E83F9F09CDD537BFC764E768BCCC52A9(L_11, L_10, NULL);
		V_5 = L_11;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_13;
		L_13 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(1, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_14;
		L_14 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_12, L_13, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16;
		L_16 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(1, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17;
		L_17 = BigInteger_op_Subtraction_mC3C1C9B8590E6F767B58829D0B36FEA0AACB6DF7(L_15, L_16, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_18;
		L_18 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_14, L_17, NULL);
		V_6 = L_18;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_19 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_20 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21;
		L_21 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_19, L_20, NULL);
		V_7 = L_21;
		V_8 = 0;
		goto IL_0220;
	}

IL_0079:
	{
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_22 = V_6;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_23 = V_0;
		NullCheck(L_22);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24;
		L_24 = BigInteger_genCoPrime_m60816777CE0C5C7823948A843416E1820AC2AE06(L_22, ((int32_t)512), L_23, NULL);
		V_9 = L_24;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_25 = V_9;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = V_6;
		NullCheck(L_25);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27;
		L_27 = BigInteger_modInverse_mF434720FE230F436E78F7E68177134DFCEBC876B(L_25, L_26, NULL);
		V_10 = L_27;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = V_9;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25(L_28, ((int32_t)10), NULL);
		String_t* L_30;
		L_30 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralE2A815C62D1F89548AB5402DDD7F0DB069879D87, L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_30, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_31 = V_10;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25(L_31, ((int32_t)10), NULL);
		String_t* L_33;
		L_33 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralE8E6EF22A371EC7502EE6EF955025CF0739E6292, L_32, NULL);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_33, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_34 = V_7;
		NullCheck(L_34);
		String_t* L_35;
		L_35 = BigInteger_ToString_m496A3838F0E0728509FC68405D53221CE814AA25(L_34, ((int32_t)10), NULL);
		String_t* L_36;
		L_36 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralAB29DFF90E23218E1AA65656A44E1AAE9E278BD3, L_35, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_36, NULL);
		V_11 = 0;
		goto IL_00fc;
	}

IL_00e9:
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_37 = V_0;
		NullCheck(L_37);
		double L_38;
		L_38 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_37);
		V_11 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(L_38, (65.0))));
	}

IL_00fc:
	{
		int32_t L_39 = V_11;
		V_16 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_16;
		if (L_40)
		{
			goto IL_00e9;
		}
	}
	{
		V_12 = (bool)0;
		goto IL_015f;
	}

IL_010c:
	{
		V_17 = 0;
		goto IL_0152;
	}

IL_0112:
	{
		int32_t L_41 = V_17;
		int32_t L_42 = V_11;
		V_18 = (bool)((((int32_t)L_41) < ((int32_t)L_42))? 1 : 0);
		bool L_43 = V_18;
		if (!L_43)
		{
			goto IL_0136;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_1;
		int32_t L_45 = V_17;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_46 = V_0;
		NullCheck(L_46);
		double L_47;
		L_47 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_46);
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, double>(((double)il2cpp_codegen_multiply(L_47, (256.0)))));
		goto IL_013b;
	}

IL_0136:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_1;
		int32_t L_49 = V_17;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint8_t)0);
	}

IL_013b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_1;
		int32_t L_51 = V_17;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		uint8_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_19 = (bool)((!(((uint32_t)L_53) <= ((uint32_t)0)))? 1 : 0);
		bool L_54 = V_19;
		if (!L_54)
		{
			goto IL_014b;
		}
	}
	{
		V_12 = (bool)1;
	}

IL_014b:
	{
		int32_t L_55 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_0152:
	{
		int32_t L_56 = V_17;
		V_20 = (bool)((((int32_t)L_56) < ((int32_t)((int32_t)64)))? 1 : 0);
		bool L_57 = V_20;
		if (L_57)
		{
			goto IL_0112;
		}
	}
	{
	}

IL_015f:
	{
		bool L_58 = V_12;
		V_21 = (bool)((((int32_t)L_58) == ((int32_t)0))? 1 : 0);
		bool L_59 = V_21;
		if (L_59)
		{
			goto IL_010c;
		}
	}
	{
		goto IL_0180;
	}

IL_016c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_1;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_61 = V_0;
		NullCheck(L_61);
		double L_62;
		L_62 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_61);
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, double>(((double)il2cpp_codegen_multiply(L_62, (256.0)))));
	}

IL_0180:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = V_1;
		NullCheck(L_63);
		int32_t L_64 = 0;
		uint8_t L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_22 = (bool)((((int32_t)L_65) == ((int32_t)0))? 1 : 0);
		bool L_66 = V_22;
		if (L_66)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_67;
		L_67 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_8), NULL);
		String_t* L_68;
		L_68 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral4DEE5D207E901D1E406396DF24292E0DA4933427, L_67, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_Write_m24361910B9595463F9D14D41F3121C0B631FFBBF(L_68, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = V_1;
		int32_t L_70 = V_11;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_71 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_71);
		BigInteger__ctor_m6F11E40726FC618FAB5D9008FBEF6E1EA3207C9A(L_71, L_69, L_70, NULL);
		V_13 = L_71;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_72 = V_13;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_73 = V_9;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_74 = V_7;
		NullCheck(L_72);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_75;
		L_75 = BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F(L_72, L_73, L_74, NULL);
		V_14 = L_75;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_76 = V_14;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_77 = V_10;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_78 = V_7;
		NullCheck(L_76);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_79;
		L_79 = BigInteger_ModPow_m9AF7F88D086064C46B1548A4BA206535B7AC9F8F(L_76, L_77, L_78, NULL);
		V_15 = L_79;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_80 = V_15;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_81 = V_13;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		bool L_82;
		L_82 = BigInteger_op_Inequality_m2AF6EE02B7EE566B383DAB2CC09C9ACEF3C2635C(L_80, L_81, NULL);
		V_23 = L_82;
		bool L_83 = V_23;
		if (!L_83)
		{
			goto IL_020e;
		}
	}
	{
		String_t* L_84;
		L_84 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_8), NULL);
		String_t* L_85;
		L_85 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral947F50311E9CB6A65F16D5E098A7C924CB9B7ED5, L_84, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_85, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_86 = V_13;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_87 = L_86;
		G_B20_0 = L_87;
		if (L_87)
		{
			G_B21_0 = L_87;
			goto IL_01f7;
		}
	}
	{
		G_B22_0 = ((String_t*)(NULL));
		goto IL_01fc;
	}

IL_01f7:
	{
		NullCheck(G_B21_0);
		String_t* L_88;
		L_88 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B21_0);
		G_B22_0 = L_88;
	}

IL_01fc:
	{
		String_t* L_89;
		L_89 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B22_0, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_89, NULL);
		goto IL_022e;
	}

IL_020e:
	{
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(_stringLiteralC8DF79069DEE119BB056F796290A0FB67EAC4897, NULL);
		int32_t L_90 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_0220:
	{
		int32_t L_91 = V_8;
		int32_t L_92 = ___rounds0;
		V_24 = (bool)((((int32_t)L_91) < ((int32_t)L_92))? 1 : 0);
		bool L_93 = V_24;
		if (L_93)
		{
			goto IL_0079;
		}
	}

IL_022e:
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::SqrtTest(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_SqrtTest_mA6B0186C22B4FB340E434143CD4C687457D7B2ED (int32_t ___rounds0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DEE5D207E901D1E406396DF24292E0DA4933427);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral947F50311E9CB6A65F16D5E098A7C924CB9B7ED5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8DF79069DEE119BB056F796290A0FB67EAC4897);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_3 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_4 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B7_0 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_00d3;
	}

IL_000e:
	{
		V_2 = 0;
		goto IL_0025;
	}

IL_0013:
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = V_0;
		NullCheck(L_1);
		double L_2;
		L_2 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_1);
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(L_2, (1024.0))));
	}

IL_0025:
	{
		int32_t L_3 = V_2;
		V_6 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_6;
		if (L_4)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral4DEE5D207E901D1E406396DF24292E0DA4933427, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_Write_m24361910B9595463F9D14D41F3121C0B631FFBBF(L_6, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_7 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		BigInteger__ctor_mB3A2ED85FB7A5384D86986010AADAFBC6A4A4143(L_7, NULL);
		V_3 = L_7;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_8 = V_3;
		int32_t L_9 = V_2;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_10 = V_0;
		NullCheck(L_8);
		BigInteger_genRandomBits_m1FECCA686CA1F9B23CE7732DDE3F3FDF41B6FEFB(L_8, L_9, L_10, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = V_3;
		NullCheck(L_11);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12;
		L_12 = BigInteger_sqrt_m2A5F0379E06ABB1165142C57F3F11CCFE9F726AE(L_11, NULL);
		V_4 = L_12;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_13 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_14;
		L_14 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(1, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_15;
		L_15 = BigInteger_op_Addition_m530E1AD8E6D64195B4645033819D2A24B764C237(L_13, L_14, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_16 = V_4;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_17;
		L_17 = BigInteger_op_Implicit_m8FCC5115CAC81D22781AD4873A860D8446BD74CA(1, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_18;
		L_18 = BigInteger_op_Addition_m530E1AD8E6D64195B4645033819D2A24B764C237(L_16, L_17, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_19;
		L_19 = BigInteger_op_Multiply_m8FD1D3BBE5B3B8D51E619070AE1BF21426D19251(L_15, L_18, NULL);
		V_5 = L_19;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_20 = V_5;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_21 = V_3;
		bool L_22;
		L_22 = BigInteger_op_LessThanOrEqual_mBC05B3ED352EE3F4919F557D65FF2F2558FC7EB1(L_20, L_21, NULL);
		V_7 = L_22;
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		String_t* L_24;
		L_24 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_25;
		L_25 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral947F50311E9CB6A65F16D5E098A7C924CB9B7ED5, L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_25, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_26 = V_3;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_27 = L_26;
		G_B6_0 = L_27;
		if (L_27)
		{
			G_B7_0 = L_27;
			goto IL_00ac;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		goto IL_00b1;
	}

IL_00ac:
	{
		NullCheck(G_B7_0);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B7_0);
		G_B8_0 = L_28;
	}

IL_00b1:
	{
		String_t* L_29;
		L_29 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B8_0, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_29, NULL);
		goto IL_00e0;
	}

IL_00c3:
	{
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(_stringLiteralC8DF79069DEE119BB056F796290A0FB67EAC4897, NULL);
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00d3:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = ___rounds0;
		V_8 = (bool)((((int32_t)L_31) < ((int32_t)L_32))? 1 : 0);
		bool L_33 = V_8;
		if (L_33)
		{
			goto IL_000e;
		}
	}

IL_00e0:
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::Main(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_Main_mA822564C4B7360C24D9380B49EC6CBAE7FAFA9D9 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____573EAD3B1C3E9D9EAE4FEA52F2F4B4FF4E05C3A47F126655D66867547AAD96D6_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____C06E2A4B592787D6DD076FCE44AD1518B3E742726EE0690FA60EE59E1BD25823_9_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08ADDECC8A306A237F75DCFE180BB43B38C81975);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E5857F88C98EF4778F4624474792582147667EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DFAC00850B42052C386B06FF9FA1A0235058280);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72301265348C6F8E4100593716DC0052838CF626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E0FA1376B6339890B9CCE01F2815BB75405E00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FF79147338E8CA6DE2548D641B7A2B3B8B92BD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3D98A6506BE85B88A90E9097DABCC33A269F921);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC73AB4B40196928982A166205AF79F31A274B647);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_4 = NULL;
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_5 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_6 = NULL;
	int32_t V_7 = 0;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)65));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____C06E2A4B592787D6DD076FCE44AD1518B3E742726EE0690FA60EE59E1BD25823_9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)65));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____573EAD3B1C3E9D9EAE4FEA52F2F4B4FF4E05C3A47F126655D66867547AAD96D6_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_4, L_5, NULL);
		V_1 = L_4;
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(_stringLiteral9FF79147338E8CA6DE2548D641B7A2B3B8B92BD3, NULL);
		V_2 = ((int32_t)100);
		V_3 = 0;
		V_7 = 0;
		goto IL_0094;
	}

IL_003c:
	{
		int32_t L_6 = V_7;
		int32_t L_7 = V_2;
		V_9 = (bool)((((int32_t)((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_9;
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m3C40D585DE03250053C5EA3AA4753BA25FDCC2B1(NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, ((int32_t)100)));
	}

IL_0058:
	{
		int32_t L_10 = V_7;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_11 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		BigInteger__ctor_m6F703AFBC54296B55AD5BA512281E790DDFCFB64(L_11, ((int64_t)((-L_10))), NULL);
		V_8 = L_11;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_12 = V_8;
		NullCheck(L_12);
		bool L_13;
		L_13 = BigInteger_isProbablePrime_mFF3304960D220ED39A856FE6512C24046E43C0E7(L_12, NULL);
		V_10 = L_13;
		bool L_14 = V_10;
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_7), NULL);
		String_t* L_16;
		L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_15, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_Write_m24361910B9595463F9D14D41F3121C0B631FFBBF(L_16, NULL);
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_008d:
	{
		int32_t L_18 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0094:
	{
		int32_t L_19 = V_7;
		V_11 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)2000)))? 1 : 0);
		bool L_20 = V_11;
		if (L_20)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_21;
		L_21 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_22;
		L_22 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral72301265348C6F8E4100593716DC0052838CF626, L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_22, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_0;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_24 = (BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94*)il2cpp_codegen_object_new(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		BigInteger__ctor_m3B37C425E83F9F09CDD537BFC764E768BCCC52A9(L_24, L_23, NULL);
		V_4 = L_24;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_25 = V_4;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		String_t* L_27;
		L_27 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral6DFAC00850B42052C386B06FF9FA1A0235058280, L_26, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_27, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_28 = V_4;
		NullCheck(L_28);
		bool L_29;
		L_29 = BigInteger_SolovayStrassenTest_m9F02AE87545710145437490BC88B8CFEA22FEC77(L_28, 5, NULL);
		V_12 = L_29;
		String_t* L_30;
		L_30 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_12), NULL);
		String_t* L_31;
		L_31 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral08ADDECC8A306A237F75DCFE180BB43B38C81975, L_30, NULL);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_31, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_32 = V_4;
		NullCheck(L_32);
		bool L_33;
		L_33 = BigInteger_RabinMillerTest_mCA4EA9AC31EF0FDA9ACFFCDEE925C0CE3B88D0A3(L_32, 5, NULL);
		V_12 = L_33;
		String_t* L_34;
		L_34 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_12), NULL);
		String_t* L_35;
		L_35 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral87E0FA1376B6339890B9CCE01F2815BB75405E00, L_34, NULL);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_35, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_36 = V_4;
		NullCheck(L_36);
		bool L_37;
		L_37 = BigInteger_FermatLittleTest_m3F14DDD38E4E70B5965A80F9ECC054E69D2979BF(L_36, 5, NULL);
		V_12 = L_37;
		String_t* L_38;
		L_38 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_12), NULL);
		String_t* L_39;
		L_39 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB3D98A6506BE85B88A90E9097DABCC33A269F921, L_38, NULL);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_39, NULL);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_40 = V_4;
		NullCheck(L_40);
		bool L_41;
		L_41 = BigInteger_isProbablePrime_mFF3304960D220ED39A856FE6512C24046E43C0E7(L_40, NULL);
		V_12 = L_41;
		String_t* L_42;
		L_42 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_12), NULL);
		String_t* L_43;
		L_43 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1E5857F88C98EF4778F4624474792582147667EB, L_42, NULL);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_43, NULL);
		Console_Write_m24361910B9595463F9D14D41F3121C0B631FFBBF(_stringLiteralC73AB4B40196928982A166205AF79F31A274B647, NULL);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_44 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_44, NULL);
		V_5 = L_44;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_45 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_46;
		L_46 = BigInteger_genPseudoPrime_mC3F589A1361242351D735167C1CE8D22237B732C(((int32_t)512), 5, L_45, NULL);
		V_6 = L_46;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_47 = V_6;
		BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94* L_48 = L_47;
		G_B8_0 = L_48;
		G_B8_1 = _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
		if (L_48)
		{
			G_B9_0 = L_48;
			G_B9_1 = _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
			goto IL_0190;
		}
	}
	{
		G_B10_0 = ((String_t*)(NULL));
		G_B10_1 = G_B8_1;
		goto IL_0195;
	}

IL_0190:
	{
		NullCheck(G_B9_0);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B9_0);
		G_B10_0 = L_49;
		G_B10_1 = G_B9_1;
	}

IL_0195:
	{
		String_t* L_50;
		L_50 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B10_1, G_B10_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_mB3B6E89C2D3CCB7C284B46F30233782BFF942709(L_50, NULL);
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__cctor_m9EDE0B4368125A9B4CA619ADA8FC02A6D3BCC39A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_8_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)303));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBEBD39EA3866CDEEAB682D715E5E67D0F87F603D____AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_8_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var))->___primesBelow2000_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tC781AF65488163EF1F114D6C02BC05304E6CDC94_il2cpp_TypeInfo_var))->___primesBelow2000_1), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
