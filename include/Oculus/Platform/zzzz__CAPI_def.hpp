#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CAPI)
namespace System {
struct DateTime;
}
namespace Oculus::Platform {
struct SdkAccountType;
}
namespace System {
class Object;
}
namespace Oculus::Platform {
struct __CAPI__ovrNetSyncVec3;
}
namespace Oculus::Platform {
struct NetSyncVoipMicSource;
}
namespace Oculus::Platform {
struct LeaderboardStartAt;
}
namespace Oculus::Platform {
struct AppAgeCategory;
}
namespace Oculus::Platform {
struct LivestreamingMicrophoneStatus;
}
namespace Oculus::Platform {
struct VoipMuteState;
}
namespace Oculus::Platform {
struct ChallengeVisibility;
}
namespace Oculus::Platform {
struct LeaderboardFilterType;
}
namespace Oculus::Platform {
struct LaunchType;
}
namespace Oculus::Platform {
struct PartyUpdateAction;
}
namespace Oculus::Platform {
struct PlatformInitializeResult;
}
namespace Oculus::Platform {
struct ShareMediaStatus;
}
namespace System::Text {
class UTF8Encoding;
}
namespace Oculus::Platform {
struct VoipSampleRate;
}
namespace Oculus::Platform {
struct ChallengeViewerFilter;
}
namespace Oculus::Platform {
struct ServiceProvider;
}
namespace Oculus::Platform {
struct TimeWindow;
}
namespace Oculus::Platform {
struct __CAPI__ovrKeyValuePair;
}
namespace Oculus::Platform {
struct LivestreamingAudience;
}
namespace Oculus::Platform {
struct MultiplayerErrorErrorKey;
}
namespace Oculus::Platform {
struct LogEventName;
}
namespace Oculus::Platform {
struct NetSyncVoipStreamMode;
}
namespace Oculus::Platform {
struct ReportRequestResponse;
}
namespace Oculus::Platform {
struct MediaContentType;
}
namespace Oculus::Platform {
struct SystemVoipStatus;
}
namespace System {
class Array;
}
namespace Oculus::Platform {
struct InitConfigOptions;
}
namespace Oculus::Platform {
struct ChallengeCreationType;
}
namespace Oculus::Platform {
struct AccountAgeCategory;
}
namespace Oculus::Platform {
struct __CAPI__OculusInitParams;
}
namespace Oculus::Platform {
struct LaunchResult;
}
namespace Oculus::Platform {
struct NetSyncDisconnectReason;
}
namespace Oculus::Platform {
struct __Message__MessageType;
}
namespace Oculus::Platform {
class __CAPI__FilterCallback;
}
namespace Oculus::Platform {
struct AbuseReportVideoMode;
}
namespace Oculus::Platform {
struct VoipDtxState;
}
namespace Oculus::Platform {
struct AchievementType;
}
namespace Oculus::Platform {
struct UserPresenceStatus;
}
namespace Oculus::Platform {
struct LivestreamingStartStatus;
}
namespace Oculus::Platform {
struct NetSyncConnectionStatus;
}
namespace Oculus::Platform {
struct AppStatus;
}
namespace Oculus::Platform {
struct VoipBitrate;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Oculus::Platform {
struct AbuseReportType;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace Oculus::Platform {
struct KeyValuePairType;
}
// Forward declare root types
namespace Oculus::Platform {
class CAPI;
}
namespace Oculus::Platform {
class __CAPI__FilterCallback;
}
namespace Oculus::Platform {
struct __CAPI__OculusInitParams;
}
namespace Oculus::Platform {
struct __CAPI__ovrKeyValuePair;
}
namespace Oculus::Platform {
struct __CAPI__ovrNetSyncVec3;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::CAPI);
MARK_REF_PTR_T(::Oculus::Platform::__CAPI__FilterCallback);
MARK_VAL_T(::Oculus::Platform::__CAPI__OculusInitParams);
MARK_VAL_T(::Oculus::Platform::__CAPI__ovrKeyValuePair);
MARK_VAL_T(::Oculus::Platform::__CAPI__ovrNetSyncVec3);
// Type: ::ovrKeyValuePair
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13236))
// CS Name: ::CAPI::ovrKeyValuePair
struct CORDL_TYPE __CAPI__ovrKeyValuePair : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field key_ offset 0x0
 __declspec(property(get=__get_key_, put=__set_key_)) ::StringW  key_;

/// @brief Field valueType_ offset 0x8
 __declspec(property(get=__get_valueType_, put=__set_valueType_)) ::Oculus::Platform::KeyValuePairType  valueType_;

/// @brief Field stringValue_ offset 0x10
 __declspec(property(get=__get_stringValue_, put=__set_stringValue_)) ::StringW  stringValue_;

/// @brief Field intValue_ offset 0x18
 __declspec(property(get=__get_intValue_, put=__set_intValue_)) int32_t  intValue_;

/// @brief Field doubleValue_ offset 0x20
 __declspec(property(get=__get_doubleValue_, put=__set_doubleValue_)) double_t  doubleValue_;

constexpr void __set_key_(::StringW  value) ;

constexpr ::StringW& __get_key_() ;

constexpr ::StringW const& __get_key_() const;

constexpr void __set_valueType_(::Oculus::Platform::KeyValuePairType  value) ;

constexpr ::Oculus::Platform::KeyValuePairType& __get_valueType_() ;

constexpr ::Oculus::Platform::KeyValuePairType const& __get_valueType_() const;

constexpr void __set_stringValue_(::StringW  value) ;

constexpr ::StringW& __get_stringValue_() ;

constexpr ::StringW const& __get_stringValue_() const;

constexpr void __set_intValue_(int32_t  value) ;

constexpr int32_t& __get_intValue_() ;

constexpr int32_t const& __get_intValue_() const;

constexpr void __set_doubleValue_(double_t  value) ;

constexpr double_t& __get_doubleValue_() ;

constexpr double_t const& __get_doubleValue_() const;

/// @brief Method .ctor addr 0x26d0628 size 0x18 virtual false final false
inline void _ctor(::StringW  key, ::StringW  value) ;

/// @brief Method .ctor addr 0x26d0108 size 0x1c virtual false final false
inline void _ctor(::StringW  key, int32_t  value) ;

/// @brief Method .ctor addr 0x26d0640 size 0x1c virtual false final false
inline void _ctor(::StringW  key, double_t  value) ;

// Ctor Parameters [CppParam { name: "key_", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "valueType_", ty: "::Oculus::Platform::KeyValuePairType", modifiers: "", def_value: None }, CppParam { name: "stringValue_", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "intValue_", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "doubleValue_", ty: "double_t", modifiers: "", def_value: None }]
constexpr __CAPI__ovrKeyValuePair(::StringW  key_, ::Oculus::Platform::KeyValuePairType  valueType_, ::StringW  stringValue_, int32_t  intValue_, double_t  doubleValue_) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __CAPI__ovrKeyValuePair(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __CAPI__ovrKeyValuePair()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__CAPI__ovrKeyValuePair, 0x28>, "Size mismatch!");

} // namespace end def Oculus::Platform
// Type: ::ovrNetSyncVec3
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13237))
// CS Name: ::CAPI::ovrNetSyncVec3
struct CORDL_TYPE __CAPI__ovrNetSyncVec3 : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field x offset 0x0
 __declspec(property(get=__get_x, put=__set_x)) float_t  x;

/// @brief Field y offset 0x4
 __declspec(property(get=__get_y, put=__set_y)) float_t  y;

/// @brief Field z offset 0x8
 __declspec(property(get=__get_z, put=__set_z)) float_t  z;

constexpr void __set_x(float_t  value) ;

constexpr float_t& __get_x() ;

constexpr float_t const& __get_x() const;

constexpr void __set_y(float_t  value) ;

constexpr float_t& __get_y() ;

constexpr float_t const& __get_y() const;

constexpr void __set_z(float_t  value) ;

constexpr float_t& __get_z() ;

constexpr float_t const& __get_z() const;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }]
constexpr __CAPI__ovrNetSyncVec3(float_t  x, float_t  y, float_t  z) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __CAPI__ovrNetSyncVec3(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __CAPI__ovrNetSyncVec3()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__CAPI__ovrNetSyncVec3, 0xc>, "Size mismatch!");

} // namespace end def Oculus::Platform
// Type: ::OculusInitParams
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13238))
// CS Name: ::CAPI::OculusInitParams
struct CORDL_TYPE __CAPI__OculusInitParams : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field sType offset 0x0
 __declspec(property(get=__get_sType, put=__set_sType)) int32_t  sType;

/// @brief Field email offset 0x8
 __declspec(property(get=__get_email, put=__set_email)) ::StringW  email;

/// @brief Field password offset 0x10
 __declspec(property(get=__get_password, put=__set_password)) ::StringW  password;

/// @brief Field appId offset 0x18
 __declspec(property(get=__get_appId, put=__set_appId)) uint64_t  appId;

/// @brief Field uriPrefixOverride offset 0x20
 __declspec(property(get=__get_uriPrefixOverride, put=__set_uriPrefixOverride)) ::StringW  uriPrefixOverride;

constexpr void __set_sType(int32_t  value) ;

constexpr int32_t& __get_sType() ;

constexpr int32_t const& __get_sType() const;

constexpr void __set_email(::StringW  value) ;

constexpr ::StringW& __get_email() ;

constexpr ::StringW const& __get_email() const;

constexpr void __set_password(::StringW  value) ;

constexpr ::StringW& __get_password() ;

constexpr ::StringW const& __get_password() const;

constexpr void __set_appId(uint64_t  value) ;

constexpr uint64_t& __get_appId() ;

constexpr uint64_t const& __get_appId() const;

constexpr void __set_uriPrefixOverride(::StringW  value) ;

constexpr ::StringW& __get_uriPrefixOverride() ;

constexpr ::StringW const& __get_uriPrefixOverride() const;

// Ctor Parameters [CppParam { name: "sType", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "email", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "appId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "uriPrefixOverride", ty: "::StringW", modifiers: "", def_value: None }]
constexpr __CAPI__OculusInitParams(int32_t  sType, ::StringW  email, ::StringW  password, uint64_t  appId, ::StringW  uriPrefixOverride) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __CAPI__OculusInitParams(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __CAPI__OculusInitParams()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__CAPI__OculusInitParams, 0x28>, "Size mismatch!");

} // namespace end def Oculus::Platform
// Type: ::FilterCallback
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13239))
// CS Name: ::CAPI::FilterCallback*
class CORDL_TYPE __CAPI__FilterCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::Oculus::Platform::__CAPI__FilterCallback* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x26ec0a0 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x26ec178 size 0x14 virtual true final false
inline void Invoke(ByRef<::ArrayW<int16_t,::Array<int16_t>*>>  pcmData, ::cordl_internals::uintptr_t  pcmDataLength, int32_t  frequency, int32_t  numChannels) ;

/// @brief Method BeginInvoke addr 0x26ec18c size 0xd4 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<int16_t,::Array<int16_t>*>>  pcmData, ::cordl_internals::uintptr_t  pcmDataLength, int32_t  frequency, int32_t  numChannels, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x26ec260 size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__CAPI__FilterCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CAPI__FilterCallback(__CAPI__FilterCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CAPI__FilterCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CAPI__FilterCallback(__CAPI__FilterCallback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CAPI__FilterCallback()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__CAPI__FilterCallback, 0x80>, "Size mismatch!");

} // namespace end def Oculus::Platform
// Type: Oculus.Platform::CAPI
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13240))
// CS Name: ::Oculus.Platform::CAPI*
class CORDL_TYPE CAPI : public ::System::Object {
public:
// Declarations
using FilterCallback = ::Oculus::Platform::__CAPI__FilterCallback;

using OculusInitParams = ::Oculus::Platform::__CAPI__OculusInitParams;

using ovrNetSyncVec3 = ::Oculus::Platform::__CAPI__ovrNetSyncVec3;

using ovrKeyValuePair = ::Oculus::Platform::__CAPI__ovrKeyValuePair;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field DLL_NAME offset 0x0
static constexpr ::ConstString  DLL_NAME{u"ovrplatformloader"};

/// @brief Field VoipFilterBufferSize offset 0x0
static constexpr int32_t  VoipFilterBufferSize{static_cast<int32_t>(0x1e0)};

static inline void setStaticF_nativeStringEncoding(::System::Text::UTF8Encoding*  value) ;

static inline ::System::Text::UTF8Encoding* getStaticF_nativeStringEncoding() ;

/// @brief Method ArrayOfStructsToIntPtr addr 0x26cfd24 size 0x198 virtual false final false
static inline ::cordl_internals::intptr_t ArrayOfStructsToIntPtr(::System::Array*  ar) ;

/// @brief Method DictionaryToOVRKeyValuePairs addr 0x26cfebc size 0x24c virtual false final false
static inline ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair,::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> DictionaryToOVRKeyValuePairs(::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions,bool>*  dict) ;

/// @brief Method DictionaryToOVRKeyValuePairs addr 0x26d0124 size 0x504 virtual false final false
static inline ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair,::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*> DictionaryToOVRKeyValuePairs(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  dict) ;

/// @brief Method IntPtrToByteArray addr 0x26d065c size 0xbc virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> IntPtrToByteArray(::cordl_internals::intptr_t  data, uint64_t  size) ;

/// @brief Method DataStoreFromNative addr 0x26d0718 size 0x158 virtual false final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* DataStoreFromNative(::cordl_internals::intptr_t  pointer) ;

/// @brief Method StringFromNative addr 0x26d0a08 size 0x134 virtual false final false
static inline ::StringW StringFromNative(::cordl_internals::intptr_t  pointer) ;

/// @brief Method GetNativeStringLengthNotIncludingNullTerminator addr 0x26d0b3c size 0x74 virtual false final false
static inline int32_t GetNativeStringLengthNotIncludingNullTerminator(::cordl_internals::intptr_t  pointer) ;

/// @brief Method DateTimeFromNative addr 0x26d0bb0 size 0x64 virtual false final false
static inline ::System::DateTime DateTimeFromNative(uint64_t  seconds_since_the_one_true_epoch) ;

/// @brief Method DateTimeToNative addr 0x26d0c14 size 0xe8 virtual false final false
static inline uint64_t DateTimeToNative(::System::DateTime  dt) ;

/// @brief Method BlobFromNative addr 0x26d0cfc size 0xd8 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> BlobFromNative(uint32_t  size, ::cordl_internals::intptr_t  pointer) ;

/// @brief Method FiledataFromNative addr 0x26d0dd4 size 0xa0 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FiledataFromNative(uint32_t  size, ::cordl_internals::intptr_t  pointer) ;

/// @brief Method StringToNative addr 0x26d0e74 size 0x180 virtual false final false
static inline ::cordl_internals::intptr_t StringToNative(::StringW  s) ;

/// @brief Method ovr_UnityInitWrapper addr 0x26ce558 size 0x98 virtual false final false
static inline bool ovr_UnityInitWrapper(::StringW  appId) ;

/// @brief Method ovr_UnityInitGlobals addr 0x26d0ff4 size 0x7c virtual false final false
static inline void ovr_UnityInitGlobals(::cordl_internals::intptr_t  loggingCB) ;

/// @brief Method ovr_UnityInitWrapperAsynchronous addr 0x26ce6f8 size 0x94 virtual false final false
static inline uint64_t ovr_UnityInitWrapperAsynchronous(::StringW  appId) ;

/// @brief Method ovr_UnityInitWrapperStandalone addr 0x26d1070 size 0xa0 virtual false final false
static inline bool ovr_UnityInitWrapperStandalone(::StringW  accessToken, ::cordl_internals::intptr_t  loggingCB) ;

/// @brief Method ovr_Platform_InitializeStandaloneOculus addr 0x26d1110 size 0xe4 virtual false final false
static inline uint64_t ovr_Platform_InitializeStandaloneOculus(ByRef<::Oculus::Platform::__CAPI__OculusInitParams>  init) ;

/// @brief Method ovr_PlatformInitializeWithAccessToken addr 0x26d11f4 size 0xa0 virtual false final false
static inline uint64_t ovr_PlatformInitializeWithAccessToken(uint64_t  appId, ::StringW  accessToken) ;

/// @brief Method ovr_PlatformInitializeWithAccessTokenAndOptions addr 0x26d1294 size 0x1a8 virtual false final false
static inline uint64_t ovr_PlatformInitializeWithAccessTokenAndOptions(uint64_t  appId, ::StringW  accessToken, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair,::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*>  configOptions, ::cordl_internals::uintptr_t  numOptions) ;

/// @brief Method ovr_UnityInitWrapperWindows addr 0x26d143c size 0xa0 virtual false final false
static inline bool ovr_UnityInitWrapperWindows(::StringW  appId, ::cordl_internals::intptr_t  loggingCB) ;

/// @brief Method ovr_UnityInitWrapperWindowsAsynchronous addr 0x26d14dc size 0x9c virtual false final false
static inline uint64_t ovr_UnityInitWrapperWindowsAsynchronous(::StringW  appId, ::cordl_internals::intptr_t  loggingCB) ;

/// @brief Method ovr_SetDeveloperAccessToken addr 0x26d1578 size 0x98 virtual false final false
static inline bool ovr_SetDeveloperAccessToken(::StringW  accessToken) ;

/// @brief Method ovr_GetLoggedInUserLocale addr 0x26d1610 size 0x50 virtual false final false
static inline ::StringW ovr_GetLoggedInUserLocale() ;

/// @brief Method ovr_GetLoggedInUserLocale_Native addr 0x26d1660 size 0x68 virtual false final false
static inline ::cordl_internals::intptr_t ovr_GetLoggedInUserLocale_Native() ;

/// @brief Method ovr_PopMessage addr 0x26d16c8 size 0x68 virtual false final false
static inline ::cordl_internals::intptr_t ovr_PopMessage() ;

/// @brief Method ovr_FreeMessage addr 0x26d1730 size 0x7c virtual false final false
static inline void ovr_FreeMessage(::cordl_internals::intptr_t  message) ;

/// @brief Method ovr_Voip_CreateEncoder addr 0x26d17ac size 0x68 virtual false final false
static inline ::cordl_internals::intptr_t ovr_Voip_CreateEncoder() ;

/// @brief Method ovr_Voip_DestroyEncoder addr 0x26d1814 size 0x7c virtual false final false
static inline void ovr_Voip_DestroyEncoder(::cordl_internals::intptr_t  encoder) ;

/// @brief Method ovr_Voip_CreateDecoder addr 0x26d1890 size 0x68 virtual false final false
static inline ::cordl_internals::intptr_t ovr_Voip_CreateDecoder() ;

/// @brief Method ovr_Voip_DestroyDecoder addr 0x26d18f8 size 0x7c virtual false final false
static inline void ovr_Voip_DestroyDecoder(::cordl_internals::intptr_t  decoder) ;

/// @brief Method ovr_VoipDecoder_Decode addr 0x26d1974 size 0x9c virtual false final false
static inline void ovr_VoipDecoder_Decode(::cordl_internals::intptr_t  obj, ::ArrayW<uint8_t,::Array<uint8_t>*>  compressedData, uint64_t  compressedSize) ;

/// @brief Method ovr_Microphone_Create addr 0x26d1a10 size 0x68 virtual false final false
static inline ::cordl_internals::intptr_t ovr_Microphone_Create() ;

/// @brief Method ovr_Microphone_Destroy addr 0x26d1a78 size 0x7c virtual false final false
static inline void ovr_Microphone_Destroy(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Voip_SetSystemVoipPassthrough addr 0x26d1af4 size 0x7c virtual false final false
static inline void ovr_Voip_SetSystemVoipPassthrough(bool  passthrough) ;

/// @brief Method ovr_Voip_SetSystemVoipMicrophoneMuted addr 0x26d1b70 size 0x7c virtual false final false
static inline void ovr_Voip_SetSystemVoipMicrophoneMuted(::Oculus::Platform::VoipMuteState  muted) ;

/// @brief Method ovr_UnityResetTestPlatform addr 0x26d1bec size 0x64 virtual false final false
static inline void ovr_UnityResetTestPlatform() ;

/// @brief Method ovr_HTTP_GetWithMessageType addr 0x26d1c50 size 0x9c virtual false final false
static inline uint64_t ovr_HTTP_GetWithMessageType(::StringW  url, int32_t  messageType) ;

/// @brief Method ovr_CrashApplication addr 0x26d1cec size 0x64 virtual false final false
static inline void ovr_CrashApplication() ;

/// @brief Method ovr_Voip_SetMicrophoneFilterCallback addr 0x26d1d50 size 0x80 virtual false final false
static inline void ovr_Voip_SetMicrophoneFilterCallback(::Oculus::Platform::__CAPI__FilterCallback*  cb) ;

/// @brief Method ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer addr 0x26d1dd0 size 0x88 virtual false final false
static inline void ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer(::Oculus::Platform::__CAPI__FilterCallback*  cb, ::cordl_internals::uintptr_t  bufferSizeElements) ;

/// @brief Method LogNewUnifiedEvent addr 0x26d1e58 size 0xa8 virtual false final false
static inline void LogNewUnifiedEvent(::Oculus::Platform::LogEventName  eventName, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  values) ;

/// @brief Method LogNewEvent addr 0x26d1f00 size 0x354 virtual false final false
static inline void LogNewEvent(::StringW  eventName, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  values) ;

/// @brief Method ovr_Log_NewEvent addr 0x26d2254 size 0x9c virtual false final false
static inline void ovr_Log_NewEvent(::cordl_internals::intptr_t  eventName, ::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*>  values, ::cordl_internals::uintptr_t  length) ;

/// @brief Method ovr_ApplicationLifecycle_GetLaunchDetails addr 0x26d22f0 size 0x68 virtual false final false
static inline ::cordl_internals::intptr_t ovr_ApplicationLifecycle_GetLaunchDetails() ;

/// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult addr 0x26d2358 size 0x9c virtual false final false
static inline void ovr_ApplicationLifecycle_LogDeeplinkResult(::StringW  trackingID, ::Oculus::Platform::LaunchResult  result) ;

/// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult_Native addr 0x26d23f4 size 0x84 virtual false final false
static inline void ovr_ApplicationLifecycle_LogDeeplinkResult_Native(::cordl_internals::intptr_t  trackingID, ::Oculus::Platform::LaunchResult  result) ;

/// @brief Method ovr_HTTP_StartTransfer addr 0x26d2478 size 0xec virtual false final false
static inline uint64_t ovr_HTTP_StartTransfer(::StringW  url, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair,::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*>  headers) ;

/// @brief Method ovr_HTTP_StartTransfer_Native addr 0x26d2564 size 0x1a4 virtual false final false
static inline uint64_t ovr_HTTP_StartTransfer_Native(::cordl_internals::intptr_t  url, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair,::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*>  headers, ::cordl_internals::uintptr_t  numItems) ;

/// @brief Method ovr_HTTP_Write addr 0x26d2708 size 0xa4 virtual false final false
static inline bool ovr_HTTP_Write(uint64_t  transferId, ::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, ::cordl_internals::uintptr_t  length) ;

/// @brief Method ovr_HTTP_WriteEOM addr 0x26d27ac size 0x78 virtual false final false
static inline void ovr_HTTP_WriteEOM(uint64_t  transferId) ;

/// @brief Method ovr_Message_GetStringForJavascript addr 0x26d2824 size 0x58 virtual false final false
static inline ::StringW ovr_Message_GetStringForJavascript(::cordl_internals::intptr_t  message) ;

/// @brief Method ovr_Message_GetStringForJavascript_Native addr 0x26d287c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetStringForJavascript_Native(::cordl_internals::intptr_t  message) ;

/// @brief Method ovr_NetSync_GetAmbisonicFloatPCM addr 0x26d28f8 size 0x9c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_NetSync_GetAmbisonicFloatPCM(int64_t  connection_id, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::cordl_internals::uintptr_t  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetAmbisonicInt16PCM addr 0x26d2994 size 0x9c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_NetSync_GetAmbisonicInt16PCM(int64_t  connection_id, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::cordl_internals::uintptr_t  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetAmbisonicInterleavedFloatPCM addr 0x26d2a30 size 0x9c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_NetSync_GetAmbisonicInterleavedFloatPCM(int64_t  connection_id, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::cordl_internals::uintptr_t  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetAmbisonicInterleavedInt16PCM addr 0x26d2acc size 0x9c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_NetSync_GetAmbisonicInterleavedInt16PCM(int64_t  connection_id, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::cordl_internals::uintptr_t  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetListenerPosition addr 0x26d2b68 size 0x9c virtual false final false
static inline bool ovr_NetSync_GetListenerPosition(int64_t  connection_id, uint64_t  sessionId, ByRef<::Oculus::Platform::__CAPI__ovrNetSyncVec3>  position) ;

/// @brief Method ovr_NetSync_GetMonostreamFloatPCM addr 0x26d2c04 size 0xa4 virtual false final false
static inline ::cordl_internals::uintptr_t ovr_NetSync_GetMonostreamFloatPCM(int64_t  connection_id, uint64_t  sessionId, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::cordl_internals::uintptr_t  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetMonostreamInt16PCM addr 0x26d2ca8 size 0xa4 virtual false final false
static inline ::cordl_internals::uintptr_t ovr_NetSync_GetMonostreamInt16PCM(int64_t  connection_id, uint64_t  session_id, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::cordl_internals::uintptr_t  outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetPcmBufferMaxSamples addr 0x26d2d4c size 0x68 virtual false final false
static inline ::cordl_internals::uintptr_t ovr_NetSync_GetPcmBufferMaxSamples() ;

/// @brief Method ovr_NetSync_GetVoipAmplitude addr 0x26d2db4 size 0x9c virtual false final false
static inline bool ovr_NetSync_GetVoipAmplitude(int64_t  connection_id, uint64_t  sessionId, ByRef<float_t>  amplitude) ;

/// @brief Method ovr_NetSync_SetListenerPosition addr 0x26d2e50 size 0x84 virtual false final false
static inline void ovr_NetSync_SetListenerPosition(int64_t  connection_id, ByRef<::Oculus::Platform::__CAPI__ovrNetSyncVec3>  position) ;

/// @brief Method ovr_Party_PluginGetSharedMemHandle addr 0x26d2ed4 size 0x68 virtual false final false
static inline int32_t ovr_Party_PluginGetSharedMemHandle() ;

/// @brief Method ovr_Party_PluginGetVoipMicrophoneMuted addr 0x26d2f3c size 0x68 virtual false final false
static inline ::Oculus::Platform::VoipMuteState ovr_Party_PluginGetVoipMicrophoneMuted() ;

/// @brief Method ovr_Party_PluginGetVoipPassthrough addr 0x26d2fa4 size 0x70 virtual false final false
static inline bool ovr_Party_PluginGetVoipPassthrough() ;

/// @brief Method ovr_Party_PluginGetVoipStatus addr 0x26d3014 size 0x68 virtual false final false
static inline ::Oculus::Platform::SystemVoipStatus ovr_Party_PluginGetVoipStatus() ;

/// @brief Method ovr_Voip_Accept addr 0x26d307c size 0x7c virtual false final false
static inline void ovr_Voip_Accept(uint64_t  userID) ;

/// @brief Method ovr_Voip_GetIsConnectionUsingDtx addr 0x26d30f8 size 0x7c virtual false final false
static inline ::Oculus::Platform::VoipDtxState ovr_Voip_GetIsConnectionUsingDtx(uint64_t  peerID) ;

/// @brief Method ovr_Voip_GetLocalBitrate addr 0x26d3174 size 0x7c virtual false final false
static inline ::Oculus::Platform::VoipBitrate ovr_Voip_GetLocalBitrate(uint64_t  peerID) ;

/// @brief Method ovr_Voip_GetOutputBufferMaxSize addr 0x26d31f0 size 0x68 virtual false final false
static inline ::cordl_internals::uintptr_t ovr_Voip_GetOutputBufferMaxSize() ;

/// @brief Method ovr_Voip_GetPCM addr 0x26d3258 size 0x9c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_Voip_GetPCM(uint64_t  senderID, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::cordl_internals::uintptr_t  outputBufferNumElements) ;

/// @brief Method ovr_Voip_GetPCMFloat addr 0x26d32f4 size 0x9c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_Voip_GetPCMFloat(uint64_t  senderID, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::cordl_internals::uintptr_t  outputBufferNumElements) ;

/// @brief Method ovr_Voip_GetPCMSize addr 0x26d3390 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_Voip_GetPCMSize(uint64_t  senderID) ;

/// @brief Method ovr_Voip_GetPCMWithTimestamp addr 0x26d340c size 0xac virtual false final false
static inline ::cordl_internals::uintptr_t ovr_Voip_GetPCMWithTimestamp(uint64_t  senderID, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::cordl_internals::uintptr_t  outputBufferNumElements, ::ArrayW<uint32_t,::Array<uint32_t>*>  timestamp) ;

/// @brief Method ovr_Voip_GetPCMWithTimestampFloat addr 0x26d34b8 size 0xac virtual false final false
static inline ::cordl_internals::uintptr_t ovr_Voip_GetPCMWithTimestampFloat(uint64_t  senderID, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::cordl_internals::uintptr_t  outputBufferNumElements, ::ArrayW<uint32_t,::Array<uint32_t>*>  timestamp) ;

/// @brief Method ovr_Voip_GetRemoteBitrate addr 0x26d3564 size 0x7c virtual false final false
static inline ::Oculus::Platform::VoipBitrate ovr_Voip_GetRemoteBitrate(uint64_t  peerID) ;

/// @brief Method ovr_Voip_GetSyncTimestamp addr 0x26d35e0 size 0x7c virtual false final false
static inline uint32_t ovr_Voip_GetSyncTimestamp(uint64_t  userID) ;

/// @brief Method ovr_Voip_GetSyncTimestampDifference addr 0x26d365c size 0x84 virtual false final false
static inline int64_t ovr_Voip_GetSyncTimestampDifference(uint32_t  lhs, uint32_t  rhs) ;

/// @brief Method ovr_Voip_GetSystemVoipMicrophoneMuted addr 0x26d36e0 size 0x68 virtual false final false
static inline ::Oculus::Platform::VoipMuteState ovr_Voip_GetSystemVoipMicrophoneMuted() ;

/// @brief Method ovr_Voip_GetSystemVoipStatus addr 0x26d3748 size 0x68 virtual false final false
static inline ::Oculus::Platform::SystemVoipStatus ovr_Voip_GetSystemVoipStatus() ;

/// @brief Method ovr_Voip_SetMicrophoneMuted addr 0x26d37b0 size 0x7c virtual false final false
static inline void ovr_Voip_SetMicrophoneMuted(::Oculus::Platform::VoipMuteState  state) ;

/// @brief Method ovr_Voip_SetNewConnectionOptions addr 0x26d382c size 0x7c virtual false final false
static inline void ovr_Voip_SetNewConnectionOptions(::cordl_internals::intptr_t  voipOptions) ;

/// @brief Method ovr_Voip_SetOutputSampleRate addr 0x26d38a8 size 0x7c virtual false final false
static inline void ovr_Voip_SetOutputSampleRate(::Oculus::Platform::VoipSampleRate  rate) ;

/// @brief Method ovr_Voip_Start addr 0x26d3924 size 0x7c virtual false final false
static inline void ovr_Voip_Start(uint64_t  userID) ;

/// @brief Method ovr_Voip_Stop addr 0x26d39a0 size 0x7c virtual false final false
static inline void ovr_Voip_Stop(uint64_t  userID) ;

/// @brief Method ovr_AbuseReport_LaunchAdvancedReportFlow addr 0x26d3a1c size 0x84 virtual false final false
static inline uint64_t ovr_AbuseReport_LaunchAdvancedReportFlow(uint64_t  content_id, ::cordl_internals::intptr_t  abuse_report_options) ;

/// @brief Method ovr_AbuseReport_ReportRequestHandled addr 0x26d3aa0 size 0x7c virtual false final false
static inline uint64_t ovr_AbuseReport_ReportRequestHandled(::Oculus::Platform::ReportRequestResponse  response) ;

/// @brief Method ovr_Achievements_AddCount addr 0x26d3b1c size 0xac virtual false final false
static inline uint64_t ovr_Achievements_AddCount(::StringW  name, uint64_t  count) ;

/// @brief Method ovr_Achievements_AddCount_Native addr 0x26d3bc8 size 0x84 virtual false final false
static inline uint64_t ovr_Achievements_AddCount_Native(::cordl_internals::intptr_t  name, uint64_t  count) ;

/// @brief Method ovr_Achievements_AddFields addr 0x26d3c4c size 0xc8 virtual false final false
static inline uint64_t ovr_Achievements_AddFields(::StringW  name, ::StringW  fields) ;

/// @brief Method ovr_Achievements_AddFields_Native addr 0x26d3d14 size 0x84 virtual false final false
static inline uint64_t ovr_Achievements_AddFields_Native(::cordl_internals::intptr_t  name, ::cordl_internals::intptr_t  fields) ;

/// @brief Method ovr_Achievements_GetAllDefinitions addr 0x26d3d98 size 0x68 virtual false final false
static inline uint64_t ovr_Achievements_GetAllDefinitions() ;

/// @brief Method ovr_Achievements_GetAllProgress addr 0x26d3e00 size 0x68 virtual false final false
static inline uint64_t ovr_Achievements_GetAllProgress() ;

/// @brief Method ovr_Achievements_GetDefinitionsByName addr 0x26d3e68 size 0x148 virtual false final false
static inline uint64_t ovr_Achievements_GetDefinitionsByName(::ArrayW<::StringW,::Array<::StringW>*>  names, int32_t  count) ;

/// @brief Method ovr_Achievements_GetProgressByName addr 0x26d3fb0 size 0x148 virtual false final false
static inline uint64_t ovr_Achievements_GetProgressByName(::ArrayW<::StringW,::Array<::StringW>*>  names, int32_t  count) ;

/// @brief Method ovr_Achievements_Unlock addr 0x26d40f8 size 0x9c virtual false final false
static inline uint64_t ovr_Achievements_Unlock(::StringW  name) ;

/// @brief Method ovr_Achievements_Unlock_Native addr 0x26d4194 size 0x7c virtual false final false
static inline uint64_t ovr_Achievements_Unlock_Native(::cordl_internals::intptr_t  name) ;

/// @brief Method ovr_Application_CancelAppDownload addr 0x26d4210 size 0x68 virtual false final false
static inline uint64_t ovr_Application_CancelAppDownload() ;

/// @brief Method ovr_Application_CheckAppDownloadProgress addr 0x26d4278 size 0x68 virtual false final false
static inline uint64_t ovr_Application_CheckAppDownloadProgress() ;

/// @brief Method ovr_Application_GetInstalledApplications addr 0x26d42e0 size 0x68 virtual false final false
static inline uint64_t ovr_Application_GetInstalledApplications() ;

/// @brief Method ovr_Application_GetVersion addr 0x26d4348 size 0x68 virtual false final false
static inline uint64_t ovr_Application_GetVersion() ;

/// @brief Method ovr_Application_InstallAppUpdateAndRelaunch addr 0x26d43b0 size 0x7c virtual false final false
static inline uint64_t ovr_Application_InstallAppUpdateAndRelaunch(::cordl_internals::intptr_t  deeplink_options) ;

/// @brief Method ovr_Application_LaunchOtherApp addr 0x26d442c size 0x84 virtual false final false
static inline uint64_t ovr_Application_LaunchOtherApp(uint64_t  appID, ::cordl_internals::intptr_t  deeplink_options) ;

/// @brief Method ovr_Application_StartAppDownload addr 0x26d44b0 size 0x68 virtual false final false
static inline uint64_t ovr_Application_StartAppDownload() ;

/// @brief Method ovr_ApplicationLifecycle_GetRegisteredPIDs addr 0x26d4518 size 0x68 virtual false final false
static inline uint64_t ovr_ApplicationLifecycle_GetRegisteredPIDs() ;

/// @brief Method ovr_ApplicationLifecycle_GetSessionKey addr 0x26d4580 size 0x68 virtual false final false
static inline uint64_t ovr_ApplicationLifecycle_GetSessionKey() ;

/// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey addr 0x26d45e8 size 0x9c virtual false final false
static inline uint64_t ovr_ApplicationLifecycle_RegisterSessionKey(::StringW  sessionKey) ;

/// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey_Native addr 0x26d4684 size 0x7c virtual false final false
static inline uint64_t ovr_ApplicationLifecycle_RegisterSessionKey_Native(::cordl_internals::intptr_t  sessionKey) ;

/// @brief Method ovr_AssetFile_Delete addr 0x26d4700 size 0x7c virtual false final false
static inline uint64_t ovr_AssetFile_Delete(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DeleteById addr 0x26d477c size 0x7c virtual false final false
static inline uint64_t ovr_AssetFile_DeleteById(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DeleteByName addr 0x26d47f8 size 0x9c virtual false final false
static inline uint64_t ovr_AssetFile_DeleteByName(::StringW  assetFileName) ;

/// @brief Method ovr_AssetFile_DeleteByName_Native addr 0x26d4894 size 0x7c virtual false final false
static inline uint64_t ovr_AssetFile_DeleteByName_Native(::cordl_internals::intptr_t  assetFileName) ;

/// @brief Method ovr_AssetFile_Download addr 0x26d4910 size 0x7c virtual false final false
static inline uint64_t ovr_AssetFile_Download(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadById addr 0x26d498c size 0x7c virtual false final false
static inline uint64_t ovr_AssetFile_DownloadById(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadByName addr 0x26d4a08 size 0x9c virtual false final false
static inline uint64_t ovr_AssetFile_DownloadByName(::StringW  assetFileName) ;

/// @brief Method ovr_AssetFile_DownloadByName_Native addr 0x26d4aa4 size 0x7c virtual false final false
static inline uint64_t ovr_AssetFile_DownloadByName_Native(::cordl_internals::intptr_t  assetFileName) ;

/// @brief Method ovr_AssetFile_DownloadCancel addr 0x26d4b20 size 0x7c virtual false final false
static inline uint64_t ovr_AssetFile_DownloadCancel(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadCancelById addr 0x26d4b9c size 0x7c virtual false final false
static inline uint64_t ovr_AssetFile_DownloadCancelById(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadCancelByName addr 0x26d4c18 size 0x9c virtual false final false
static inline uint64_t ovr_AssetFile_DownloadCancelByName(::StringW  assetFileName) ;

/// @brief Method ovr_AssetFile_DownloadCancelByName_Native addr 0x26d4cb4 size 0x7c virtual false final false
static inline uint64_t ovr_AssetFile_DownloadCancelByName_Native(::cordl_internals::intptr_t  assetFileName) ;

/// @brief Method ovr_AssetFile_GetList addr 0x26d4d30 size 0x68 virtual false final false
static inline uint64_t ovr_AssetFile_GetList() ;

/// @brief Method ovr_AssetFile_Status addr 0x26d4d98 size 0x7c virtual false final false
static inline uint64_t ovr_AssetFile_Status(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_StatusById addr 0x26d4e14 size 0x7c virtual false final false
static inline uint64_t ovr_AssetFile_StatusById(uint64_t  assetFileID) ;

/// @brief Method ovr_AssetFile_StatusByName addr 0x26d4e90 size 0x9c virtual false final false
static inline uint64_t ovr_AssetFile_StatusByName(::StringW  assetFileName) ;

/// @brief Method ovr_AssetFile_StatusByName_Native addr 0x26d4f2c size 0x7c virtual false final false
static inline uint64_t ovr_AssetFile_StatusByName_Native(::cordl_internals::intptr_t  assetFileName) ;

/// @brief Method ovr_Avatar_LaunchAvatarEditor addr 0x26d4fa8 size 0x7c virtual false final false
static inline uint64_t ovr_Avatar_LaunchAvatarEditor(::cordl_internals::intptr_t  options) ;

/// @brief Method ovr_Avatar_UpdateMetaData addr 0x26d5024 size 0xc8 virtual false final false
static inline uint64_t ovr_Avatar_UpdateMetaData(::StringW  avatarMetaData, ::StringW  imageFilePath) ;

/// @brief Method ovr_Avatar_UpdateMetaData_Native addr 0x26d50ec size 0x84 virtual false final false
static inline uint64_t ovr_Avatar_UpdateMetaData_Native(::cordl_internals::intptr_t  avatarMetaData, ::cordl_internals::intptr_t  imageFilePath) ;

/// @brief Method ovr_Challenges_Create addr 0x26d5170 size 0xac virtual false final false
static inline uint64_t ovr_Challenges_Create(::StringW  leaderboardName, ::cordl_internals::intptr_t  challengeOptions) ;

/// @brief Method ovr_Challenges_Create_Native addr 0x26d521c size 0x84 virtual false final false
static inline uint64_t ovr_Challenges_Create_Native(::cordl_internals::intptr_t  leaderboardName, ::cordl_internals::intptr_t  challengeOptions) ;

/// @brief Method ovr_Challenges_DeclineInvite addr 0x26d52a0 size 0x7c virtual false final false
static inline uint64_t ovr_Challenges_DeclineInvite(uint64_t  challengeID) ;

/// @brief Method ovr_Challenges_Delete addr 0x26d531c size 0x7c virtual false final false
static inline uint64_t ovr_Challenges_Delete(uint64_t  challengeID) ;

/// @brief Method ovr_Challenges_Get addr 0x26d5398 size 0x7c virtual false final false
static inline uint64_t ovr_Challenges_Get(uint64_t  challengeID) ;

/// @brief Method ovr_Challenges_GetEntries addr 0x26d5414 size 0x9c virtual false final false
static inline uint64_t ovr_Challenges_GetEntries(uint64_t  challengeID, int32_t  limit, ::Oculus::Platform::LeaderboardFilterType  filter, ::Oculus::Platform::LeaderboardStartAt  startAt) ;

/// @brief Method ovr_Challenges_GetEntriesAfterRank addr 0x26d54b0 size 0x94 virtual false final false
static inline uint64_t ovr_Challenges_GetEntriesAfterRank(uint64_t  challengeID, int32_t  limit, uint64_t  afterRank) ;

/// @brief Method ovr_Challenges_GetEntriesByIds addr 0x26d5544 size 0xb4 virtual false final false
static inline uint64_t ovr_Challenges_GetEntriesByIds(uint64_t  challengeID, int32_t  limit, ::Oculus::Platform::LeaderboardStartAt  startAt, ::ArrayW<uint64_t,::Array<uint64_t>*>  userIDs, uint32_t  userIDLength) ;

/// @brief Method ovr_Challenges_GetList addr 0x26d55f8 size 0x84 virtual false final false
static inline uint64_t ovr_Challenges_GetList(::cordl_internals::intptr_t  challengeOptions, int32_t  limit) ;

/// @brief Method ovr_Challenges_GetNextChallenges addr 0x26d567c size 0x7c virtual false final false
static inline uint64_t ovr_Challenges_GetNextChallenges(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_Challenges_GetNextEntries addr 0x26d56f8 size 0x7c virtual false final false
static inline uint64_t ovr_Challenges_GetNextEntries(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_Challenges_GetPreviousChallenges addr 0x26d5774 size 0x7c virtual false final false
static inline uint64_t ovr_Challenges_GetPreviousChallenges(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_Challenges_GetPreviousEntries addr 0x26d57f0 size 0x7c virtual false final false
static inline uint64_t ovr_Challenges_GetPreviousEntries(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_Challenges_Join addr 0x26d586c size 0x7c virtual false final false
static inline uint64_t ovr_Challenges_Join(uint64_t  challengeID) ;

/// @brief Method ovr_Challenges_Leave addr 0x26d58e8 size 0x7c virtual false final false
static inline uint64_t ovr_Challenges_Leave(uint64_t  challengeID) ;

/// @brief Method ovr_Challenges_UpdateInfo addr 0x26d5964 size 0x84 virtual false final false
static inline uint64_t ovr_Challenges_UpdateInfo(uint64_t  challengeID, ::cordl_internals::intptr_t  challengeOptions) ;

/// @brief Method ovr_Colocation_GetCurrentMapUuid addr 0x26d59e8 size 0x68 virtual false final false
static inline uint64_t ovr_Colocation_GetCurrentMapUuid() ;

/// @brief Method ovr_Colocation_RequestMap addr 0x26d5a50 size 0x9c virtual false final false
static inline uint64_t ovr_Colocation_RequestMap(::StringW  uuid) ;

/// @brief Method ovr_Colocation_RequestMap_Native addr 0x26d5aec size 0x7c virtual false final false
static inline uint64_t ovr_Colocation_RequestMap_Native(::cordl_internals::intptr_t  uuid) ;

/// @brief Method ovr_Colocation_ShareMap addr 0x26d5b68 size 0x9c virtual false final false
static inline uint64_t ovr_Colocation_ShareMap(::StringW  uuid) ;

/// @brief Method ovr_Colocation_ShareMap_Native addr 0x26d5c04 size 0x7c virtual false final false
static inline uint64_t ovr_Colocation_ShareMap_Native(::cordl_internals::intptr_t  uuid) ;

/// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken addr 0x26d5c80 size 0x9c virtual false final false
static inline uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken(::StringW  challenge_nonce) ;

/// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken_Native addr 0x26d5d1c size 0x7c virtual false final false
static inline uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken_Native(::cordl_internals::intptr_t  challenge_nonce) ;

/// @brief Method ovr_DeviceApplicationIntegrity_GetIntegrityToken addr 0x26d5d98 size 0x9c virtual false final false
static inline uint64_t ovr_DeviceApplicationIntegrity_GetIntegrityToken(::StringW  challenge_nonce) ;

/// @brief Method ovr_DeviceApplicationIntegrity_GetIntegrityToken_Native addr 0x26d5e34 size 0x7c virtual false final false
static inline uint64_t ovr_DeviceApplicationIntegrity_GetIntegrityToken_Native(::cordl_internals::intptr_t  challenge_nonce) ;

/// @brief Method ovr_Entitlement_GetIsViewerEntitled addr 0x26d5eb0 size 0x68 virtual false final false
static inline uint64_t ovr_Entitlement_GetIsViewerEntitled() ;

/// @brief Method ovr_GraphAPI_Get addr 0x26d5f18 size 0x9c virtual false final false
static inline uint64_t ovr_GraphAPI_Get(::StringW  url) ;

/// @brief Method ovr_GraphAPI_Get_Native addr 0x26d5fb4 size 0x7c virtual false final false
static inline uint64_t ovr_GraphAPI_Get_Native(::cordl_internals::intptr_t  url) ;

/// @brief Method ovr_GraphAPI_Post addr 0x26d6030 size 0x9c virtual false final false
static inline uint64_t ovr_GraphAPI_Post(::StringW  url) ;

/// @brief Method ovr_GraphAPI_Post_Native addr 0x26d60cc size 0x78 virtual false final false
static inline uint64_t ovr_GraphAPI_Post_Native(::cordl_internals::intptr_t  url) ;

/// @brief Method ovr_GroupPresence_Clear addr 0x26d6144 size 0x68 virtual false final false
static inline uint64_t ovr_GroupPresence_Clear() ;

/// @brief Method ovr_GroupPresence_GetInvitableUsers addr 0x26d61ac size 0x7c virtual false final false
static inline uint64_t ovr_GroupPresence_GetInvitableUsers(::cordl_internals::intptr_t  options) ;

/// @brief Method ovr_GroupPresence_GetSentInvites addr 0x26d6228 size 0x68 virtual false final false
static inline uint64_t ovr_GroupPresence_GetSentInvites() ;

/// @brief Method ovr_GroupPresence_LaunchInvitePanel addr 0x26d6290 size 0x7c virtual false final false
static inline uint64_t ovr_GroupPresence_LaunchInvitePanel(::cordl_internals::intptr_t  options) ;

/// @brief Method ovr_GroupPresence_LaunchMultiplayerErrorDialog addr 0x26d630c size 0x7c virtual false final false
static inline uint64_t ovr_GroupPresence_LaunchMultiplayerErrorDialog(::cordl_internals::intptr_t  options) ;

/// @brief Method ovr_GroupPresence_LaunchRejoinDialog addr 0x26d6388 size 0xe8 virtual false final false
static inline uint64_t ovr_GroupPresence_LaunchRejoinDialog(::StringW  lobby_session_id, ::StringW  match_session_id, ::StringW  destination_api_name) ;

/// @brief Method ovr_GroupPresence_LaunchRejoinDialog_Native addr 0x26d6470 size 0x94 virtual false final false
static inline uint64_t ovr_GroupPresence_LaunchRejoinDialog_Native(::cordl_internals::intptr_t  lobby_session_id, ::cordl_internals::intptr_t  match_session_id, ::cordl_internals::intptr_t  destination_api_name) ;

/// @brief Method ovr_GroupPresence_LaunchRosterPanel addr 0x26d6504 size 0x7c virtual false final false
static inline uint64_t ovr_GroupPresence_LaunchRosterPanel(::cordl_internals::intptr_t  options) ;

/// @brief Method ovr_GroupPresence_SendInvites addr 0x26d6580 size 0x8c virtual false final false
static inline uint64_t ovr_GroupPresence_SendInvites(::ArrayW<uint64_t,::Array<uint64_t>*>  userIDs, uint32_t  userIDLength) ;

/// @brief Method ovr_GroupPresence_Set addr 0x26d660c size 0x7c virtual false final false
static inline uint64_t ovr_GroupPresence_Set(::cordl_internals::intptr_t  groupPresenceOptions) ;

/// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride addr 0x26d6688 size 0x9c virtual false final false
static inline uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride(::StringW  deeplink_message) ;

/// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride_Native addr 0x26d6724 size 0x7c virtual false final false
static inline uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride_Native(::cordl_internals::intptr_t  deeplink_message) ;

/// @brief Method ovr_GroupPresence_SetDestination addr 0x26d67a0 size 0x9c virtual false final false
static inline uint64_t ovr_GroupPresence_SetDestination(::StringW  api_name) ;

/// @brief Method ovr_GroupPresence_SetDestination_Native addr 0x26d683c size 0x7c virtual false final false
static inline uint64_t ovr_GroupPresence_SetDestination_Native(::cordl_internals::intptr_t  api_name) ;

/// @brief Method ovr_GroupPresence_SetIsJoinable addr 0x26d68b8 size 0x7c virtual false final false
static inline uint64_t ovr_GroupPresence_SetIsJoinable(bool  is_joinable) ;

/// @brief Method ovr_GroupPresence_SetLobbySession addr 0x26d6934 size 0x9c virtual false final false
static inline uint64_t ovr_GroupPresence_SetLobbySession(::StringW  id) ;

/// @brief Method ovr_GroupPresence_SetLobbySession_Native addr 0x26d69d0 size 0x7c virtual false final false
static inline uint64_t ovr_GroupPresence_SetLobbySession_Native(::cordl_internals::intptr_t  id) ;

/// @brief Method ovr_GroupPresence_SetMatchSession addr 0x26d6a4c size 0x9c virtual false final false
static inline uint64_t ovr_GroupPresence_SetMatchSession(::StringW  id) ;

/// @brief Method ovr_GroupPresence_SetMatchSession_Native addr 0x26d6ae8 size 0x7c virtual false final false
static inline uint64_t ovr_GroupPresence_SetMatchSession_Native(::cordl_internals::intptr_t  id) ;

/// @brief Method ovr_HTTP_Get addr 0x26d6b64 size 0x9c virtual false final false
static inline uint64_t ovr_HTTP_Get(::StringW  url) ;

/// @brief Method ovr_HTTP_Get_Native addr 0x26d6c00 size 0x7c virtual false final false
static inline uint64_t ovr_HTTP_Get_Native(::cordl_internals::intptr_t  url) ;

/// @brief Method ovr_HTTP_GetToFile addr 0x26d6c7c size 0xc8 virtual false final false
static inline uint64_t ovr_HTTP_GetToFile(::StringW  url, ::StringW  diskFile) ;

/// @brief Method ovr_HTTP_GetToFile_Native addr 0x26d6d44 size 0x84 virtual false final false
static inline uint64_t ovr_HTTP_GetToFile_Native(::cordl_internals::intptr_t  url, ::cordl_internals::intptr_t  diskFile) ;

/// @brief Method ovr_HTTP_MultiPartPost addr 0x26d6dc8 size 0x154 virtual false final false
static inline uint64_t ovr_HTTP_MultiPartPost(::StringW  url, ::StringW  filepath_param_name, ::StringW  filepath, ::StringW  access_token, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair,::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*>  post_params) ;

/// @brief Method ovr_HTTP_MultiPartPost_Native addr 0x26d6f1c size 0x1d8 virtual false final false
static inline uint64_t ovr_HTTP_MultiPartPost_Native(::cordl_internals::intptr_t  url, ::cordl_internals::intptr_t  filepath_param_name, ::cordl_internals::intptr_t  filepath, ::cordl_internals::intptr_t  access_token, ::ArrayW<::Oculus::Platform::__CAPI__ovrKeyValuePair,::Array<::Oculus::Platform::__CAPI__ovrKeyValuePair>*>  post_params, ::cordl_internals::uintptr_t  numItems) ;

/// @brief Method ovr_HTTP_Post addr 0x26d70f4 size 0x9c virtual false final false
static inline uint64_t ovr_HTTP_Post(::StringW  url) ;

/// @brief Method ovr_HTTP_Post_Native addr 0x26d7190 size 0x7c virtual false final false
static inline uint64_t ovr_HTTP_Post_Native(::cordl_internals::intptr_t  url) ;

/// @brief Method ovr_IAP_ConsumePurchase addr 0x26d720c size 0x9c virtual false final false
static inline uint64_t ovr_IAP_ConsumePurchase(::StringW  sku) ;

/// @brief Method ovr_IAP_ConsumePurchase_Native addr 0x26d72a8 size 0x7c virtual false final false
static inline uint64_t ovr_IAP_ConsumePurchase_Native(::cordl_internals::intptr_t  sku) ;

/// @brief Method ovr_IAP_GetProductsBySKU addr 0x26d7324 size 0x148 virtual false final false
static inline uint64_t ovr_IAP_GetProductsBySKU(::ArrayW<::StringW,::Array<::StringW>*>  skus, int32_t  count) ;

/// @brief Method ovr_IAP_GetViewerPurchases addr 0x26d746c size 0x68 virtual false final false
static inline uint64_t ovr_IAP_GetViewerPurchases() ;

/// @brief Method ovr_IAP_GetViewerPurchasesDurableCache addr 0x26d74d4 size 0x68 virtual false final false
static inline uint64_t ovr_IAP_GetViewerPurchasesDurableCache() ;

/// @brief Method ovr_IAP_LaunchCheckoutFlow addr 0x26d753c size 0x9c virtual false final false
static inline uint64_t ovr_IAP_LaunchCheckoutFlow(::StringW  sku) ;

/// @brief Method ovr_IAP_LaunchCheckoutFlow_Native addr 0x26d75d8 size 0x7c virtual false final false
static inline uint64_t ovr_IAP_LaunchCheckoutFlow_Native(::cordl_internals::intptr_t  sku) ;

/// @brief Method ovr_LanguagePack_GetCurrent addr 0x26d7654 size 0x68 virtual false final false
static inline uint64_t ovr_LanguagePack_GetCurrent() ;

/// @brief Method ovr_LanguagePack_SetCurrent addr 0x26d76bc size 0x9c virtual false final false
static inline uint64_t ovr_LanguagePack_SetCurrent(::StringW  tag) ;

/// @brief Method ovr_LanguagePack_SetCurrent_Native addr 0x26d7758 size 0x7c virtual false final false
static inline uint64_t ovr_LanguagePack_SetCurrent_Native(::cordl_internals::intptr_t  tag) ;

/// @brief Method ovr_Leaderboard_Get addr 0x26d77d4 size 0x9c virtual false final false
static inline uint64_t ovr_Leaderboard_Get(::StringW  leaderboardName) ;

/// @brief Method ovr_Leaderboard_Get_Native addr 0x26d7870 size 0x7c virtual false final false
static inline uint64_t ovr_Leaderboard_Get_Native(::cordl_internals::intptr_t  leaderboardName) ;

/// @brief Method ovr_Leaderboard_GetEntries addr 0x26d78ec size 0xc4 virtual false final false
static inline uint64_t ovr_Leaderboard_GetEntries(::StringW  leaderboardName, int32_t  limit, ::Oculus::Platform::LeaderboardFilterType  filter, ::Oculus::Platform::LeaderboardStartAt  startAt) ;

/// @brief Method ovr_Leaderboard_GetEntries_Native addr 0x26d79b0 size 0x9c virtual false final false
static inline uint64_t ovr_Leaderboard_GetEntries_Native(::cordl_internals::intptr_t  leaderboardName, int32_t  limit, ::Oculus::Platform::LeaderboardFilterType  filter, ::Oculus::Platform::LeaderboardStartAt  startAt) ;

/// @brief Method ovr_Leaderboard_GetEntriesAfterRank addr 0x26d7a4c size 0xb4 virtual false final false
static inline uint64_t ovr_Leaderboard_GetEntriesAfterRank(::StringW  leaderboardName, int32_t  limit, uint64_t  afterRank) ;

/// @brief Method ovr_Leaderboard_GetEntriesAfterRank_Native addr 0x26d7b00 size 0x94 virtual false final false
static inline uint64_t ovr_Leaderboard_GetEntriesAfterRank_Native(::cordl_internals::intptr_t  leaderboardName, int32_t  limit, uint64_t  afterRank) ;

/// @brief Method ovr_Leaderboard_GetEntriesByIds addr 0x26d7b94 size 0xcc virtual false final false
static inline uint64_t ovr_Leaderboard_GetEntriesByIds(::StringW  leaderboardName, int32_t  limit, ::Oculus::Platform::LeaderboardStartAt  startAt, ::ArrayW<uint64_t,::Array<uint64_t>*>  userIDs, uint32_t  userIDLength) ;

/// @brief Method ovr_Leaderboard_GetEntriesByIds_Native addr 0x26d7c60 size 0xb4 virtual false final false
static inline uint64_t ovr_Leaderboard_GetEntriesByIds_Native(::cordl_internals::intptr_t  leaderboardName, int32_t  limit, ::Oculus::Platform::LeaderboardStartAt  startAt, ::ArrayW<uint64_t,::Array<uint64_t>*>  userIDs, uint32_t  userIDLength) ;

/// @brief Method ovr_Leaderboard_GetNextEntries addr 0x26d7d14 size 0x7c virtual false final false
static inline uint64_t ovr_Leaderboard_GetNextEntries(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_Leaderboard_GetPreviousEntries addr 0x26d7d90 size 0x7c virtual false final false
static inline uint64_t ovr_Leaderboard_GetPreviousEntries(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_Leaderboard_WriteEntry addr 0x26d7e0c size 0xcc virtual false final false
static inline uint64_t ovr_Leaderboard_WriteEntry(::StringW  leaderboardName, int64_t  score, ::ArrayW<uint8_t,::Array<uint8_t>*>  extraData, uint32_t  extraDataLength, bool  forceUpdate) ;

/// @brief Method ovr_Leaderboard_WriteEntry_Native addr 0x26d7ed8 size 0xb4 virtual false final false
static inline uint64_t ovr_Leaderboard_WriteEntry_Native(::cordl_internals::intptr_t  leaderboardName, int64_t  score, ::ArrayW<uint8_t,::Array<uint8_t>*>  extraData, uint32_t  extraDataLength, bool  forceUpdate) ;

/// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric addr 0x26d7f8c size 0xdc virtual false final false
static inline uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric(::StringW  leaderboardName, int64_t  score, int64_t  supplementaryMetric, ::ArrayW<uint8_t,::Array<uint8_t>*>  extraData, uint32_t  extraDataLength, bool  forceUpdate) ;

/// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native addr 0x26d8068 size 0xbc virtual false final false
static inline uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native(::cordl_internals::intptr_t  leaderboardName, int64_t  score, int64_t  supplementaryMetric, ::ArrayW<uint8_t,::Array<uint8_t>*>  extraData, uint32_t  extraDataLength, bool  forceUpdate) ;

/// @brief Method ovr_Livestreaming_IsAllowedForApplication addr 0x26d8124 size 0x9c virtual false final false
static inline uint64_t ovr_Livestreaming_IsAllowedForApplication(::StringW  packageName) ;

/// @brief Method ovr_Livestreaming_IsAllowedForApplication_Native addr 0x26d81c0 size 0x7c virtual false final false
static inline uint64_t ovr_Livestreaming_IsAllowedForApplication_Native(::cordl_internals::intptr_t  packageName) ;

/// @brief Method ovr_Livestreaming_StartPartyStream addr 0x26d823c size 0x68 virtual false final false
static inline uint64_t ovr_Livestreaming_StartPartyStream() ;

/// @brief Method ovr_Livestreaming_StartStream addr 0x26d82a4 size 0x84 virtual false final false
static inline uint64_t ovr_Livestreaming_StartStream(::Oculus::Platform::LivestreamingAudience  audience, ::Oculus::Platform::LivestreamingMicrophoneStatus  micStatus) ;

/// @brief Method ovr_Livestreaming_StopPartyStream addr 0x26d8328 size 0x68 virtual false final false
static inline uint64_t ovr_Livestreaming_StopPartyStream() ;

/// @brief Method ovr_Livestreaming_StopStream addr 0x26d8390 size 0x68 virtual false final false
static inline uint64_t ovr_Livestreaming_StopStream() ;

/// @brief Method ovr_Livestreaming_UpdateMicStatus addr 0x26d83f8 size 0x7c virtual false final false
static inline uint64_t ovr_Livestreaming_UpdateMicStatus(::Oculus::Platform::LivestreamingMicrophoneStatus  micStatus) ;

/// @brief Method ovr_Media_ShareToFacebook addr 0x26d8474 size 0xd0 virtual false final false
static inline uint64_t ovr_Media_ShareToFacebook(::StringW  postTextSuggestion, ::StringW  filePath, ::Oculus::Platform::MediaContentType  contentType) ;

/// @brief Method ovr_Media_ShareToFacebook_Native addr 0x26d8544 size 0x94 virtual false final false
static inline uint64_t ovr_Media_ShareToFacebook_Native(::cordl_internals::intptr_t  postTextSuggestion, ::cordl_internals::intptr_t  filePath, ::Oculus::Platform::MediaContentType  contentType) ;

/// @brief Method ovr_NetSync_Connect addr 0x26d85d8 size 0x7c virtual false final false
static inline uint64_t ovr_NetSync_Connect(::cordl_internals::intptr_t  connect_options) ;

/// @brief Method ovr_NetSync_Disconnect addr 0x26d8654 size 0x7c virtual false final false
static inline uint64_t ovr_NetSync_Disconnect(int64_t  connection_id) ;

/// @brief Method ovr_NetSync_GetSessions addr 0x26d86d0 size 0x7c virtual false final false
static inline uint64_t ovr_NetSync_GetSessions(int64_t  connection_id) ;

/// @brief Method ovr_NetSync_GetVoipAttenuation addr 0x26d874c size 0x7c virtual false final false
static inline uint64_t ovr_NetSync_GetVoipAttenuation(int64_t  connection_id) ;

/// @brief Method ovr_NetSync_GetVoipAttenuationDefault addr 0x26d87c8 size 0x68 virtual false final false
static inline uint64_t ovr_NetSync_GetVoipAttenuationDefault() ;

/// @brief Method ovr_NetSync_SetVoipAttenuation addr 0x26d8830 size 0xac virtual false final false
static inline uint64_t ovr_NetSync_SetVoipAttenuation(int64_t  connection_id, ::ArrayW<float_t,::Array<float_t>*>  distances, ::ArrayW<float_t,::Array<float_t>*>  decibels, ::cordl_internals::uintptr_t  count) ;

/// @brief Method ovr_NetSync_SetVoipAttenuationModel addr 0x26d88dc size 0xd0 virtual false final false
static inline uint64_t ovr_NetSync_SetVoipAttenuationModel(int64_t  connection_id, ::StringW  name, ::ArrayW<float_t,::Array<float_t>*>  distances, ::ArrayW<float_t,::Array<float_t>*>  decibels, ::cordl_internals::uintptr_t  count) ;

/// @brief Method ovr_NetSync_SetVoipAttenuationModel_Native addr 0x26d89ac size 0xbc virtual false final false
static inline uint64_t ovr_NetSync_SetVoipAttenuationModel_Native(int64_t  connection_id, ::cordl_internals::intptr_t  name, ::ArrayW<float_t,::Array<float_t>*>  distances, ::ArrayW<float_t,::Array<float_t>*>  decibels, ::cordl_internals::uintptr_t  count) ;

/// @brief Method ovr_NetSync_SetVoipChannelCfg addr 0x26d8a68 size 0xe0 virtual false final false
static inline uint64_t ovr_NetSync_SetVoipChannelCfg(int64_t  connection_id, ::StringW  channel_name, ::StringW  attnmodel, bool  disable_spatialization) ;

/// @brief Method ovr_NetSync_SetVoipChannelCfg_Native addr 0x26d8b48 size 0x9c virtual false final false
static inline uint64_t ovr_NetSync_SetVoipChannelCfg_Native(int64_t  connection_id, ::cordl_internals::intptr_t  channel_name, ::cordl_internals::intptr_t  attnmodel, bool  disable_spatialization) ;

/// @brief Method ovr_NetSync_SetVoipGroup addr 0x26d8be4 size 0xb0 virtual false final false
static inline uint64_t ovr_NetSync_SetVoipGroup(int64_t  connection_id, ::StringW  group_id) ;

/// @brief Method ovr_NetSync_SetVoipGroup_Native addr 0x26d8c94 size 0x84 virtual false final false
static inline uint64_t ovr_NetSync_SetVoipGroup_Native(int64_t  connection_id, ::cordl_internals::intptr_t  group_id) ;

/// @brief Method ovr_NetSync_SetVoipListentoChannels addr 0x26d8d18 size 0x160 virtual false final false
static inline uint64_t ovr_NetSync_SetVoipListentoChannels(int64_t  connection_id, ::ArrayW<::StringW,::Array<::StringW>*>  listento_channels, ::cordl_internals::uintptr_t  count) ;

/// @brief Method ovr_NetSync_SetVoipMicSource addr 0x26d8e78 size 0x84 virtual false final false
static inline uint64_t ovr_NetSync_SetVoipMicSource(int64_t  connection_id, ::Oculus::Platform::NetSyncVoipMicSource  mic_source) ;

/// @brief Method ovr_NetSync_SetVoipSessionMuted addr 0x26d8efc size 0x94 virtual false final false
static inline uint64_t ovr_NetSync_SetVoipSessionMuted(int64_t  connection_id, uint64_t  session_id, bool  muted) ;

/// @brief Method ovr_NetSync_SetVoipSpeaktoChannels addr 0x26d8f90 size 0x160 virtual false final false
static inline uint64_t ovr_NetSync_SetVoipSpeaktoChannels(int64_t  connection_id, ::ArrayW<::StringW,::Array<::StringW>*>  speakto_channels, ::cordl_internals::uintptr_t  count) ;

/// @brief Method ovr_NetSync_SetVoipStreamMode addr 0x26d90f0 size 0x94 virtual false final false
static inline uint64_t ovr_NetSync_SetVoipStreamMode(int64_t  connection_id, uint64_t  sessionId, ::Oculus::Platform::NetSyncVoipStreamMode  streamMode) ;

/// @brief Method ovr_Notification_MarkAsRead addr 0x26d9184 size 0x7c virtual false final false
static inline uint64_t ovr_Notification_MarkAsRead(uint64_t  notificationID) ;

/// @brief Method ovr_Party_Create addr 0x26d9200 size 0x68 virtual false final false
static inline uint64_t ovr_Party_Create() ;

/// @brief Method ovr_Party_GatherInApplication addr 0x26d9268 size 0x84 virtual false final false
static inline uint64_t ovr_Party_GatherInApplication(uint64_t  partyID, uint64_t  appID) ;

/// @brief Method ovr_Party_Get addr 0x26d92ec size 0x7c virtual false final false
static inline uint64_t ovr_Party_Get(uint64_t  partyID) ;

/// @brief Method ovr_Party_GetCurrent addr 0x26d9368 size 0x68 virtual false final false
static inline uint64_t ovr_Party_GetCurrent() ;

/// @brief Method ovr_Party_GetCurrentForUser addr 0x26d93d0 size 0x7c virtual false final false
static inline uint64_t ovr_Party_GetCurrentForUser(uint64_t  userID) ;

/// @brief Method ovr_Party_Invite addr 0x26d944c size 0x80 virtual false final false
static inline uint64_t ovr_Party_Invite(uint64_t  partyID, uint64_t  userID) ;

/// @brief Method ovr_Party_Join addr 0x26d94cc size 0x7c virtual false final false
static inline uint64_t ovr_Party_Join(uint64_t  partyID) ;

/// @brief Method ovr_Party_Leave addr 0x26d9548 size 0x7c virtual false final false
static inline uint64_t ovr_Party_Leave(uint64_t  partyID) ;

/// @brief Method ovr_RichPresence_Clear addr 0x26d95c4 size 0x68 virtual false final false
static inline uint64_t ovr_RichPresence_Clear() ;

/// @brief Method ovr_RichPresence_GetDestinations addr 0x26d962c size 0x68 virtual false final false
static inline uint64_t ovr_RichPresence_GetDestinations() ;

/// @brief Method ovr_RichPresence_Set addr 0x26d9694 size 0x7c virtual false final false
static inline uint64_t ovr_RichPresence_Set(::cordl_internals::intptr_t  richPresenceOptions) ;

/// @brief Method ovr_RichPresence_SetDestination addr 0x26d9710 size 0x9c virtual false final false
static inline uint64_t ovr_RichPresence_SetDestination(::StringW  api_name) ;

/// @brief Method ovr_RichPresence_SetDestination_Native addr 0x26d97ac size 0x7c virtual false final false
static inline uint64_t ovr_RichPresence_SetDestination_Native(::cordl_internals::intptr_t  api_name) ;

/// @brief Method ovr_RichPresence_SetIsJoinable addr 0x26d9828 size 0x7c virtual false final false
static inline uint64_t ovr_RichPresence_SetIsJoinable(bool  is_joinable) ;

/// @brief Method ovr_RichPresence_SetLobbySession addr 0x26d98a4 size 0x9c virtual false final false
static inline uint64_t ovr_RichPresence_SetLobbySession(::StringW  id) ;

/// @brief Method ovr_RichPresence_SetLobbySession_Native addr 0x26d9940 size 0x7c virtual false final false
static inline uint64_t ovr_RichPresence_SetLobbySession_Native(::cordl_internals::intptr_t  id) ;

/// @brief Method ovr_RichPresence_SetMatchSession addr 0x26d99bc size 0x9c virtual false final false
static inline uint64_t ovr_RichPresence_SetMatchSession(::StringW  id) ;

/// @brief Method ovr_RichPresence_SetMatchSession_Native addr 0x26d9a58 size 0x7c virtual false final false
static inline uint64_t ovr_RichPresence_SetMatchSession_Native(::cordl_internals::intptr_t  id) ;

/// @brief Method ovr_User_CancelRecordingForReportFlow addr 0x26d9ad4 size 0x9c virtual false final false
static inline uint64_t ovr_User_CancelRecordingForReportFlow(::StringW  recordingUUID) ;

/// @brief Method ovr_User_CancelRecordingForReportFlow_Native addr 0x26d9b70 size 0x7c virtual false final false
static inline uint64_t ovr_User_CancelRecordingForReportFlow_Native(::cordl_internals::intptr_t  recordingUUID) ;

/// @brief Method ovr_User_Get addr 0x26d9bec size 0x7c virtual false final false
static inline uint64_t ovr_User_Get(uint64_t  userID) ;

/// @brief Method ovr_User_GetAccessToken addr 0x26d9c68 size 0x68 virtual false final false
static inline uint64_t ovr_User_GetAccessToken() ;

/// @brief Method ovr_User_GetBlockedUsers addr 0x26d9cd0 size 0x68 virtual false final false
static inline uint64_t ovr_User_GetBlockedUsers() ;

/// @brief Method ovr_User_GetLinkedAccounts addr 0x26d9d38 size 0x7c virtual false final false
static inline uint64_t ovr_User_GetLinkedAccounts(::cordl_internals::intptr_t  userOptions) ;

/// @brief Method ovr_User_GetLoggedInUser addr 0x26d9db4 size 0x68 virtual false final false
static inline uint64_t ovr_User_GetLoggedInUser() ;

/// @brief Method ovr_User_GetLoggedInUserFriends addr 0x26d9e1c size 0x68 virtual false final false
static inline uint64_t ovr_User_GetLoggedInUserFriends() ;

/// @brief Method ovr_User_GetOrgScopedID addr 0x26d9e84 size 0x7c virtual false final false
static inline uint64_t ovr_User_GetOrgScopedID(uint64_t  userID) ;

/// @brief Method ovr_User_GetSdkAccounts addr 0x26d9f00 size 0x68 virtual false final false
static inline uint64_t ovr_User_GetSdkAccounts() ;

/// @brief Method ovr_User_GetUserCapabilities addr 0x26d9f68 size 0x68 virtual false final false
static inline uint64_t ovr_User_GetUserCapabilities() ;

/// @brief Method ovr_User_GetUserProof addr 0x26d9fd0 size 0x68 virtual false final false
static inline uint64_t ovr_User_GetUserProof() ;

/// @brief Method ovr_User_LaunchBlockFlow addr 0x26da038 size 0x7c virtual false final false
static inline uint64_t ovr_User_LaunchBlockFlow(uint64_t  userID) ;

/// @brief Method ovr_User_LaunchFriendRequestFlow addr 0x26da0b4 size 0x7c virtual false final false
static inline uint64_t ovr_User_LaunchFriendRequestFlow(uint64_t  userID) ;

/// @brief Method ovr_User_LaunchReportFlow addr 0x26da130 size 0x7c virtual false final false
static inline uint64_t ovr_User_LaunchReportFlow(uint64_t  userID) ;

/// @brief Method ovr_User_LaunchReportFlow2 addr 0x26da1ac size 0x84 virtual false final false
static inline uint64_t ovr_User_LaunchReportFlow2(uint64_t  optionalUserID, ::cordl_internals::intptr_t  abuseReportOptions) ;

/// @brief Method ovr_User_LaunchUnblockFlow addr 0x26da230 size 0x7c virtual false final false
static inline uint64_t ovr_User_LaunchUnblockFlow(uint64_t  userID) ;

/// @brief Method ovr_User_NewEntitledTestUser addr 0x26da2ac size 0x68 virtual false final false
static inline uint64_t ovr_User_NewEntitledTestUser() ;

/// @brief Method ovr_User_NewTestUser addr 0x26da314 size 0x68 virtual false final false
static inline uint64_t ovr_User_NewTestUser() ;

/// @brief Method ovr_User_NewTestUserFriends addr 0x26da37c size 0x68 virtual false final false
static inline uint64_t ovr_User_NewTestUserFriends() ;

/// @brief Method ovr_User_StartRecordingForReportFlow addr 0x26da3e4 size 0x68 virtual false final false
static inline uint64_t ovr_User_StartRecordingForReportFlow() ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow addr 0x26da44c size 0xb0 virtual false final false
static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow(uint64_t  optionalUserID, ::StringW  optionalRecordingUUID) ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow_Native addr 0x26da4fc size 0x84 virtual false final false
static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow_Native(uint64_t  optionalUserID, ::cordl_internals::intptr_t  optionalRecordingUUID) ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2 addr 0x26da580 size 0xb8 virtual false final false
static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow2(uint64_t  optionalUserID, ::StringW  optionalRecordingUUID, ::cordl_internals::intptr_t  abuseReportOptions) ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2_Native addr 0x26da638 size 0x94 virtual false final false
static inline uint64_t ovr_User_StopRecordingAndLaunchReportFlow2_Native(uint64_t  optionalUserID, ::cordl_internals::intptr_t  optionalRecordingUUID, ::cordl_internals::intptr_t  abuseReportOptions) ;

/// @brief Method ovr_User_TestUserCreateDeviceManifest addr 0x26da6cc size 0xb4 virtual false final false
static inline uint64_t ovr_User_TestUserCreateDeviceManifest(::StringW  deviceID, ::ArrayW<uint64_t,::Array<uint64_t>*>  appIDs, int32_t  numAppIDs) ;

/// @brief Method ovr_User_TestUserCreateDeviceManifest_Native addr 0x26da780 size 0x9c virtual false final false
static inline uint64_t ovr_User_TestUserCreateDeviceManifest_Native(::cordl_internals::intptr_t  deviceID, ::ArrayW<uint64_t,::Array<uint64_t>*>  appIDs, int32_t  numAppIDs) ;

/// @brief Method ovr_UserAgeCategory_Get addr 0x26da81c size 0x68 virtual false final false
static inline uint64_t ovr_UserAgeCategory_Get() ;

/// @brief Method ovr_UserAgeCategory_Report addr 0x26da884 size 0x7c virtual false final false
static inline uint64_t ovr_UserAgeCategory_Report(::Oculus::Platform::AppAgeCategory  age_category) ;

/// @brief Method ovr_UserDataStore_PrivateDeleteEntryByKey addr 0x26da900 size 0xb0 virtual false final false
static inline uint64_t ovr_UserDataStore_PrivateDeleteEntryByKey(uint64_t  userID, ::StringW  key) ;

/// @brief Method ovr_UserDataStore_PrivateDeleteEntryByKey_Native addr 0x26da9b0 size 0x84 virtual false final false
static inline uint64_t ovr_UserDataStore_PrivateDeleteEntryByKey_Native(uint64_t  userID, ::cordl_internals::intptr_t  key) ;

/// @brief Method ovr_UserDataStore_PrivateGetEntries addr 0x26daa34 size 0x7c virtual false final false
static inline uint64_t ovr_UserDataStore_PrivateGetEntries(uint64_t  userID) ;

/// @brief Method ovr_UserDataStore_PrivateGetEntryByKey addr 0x26daab0 size 0xb0 virtual false final false
static inline uint64_t ovr_UserDataStore_PrivateGetEntryByKey(uint64_t  userID, ::StringW  key) ;

/// @brief Method ovr_UserDataStore_PrivateGetEntryByKey_Native addr 0x26dab60 size 0x84 virtual false final false
static inline uint64_t ovr_UserDataStore_PrivateGetEntryByKey_Native(uint64_t  userID, ::cordl_internals::intptr_t  key) ;

/// @brief Method ovr_UserDataStore_PrivateWriteEntry addr 0x26dabe4 size 0xd0 virtual false final false
static inline uint64_t ovr_UserDataStore_PrivateWriteEntry(uint64_t  userID, ::StringW  key, ::StringW  value) ;

/// @brief Method ovr_UserDataStore_PrivateWriteEntry_Native addr 0x26dacb4 size 0x94 virtual false final false
static inline uint64_t ovr_UserDataStore_PrivateWriteEntry_Native(uint64_t  userID, ::cordl_internals::intptr_t  key, ::cordl_internals::intptr_t  value) ;

/// @brief Method ovr_UserDataStore_PublicDeleteEntryByKey addr 0x26dad48 size 0xb0 virtual false final false
static inline uint64_t ovr_UserDataStore_PublicDeleteEntryByKey(uint64_t  userID, ::StringW  key) ;

/// @brief Method ovr_UserDataStore_PublicDeleteEntryByKey_Native addr 0x26dadf8 size 0x84 virtual false final false
static inline uint64_t ovr_UserDataStore_PublicDeleteEntryByKey_Native(uint64_t  userID, ::cordl_internals::intptr_t  key) ;

/// @brief Method ovr_UserDataStore_PublicGetEntries addr 0x26dae7c size 0x7c virtual false final false
static inline uint64_t ovr_UserDataStore_PublicGetEntries(uint64_t  userID) ;

/// @brief Method ovr_UserDataStore_PublicGetEntryByKey addr 0x26daef8 size 0xb0 virtual false final false
static inline uint64_t ovr_UserDataStore_PublicGetEntryByKey(uint64_t  userID, ::StringW  key) ;

/// @brief Method ovr_UserDataStore_PublicGetEntryByKey_Native addr 0x26dafa8 size 0x84 virtual false final false
static inline uint64_t ovr_UserDataStore_PublicGetEntryByKey_Native(uint64_t  userID, ::cordl_internals::intptr_t  key) ;

/// @brief Method ovr_UserDataStore_PublicWriteEntry addr 0x26db02c size 0xd0 virtual false final false
static inline uint64_t ovr_UserDataStore_PublicWriteEntry(uint64_t  userID, ::StringW  key, ::StringW  value) ;

/// @brief Method ovr_UserDataStore_PublicWriteEntry_Native addr 0x26db0fc size 0x94 virtual false final false
static inline uint64_t ovr_UserDataStore_PublicWriteEntry_Native(uint64_t  userID, ::cordl_internals::intptr_t  key, ::cordl_internals::intptr_t  value) ;

/// @brief Method ovr_Voip_GetMicrophoneAvailability addr 0x26db190 size 0x68 virtual false final false
static inline uint64_t ovr_Voip_GetMicrophoneAvailability() ;

/// @brief Method ovr_Voip_ReportAppVoipSessions addr 0x26db1f8 size 0x84 virtual false final false
static inline uint64_t ovr_Voip_ReportAppVoipSessions(::ArrayW<uint64_t,::Array<uint64_t>*>  sessionIDs) ;

/// @brief Method ovr_Voip_SetSystemVoipSuppressed addr 0x26db27c size 0x7c virtual false final false
static inline uint64_t ovr_Voip_SetSystemVoipSuppressed(bool  suppressed) ;

/// @brief Method ovr_AbuseReportRecording_GetRecordingUuid addr 0x26db2f8 size 0x58 virtual false final false
static inline ::StringW ovr_AbuseReportRecording_GetRecordingUuid(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AbuseReportRecording_GetRecordingUuid_Native addr 0x26db350 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_AbuseReportRecording_GetRecordingUuid_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementDefinition_GetBitfieldLength addr 0x26db3cc size 0x7c virtual false final false
static inline uint32_t ovr_AchievementDefinition_GetBitfieldLength(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementDefinition_GetName addr 0x26db448 size 0x58 virtual false final false
static inline ::StringW ovr_AchievementDefinition_GetName(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementDefinition_GetName_Native addr 0x26db4a0 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_AchievementDefinition_GetName_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementDefinition_GetTarget addr 0x26db51c size 0x7c virtual false final false
static inline uint64_t ovr_AchievementDefinition_GetTarget(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementDefinition_GetType addr 0x26db598 size 0x7c virtual false final false
static inline ::Oculus::Platform::AchievementType ovr_AchievementDefinition_GetType(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementDefinitionArray_GetElement addr 0x26db614 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_AchievementDefinitionArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_AchievementDefinitionArray_GetNextUrl addr 0x26db698 size 0x58 virtual false final false
static inline ::StringW ovr_AchievementDefinitionArray_GetNextUrl(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementDefinitionArray_GetNextUrl_Native addr 0x26db6f0 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_AchievementDefinitionArray_GetNextUrl_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementDefinitionArray_GetSize addr 0x26db76c size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_AchievementDefinitionArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementDefinitionArray_HasNextPage addr 0x26db7e8 size 0x84 virtual false final false
static inline bool ovr_AchievementDefinitionArray_HasNextPage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementProgress_GetBitfield addr 0x26db86c size 0x58 virtual false final false
static inline ::StringW ovr_AchievementProgress_GetBitfield(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementProgress_GetBitfield_Native addr 0x26db8c4 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_AchievementProgress_GetBitfield_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementProgress_GetCount addr 0x26db940 size 0x7c virtual false final false
static inline uint64_t ovr_AchievementProgress_GetCount(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementProgress_GetIsUnlocked addr 0x26db9bc size 0x84 virtual false final false
static inline bool ovr_AchievementProgress_GetIsUnlocked(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementProgress_GetName addr 0x26dba40 size 0x58 virtual false final false
static inline ::StringW ovr_AchievementProgress_GetName(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementProgress_GetName_Native addr 0x26dba98 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_AchievementProgress_GetName_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementProgress_GetUnlockTime addr 0x26dbb14 size 0x58 virtual false final false
static inline ::System::DateTime ovr_AchievementProgress_GetUnlockTime(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementProgress_GetUnlockTime_Native addr 0x26dbb6c size 0x7c virtual false final false
static inline uint64_t ovr_AchievementProgress_GetUnlockTime_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementProgressArray_GetElement addr 0x26dbbe8 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_AchievementProgressArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_AchievementProgressArray_GetNextUrl addr 0x26dbc6c size 0x58 virtual false final false
static inline ::StringW ovr_AchievementProgressArray_GetNextUrl(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementProgressArray_GetNextUrl_Native addr 0x26dbcc4 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_AchievementProgressArray_GetNextUrl_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementProgressArray_GetSize addr 0x26dbd40 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_AchievementProgressArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementProgressArray_HasNextPage addr 0x26dbdbc size 0x84 virtual false final false
static inline bool ovr_AchievementProgressArray_HasNextPage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementUpdate_GetJustUnlocked addr 0x26dbe40 size 0x84 virtual false final false
static inline bool ovr_AchievementUpdate_GetJustUnlocked(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementUpdate_GetName addr 0x26dbec4 size 0x58 virtual false final false
static inline ::StringW ovr_AchievementUpdate_GetName(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AchievementUpdate_GetName_Native addr 0x26dbf1c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_AchievementUpdate_GetName_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AppDownloadProgressResult_GetDownloadBytes addr 0x26dbf98 size 0x7c virtual false final false
static inline int64_t ovr_AppDownloadProgressResult_GetDownloadBytes(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AppDownloadProgressResult_GetDownloadedBytes addr 0x26dc014 size 0x7c virtual false final false
static inline int64_t ovr_AppDownloadProgressResult_GetDownloadedBytes(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AppDownloadProgressResult_GetStatusCode addr 0x26dc090 size 0x7c virtual false final false
static inline ::Oculus::Platform::AppStatus ovr_AppDownloadProgressResult_GetStatusCode(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AppDownloadResult_GetTimestamp addr 0x26dc10c size 0x7c virtual false final false
static inline int64_t ovr_AppDownloadResult_GetTimestamp(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Application_GetID addr 0x26dc188 size 0x7c virtual false final false
static inline uint64_t ovr_Application_GetID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationInvite_GetDestination addr 0x26dc204 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_ApplicationInvite_GetDestination(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationInvite_GetID addr 0x26dc280 size 0x7c virtual false final false
static inline uint64_t ovr_ApplicationInvite_GetID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationInvite_GetIsActive addr 0x26dc2fc size 0x84 virtual false final false
static inline bool ovr_ApplicationInvite_GetIsActive(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationInvite_GetLobbySessionId addr 0x26dc380 size 0x58 virtual false final false
static inline ::StringW ovr_ApplicationInvite_GetLobbySessionId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationInvite_GetLobbySessionId_Native addr 0x26dc3d8 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_ApplicationInvite_GetLobbySessionId_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationInvite_GetMatchSessionId addr 0x26dc454 size 0x58 virtual false final false
static inline ::StringW ovr_ApplicationInvite_GetMatchSessionId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationInvite_GetMatchSessionId_Native addr 0x26dc4ac size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_ApplicationInvite_GetMatchSessionId_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationInvite_GetRecipient addr 0x26dc528 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_ApplicationInvite_GetRecipient(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationInviteArray_GetElement addr 0x26dc5a4 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_ApplicationInviteArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_ApplicationInviteArray_GetNextUrl addr 0x26dc628 size 0x58 virtual false final false
static inline ::StringW ovr_ApplicationInviteArray_GetNextUrl(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationInviteArray_GetNextUrl_Native addr 0x26dc680 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_ApplicationInviteArray_GetNextUrl_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationInviteArray_GetSize addr 0x26dc6fc size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_ApplicationInviteArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationInviteArray_HasNextPage addr 0x26dc778 size 0x84 virtual false final false
static inline bool ovr_ApplicationInviteArray_HasNextPage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationVersion_GetCurrentCode addr 0x26dc7fc size 0x7c virtual false final false
static inline int32_t ovr_ApplicationVersion_GetCurrentCode(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationVersion_GetCurrentName addr 0x26dc878 size 0x58 virtual false final false
static inline ::StringW ovr_ApplicationVersion_GetCurrentName(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationVersion_GetCurrentName_Native addr 0x26dc8d0 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_ApplicationVersion_GetCurrentName_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationVersion_GetLatestCode addr 0x26dc94c size 0x7c virtual false final false
static inline int32_t ovr_ApplicationVersion_GetLatestCode(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationVersion_GetLatestName addr 0x26dc9c8 size 0x58 virtual false final false
static inline ::StringW ovr_ApplicationVersion_GetLatestName(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationVersion_GetLatestName_Native addr 0x26dca20 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_ApplicationVersion_GetLatestName_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationVersion_GetReleaseDate addr 0x26dca9c size 0x7c virtual false final false
static inline int64_t ovr_ApplicationVersion_GetReleaseDate(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationVersion_GetSize addr 0x26dcb18 size 0x58 virtual false final false
static inline ::StringW ovr_ApplicationVersion_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ApplicationVersion_GetSize_Native addr 0x26dcb70 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_ApplicationVersion_GetSize_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetDetails_GetAssetId addr 0x26dcbec size 0x7c virtual false final false
static inline uint64_t ovr_AssetDetails_GetAssetId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetDetails_GetAssetType addr 0x26dcc68 size 0x58 virtual false final false
static inline ::StringW ovr_AssetDetails_GetAssetType(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetDetails_GetAssetType_Native addr 0x26dccc0 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_AssetDetails_GetAssetType_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetDetails_GetDownloadStatus addr 0x26dcd3c size 0x58 virtual false final false
static inline ::StringW ovr_AssetDetails_GetDownloadStatus(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetDetails_GetDownloadStatus_Native addr 0x26dcd94 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_AssetDetails_GetDownloadStatus_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetDetails_GetFilepath addr 0x26dce10 size 0x58 virtual false final false
static inline ::StringW ovr_AssetDetails_GetFilepath(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetDetails_GetFilepath_Native addr 0x26dce68 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_AssetDetails_GetFilepath_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetDetails_GetIapStatus addr 0x26dcee4 size 0x58 virtual false final false
static inline ::StringW ovr_AssetDetails_GetIapStatus(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetDetails_GetIapStatus_Native addr 0x26dcf3c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_AssetDetails_GetIapStatus_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetDetails_GetLanguage addr 0x26dcfb8 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_AssetDetails_GetLanguage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetDetails_GetMetadata addr 0x26dd034 size 0x58 virtual false final false
static inline ::StringW ovr_AssetDetails_GetMetadata(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetDetails_GetMetadata_Native addr 0x26dd08c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_AssetDetails_GetMetadata_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetDetailsArray_GetElement addr 0x26dd108 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_AssetDetailsArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_AssetDetailsArray_GetSize addr 0x26dd18c size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_AssetDetailsArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetAssetFileId addr 0x26dd208 size 0x7c virtual false final false
static inline uint64_t ovr_AssetFileDeleteResult_GetAssetFileId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetAssetId addr 0x26dd284 size 0x7c virtual false final false
static inline uint64_t ovr_AssetFileDeleteResult_GetAssetId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetFilepath addr 0x26dd300 size 0x58 virtual false final false
static inline ::StringW ovr_AssetFileDeleteResult_GetFilepath(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetFilepath_Native addr 0x26dd358 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_AssetFileDeleteResult_GetFilepath_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetSuccess addr 0x26dd3d4 size 0x84 virtual false final false
static inline bool ovr_AssetFileDeleteResult_GetSuccess(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetFileId addr 0x26dd458 size 0x7c virtual false final false
static inline uint64_t ovr_AssetFileDownloadCancelResult_GetAssetFileId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetId addr 0x26dd4d4 size 0x7c virtual false final false
static inline uint64_t ovr_AssetFileDownloadCancelResult_GetAssetId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath addr 0x26dd550 size 0x58 virtual false final false
static inline ::StringW ovr_AssetFileDownloadCancelResult_GetFilepath(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath_Native addr 0x26dd5a8 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_AssetFileDownloadCancelResult_GetFilepath_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetSuccess addr 0x26dd624 size 0x84 virtual false final false
static inline bool ovr_AssetFileDownloadCancelResult_GetSuccess(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetFileDownloadResult_GetAssetId addr 0x26dd6a8 size 0x7c virtual false final false
static inline uint64_t ovr_AssetFileDownloadResult_GetAssetId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetFileDownloadResult_GetFilepath addr 0x26dd724 size 0x58 virtual false final false
static inline ::StringW ovr_AssetFileDownloadResult_GetFilepath(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetFileDownloadResult_GetFilepath_Native addr 0x26dd77c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_AssetFileDownloadResult_GetFilepath_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetAssetFileId addr 0x26dd7f8 size 0x7c virtual false final false
static inline uint64_t ovr_AssetFileDownloadUpdate_GetAssetFileId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetAssetId addr 0x26dd874 size 0x7c virtual false final false
static inline uint64_t ovr_AssetFileDownloadUpdate_GetAssetId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotal addr 0x26dd8f0 size 0x7c virtual false final false
static inline uint32_t ovr_AssetFileDownloadUpdate_GetBytesTotal(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotalLong addr 0x26dd96c size 0x7c virtual false final false
static inline uint64_t ovr_AssetFileDownloadUpdate_GetBytesTotalLong(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferred addr 0x26dd9e8 size 0x7c virtual false final false
static inline int32_t ovr_AssetFileDownloadUpdate_GetBytesTransferred(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferredLong addr 0x26dda64 size 0x7c virtual false final false
static inline int64_t ovr_AssetFileDownloadUpdate_GetBytesTransferredLong(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetCompleted addr 0x26ddae0 size 0x84 virtual false final false
static inline bool ovr_AssetFileDownloadUpdate_GetCompleted(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AvatarEditorResult_GetRequestSent addr 0x26ddb64 size 0x84 virtual false final false
static inline bool ovr_AvatarEditorResult_GetRequestSent(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_BlockedUser_GetId addr 0x26ddbe8 size 0x7c virtual false final false
static inline uint64_t ovr_BlockedUser_GetId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_BlockedUserArray_GetElement addr 0x26ddc64 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_BlockedUserArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_BlockedUserArray_GetNextUrl addr 0x26ddce8 size 0x58 virtual false final false
static inline ::StringW ovr_BlockedUserArray_GetNextUrl(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_BlockedUserArray_GetNextUrl_Native addr 0x26ddd40 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_BlockedUserArray_GetNextUrl_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_BlockedUserArray_GetSize addr 0x26dddbc size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_BlockedUserArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_BlockedUserArray_HasNextPage addr 0x26dde38 size 0x84 virtual false final false
static inline bool ovr_BlockedUserArray_HasNextPage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Challenge_GetCreationType addr 0x26ddebc size 0x7c virtual false final false
static inline ::Oculus::Platform::ChallengeCreationType ovr_Challenge_GetCreationType(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Challenge_GetDescription addr 0x26ddf38 size 0x58 virtual false final false
static inline ::StringW ovr_Challenge_GetDescription(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Challenge_GetDescription_Native addr 0x26ddf90 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Challenge_GetDescription_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Challenge_GetEndDate addr 0x26de00c size 0x58 virtual false final false
static inline ::System::DateTime ovr_Challenge_GetEndDate(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Challenge_GetEndDate_Native addr 0x26de064 size 0x7c virtual false final false
static inline uint64_t ovr_Challenge_GetEndDate_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Challenge_GetID addr 0x26de0e0 size 0x7c virtual false final false
static inline uint64_t ovr_Challenge_GetID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Challenge_GetInvitedUsers addr 0x26de15c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Challenge_GetInvitedUsers(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Challenge_GetLeaderboard addr 0x26de1d8 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Challenge_GetLeaderboard(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Challenge_GetParticipants addr 0x26de254 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Challenge_GetParticipants(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Challenge_GetStartDate addr 0x26de2d0 size 0x58 virtual false final false
static inline ::System::DateTime ovr_Challenge_GetStartDate(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Challenge_GetStartDate_Native addr 0x26de328 size 0x7c virtual false final false
static inline uint64_t ovr_Challenge_GetStartDate_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Challenge_GetTitle addr 0x26de3a4 size 0x58 virtual false final false
static inline ::StringW ovr_Challenge_GetTitle(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Challenge_GetTitle_Native addr 0x26de3fc size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Challenge_GetTitle_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Challenge_GetVisibility addr 0x26de478 size 0x7c virtual false final false
static inline ::Oculus::Platform::ChallengeVisibility ovr_Challenge_GetVisibility(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeArray_GetElement addr 0x26de4f4 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_ChallengeArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_ChallengeArray_GetNextUrl addr 0x26de578 size 0x58 virtual false final false
static inline ::StringW ovr_ChallengeArray_GetNextUrl(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeArray_GetNextUrl_Native addr 0x26de5d0 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_ChallengeArray_GetNextUrl_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeArray_GetPreviousUrl addr 0x26de64c size 0x58 virtual false final false
static inline ::StringW ovr_ChallengeArray_GetPreviousUrl(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeArray_GetPreviousUrl_Native addr 0x26de6a4 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_ChallengeArray_GetPreviousUrl_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeArray_GetSize addr 0x26de720 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_ChallengeArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeArray_GetTotalCount addr 0x26de79c size 0x7c virtual false final false
static inline uint64_t ovr_ChallengeArray_GetTotalCount(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeArray_HasNextPage addr 0x26de818 size 0x84 virtual false final false
static inline bool ovr_ChallengeArray_HasNextPage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeArray_HasPreviousPage addr 0x26de89c size 0x84 virtual false final false
static inline bool ovr_ChallengeArray_HasPreviousPage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeEntry_GetDisplayScore addr 0x26de920 size 0x58 virtual false final false
static inline ::StringW ovr_ChallengeEntry_GetDisplayScore(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeEntry_GetDisplayScore_Native addr 0x26de978 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_ChallengeEntry_GetDisplayScore_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeEntry_GetExtraData addr 0x26de9f4 size 0x6c virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> ovr_ChallengeEntry_GetExtraData(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeEntry_GetExtraData_Native addr 0x26deadc size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_ChallengeEntry_GetExtraData_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeEntry_GetExtraDataLength addr 0x26deb58 size 0x7c virtual false final false
static inline uint32_t ovr_ChallengeEntry_GetExtraDataLength(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeEntry_GetID addr 0x26debd4 size 0x7c virtual false final false
static inline uint64_t ovr_ChallengeEntry_GetID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeEntry_GetRank addr 0x26dec50 size 0x7c virtual false final false
static inline int32_t ovr_ChallengeEntry_GetRank(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeEntry_GetScore addr 0x26deccc size 0x7c virtual false final false
static inline int64_t ovr_ChallengeEntry_GetScore(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeEntry_GetTimestamp addr 0x26ded48 size 0x58 virtual false final false
static inline ::System::DateTime ovr_ChallengeEntry_GetTimestamp(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeEntry_GetTimestamp_Native addr 0x26deda0 size 0x7c virtual false final false
static inline uint64_t ovr_ChallengeEntry_GetTimestamp_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeEntry_GetUser addr 0x26dee1c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_ChallengeEntry_GetUser(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetElement addr 0x26dee98 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_ChallengeEntryArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_ChallengeEntryArray_GetNextUrl addr 0x26def1c size 0x58 virtual false final false
static inline ::StringW ovr_ChallengeEntryArray_GetNextUrl(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetNextUrl_Native addr 0x26def74 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_ChallengeEntryArray_GetNextUrl_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl addr 0x26deff0 size 0x58 virtual false final false
static inline ::StringW ovr_ChallengeEntryArray_GetPreviousUrl(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl_Native addr 0x26df048 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_ChallengeEntryArray_GetPreviousUrl_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetSize addr 0x26df0c4 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_ChallengeEntryArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetTotalCount addr 0x26df140 size 0x7c virtual false final false
static inline uint64_t ovr_ChallengeEntryArray_GetTotalCount(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeEntryArray_HasNextPage addr 0x26df1bc size 0x84 virtual false final false
static inline bool ovr_ChallengeEntryArray_HasNextPage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ChallengeEntryArray_HasPreviousPage addr 0x26df240 size 0x84 virtual false final false
static inline bool ovr_ChallengeEntryArray_HasPreviousPage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_DataStore_Contains addr 0x26df2c4 size 0xb0 virtual false final false
static inline uint32_t ovr_DataStore_Contains(::cordl_internals::intptr_t  obj, ::StringW  key) ;

/// @brief Method ovr_DataStore_Contains_Native addr 0x26df374 size 0x84 virtual false final false
static inline uint32_t ovr_DataStore_Contains_Native(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  key) ;

/// @brief Method ovr_DataStore_GetKey addr 0x26d08ec size 0x68 virtual false final false
static inline ::StringW ovr_DataStore_GetKey(::cordl_internals::intptr_t  obj, int32_t  index) ;

/// @brief Method ovr_DataStore_GetKey_Native addr 0x26df3f8 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_DataStore_GetKey_Native(::cordl_internals::intptr_t  obj, int32_t  index) ;

/// @brief Method ovr_DataStore_GetNumKeys addr 0x26d0870 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_DataStore_GetNumKeys(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_DataStore_GetValue addr 0x26d0954 size 0xb4 virtual false final false
static inline ::StringW ovr_DataStore_GetValue(::cordl_internals::intptr_t  obj, ::StringW  key) ;

/// @brief Method ovr_DataStore_GetValue_Native addr 0x26df47c size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_DataStore_GetValue_Native(::cordl_internals::intptr_t  obj, ::cordl_internals::intptr_t  key) ;

/// @brief Method ovr_Destination_GetApiName addr 0x26df500 size 0x58 virtual false final false
static inline ::StringW ovr_Destination_GetApiName(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Destination_GetApiName_Native addr 0x26df558 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Destination_GetApiName_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Destination_GetDeeplinkMessage addr 0x26df5d4 size 0x58 virtual false final false
static inline ::StringW ovr_Destination_GetDeeplinkMessage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Destination_GetDeeplinkMessage_Native addr 0x26df62c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Destination_GetDeeplinkMessage_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Destination_GetDisplayName addr 0x26df6a8 size 0x58 virtual false final false
static inline ::StringW ovr_Destination_GetDisplayName(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Destination_GetDisplayName_Native addr 0x26df700 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Destination_GetDisplayName_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_DestinationArray_GetElement addr 0x26df77c size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_DestinationArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_DestinationArray_GetNextUrl addr 0x26df800 size 0x58 virtual false final false
static inline ::StringW ovr_DestinationArray_GetNextUrl(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_DestinationArray_GetNextUrl_Native addr 0x26df858 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_DestinationArray_GetNextUrl_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_DestinationArray_GetSize addr 0x26df8d4 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_DestinationArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_DestinationArray_HasNextPage addr 0x26df950 size 0x84 virtual false final false
static inline bool ovr_DestinationArray_HasNextPage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Error_GetCode addr 0x26df9d4 size 0x78 virtual false final false
static inline int32_t ovr_Error_GetCode(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Error_GetDisplayableMessage addr 0x26dfa4c size 0x58 virtual false final false
static inline ::StringW ovr_Error_GetDisplayableMessage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Error_GetDisplayableMessage_Native addr 0x26dfaa4 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Error_GetDisplayableMessage_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Error_GetHttpCode addr 0x26dfb20 size 0x7c virtual false final false
static inline int32_t ovr_Error_GetHttpCode(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Error_GetMessage addr 0x26dfb9c size 0x58 virtual false final false
static inline ::StringW ovr_Error_GetMessage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Error_GetMessage_Native addr 0x26dfbf4 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Error_GetMessage_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage addr 0x26dfc70 size 0x58 virtual false final false
static inline ::StringW ovr_GroupPresenceJoinIntent_GetDeeplinkMessage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native addr 0x26dfcc8 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName addr 0x26dfd44 size 0x58 virtual false final false
static inline ::StringW ovr_GroupPresenceJoinIntent_GetDestinationApiName(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native addr 0x26dfd9c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId addr 0x26dfe18 size 0x58 virtual false final false
static inline ::StringW ovr_GroupPresenceJoinIntent_GetLobbySessionId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native addr 0x26dfe70 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId addr 0x26dfeec size 0x58 virtual false final false
static inline ::StringW ovr_GroupPresenceJoinIntent_GetMatchSessionId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native addr 0x26dff44 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName addr 0x26dffc0 size 0x58 virtual false final false
static inline ::StringW ovr_GroupPresenceLeaveIntent_GetDestinationApiName(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native addr 0x26e0018 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId addr 0x26e0094 size 0x58 virtual false final false
static inline ::StringW ovr_GroupPresenceLeaveIntent_GetLobbySessionId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native addr 0x26e00ec size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId addr 0x26e0168 size 0x58 virtual false final false
static inline ::StringW ovr_GroupPresenceLeaveIntent_GetMatchSessionId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native addr 0x26e01c0 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_HttpTransferUpdate_GetBytes addr 0x26e023c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_HttpTransferUpdate_GetBytes(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_HttpTransferUpdate_GetID addr 0x26e02b8 size 0x7c virtual false final false
static inline uint64_t ovr_HttpTransferUpdate_GetID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_HttpTransferUpdate_GetSize addr 0x26e0334 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_HttpTransferUpdate_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_HttpTransferUpdate_IsCompleted addr 0x26e03b0 size 0x84 virtual false final false
static inline bool ovr_HttpTransferUpdate_IsCompleted(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_InstalledApplication_GetApplicationId addr 0x26e0434 size 0x58 virtual false final false
static inline ::StringW ovr_InstalledApplication_GetApplicationId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_InstalledApplication_GetApplicationId_Native addr 0x26e048c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_InstalledApplication_GetApplicationId_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_InstalledApplication_GetPackageName addr 0x26e0508 size 0x58 virtual false final false
static inline ::StringW ovr_InstalledApplication_GetPackageName(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_InstalledApplication_GetPackageName_Native addr 0x26e0560 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_InstalledApplication_GetPackageName_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_InstalledApplication_GetStatus addr 0x26e05dc size 0x58 virtual false final false
static inline ::StringW ovr_InstalledApplication_GetStatus(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_InstalledApplication_GetStatus_Native addr 0x26e0634 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_InstalledApplication_GetStatus_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_InstalledApplication_GetVersionCode addr 0x26e06b0 size 0x7c virtual false final false
static inline int32_t ovr_InstalledApplication_GetVersionCode(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_InstalledApplication_GetVersionName addr 0x26e072c size 0x58 virtual false final false
static inline ::StringW ovr_InstalledApplication_GetVersionName(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_InstalledApplication_GetVersionName_Native addr 0x26e0784 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_InstalledApplication_GetVersionName_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_InstalledApplicationArray_GetElement addr 0x26e0800 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_InstalledApplicationArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_InstalledApplicationArray_GetSize addr 0x26e0884 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_InstalledApplicationArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_InvitePanelResultInfo_GetInvitesSent addr 0x26e0900 size 0x84 virtual false final false
static inline bool ovr_InvitePanelResultInfo_GetInvitesSent(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetEnglishName addr 0x26e0984 size 0x58 virtual false final false
static inline ::StringW ovr_LanguagePackInfo_GetEnglishName(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetEnglishName_Native addr 0x26e09dc size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_LanguagePackInfo_GetEnglishName_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetNativeName addr 0x26e0a58 size 0x58 virtual false final false
static inline ::StringW ovr_LanguagePackInfo_GetNativeName(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetNativeName_Native addr 0x26e0ab0 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_LanguagePackInfo_GetNativeName_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetTag addr 0x26e0b2c size 0x58 virtual false final false
static inline ::StringW ovr_LanguagePackInfo_GetTag(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LanguagePackInfo_GetTag_Native addr 0x26e0b84 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_LanguagePackInfo_GetTag_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LaunchBlockFlowResult_GetDidBlock addr 0x26e0c00 size 0x84 virtual false final false
static inline bool ovr_LaunchBlockFlowResult_GetDidBlock(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LaunchBlockFlowResult_GetDidCancel addr 0x26e0c84 size 0x84 virtual false final false
static inline bool ovr_LaunchBlockFlowResult_GetDidCancel(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LaunchDetails_GetDeeplinkMessage addr 0x26e0d08 size 0x58 virtual false final false
static inline ::StringW ovr_LaunchDetails_GetDeeplinkMessage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LaunchDetails_GetDeeplinkMessage_Native addr 0x26e0d60 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_LaunchDetails_GetDeeplinkMessage_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LaunchDetails_GetDestinationApiName addr 0x26e0ddc size 0x58 virtual false final false
static inline ::StringW ovr_LaunchDetails_GetDestinationApiName(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LaunchDetails_GetDestinationApiName_Native addr 0x26e0e34 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_LaunchDetails_GetDestinationApiName_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LaunchDetails_GetLaunchSource addr 0x26e0eb0 size 0x58 virtual false final false
static inline ::StringW ovr_LaunchDetails_GetLaunchSource(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LaunchDetails_GetLaunchSource_Native addr 0x26e0f08 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_LaunchDetails_GetLaunchSource_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LaunchDetails_GetLaunchType addr 0x26e0f84 size 0x7c virtual false final false
static inline ::Oculus::Platform::LaunchType ovr_LaunchDetails_GetLaunchType(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LaunchDetails_GetTrackingID addr 0x26e1000 size 0x58 virtual false final false
static inline ::StringW ovr_LaunchDetails_GetTrackingID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LaunchDetails_GetTrackingID_Native addr 0x26e1058 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_LaunchDetails_GetTrackingID_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LaunchDetails_GetUsers addr 0x26e10d4 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_LaunchDetails_GetUsers(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidCancel addr 0x26e1150 size 0x84 virtual false final false
static inline bool ovr_LaunchFriendRequestFlowResult_GetDidCancel(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidSendRequest addr 0x26e11d4 size 0x84 virtual false final false
static inline bool ovr_LaunchFriendRequestFlowResult_GetDidSendRequest(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LaunchInvitePanelFlowResult_GetInvitedUsers addr 0x26e1258 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_LaunchInvitePanelFlowResult_GetInvitedUsers(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LaunchReportFlowResult_GetDidCancel addr 0x26e12d4 size 0x84 virtual false final false
static inline bool ovr_LaunchReportFlowResult_GetDidCancel(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LaunchReportFlowResult_GetUserReportId addr 0x26e1358 size 0x7c virtual false final false
static inline uint64_t ovr_LaunchReportFlowResult_GetUserReportId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LaunchUnblockFlowResult_GetDidCancel addr 0x26e13d4 size 0x84 virtual false final false
static inline bool ovr_LaunchUnblockFlowResult_GetDidCancel(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LaunchUnblockFlowResult_GetDidUnblock addr 0x26e1458 size 0x84 virtual false final false
static inline bool ovr_LaunchUnblockFlowResult_GetDidUnblock(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Leaderboard_GetApiName addr 0x26e14dc size 0x58 virtual false final false
static inline ::StringW ovr_Leaderboard_GetApiName(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Leaderboard_GetApiName_Native addr 0x26e1534 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Leaderboard_GetApiName_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Leaderboard_GetDestination addr 0x26e15b0 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Leaderboard_GetDestination(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Leaderboard_GetID addr 0x26e162c size 0x7c virtual false final false
static inline uint64_t ovr_Leaderboard_GetID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardArray_GetElement addr 0x26e16a8 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_LeaderboardArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_LeaderboardArray_GetNextUrl addr 0x26e172c size 0x58 virtual false final false
static inline ::StringW ovr_LeaderboardArray_GetNextUrl(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardArray_GetNextUrl_Native addr 0x26e1784 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_LeaderboardArray_GetNextUrl_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardArray_GetSize addr 0x26e1800 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_LeaderboardArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardArray_HasNextPage addr 0x26e187c size 0x84 virtual false final false
static inline bool ovr_LeaderboardArray_HasNextPage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetDisplayScore addr 0x26e1900 size 0x58 virtual false final false
static inline ::StringW ovr_LeaderboardEntry_GetDisplayScore(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetDisplayScore_Native addr 0x26e1958 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_LeaderboardEntry_GetDisplayScore_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetExtraData addr 0x26e19d4 size 0x6c virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> ovr_LeaderboardEntry_GetExtraData(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetExtraData_Native addr 0x26e1a40 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_LeaderboardEntry_GetExtraData_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetExtraDataLength addr 0x26dea60 size 0x7c virtual false final false
static inline uint32_t ovr_LeaderboardEntry_GetExtraDataLength(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetID addr 0x26e1abc size 0x7c virtual false final false
static inline uint64_t ovr_LeaderboardEntry_GetID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetRank addr 0x26e1b38 size 0x7c virtual false final false
static inline int32_t ovr_LeaderboardEntry_GetRank(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetScore addr 0x26e1bb4 size 0x7c virtual false final false
static inline int64_t ovr_LeaderboardEntry_GetScore(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetSupplementaryMetric addr 0x26e1c30 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_LeaderboardEntry_GetSupplementaryMetric(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetTimestamp addr 0x26e1cac size 0x58 virtual false final false
static inline ::System::DateTime ovr_LeaderboardEntry_GetTimestamp(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetTimestamp_Native addr 0x26e1d04 size 0x7c virtual false final false
static inline uint64_t ovr_LeaderboardEntry_GetTimestamp_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardEntry_GetUser addr 0x26e1d80 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_LeaderboardEntry_GetUser(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetElement addr 0x26e1dfc size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_LeaderboardEntryArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_LeaderboardEntryArray_GetNextUrl addr 0x26e1e80 size 0x58 virtual false final false
static inline ::StringW ovr_LeaderboardEntryArray_GetNextUrl(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetNextUrl_Native addr 0x26e1ed8 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_LeaderboardEntryArray_GetNextUrl_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl addr 0x26e1f54 size 0x58 virtual false final false
static inline ::StringW ovr_LeaderboardEntryArray_GetPreviousUrl(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl_Native addr 0x26e1fac size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_LeaderboardEntryArray_GetPreviousUrl_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetSize addr 0x26e2028 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_LeaderboardEntryArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetTotalCount addr 0x26e20a4 size 0x7c virtual false final false
static inline uint64_t ovr_LeaderboardEntryArray_GetTotalCount(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_HasNextPage addr 0x26e2120 size 0x84 virtual false final false
static inline bool ovr_LeaderboardEntryArray_HasNextPage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardEntryArray_HasPreviousPage addr 0x26e21a4 size 0x84 virtual false final false
static inline bool ovr_LeaderboardEntryArray_HasPreviousPage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardUpdateStatus_GetDidUpdate addr 0x26e2228 size 0x84 virtual false final false
static inline bool ovr_LeaderboardUpdateStatus_GetDidUpdate(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId addr 0x26e22ac size 0x84 virtual false final false
static inline uint64_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId(::cordl_internals::intptr_t  obj, uint32_t  index) ;

/// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize addr 0x26e2330 size 0x7c virtual false final false
static inline uint32_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LinkedAccount_GetAccessToken addr 0x26e23ac size 0x58 virtual false final false
static inline ::StringW ovr_LinkedAccount_GetAccessToken(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LinkedAccount_GetAccessToken_Native addr 0x26e2404 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_LinkedAccount_GetAccessToken_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LinkedAccount_GetServiceProvider addr 0x26e2480 size 0x7c virtual false final false
static inline ::Oculus::Platform::ServiceProvider ovr_LinkedAccount_GetServiceProvider(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LinkedAccount_GetUserId addr 0x26e24fc size 0x58 virtual false final false
static inline ::StringW ovr_LinkedAccount_GetUserId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LinkedAccount_GetUserId_Native addr 0x26e2554 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_LinkedAccount_GetUserId_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LinkedAccountArray_GetElement addr 0x26e25d0 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_LinkedAccountArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_LinkedAccountArray_GetSize addr 0x26e2654 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_LinkedAccountArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LivestreamingApplicationStatus_GetStreamingEnabled addr 0x26e26d0 size 0x84 virtual false final false
static inline bool ovr_LivestreamingApplicationStatus_GetStreamingEnabled(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LivestreamingStartResult_GetStreamingResult addr 0x26e2754 size 0x7c virtual false final false
static inline ::Oculus::Platform::LivestreamingStartStatus ovr_LivestreamingStartResult_GetStreamingResult(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LivestreamingStatus_GetCommentsVisible addr 0x26e27d0 size 0x84 virtual false final false
static inline bool ovr_LivestreamingStatus_GetCommentsVisible(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LivestreamingStatus_GetIsPaused addr 0x26e2854 size 0x84 virtual false final false
static inline bool ovr_LivestreamingStatus_GetIsPaused(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LivestreamingStatus_GetLivestreamingEnabled addr 0x26e28d8 size 0x84 virtual false final false
static inline bool ovr_LivestreamingStatus_GetLivestreamingEnabled(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LivestreamingStatus_GetLivestreamingType addr 0x26e295c size 0x7c virtual false final false
static inline int32_t ovr_LivestreamingStatus_GetLivestreamingType(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LivestreamingStatus_GetMicEnabled addr 0x26e29d8 size 0x84 virtual false final false
static inline bool ovr_LivestreamingStatus_GetMicEnabled(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetCommentCount addr 0x26e2a5c size 0x7c virtual false final false
static inline int32_t ovr_LivestreamingVideoStats_GetCommentCount(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetReactionCount addr 0x26e2ad8 size 0x7c virtual false final false
static inline int32_t ovr_LivestreamingVideoStats_GetReactionCount(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetTotalViews addr 0x26e2b54 size 0x58 virtual false final false
static inline ::StringW ovr_LivestreamingVideoStats_GetTotalViews(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetTotalViews_Native addr 0x26e2bac size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_LivestreamingVideoStats_GetTotalViews_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetAbuseReportRecording addr 0x26e2c28 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetAbuseReportRecording(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetAchievementDefinitionArray addr 0x26e2ca4 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetAchievementDefinitionArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetAchievementProgressArray addr 0x26e2d20 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetAchievementProgressArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetAchievementUpdate addr 0x26e2d9c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetAchievementUpdate(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetAppDownloadProgressResult addr 0x26e2e18 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetAppDownloadProgressResult(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetAppDownloadResult addr 0x26e2e94 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetAppDownloadResult(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetApplicationInviteArray addr 0x26e2f10 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetApplicationInviteArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetApplicationVersion addr 0x26e2f8c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetApplicationVersion(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetAssetDetails addr 0x26e3008 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetAssetDetails(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetAssetDetailsArray addr 0x26e3084 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetAssetDetailsArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetAssetFileDeleteResult addr 0x26e3100 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetAssetFileDeleteResult(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetAssetFileDownloadCancelResult addr 0x26e317c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetAssetFileDownloadCancelResult(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetAssetFileDownloadResult addr 0x26e31f8 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetAssetFileDownloadResult(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetAssetFileDownloadUpdate addr 0x26e3274 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetAssetFileDownloadUpdate(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetAvatarEditorResult addr 0x26e32f0 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetAvatarEditorResult(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetBlockedUserArray addr 0x26e336c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetBlockedUserArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetChallenge addr 0x26e33e8 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetChallenge(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetChallengeArray addr 0x26e3464 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetChallengeArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetChallengeEntryArray addr 0x26e34e0 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetChallengeEntryArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetDataStore addr 0x26e355c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetDataStore(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetDestinationArray addr 0x26e35d8 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetDestinationArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetError addr 0x26e3654 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetError(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetGroupPresenceJoinIntent addr 0x26e36d0 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetGroupPresenceJoinIntent(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetGroupPresenceLeaveIntent addr 0x26e374c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetGroupPresenceLeaveIntent(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetHttpTransferUpdate addr 0x26e37c8 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetHttpTransferUpdate(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetInstalledApplicationArray addr 0x26e3844 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetInstalledApplicationArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetInvitePanelResultInfo addr 0x26e38c0 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetInvitePanelResultInfo(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetLaunchBlockFlowResult addr 0x26e393c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetLaunchBlockFlowResult(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetLaunchFriendRequestFlowResult addr 0x26e39b8 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetLaunchFriendRequestFlowResult(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetLaunchInvitePanelFlowResult addr 0x26e3a34 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetLaunchInvitePanelFlowResult(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetLaunchReportFlowResult addr 0x26e3ab0 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetLaunchReportFlowResult(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetLaunchUnblockFlowResult addr 0x26e3b2c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetLaunchUnblockFlowResult(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetLeaderboardArray addr 0x26e3ba8 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetLeaderboardArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetLeaderboardEntryArray addr 0x26e3c24 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetLeaderboardEntryArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetLeaderboardUpdateStatus addr 0x26e3ca0 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetLeaderboardUpdateStatus(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetLinkedAccountArray addr 0x26e3d1c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetLinkedAccountArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetLivestreamingApplicationStatus addr 0x26e3d98 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetLivestreamingApplicationStatus(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetLivestreamingStartResult addr 0x26e3e14 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetLivestreamingStartResult(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetLivestreamingStatus addr 0x26e3e90 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetLivestreamingStatus(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetLivestreamingVideoStats addr 0x26e3f0c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetLivestreamingVideoStats(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetMicrophoneAvailabilityState addr 0x26e3f88 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetMicrophoneAvailabilityState(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetNativeMessage addr 0x26e4004 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetNativeMessage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetNetSyncConnection addr 0x26e4080 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetNetSyncConnection(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetNetSyncSessionArray addr 0x26e40fc size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetNetSyncSessionArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetNetSyncSessionsChangedNotification addr 0x26e4178 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetNetSyncSessionsChangedNotification(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetNetSyncSetSessionPropertyResult addr 0x26e41f4 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetNetSyncSetSessionPropertyResult(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetNetSyncVoipAttenuationValueArray addr 0x26e4270 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetNetSyncVoipAttenuationValueArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetOrgScopedID addr 0x26e42ec size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetOrgScopedID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetParty addr 0x26e4368 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetParty(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetPartyID addr 0x26e43e4 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetPartyID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetPartyUpdateNotification addr 0x26e4460 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetPartyUpdateNotification(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetPidArray addr 0x26e44dc size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetPidArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetPlatformInitialize addr 0x26e4558 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetPlatformInitialize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetProductArray addr 0x26e45d4 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetProductArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetPurchase addr 0x26e4650 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetPurchase(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetPurchaseArray addr 0x26e46cc size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetPurchaseArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetRejoinDialogResult addr 0x26e4748 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetRejoinDialogResult(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetRequestID addr 0x26e47c4 size 0x7c virtual false final false
static inline uint64_t ovr_Message_GetRequestID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetSdkAccountArray addr 0x26e4840 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetSdkAccountArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetSendInvitesResult addr 0x26e48bc size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetSendInvitesResult(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetShareMediaResult addr 0x26e4938 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetShareMediaResult(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetString addr 0x26e49b4 size 0x58 virtual false final false
static inline ::StringW ovr_Message_GetString(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetString_Native addr 0x26e4a0c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetString_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetSystemVoipState addr 0x26e4a88 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetSystemVoipState(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetType addr 0x26e4b04 size 0x7c virtual false final false
static inline ::Oculus::Platform::__Message__MessageType ovr_Message_GetType(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetUser addr 0x26e4b80 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetUser(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetUserAccountAgeCategory addr 0x26e4bfc size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetUserAccountAgeCategory(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetUserArray addr 0x26e4c78 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetUserArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetUserCapabilityArray addr 0x26e4cf4 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetUserCapabilityArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetUserDataStoreUpdateResponse addr 0x26e4d70 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetUserDataStoreUpdateResponse(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetUserProof addr 0x26e4dec size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetUserProof(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_GetUserReportID addr 0x26e4e68 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Message_GetUserReportID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Message_IsError addr 0x26e4ee4 size 0x84 virtual false final false
static inline bool ovr_Message_IsError(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Microphone_GetNumSamplesAvailable addr 0x26e4f68 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_Microphone_GetNumSamplesAvailable(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Microphone_GetOutputBufferMaxSize addr 0x26e4fe4 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_Microphone_GetOutputBufferMaxSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Microphone_GetPCM addr 0x26e5060 size 0x9c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_Microphone_GetPCM(::cordl_internals::intptr_t  obj, ::ArrayW<int16_t,::Array<int16_t>*>  outputBuffer, ::cordl_internals::uintptr_t  outputBufferNumElements) ;

/// @brief Method ovr_Microphone_GetPCMFloat addr 0x26e50fc size 0x9c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_Microphone_GetPCMFloat(::cordl_internals::intptr_t  obj, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::cordl_internals::uintptr_t  outputBufferNumElements) ;

/// @brief Method ovr_Microphone_ReadData addr 0x26e5198 size 0x9c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_Microphone_ReadData(::cordl_internals::intptr_t  obj, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::cordl_internals::uintptr_t  outputBufferSize) ;

/// @brief Method ovr_Microphone_SetAcceptableRecordingDelayHint addr 0x26e5234 size 0x84 virtual false final false
static inline void ovr_Microphone_SetAcceptableRecordingDelayHint(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  delayMs) ;

/// @brief Method ovr_Microphone_Start addr 0x26e52b8 size 0x7c virtual false final false
static inline void ovr_Microphone_Start(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Microphone_Stop addr 0x26e5334 size 0x7c virtual false final false
static inline void ovr_Microphone_Stop(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable addr 0x26e53b0 size 0x84 virtual false final false
static inline bool ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_NetSyncConnection_GetConnectionId addr 0x26e5434 size 0x7c virtual false final false
static inline int64_t ovr_NetSyncConnection_GetConnectionId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_NetSyncConnection_GetDisconnectReason addr 0x26e54b0 size 0x7c virtual false final false
static inline ::Oculus::Platform::NetSyncDisconnectReason ovr_NetSyncConnection_GetDisconnectReason(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_NetSyncConnection_GetSessionId addr 0x26e552c size 0x7c virtual false final false
static inline uint64_t ovr_NetSyncConnection_GetSessionId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_NetSyncConnection_GetStatus addr 0x26e55a8 size 0x7c virtual false final false
static inline ::Oculus::Platform::NetSyncConnectionStatus ovr_NetSyncConnection_GetStatus(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_NetSyncConnection_GetZoneId addr 0x26e5624 size 0x58 virtual false final false
static inline ::StringW ovr_NetSyncConnection_GetZoneId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_NetSyncConnection_GetZoneId_Native addr 0x26e567c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_NetSyncConnection_GetZoneId_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_NetSyncSession_GetConnectionId addr 0x26e56f8 size 0x7c virtual false final false
static inline int64_t ovr_NetSyncSession_GetConnectionId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_NetSyncSession_GetMuted addr 0x26e5774 size 0x84 virtual false final false
static inline bool ovr_NetSyncSession_GetMuted(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_NetSyncSession_GetSessionId addr 0x26e57f8 size 0x7c virtual false final false
static inline uint64_t ovr_NetSyncSession_GetSessionId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_NetSyncSession_GetUserId addr 0x26e5874 size 0x7c virtual false final false
static inline uint64_t ovr_NetSyncSession_GetUserId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_NetSyncSession_GetVoipGroup addr 0x26e58f0 size 0x58 virtual false final false
static inline ::StringW ovr_NetSyncSession_GetVoipGroup(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_NetSyncSession_GetVoipGroup_Native addr 0x26e5948 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_NetSyncSession_GetVoipGroup_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_NetSyncSessionArray_GetElement addr 0x26e59c4 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_NetSyncSessionArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_NetSyncSessionArray_GetSize addr 0x26e5a48 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_NetSyncSessionArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_NetSyncSessionsChangedNotification_GetConnectionId addr 0x26e5ac4 size 0x7c virtual false final false
static inline int64_t ovr_NetSyncSessionsChangedNotification_GetConnectionId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_NetSyncSessionsChangedNotification_GetSessions addr 0x26e5b40 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_NetSyncSessionsChangedNotification_GetSessions(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_NetSyncSetSessionPropertyResult_GetSession addr 0x26e5bbc size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_NetSyncSetSessionPropertyResult_GetSession(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_NetSyncVoipAttenuationValue_GetDecibels addr 0x26e5c38 size 0x7c virtual false final false
static inline float_t ovr_NetSyncVoipAttenuationValue_GetDecibels(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_NetSyncVoipAttenuationValue_GetDistance addr 0x26e5cb4 size 0x7c virtual false final false
static inline float_t ovr_NetSyncVoipAttenuationValue_GetDistance(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetElement addr 0x26e5d30 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_NetSyncVoipAttenuationValueArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetSize addr 0x26e5db4 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_NetSyncVoipAttenuationValueArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_OrgScopedID_GetID addr 0x26e5e30 size 0x7c virtual false final false
static inline uint64_t ovr_OrgScopedID_GetID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Packet_Free addr 0x26e5eac size 0x7c virtual false final false
static inline void ovr_Packet_Free(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Packet_GetBytes addr 0x26e5f28 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Packet_GetBytes(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Packet_GetSenderID addr 0x26e5fa4 size 0x7c virtual false final false
static inline uint64_t ovr_Packet_GetSenderID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Packet_GetSize addr 0x26e6020 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_Packet_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Party_GetID addr 0x26e609c size 0x7c virtual false final false
static inline uint64_t ovr_Party_GetID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Party_GetInvitedUsers addr 0x26e6118 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Party_GetInvitedUsers(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Party_GetLeader addr 0x26e6194 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Party_GetLeader(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Party_GetUsers addr 0x26e6210 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Party_GetUsers(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_PartyID_GetID addr 0x26e628c size 0x78 virtual false final false
static inline uint64_t ovr_PartyID_GetID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetAction addr 0x26e6304 size 0x7c virtual false final false
static inline ::Oculus::Platform::PartyUpdateAction ovr_PartyUpdateNotification_GetAction(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetPartyId addr 0x26e6380 size 0x7c virtual false final false
static inline uint64_t ovr_PartyUpdateNotification_GetPartyId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetSenderId addr 0x26e63fc size 0x7c virtual false final false
static inline uint64_t ovr_PartyUpdateNotification_GetSenderId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp addr 0x26e6478 size 0x58 virtual false final false
static inline ::StringW ovr_PartyUpdateNotification_GetUpdateTimestamp(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp_Native addr 0x26e64d0 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_PartyUpdateNotification_GetUpdateTimestamp_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserAlias addr 0x26e654c size 0x58 virtual false final false
static inline ::StringW ovr_PartyUpdateNotification_GetUserAlias(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserAlias_Native addr 0x26e65a4 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_PartyUpdateNotification_GetUserAlias_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserId addr 0x26e6620 size 0x7c virtual false final false
static inline uint64_t ovr_PartyUpdateNotification_GetUserId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserName addr 0x26e669c size 0x58 virtual false final false
static inline ::StringW ovr_PartyUpdateNotification_GetUserName(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserName_Native addr 0x26e66f4 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_PartyUpdateNotification_GetUserName_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Pid_GetId addr 0x26e6770 size 0x58 virtual false final false
static inline ::StringW ovr_Pid_GetId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Pid_GetId_Native addr 0x26e67c8 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Pid_GetId_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_PidArray_GetElement addr 0x26e6844 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_PidArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_PidArray_GetSize addr 0x26e68c8 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_PidArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_PlatformInitialize_GetResult addr 0x26e6944 size 0x7c virtual false final false
static inline ::Oculus::Platform::PlatformInitializeResult ovr_PlatformInitialize_GetResult(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Price_GetAmountInHundredths addr 0x26e69c0 size 0x7c virtual false final false
static inline uint32_t ovr_Price_GetAmountInHundredths(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Price_GetCurrency addr 0x26e6a3c size 0x58 virtual false final false
static inline ::StringW ovr_Price_GetCurrency(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Price_GetCurrency_Native addr 0x26e6a94 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Price_GetCurrency_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Price_GetFormatted addr 0x26e6b10 size 0x58 virtual false final false
static inline ::StringW ovr_Price_GetFormatted(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Price_GetFormatted_Native addr 0x26e6b68 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Price_GetFormatted_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Product_GetDescription addr 0x26e6be4 size 0x58 virtual false final false
static inline ::StringW ovr_Product_GetDescription(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Product_GetDescription_Native addr 0x26e6c3c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Product_GetDescription_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Product_GetFormattedPrice addr 0x26e6cb8 size 0x58 virtual false final false
static inline ::StringW ovr_Product_GetFormattedPrice(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Product_GetFormattedPrice_Native addr 0x26e6d10 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Product_GetFormattedPrice_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Product_GetName addr 0x26e6d8c size 0x58 virtual false final false
static inline ::StringW ovr_Product_GetName(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Product_GetName_Native addr 0x26e6de4 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Product_GetName_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Product_GetSKU addr 0x26e6e60 size 0x58 virtual false final false
static inline ::StringW ovr_Product_GetSKU(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Product_GetSKU_Native addr 0x26e6eb8 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Product_GetSKU_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ProductArray_GetElement addr 0x26e6f34 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_ProductArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_ProductArray_GetNextUrl addr 0x26e6fb8 size 0x58 virtual false final false
static inline ::StringW ovr_ProductArray_GetNextUrl(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ProductArray_GetNextUrl_Native addr 0x26e7010 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_ProductArray_GetNextUrl_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ProductArray_GetSize addr 0x26e708c size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_ProductArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ProductArray_HasNextPage addr 0x26e7108 size 0x84 virtual false final false
static inline bool ovr_ProductArray_HasNextPage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Purchase_GetDeveloperPayload addr 0x26e718c size 0x58 virtual false final false
static inline ::StringW ovr_Purchase_GetDeveloperPayload(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Purchase_GetDeveloperPayload_Native addr 0x26e71e4 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Purchase_GetDeveloperPayload_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Purchase_GetExpirationTime addr 0x26e7260 size 0x58 virtual false final false
static inline ::System::DateTime ovr_Purchase_GetExpirationTime(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Purchase_GetExpirationTime_Native addr 0x26e72b8 size 0x7c virtual false final false
static inline uint64_t ovr_Purchase_GetExpirationTime_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Purchase_GetGrantTime addr 0x26e7334 size 0x58 virtual false final false
static inline ::System::DateTime ovr_Purchase_GetGrantTime(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Purchase_GetGrantTime_Native addr 0x26e738c size 0x7c virtual false final false
static inline uint64_t ovr_Purchase_GetGrantTime_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Purchase_GetPurchaseID addr 0x26e7408 size 0x7c virtual false final false
static inline uint64_t ovr_Purchase_GetPurchaseID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Purchase_GetPurchaseStrID addr 0x26e7484 size 0x58 virtual false final false
static inline ::StringW ovr_Purchase_GetPurchaseStrID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Purchase_GetPurchaseStrID_Native addr 0x26e74dc size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Purchase_GetPurchaseStrID_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Purchase_GetReportingId addr 0x26e7558 size 0x58 virtual false final false
static inline ::StringW ovr_Purchase_GetReportingId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Purchase_GetReportingId_Native addr 0x26e75b0 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Purchase_GetReportingId_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Purchase_GetSKU addr 0x26e762c size 0x58 virtual false final false
static inline ::StringW ovr_Purchase_GetSKU(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_Purchase_GetSKU_Native addr 0x26e7684 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_Purchase_GetSKU_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_PurchaseArray_GetElement addr 0x26e7700 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_PurchaseArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_PurchaseArray_GetNextUrl addr 0x26e7784 size 0x58 virtual false final false
static inline ::StringW ovr_PurchaseArray_GetNextUrl(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_PurchaseArray_GetNextUrl_Native addr 0x26e77dc size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_PurchaseArray_GetNextUrl_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_PurchaseArray_GetSize addr 0x26e7858 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_PurchaseArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_PurchaseArray_HasNextPage addr 0x26e78d4 size 0x84 virtual false final false
static inline bool ovr_PurchaseArray_HasNextPage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_RejoinDialogResult_GetRejoinSelected addr 0x26e7958 size 0x84 virtual false final false
static inline bool ovr_RejoinDialogResult_GetRejoinSelected(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_SdkAccount_GetAccountType addr 0x26e79dc size 0x7c virtual false final false
static inline ::Oculus::Platform::SdkAccountType ovr_SdkAccount_GetAccountType(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_SdkAccount_GetUserId addr 0x26e7a58 size 0x7c virtual false final false
static inline uint64_t ovr_SdkAccount_GetUserId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_SdkAccountArray_GetElement addr 0x26e7ad4 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_SdkAccountArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_SdkAccountArray_GetSize addr 0x26e7b58 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_SdkAccountArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_SendInvitesResult_GetInvites addr 0x26e7bd4 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_SendInvitesResult_GetInvites(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_ShareMediaResult_GetStatus addr 0x26e7c50 size 0x7c virtual false final false
static inline ::Oculus::Platform::ShareMediaStatus ovr_ShareMediaResult_GetStatus(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_SupplementaryMetric_GetID addr 0x26e7ccc size 0x7c virtual false final false
static inline uint64_t ovr_SupplementaryMetric_GetID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_SupplementaryMetric_GetMetric addr 0x26e7d48 size 0x7c virtual false final false
static inline int64_t ovr_SupplementaryMetric_GetMetric(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_SystemVoipState_GetMicrophoneMuted addr 0x26e7dc4 size 0x7c virtual false final false
static inline ::Oculus::Platform::VoipMuteState ovr_SystemVoipState_GetMicrophoneMuted(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_SystemVoipState_GetStatus addr 0x26e7e40 size 0x7c virtual false final false
static inline ::Oculus::Platform::SystemVoipStatus ovr_SystemVoipState_GetStatus(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_TestUser_GetAccessToken addr 0x26e7ebc size 0x58 virtual false final false
static inline ::StringW ovr_TestUser_GetAccessToken(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_TestUser_GetAccessToken_Native addr 0x26e7f14 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_TestUser_GetAccessToken_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_TestUser_GetAppAccessArray addr 0x26e7f90 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_TestUser_GetAppAccessArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_TestUser_GetFbAppAccessArray addr 0x26e800c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_TestUser_GetFbAppAccessArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_TestUser_GetFriendAccessToken addr 0x26e8088 size 0x58 virtual false final false
static inline ::StringW ovr_TestUser_GetFriendAccessToken(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_TestUser_GetFriendAccessToken_Native addr 0x26e80e0 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_TestUser_GetFriendAccessToken_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_TestUser_GetFriendAppAccessArray addr 0x26e815c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_TestUser_GetFriendAppAccessArray(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_TestUser_GetUserAlias addr 0x26e81d8 size 0x58 virtual false final false
static inline ::StringW ovr_TestUser_GetUserAlias(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_TestUser_GetUserAlias_Native addr 0x26e8230 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_TestUser_GetUserAlias_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_TestUser_GetUserFbid addr 0x26e82ac size 0x7c virtual false final false
static inline uint64_t ovr_TestUser_GetUserFbid(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_TestUser_GetUserId addr 0x26e8328 size 0x7c virtual false final false
static inline uint64_t ovr_TestUser_GetUserId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_TestUserAppAccess_GetAccessToken addr 0x26e83a4 size 0x58 virtual false final false
static inline ::StringW ovr_TestUserAppAccess_GetAccessToken(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_TestUserAppAccess_GetAccessToken_Native addr 0x26e83fc size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_TestUserAppAccess_GetAccessToken_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_TestUserAppAccess_GetAppId addr 0x26e8478 size 0x7c virtual false final false
static inline uint64_t ovr_TestUserAppAccess_GetAppId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_TestUserAppAccess_GetUserId addr 0x26e84f4 size 0x7c virtual false final false
static inline uint64_t ovr_TestUserAppAccess_GetUserId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_TestUserAppAccessArray_GetElement addr 0x26e8570 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_TestUserAppAccessArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_TestUserAppAccessArray_GetSize addr 0x26e85f4 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_TestUserAppAccessArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_User_GetDisplayName addr 0x26e8670 size 0x58 virtual false final false
static inline ::StringW ovr_User_GetDisplayName(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_User_GetDisplayName_Native addr 0x26e86c8 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_User_GetDisplayName_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_User_GetID addr 0x26e8744 size 0x7c virtual false final false
static inline uint64_t ovr_User_GetID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_User_GetImageUrl addr 0x26e87c0 size 0x58 virtual false final false
static inline ::StringW ovr_User_GetImageUrl(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_User_GetImageUrl_Native addr 0x26e8818 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_User_GetImageUrl_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_User_GetOculusID addr 0x26e8894 size 0x58 virtual false final false
static inline ::StringW ovr_User_GetOculusID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_User_GetOculusID_Native addr 0x26e88ec size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_User_GetOculusID_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_User_GetPresence addr 0x26e8968 size 0x58 virtual false final false
static inline ::StringW ovr_User_GetPresence(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_User_GetPresence_Native addr 0x26e89c0 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_User_GetPresence_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_User_GetPresenceDeeplinkMessage addr 0x26e8a3c size 0x58 virtual false final false
static inline ::StringW ovr_User_GetPresenceDeeplinkMessage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_User_GetPresenceDeeplinkMessage_Native addr 0x26e8a94 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_User_GetPresenceDeeplinkMessage_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_User_GetPresenceDestinationApiName addr 0x26e8b10 size 0x58 virtual false final false
static inline ::StringW ovr_User_GetPresenceDestinationApiName(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_User_GetPresenceDestinationApiName_Native addr 0x26e8b68 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_User_GetPresenceDestinationApiName_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_User_GetPresenceLobbySessionId addr 0x26e8be4 size 0x58 virtual false final false
static inline ::StringW ovr_User_GetPresenceLobbySessionId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_User_GetPresenceLobbySessionId_Native addr 0x26e8c3c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_User_GetPresenceLobbySessionId_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_User_GetPresenceMatchSessionId addr 0x26e8cb8 size 0x58 virtual false final false
static inline ::StringW ovr_User_GetPresenceMatchSessionId(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_User_GetPresenceMatchSessionId_Native addr 0x26e8d10 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_User_GetPresenceMatchSessionId_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_User_GetPresenceStatus addr 0x26e8d8c size 0x7c virtual false final false
static inline ::Oculus::Platform::UserPresenceStatus ovr_User_GetPresenceStatus(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_User_GetSmallImageUrl addr 0x26e8e08 size 0x58 virtual false final false
static inline ::StringW ovr_User_GetSmallImageUrl(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_User_GetSmallImageUrl_Native addr 0x26e8e60 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_User_GetSmallImageUrl_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserAccountAgeCategory_GetAgeCategory addr 0x26e8edc size 0x7c virtual false final false
static inline ::Oculus::Platform::AccountAgeCategory ovr_UserAccountAgeCategory_GetAgeCategory(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserArray_GetElement addr 0x26e8f58 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_UserArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_UserArray_GetNextUrl addr 0x26e8fdc size 0x58 virtual false final false
static inline ::StringW ovr_UserArray_GetNextUrl(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserArray_GetNextUrl_Native addr 0x26e9034 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_UserArray_GetNextUrl_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserArray_GetSize addr 0x26e90b0 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_UserArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserArray_HasNextPage addr 0x26e912c size 0x84 virtual false final false
static inline bool ovr_UserArray_HasNextPage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserCapability_GetDescription addr 0x26e91b0 size 0x58 virtual false final false
static inline ::StringW ovr_UserCapability_GetDescription(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserCapability_GetDescription_Native addr 0x26e9208 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_UserCapability_GetDescription_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserCapability_GetIsEnabled addr 0x26e9284 size 0x84 virtual false final false
static inline bool ovr_UserCapability_GetIsEnabled(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserCapability_GetName addr 0x26e9308 size 0x58 virtual false final false
static inline ::StringW ovr_UserCapability_GetName(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserCapability_GetName_Native addr 0x26e9360 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_UserCapability_GetName_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserCapability_GetReasonCode addr 0x26e93dc size 0x58 virtual false final false
static inline ::StringW ovr_UserCapability_GetReasonCode(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserCapability_GetReasonCode_Native addr 0x26e9434 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_UserCapability_GetReasonCode_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserCapabilityArray_GetElement addr 0x26e94b0 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t ovr_UserCapabilityArray_GetElement(::cordl_internals::intptr_t  obj, ::cordl_internals::uintptr_t  index) ;

/// @brief Method ovr_UserCapabilityArray_GetNextUrl addr 0x26e9534 size 0x58 virtual false final false
static inline ::StringW ovr_UserCapabilityArray_GetNextUrl(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserCapabilityArray_GetNextUrl_Native addr 0x26e958c size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_UserCapabilityArray_GetNextUrl_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserCapabilityArray_GetSize addr 0x26e9608 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_UserCapabilityArray_GetSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserCapabilityArray_HasNextPage addr 0x26e9684 size 0x84 virtual false final false
static inline bool ovr_UserCapabilityArray_HasNextPage(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserDataStoreUpdateResponse_GetSuccess addr 0x26e9708 size 0x84 virtual false final false
static inline bool ovr_UserDataStoreUpdateResponse_GetSuccess(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserProof_GetNonce addr 0x26e978c size 0x58 virtual false final false
static inline ::StringW ovr_UserProof_GetNonce(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserProof_GetNonce_Native addr 0x26e97e4 size 0x7c virtual false final false
static inline ::cordl_internals::intptr_t ovr_UserProof_GetNonce_Native(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserReportID_GetDidCancel addr 0x26e9860 size 0x84 virtual false final false
static inline bool ovr_UserReportID_GetDidCancel(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_UserReportID_GetID addr 0x26e98e4 size 0x7c virtual false final false
static inline uint64_t ovr_UserReportID_GetID(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_VoipDecoder_Decode addr 0x26e9960 size 0x9c virtual false final false
static inline void ovr_VoipDecoder_Decode(::cordl_internals::intptr_t  obj, ::ArrayW<uint8_t,::Array<uint8_t>*>  compressedData, ::cordl_internals::uintptr_t  compressedSize) ;

/// @brief Method ovr_VoipDecoder_GetDecodedPCM addr 0x26e99fc size 0x9c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_VoipDecoder_GetDecodedPCM(::cordl_internals::intptr_t  obj, ::ArrayW<float_t,::Array<float_t>*>  outputBuffer, ::cordl_internals::uintptr_t  outputBufferSize) ;

/// @brief Method ovr_VoipEncoder_AddPCM addr 0x26e9a98 size 0x9c virtual false final false
static inline void ovr_VoipEncoder_AddPCM(::cordl_internals::intptr_t  obj, ::ArrayW<float_t,::Array<float_t>*>  inputData, uint32_t  inputSize) ;

/// @brief Method ovr_VoipEncoder_GetCompressedData addr 0x26e9b34 size 0x9c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_VoipEncoder_GetCompressedData(::cordl_internals::intptr_t  obj, ::ArrayW<uint8_t,::Array<uint8_t>*>  outputBuffer, ::cordl_internals::uintptr_t  intputSize) ;

/// @brief Method ovr_VoipEncoder_GetCompressedDataSize addr 0x26e9bd0 size 0x7c virtual false final false
static inline ::cordl_internals::uintptr_t ovr_VoipEncoder_GetCompressedDataSize(::cordl_internals::intptr_t  obj) ;

/// @brief Method ovr_AbuseReportOptions_Create addr 0x26cd7a8 size 0x68 virtual false final false
static inline ::cordl_internals::intptr_t ovr_AbuseReportOptions_Create() ;

/// @brief Method ovr_AbuseReportOptions_Destroy addr 0x26cdb14 size 0x7c virtual false final false
static inline void ovr_AbuseReportOptions_Destroy(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_AbuseReportOptions_SetPreventPeopleChooser addr 0x26cd878 size 0x84 virtual false final false
static inline void ovr_AbuseReportOptions_SetPreventPeopleChooser(::cordl_internals::intptr_t  handle, bool  value) ;

/// @brief Method ovr_AbuseReportOptions_SetReportType addr 0x26cd964 size 0x84 virtual false final false
static inline void ovr_AbuseReportOptions_SetReportType(::cordl_internals::intptr_t  handle, ::Oculus::Platform::AbuseReportType  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_Create addr 0x26cdbf4 size 0x68 virtual false final false
static inline ::cordl_internals::intptr_t ovr_AdvancedAbuseReportOptions_Create() ;

/// @brief Method ovr_AdvancedAbuseReportOptions_Destroy addr 0x26ce42c size 0x7c virtual false final false
static inline void ovr_AdvancedAbuseReportOptions_Destroy(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString addr 0x26cdccc size 0xc0 virtual false final false
static inline void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString(::cordl_internals::intptr_t  handle, ::StringW  key, ::StringW  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native addr 0x26e9c4c size 0x94 virtual false final false
static inline void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native(::cordl_internals::intptr_t  handle, ::cordl_internals::intptr_t  key, ::cordl_internals::intptr_t  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext addr 0x26cdde4 size 0x7c virtual false final false
static inline void ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType addr 0x26cdec8 size 0xa0 virtual false final false
static inline void ovr_AdvancedAbuseReportOptions_SetObjectType(::cordl_internals::intptr_t  handle, ::StringW  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType_Native addr 0x26e9ce0 size 0x84 virtual false final false
static inline void ovr_AdvancedAbuseReportOptions_SetObjectType_Native(::cordl_internals::intptr_t  handle, ::cordl_internals::intptr_t  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetReportType addr 0x26cdfd0 size 0x84 virtual false final false
static inline void ovr_AdvancedAbuseReportOptions_SetReportType(::cordl_internals::intptr_t  handle, ::Oculus::Platform::AbuseReportType  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_AddSuggestedUser addr 0x26ce0bc size 0x84 virtual false final false
static inline void ovr_AdvancedAbuseReportOptions_AddSuggestedUser(::cordl_internals::intptr_t  handle, uint64_t  value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers addr 0x26ce198 size 0x7c virtual false final false
static inline void ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetVideoMode addr 0x26ce27c size 0x84 virtual false final false
static inline void ovr_AdvancedAbuseReportOptions_SetVideoMode(::cordl_internals::intptr_t  handle, ::Oculus::Platform::AbuseReportVideoMode  value) ;

/// @brief Method ovr_ApplicationOptions_Create addr 0x26ce7f8 size 0x68 virtual false final false
static inline ::cordl_internals::intptr_t ovr_ApplicationOptions_Create() ;

/// @brief Method ovr_ApplicationOptions_Destroy addr 0x26cee98 size 0x7c virtual false final false
static inline void ovr_ApplicationOptions_Destroy(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage addr 0x26ce8c8 size 0xa0 virtual false final false
static inline void ovr_ApplicationOptions_SetDeeplinkMessage(::cordl_internals::intptr_t  handle, ::StringW  value) ;

/// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage_Native addr 0x26e9d64 size 0x84 virtual false final false
static inline void ovr_ApplicationOptions_SetDeeplinkMessage_Native(::cordl_internals::intptr_t  handle, ::cordl_internals::intptr_t  value) ;

/// @brief Method ovr_ApplicationOptions_SetDestinationApiName addr 0x26ce9d0 size 0xa0 virtual false final false
static inline void ovr_ApplicationOptions_SetDestinationApiName(::cordl_internals::intptr_t  handle, ::StringW  value) ;

/// @brief Method ovr_ApplicationOptions_SetDestinationApiName_Native addr 0x26e9de8 size 0x84 virtual false final false
static inline void ovr_ApplicationOptions_SetDestinationApiName_Native(::cordl_internals::intptr_t  handle, ::cordl_internals::intptr_t  value) ;

/// @brief Method ovr_ApplicationOptions_SetLobbySessionId addr 0x26cead8 size 0xa0 virtual false final false
static inline void ovr_ApplicationOptions_SetLobbySessionId(::cordl_internals::intptr_t  handle, ::StringW  value) ;

/// @brief Method ovr_ApplicationOptions_SetLobbySessionId_Native addr 0x26e9e6c size 0x84 virtual false final false
static inline void ovr_ApplicationOptions_SetLobbySessionId_Native(::cordl_internals::intptr_t  handle, ::cordl_internals::intptr_t  value) ;

/// @brief Method ovr_ApplicationOptions_SetMatchSessionId addr 0x26cebe0 size 0xa0 virtual false final false
static inline void ovr_ApplicationOptions_SetMatchSessionId(::cordl_internals::intptr_t  handle, ::StringW  value) ;

/// @brief Method ovr_ApplicationOptions_SetMatchSessionId_Native addr 0x26e9ef0 size 0x84 virtual false final false
static inline void ovr_ApplicationOptions_SetMatchSessionId_Native(::cordl_internals::intptr_t  handle, ::cordl_internals::intptr_t  value) ;

/// @brief Method ovr_ApplicationOptions_SetRoomId addr 0x26cece8 size 0x84 virtual false final false
static inline void ovr_ApplicationOptions_SetRoomId(::cordl_internals::intptr_t  handle, uint64_t  value) ;

/// @brief Method ovr_AvatarEditorOptions_Create addr 0x26cef78 size 0x68 virtual false final false
static inline ::cordl_internals::intptr_t ovr_AvatarEditorOptions_Create() ;

/// @brief Method ovr_AvatarEditorOptions_Destroy addr 0x26cf214 size 0x7c virtual false final false
static inline void ovr_AvatarEditorOptions_Destroy(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_AvatarEditorOptions_SetSourceOverride addr 0x26cf048 size 0xa0 virtual false final false
static inline void ovr_AvatarEditorOptions_SetSourceOverride(::cordl_internals::intptr_t  handle, ::StringW  value) ;

/// @brief Method ovr_AvatarEditorOptions_SetSourceOverride_Native addr 0x26e9f74 size 0x84 virtual false final false
static inline void ovr_AvatarEditorOptions_SetSourceOverride_Native(::cordl_internals::intptr_t  handle, ::cordl_internals::intptr_t  value) ;

/// @brief Method ovr_ChallengeOptions_Create addr 0x26e9ff8 size 0x68 virtual false final false
static inline ::cordl_internals::intptr_t ovr_ChallengeOptions_Create() ;

/// @brief Method ovr_ChallengeOptions_Destroy addr 0x26ea060 size 0x7c virtual false final false
static inline void ovr_ChallengeOptions_Destroy(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_ChallengeOptions_SetDescription addr 0x26ea0dc size 0xa0 virtual false final false
static inline void ovr_ChallengeOptions_SetDescription(::cordl_internals::intptr_t  handle, ::StringW  value) ;

/// @brief Method ovr_ChallengeOptions_SetDescription_Native addr 0x26ea17c size 0x84 virtual false final false
static inline void ovr_ChallengeOptions_SetDescription_Native(::cordl_internals::intptr_t  handle, ::cordl_internals::intptr_t  value) ;

/// @brief Method ovr_ChallengeOptions_SetEndDate addr 0x26ea200 size 0x6c virtual false final false
static inline void ovr_ChallengeOptions_SetEndDate(::cordl_internals::intptr_t  handle, ::System::DateTime  value) ;

/// @brief Method ovr_ChallengeOptions_SetEndDate_Native addr 0x26ea26c size 0x84 virtual false final false
static inline void ovr_ChallengeOptions_SetEndDate_Native(::cordl_internals::intptr_t  handle, uint64_t  value) ;

/// @brief Method ovr_ChallengeOptions_SetIncludeActiveChallenges addr 0x26ea2f0 size 0x84 virtual false final false
static inline void ovr_ChallengeOptions_SetIncludeActiveChallenges(::cordl_internals::intptr_t  handle, bool  value) ;

/// @brief Method ovr_ChallengeOptions_SetIncludeFutureChallenges addr 0x26ea374 size 0x84 virtual false final false
static inline void ovr_ChallengeOptions_SetIncludeFutureChallenges(::cordl_internals::intptr_t  handle, bool  value) ;

/// @brief Method ovr_ChallengeOptions_SetIncludePastChallenges addr 0x26ea3f8 size 0x84 virtual false final false
static inline void ovr_ChallengeOptions_SetIncludePastChallenges(::cordl_internals::intptr_t  handle, bool  value) ;

/// @brief Method ovr_ChallengeOptions_SetLeaderboardName addr 0x26ea47c size 0xa0 virtual false final false
static inline void ovr_ChallengeOptions_SetLeaderboardName(::cordl_internals::intptr_t  handle, ::StringW  value) ;

/// @brief Method ovr_ChallengeOptions_SetLeaderboardName_Native addr 0x26ea51c size 0x84 virtual false final false
static inline void ovr_ChallengeOptions_SetLeaderboardName_Native(::cordl_internals::intptr_t  handle, ::cordl_internals::intptr_t  value) ;

/// @brief Method ovr_ChallengeOptions_SetStartDate addr 0x26ea5a0 size 0x6c virtual false final false
static inline void ovr_ChallengeOptions_SetStartDate(::cordl_internals::intptr_t  handle, ::System::DateTime  value) ;

/// @brief Method ovr_ChallengeOptions_SetStartDate_Native addr 0x26ea60c size 0x84 virtual false final false
static inline void ovr_ChallengeOptions_SetStartDate_Native(::cordl_internals::intptr_t  handle, uint64_t  value) ;

/// @brief Method ovr_ChallengeOptions_SetTitle addr 0x26ea690 size 0xa0 virtual false final false
static inline void ovr_ChallengeOptions_SetTitle(::cordl_internals::intptr_t  handle, ::StringW  value) ;

/// @brief Method ovr_ChallengeOptions_SetTitle_Native addr 0x26ea730 size 0x84 virtual false final false
static inline void ovr_ChallengeOptions_SetTitle_Native(::cordl_internals::intptr_t  handle, ::cordl_internals::intptr_t  value) ;

/// @brief Method ovr_ChallengeOptions_SetViewerFilter addr 0x26ea7b4 size 0x84 virtual false final false
static inline void ovr_ChallengeOptions_SetViewerFilter(::cordl_internals::intptr_t  handle, ::Oculus::Platform::ChallengeViewerFilter  value) ;

/// @brief Method ovr_ChallengeOptions_SetVisibility addr 0x26ea838 size 0x84 virtual false final false
static inline void ovr_ChallengeOptions_SetVisibility(::cordl_internals::intptr_t  handle, ::Oculus::Platform::ChallengeVisibility  value) ;

/// @brief Method ovr_GroupPresenceOptions_Create addr 0x26ea8bc size 0x68 virtual false final false
static inline ::cordl_internals::intptr_t ovr_GroupPresenceOptions_Create() ;

/// @brief Method ovr_GroupPresenceOptions_Destroy addr 0x26ea924 size 0x7c virtual false final false
static inline void ovr_GroupPresenceOptions_Destroy(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride addr 0x26ea9a0 size 0xa0 virtual false final false
static inline void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride(::cordl_internals::intptr_t  handle, ::StringW  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native addr 0x26eaa40 size 0x84 virtual false final false
static inline void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native(::cordl_internals::intptr_t  handle, ::cordl_internals::intptr_t  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName addr 0x26eaac4 size 0xa0 virtual false final false
static inline void ovr_GroupPresenceOptions_SetDestinationApiName(::cordl_internals::intptr_t  handle, ::StringW  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName_Native addr 0x26eab64 size 0x84 virtual false final false
static inline void ovr_GroupPresenceOptions_SetDestinationApiName_Native(::cordl_internals::intptr_t  handle, ::cordl_internals::intptr_t  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetIsJoinable addr 0x26eabe8 size 0x84 virtual false final false
static inline void ovr_GroupPresenceOptions_SetIsJoinable(::cordl_internals::intptr_t  handle, bool  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId addr 0x26eac6c size 0xa0 virtual false final false
static inline void ovr_GroupPresenceOptions_SetLobbySessionId(::cordl_internals::intptr_t  handle, ::StringW  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId_Native addr 0x26ead0c size 0x84 virtual false final false
static inline void ovr_GroupPresenceOptions_SetLobbySessionId_Native(::cordl_internals::intptr_t  handle, ::cordl_internals::intptr_t  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId addr 0x26ead90 size 0xa0 virtual false final false
static inline void ovr_GroupPresenceOptions_SetMatchSessionId(::cordl_internals::intptr_t  handle, ::StringW  value) ;

/// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId_Native addr 0x26eae30 size 0x84 virtual false final false
static inline void ovr_GroupPresenceOptions_SetMatchSessionId_Native(::cordl_internals::intptr_t  handle, ::cordl_internals::intptr_t  value) ;

/// @brief Method ovr_InviteOptions_Create addr 0x26eaeb4 size 0x68 virtual false final false
static inline ::cordl_internals::intptr_t ovr_InviteOptions_Create() ;

/// @brief Method ovr_InviteOptions_Destroy addr 0x26eaf1c size 0x7c virtual false final false
static inline void ovr_InviteOptions_Destroy(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_InviteOptions_AddSuggestedUser addr 0x26eaf98 size 0x84 virtual false final false
static inline void ovr_InviteOptions_AddSuggestedUser(::cordl_internals::intptr_t  handle, uint64_t  value) ;

/// @brief Method ovr_InviteOptions_ClearSuggestedUsers addr 0x26eb01c size 0x7c virtual false final false
static inline void ovr_InviteOptions_ClearSuggestedUsers(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_MultiplayerErrorOptions_Create addr 0x26eb098 size 0x68 virtual false final false
static inline ::cordl_internals::intptr_t ovr_MultiplayerErrorOptions_Create() ;

/// @brief Method ovr_MultiplayerErrorOptions_Destroy addr 0x26eb100 size 0x7c virtual false final false
static inline void ovr_MultiplayerErrorOptions_Destroy(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_MultiplayerErrorOptions_SetErrorKey addr 0x26eb17c size 0x84 virtual false final false
static inline void ovr_MultiplayerErrorOptions_SetErrorKey(::cordl_internals::intptr_t  handle, ::Oculus::Platform::MultiplayerErrorErrorKey  value) ;

/// @brief Method ovr_NetSyncOptions_Create addr 0x26eb200 size 0x68 virtual false final false
static inline ::cordl_internals::intptr_t ovr_NetSyncOptions_Create() ;

/// @brief Method ovr_NetSyncOptions_Destroy addr 0x26eb268 size 0x7c virtual false final false
static inline void ovr_NetSyncOptions_Destroy(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_NetSyncOptions_SetVoipGroup addr 0x26eb2e4 size 0xa0 virtual false final false
static inline void ovr_NetSyncOptions_SetVoipGroup(::cordl_internals::intptr_t  handle, ::StringW  value) ;

/// @brief Method ovr_NetSyncOptions_SetVoipGroup_Native addr 0x26eb384 size 0x84 virtual false final false
static inline void ovr_NetSyncOptions_SetVoipGroup_Native(::cordl_internals::intptr_t  handle, ::cordl_internals::intptr_t  value) ;

/// @brief Method ovr_NetSyncOptions_SetVoipStreamDefault addr 0x26eb408 size 0x84 virtual false final false
static inline void ovr_NetSyncOptions_SetVoipStreamDefault(::cordl_internals::intptr_t  handle, ::Oculus::Platform::NetSyncVoipStreamMode  value) ;

/// @brief Method ovr_NetSyncOptions_SetZoneId addr 0x26eb48c size 0xa0 virtual false final false
static inline void ovr_NetSyncOptions_SetZoneId(::cordl_internals::intptr_t  handle, ::StringW  value) ;

/// @brief Method ovr_NetSyncOptions_SetZoneId_Native addr 0x26eb52c size 0x84 virtual false final false
static inline void ovr_NetSyncOptions_SetZoneId_Native(::cordl_internals::intptr_t  handle, ::cordl_internals::intptr_t  value) ;

/// @brief Method ovr_RichPresenceOptions_Create addr 0x26eb5b0 size 0x68 virtual false final false
static inline ::cordl_internals::intptr_t ovr_RichPresenceOptions_Create() ;

/// @brief Method ovr_RichPresenceOptions_Destroy addr 0x26eb618 size 0x7c virtual false final false
static inline void ovr_RichPresenceOptions_Destroy(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_RichPresenceOptions_SetApiName addr 0x26eb694 size 0xa0 virtual false final false
static inline void ovr_RichPresenceOptions_SetApiName(::cordl_internals::intptr_t  handle, ::StringW  value) ;

/// @brief Method ovr_RichPresenceOptions_SetApiName_Native addr 0x26eb734 size 0x84 virtual false final false
static inline void ovr_RichPresenceOptions_SetApiName_Native(::cordl_internals::intptr_t  handle, ::cordl_internals::intptr_t  value) ;

/// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride addr 0x26eb7b8 size 0xa0 virtual false final false
static inline void ovr_RichPresenceOptions_SetDeeplinkMessageOverride(::cordl_internals::intptr_t  handle, ::StringW  value) ;

/// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native addr 0x26eb858 size 0x84 virtual false final false
static inline void ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native(::cordl_internals::intptr_t  handle, ::cordl_internals::intptr_t  value) ;

/// @brief Method ovr_RichPresenceOptions_SetIsJoinable addr 0x26eb8dc size 0x84 virtual false final false
static inline void ovr_RichPresenceOptions_SetIsJoinable(::cordl_internals::intptr_t  handle, bool  value) ;

/// @brief Method ovr_RosterOptions_Create addr 0x26eb960 size 0x68 virtual false final false
static inline ::cordl_internals::intptr_t ovr_RosterOptions_Create() ;

/// @brief Method ovr_RosterOptions_Destroy addr 0x26eb9c8 size 0x7c virtual false final false
static inline void ovr_RosterOptions_Destroy(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_RosterOptions_AddSuggestedUser addr 0x26eba44 size 0x84 virtual false final false
static inline void ovr_RosterOptions_AddSuggestedUser(::cordl_internals::intptr_t  handle, uint64_t  value) ;

/// @brief Method ovr_RosterOptions_ClearSuggestedUsers addr 0x26ebac8 size 0x7c virtual false final false
static inline void ovr_RosterOptions_ClearSuggestedUsers(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_UserOptions_Create addr 0x26ebb44 size 0x68 virtual false final false
static inline ::cordl_internals::intptr_t ovr_UserOptions_Create() ;

/// @brief Method ovr_UserOptions_Destroy addr 0x26ebbac size 0x7c virtual false final false
static inline void ovr_UserOptions_Destroy(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_UserOptions_SetMaxUsers addr 0x26ebc28 size 0x84 virtual false final false
static inline void ovr_UserOptions_SetMaxUsers(::cordl_internals::intptr_t  handle, uint32_t  value) ;

/// @brief Method ovr_UserOptions_AddServiceProvider addr 0x26ebcac size 0x84 virtual false final false
static inline void ovr_UserOptions_AddServiceProvider(::cordl_internals::intptr_t  handle, ::Oculus::Platform::ServiceProvider  value) ;

/// @brief Method ovr_UserOptions_ClearServiceProviders addr 0x26ebd30 size 0x7c virtual false final false
static inline void ovr_UserOptions_ClearServiceProviders(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_UserOptions_SetTimeWindow addr 0x26ebdac size 0x84 virtual false final false
static inline void ovr_UserOptions_SetTimeWindow(::cordl_internals::intptr_t  handle, ::Oculus::Platform::TimeWindow  value) ;

/// @brief Method ovr_VoipOptions_Create addr 0x26ebe30 size 0x68 virtual false final false
static inline ::cordl_internals::intptr_t ovr_VoipOptions_Create() ;

/// @brief Method ovr_VoipOptions_Destroy addr 0x26ebe98 size 0x7c virtual false final false
static inline void ovr_VoipOptions_Destroy(::cordl_internals::intptr_t  handle) ;

/// @brief Method ovr_VoipOptions_SetBitrateForNewConnections addr 0x26ebf14 size 0x84 virtual false final false
static inline void ovr_VoipOptions_SetBitrateForNewConnections(::cordl_internals::intptr_t  handle, ::Oculus::Platform::VoipBitrate  value) ;

/// @brief Method ovr_VoipOptions_SetCreateNewConnectionUseDtx addr 0x26ebf98 size 0x84 virtual false final false
static inline void ovr_VoipOptions_SetCreateNewConnectionUseDtx(::cordl_internals::intptr_t  handle, ::Oculus::Platform::VoipDtxState  value) ;

static inline ::Oculus::Platform::CAPI* New_ctor() ;

/// @brief Method .ctor addr 0x26ec01c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CAPI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CAPI(CAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CAPI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CAPI(CAPI const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CAPI()  = default;
public:


// Fields

// Static field nativeStringEncoding


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::CAPI, 0x10>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::CAPI);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::CAPI*, "Oculus.Platform", "CAPI");
NEED_NO_BOX(::Oculus::Platform::__CAPI__FilterCallback);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__CAPI__FilterCallback*, "Oculus.Platform", "CAPI/FilterCallback");
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__CAPI__OculusInitParams, "Oculus.Platform", "CAPI/OculusInitParams");
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__CAPI__ovrKeyValuePair, "Oculus.Platform", "CAPI/ovrKeyValuePair");
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__CAPI__ovrNetSyncVec3, "Oculus.Platform", "CAPI/ovrNetSyncVec3");
