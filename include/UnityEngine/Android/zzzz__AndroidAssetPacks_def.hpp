#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidAssetPacks)
namespace UnityEngine::Android {
class __AndroidAssetPacks__AssetPackManagerStatusQueryCallback;
}
namespace UnityEngine::Android {
class __AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback;
}
namespace UnityEngine::Android {
class __AndroidAssetPacks__AssetPackManagerDownloadStatusCallback;
}
namespace UnityEngine {
class AndroidJavaObject;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Android {
class AndroidAssetPackInfo;
}
namespace UnityEngine::Android {
class AndroidAssetPackUseMobileDataRequestResult;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::Android {
class AndroidAssetPackState;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::Android {
class AndroidAssetPacks;
}
namespace UnityEngine::Android {
class __AndroidAssetPacks__AssetPackManagerDownloadStatusCallback;
}
namespace UnityEngine::Android {
class __AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback;
}
namespace UnityEngine::Android {
class __AndroidAssetPacks__AssetPackManagerStatusQueryCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Android::AndroidAssetPacks);
MARK_REF_PTR_T(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback);
MARK_REF_PTR_T(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback);
MARK_REF_PTR_T(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerStatusQueryCallback);
// Type: ::AssetPackManagerDownloadStatusCallback
namespace UnityEngine::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14925))
// CS Name: ::AndroidAssetPacks::AssetPackManagerDownloadStatusCallback*
class CORDL_TYPE __AndroidAssetPacks__AssetPackManagerDownloadStatusCallback : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::AndroidJavaProxy)]{};

/// @brief Field m_Callback offset 0x20
 __declspec(property(get=__get_m_Callback, put=__set_m_Callback)) ::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>*  m_Callback;

/// @brief Field m_AssetPacks offset 0x28
 __declspec(property(get=__get_m_AssetPacks, put=__set_m_AssetPacks)) ::ArrayW<::StringW,::Array<::StringW>*>  m_AssetPacks;

constexpr void __set_m_Callback(::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>* __get_m_Callback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>*> __get_m_Callback() const;

constexpr void __set_m_AssetPacks(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_m_AssetPacks() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_m_AssetPacks() const;

static inline ::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback* New_ctor(::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>*  callback, ::ArrayW<::StringW,::Array<::StringW>*>  assetPacks) ;

/// @brief Method .ctor addr 0x2c8cf44 size 0x84 virtual false final false
inline void _ctor(::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>*  callback, ::ArrayW<::StringW,::Array<::StringW>*>  assetPacks) ;

/// @brief Method onStatusUpdate addr 0x2c8cfc8 size 0x114 virtual false final false
inline void onStatusUpdate(::StringW  assetPackName, int32_t  assetPackStatus, int64_t  assetPackSize, int64_t  assetPackBytesDownloaded, int32_t  assetPackTransferProgress, int32_t  assetPackErrorCode) ;

// Ctor Parameters [CppParam { name: "", ty: "__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback(__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback(__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AndroidAssetPacks__AssetPackManagerDownloadStatusCallback()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::Android
// Type: ::AssetPackManagerMobileDataConfirmationCallback
namespace UnityEngine::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14926))
// CS Name: ::AndroidAssetPacks::AssetPackManagerMobileDataConfirmationCallback*
class CORDL_TYPE __AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::AndroidJavaProxy)]{};

/// @brief Field m_Callback offset 0x20
 __declspec(property(get=__get_m_Callback, put=__set_m_Callback)) ::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>*  m_Callback;

constexpr void __set_m_Callback(::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>* __get_m_Callback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>*> __get_m_Callback() const;

static inline ::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback* New_ctor(::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>*  callback) ;

/// @brief Method .ctor addr 0x2c8d0dc size 0x80 virtual false final false
inline void _ctor(::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>*  callback) ;

/// @brief Method onMobileDataConfirmationResult addr 0x2c8d15c size 0x8c virtual false final false
inline void onMobileDataConfirmationResult(bool  allowed) ;

// Ctor Parameters [CppParam { name: "", ty: "__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback(__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback(__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::Android
// Type: ::AssetPackManagerStatusQueryCallback
namespace UnityEngine::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14927))
// CS Name: ::AndroidAssetPacks::AssetPackManagerStatusQueryCallback*
class CORDL_TYPE __AndroidAssetPacks__AssetPackManagerStatusQueryCallback : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::AndroidJavaProxy)]{};

/// @brief Field m_Callback offset 0x20
 __declspec(property(get=__get_m_Callback, put=__set_m_Callback)) ::System::Action_2<uint64_t,::ArrayW<::UnityEngine::Android::AndroidAssetPackState*,::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>*  m_Callback;

/// @brief Field m_AssetPackNames offset 0x28
 __declspec(property(get=__get_m_AssetPackNames, put=__set_m_AssetPackNames)) ::System::Collections::Generic::List_1<::StringW>*  m_AssetPackNames;

/// @brief Field m_States offset 0x30
 __declspec(property(get=__get_m_States, put=__set_m_States)) ::System::Collections::Generic::List_1<::UnityEngine::Android::AndroidAssetPackState*>*  m_States;

/// @brief Field m_Size offset 0x38
 __declspec(property(get=__get_m_Size, put=__set_m_Size)) int64_t  m_Size;

constexpr void __set_m_Callback(::System::Action_2<uint64_t,::ArrayW<::UnityEngine::Android::AndroidAssetPackState*,::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>*  value) ;

constexpr ::System::Action_2<uint64_t,::ArrayW<::UnityEngine::Android::AndroidAssetPackState*,::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>* __get_m_Callback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<uint64_t,::ArrayW<::UnityEngine::Android::AndroidAssetPackState*,::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>*> __get_m_Callback() const;

constexpr void __set_m_AssetPackNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get_m_AssetPackNames() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get_m_AssetPackNames() const;

constexpr void __set_m_States(::System::Collections::Generic::List_1<::UnityEngine::Android::AndroidAssetPackState*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Android::AndroidAssetPackState*>* __get_m_States() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Android::AndroidAssetPackState*>*> __get_m_States() const;

constexpr void __set_m_Size(int64_t  value) ;

constexpr int64_t& __get_m_Size() ;

constexpr int64_t const& __get_m_Size() const;

static inline ::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerStatusQueryCallback* New_ctor(::System::Action_2<uint64_t,::ArrayW<::UnityEngine::Android::AndroidAssetPackState*,::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>*  callback, ::ArrayW<::StringW,::Array<::StringW>*>  assetPacks) ;

/// @brief Method .ctor addr 0x2c8d1e8 size 0xf8 virtual false final false
inline void _ctor(::System::Action_2<uint64_t,::ArrayW<::UnityEngine::Android::AndroidAssetPackState*,::Array<::UnityEngine::Android::AndroidAssetPackState*>*>>*  callback, ::ArrayW<::StringW,::Array<::StringW>*>  assetPacks) ;

/// @brief Method onStatusResult addr 0x2c8d2e0 size 0x37c virtual false final false
inline void onStatusResult(int64_t  totalBytes, ::ArrayW<::StringW,::Array<::StringW>*>  assetPackNames, ::ArrayW<int32_t,::Array<int32_t>*>  assetPackStatuses, ::ArrayW<int32_t,::Array<int32_t>*>  assetPackErrorCodes) ;

// Ctor Parameters [CppParam { name: "", ty: "__AndroidAssetPacks__AssetPackManagerStatusQueryCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AndroidAssetPacks__AssetPackManagerStatusQueryCallback(__AndroidAssetPacks__AssetPackManagerStatusQueryCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AndroidAssetPacks__AssetPackManagerStatusQueryCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AndroidAssetPacks__AssetPackManagerStatusQueryCallback(__AndroidAssetPacks__AssetPackManagerStatusQueryCallback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AndroidAssetPacks__AssetPackManagerStatusQueryCallback()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerStatusQueryCallback, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::Android
// Type: UnityEngine.Android::AndroidAssetPacks
namespace UnityEngine::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14928))
// CS Name: ::UnityEngine.Android::AndroidAssetPacks*
class CORDL_TYPE AndroidAssetPacks : public ::System::Object {
public:
// Declarations
using AssetPackManagerStatusQueryCallback = ::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerStatusQueryCallback;

using AssetPackManagerMobileDataConfirmationCallback = ::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback;

using AssetPackManagerDownloadStatusCallback = ::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_JavaPlayAssetDeliveryWrapper(::UnityEngine::AndroidJavaObject*  value) ;

static inline ::UnityEngine::AndroidJavaObject* getStaticF_s_JavaPlayAssetDeliveryWrapper() ;

static inline void setStaticF_s_ApiMissing(bool  value) ;

static inline bool getStaticF_s_ApiMissing() ;

/// @brief Method GetAssetPackManager addr 0x2c8cc2c size 0x318 virtual false final false
static inline ::UnityEngine::AndroidJavaObject* GetAssetPackManager() ;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPacks", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidAssetPacks(AndroidAssetPacks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPacks", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidAssetPacks(AndroidAssetPacks const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AndroidAssetPacks()  = default;
public:


// Fields

// Static field s_JavaPlayAssetDeliveryWrapper

// Static field s_ApiMissing


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidAssetPacks, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Android
NEED_NO_BOX(::UnityEngine::Android::AndroidAssetPacks);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPacks*, "UnityEngine.Android", "AndroidAssetPacks");
NEED_NO_BOX(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback*, "UnityEngine.Android", "AndroidAssetPacks/AssetPackManagerDownloadStatusCallback");
NEED_NO_BOX(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback*, "UnityEngine.Android", "AndroidAssetPacks/AssetPackManagerMobileDataConfirmationCallback");
NEED_NO_BOX(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerStatusQueryCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::__AndroidAssetPacks__AssetPackManagerStatusQueryCallback*, "UnityEngine.Android", "AndroidAssetPacks/AssetPackManagerStatusQueryCallback");
