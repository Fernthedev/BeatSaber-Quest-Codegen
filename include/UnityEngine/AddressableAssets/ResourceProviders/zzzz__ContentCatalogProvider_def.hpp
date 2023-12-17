#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContentCatalogProvider)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::ResourceManagement {
class WebRequestQueueOperation;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ContentCatalogData;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class AssetBundleCreateRequest;
}
namespace UnityEngine {
class AssetBundleRequest;
}
namespace UnityEngine::AddressableAssets::ResourceProviders {
class __ContentCatalogProvider__InternalOp;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::AddressableAssets::ResourceProviders {
struct __ContentCatalogProvider__DependencyHashIndex;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace GlobalNamespace {
class __ContentCatalogProvider__InternalOp__BundledCatalog;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::ResourceProviders {
struct __ContentCatalogProvider__DependencyHashIndex;
}
namespace GlobalNamespace {
class __ContentCatalogProvider__InternalOp__BundledCatalog;
}
namespace UnityEngine::AddressableAssets::ResourceProviders {
class ContentCatalogProvider;
}
namespace UnityEngine::AddressableAssets::ResourceProviders {
class __ContentCatalogProvider__InternalOp;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex);
MARK_REF_PTR_T(::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp);
// Type: ::DependencyHashIndex
namespace UnityEngine::AddressableAssets::ResourceProviders {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14104))
// CS Name: ::ContentCatalogProvider::DependencyHashIndex
struct CORDL_TYPE __ContentCatalogProvider__DependencyHashIndex : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ContentCatalogProvider__DependencyHashIndex_Unwrapped
enum struct ____ContentCatalogProvider__DependencyHashIndex_Unwrapped : int32_t {
__E_Remote = static_cast<int32_t>(0x0),
__E_Cache = static_cast<int32_t>(0x1),
__E_Count = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Remote value: static_cast<int32_t>(0x0)
static ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex const Remote;

/// @brief Field Cache value: static_cast<int32_t>(0x1)
static ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex const Cache;

/// @brief Field Count value: static_cast<int32_t>(0x2)
static ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex const Count;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ContentCatalogProvider__DependencyHashIndex_Unwrapped () const noexcept {
return std::bit_cast<____ContentCatalogProvider__DependencyHashIndex_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ContentCatalogProvider__DependencyHashIndex(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ContentCatalogProvider__DependencyHashIndex(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ContentCatalogProvider__DependencyHashIndex()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets::ResourceProviders
// Type: ::BundledCatalog
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14105))
// CS Name: ::ContentCatalogProvider::InternalOp::BundledCatalog*
class CORDL_TYPE __ContentCatalogProvider__InternalOp__BundledCatalog : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Object)]{};

/// @brief Field m_BundlePath offset 0x10
 __declspec(property(get=__get_m_BundlePath, put=__set_m_BundlePath)) ::StringW  m_BundlePath;

/// @brief Field m_OpInProgress offset 0x18
 __declspec(property(get=__get_m_OpInProgress, put=__set_m_OpInProgress)) bool  m_OpInProgress;

/// @brief Field m_LoadBundleRequest offset 0x20
 __declspec(property(get=__get_m_LoadBundleRequest, put=__set_m_LoadBundleRequest)) ::UnityEngine::AssetBundleCreateRequest*  m_LoadBundleRequest;

/// @brief Field m_CatalogAssetBundle offset 0x28
 __declspec(property(get=__get_m_CatalogAssetBundle, put=__set_m_CatalogAssetBundle)) ::UnityEngine::AssetBundle*  m_CatalogAssetBundle;

/// @brief Field m_LoadTextAssetRequest offset 0x30
 __declspec(property(get=__get_m_LoadTextAssetRequest, put=__set_m_LoadTextAssetRequest)) ::UnityEngine::AssetBundleRequest*  m_LoadTextAssetRequest;

/// @brief Field m_CatalogData offset 0x38
 __declspec(property(get=__get_m_CatalogData, put=__set_m_CatalogData)) ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*  m_CatalogData;

/// @brief Field m_WebRequestQueueOperation offset 0x40
 __declspec(property(get=__get_m_WebRequestQueueOperation, put=__set_m_WebRequestQueueOperation)) ::UnityEngine::ResourceManagement::WebRequestQueueOperation*  m_WebRequestQueueOperation;

/// @brief Field m_RequestOperation offset 0x48
 __declspec(property(get=__get_m_RequestOperation, put=__set_m_RequestOperation)) ::UnityEngine::AsyncOperation*  m_RequestOperation;

/// @brief Field m_WebRequestTimeout offset 0x50
 __declspec(property(get=__get_m_WebRequestTimeout, put=__set_m_WebRequestTimeout)) int32_t  m_WebRequestTimeout;

/// @brief Field OnLoaded offset 0x58
 __declspec(property(get=__get_OnLoaded, put=__set_OnLoaded)) ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*  OnLoaded;

 __declspec(property(get=get_OpInProgress)) bool  OpInProgress;

 __declspec(property(get=get_OpIsSuccess)) bool  OpIsSuccess;

constexpr void __set_m_BundlePath(::StringW  value) ;

constexpr ::StringW& __get_m_BundlePath() ;

constexpr ::StringW const& __get_m_BundlePath() const;

constexpr void __set_m_OpInProgress(bool  value) ;

constexpr bool& __get_m_OpInProgress() ;

constexpr bool const& __get_m_OpInProgress() const;

constexpr void __set_m_LoadBundleRequest(::UnityEngine::AssetBundleCreateRequest*  value) ;

constexpr ::UnityEngine::AssetBundleCreateRequest* __get_m_LoadBundleRequest() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleCreateRequest*> __get_m_LoadBundleRequest() const;

constexpr void __set_m_CatalogAssetBundle(::UnityEngine::AssetBundle*  value) ;

constexpr ::UnityEngine::AssetBundle* __get_m_CatalogAssetBundle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundle*> __get_m_CatalogAssetBundle() const;

constexpr void __set_m_LoadTextAssetRequest(::UnityEngine::AssetBundleRequest*  value) ;

constexpr ::UnityEngine::AssetBundleRequest* __get_m_LoadTextAssetRequest() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleRequest*> __get_m_LoadTextAssetRequest() const;

constexpr void __set_m_CatalogData(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*  value) ;

constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* __get_m_CatalogData() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> __get_m_CatalogData() const;

constexpr void __set_m_WebRequestQueueOperation(::UnityEngine::ResourceManagement::WebRequestQueueOperation*  value) ;

constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation* __get_m_WebRequestQueueOperation() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::WebRequestQueueOperation*> __get_m_WebRequestQueueOperation() const;

constexpr void __set_m_RequestOperation(::UnityEngine::AsyncOperation*  value) ;

constexpr ::UnityEngine::AsyncOperation* __get_m_RequestOperation() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> __get_m_RequestOperation() const;

constexpr void __set_m_WebRequestTimeout(int32_t  value) ;

constexpr int32_t& __get_m_WebRequestTimeout() ;

constexpr int32_t const& __get_m_WebRequestTimeout() const;

constexpr void __set_OnLoaded(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* __get_OnLoaded() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*> __get_OnLoaded() const;

/// @brief Method add_OnLoaded addr 0x2a2bc48 size 0xb0 virtual false final false
inline void add_OnLoaded(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*  value) ;

/// @brief Method remove_OnLoaded addr 0x2a2c834 size 0xb0 virtual false final false
inline void remove_OnLoaded(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*  value) ;

/// @brief Method get_OpInProgress addr 0x2a2c8e4 size 0x8 virtual false final false
inline bool get_OpInProgress() ;

/// @brief Method get_OpIsSuccess addr 0x2a2c8ec size 0x20 virtual false final false
inline bool get_OpIsSuccess() ;

static inline ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog* New_ctor(::StringW  bundlePath, int32_t  webRequestTimeout) ;

/// @brief Method .ctor addr 0x2a2bb20 size 0x128 virtual false final false
inline void _ctor(::StringW  bundlePath, int32_t  webRequestTimeout) ;

/// @brief Method Finalize addr 0x2a2c90c size 0xa8 virtual true final false
inline void Finalize() ;

/// @brief Method Unload addr 0x2a2c9b4 size 0x28 virtual false final false
inline void Unload() ;

/// @brief Method LoadCatalogFromBundleAsync addr 0x2a2bcf8 size 0x294 virtual false final false
inline void LoadCatalogFromBundleAsync() ;

/// @brief Method WebRequestOperationCompleted addr 0x2a2c9dc size 0x1fc virtual false final false
inline void WebRequestOperationCompleted(::UnityEngine::AsyncOperation*  op) ;

/// @brief Method LoadTextAssetRequestComplete addr 0x2a2cbd8 size 0x198 virtual false final false
inline void LoadTextAssetRequestComplete(::UnityEngine::AsyncOperation*  op) ;

/// @brief Method WaitForCompletion addr 0x2a2b928 size 0xe4 virtual false final false
inline bool WaitForCompletion() ;

/// @brief Method <LoadCatalogFromBundleAsync>b__19_1 addr 0x2a2cd70 size 0x98 virtual false final false
inline void _LoadCatalogFromBundleAsync_b__19_1(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOp) ;

/// @brief Method <LoadCatalogFromBundleAsync>b__19_0 addr 0x2a2ce08 size 0x1d8 virtual false final false
inline void _LoadCatalogFromBundleAsync_b__19_0(::UnityEngine::AsyncOperation*  loadOp) ;

// Ctor Parameters [CppParam { name: "", ty: "__ContentCatalogProvider__InternalOp__BundledCatalog", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ContentCatalogProvider__InternalOp__BundledCatalog(__ContentCatalogProvider__InternalOp__BundledCatalog && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ContentCatalogProvider__InternalOp__BundledCatalog", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ContentCatalogProvider__InternalOp__BundledCatalog(__ContentCatalogProvider__InternalOp__BundledCatalog const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ContentCatalogProvider__InternalOp__BundledCatalog()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::InternalOp
namespace UnityEngine::AddressableAssets::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14106))
// CS Name: ::ContentCatalogProvider::InternalOp*
class CORDL_TYPE __ContentCatalogProvider__InternalOp : public ::System::Object {
public:
// Declarations
using BundledCatalog = ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::System::Object)]{};

/// @brief Field m_LocalDataPath offset 0x10
 __declspec(property(get=__get_m_LocalDataPath, put=__set_m_LocalDataPath)) ::StringW  m_LocalDataPath;

/// @brief Field m_RemoteHashValue offset 0x18
 __declspec(property(get=__get_m_RemoteHashValue, put=__set_m_RemoteHashValue)) ::StringW  m_RemoteHashValue;

/// @brief Field m_LocalHashValue offset 0x20
 __declspec(property(get=__get_m_LocalHashValue, put=__set_m_LocalHashValue)) ::StringW  m_LocalHashValue;

/// @brief Field m_ProviderInterface offset 0x28
 __declspec(property(get=__get_m_ProviderInterface, put=__set_m_ProviderInterface)) ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  m_ProviderInterface;

/// @brief Field m_ContentCatalogData offset 0x40
 __declspec(property(get=__get_m_ContentCatalogData, put=__set_m_ContentCatalogData)) ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*  m_ContentCatalogData;

/// @brief Field m_ContentCatalogDataLoadOp offset 0x48
 __declspec(property(get=__get_m_ContentCatalogDataLoadOp, put=__set_m_ContentCatalogDataLoadOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>  m_ContentCatalogDataLoadOp;

/// @brief Field m_BundledCatalog offset 0x68
 __declspec(property(get=__get_m_BundledCatalog, put=__set_m_BundledCatalog)) ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*  m_BundledCatalog;

/// @brief Field m_Retried offset 0x70
 __declspec(property(get=__get_m_Retried, put=__set_m_Retried)) bool  m_Retried;

/// @brief Field m_DisableCatalogUpdateOnStart offset 0x71
 __declspec(property(get=__get_m_DisableCatalogUpdateOnStart, put=__set_m_DisableCatalogUpdateOnStart)) bool  m_DisableCatalogUpdateOnStart;

/// @brief Field m_IsLocalCatalogInBundle offset 0x72
 __declspec(property(get=__get_m_IsLocalCatalogInBundle, put=__set_m_IsLocalCatalogInBundle)) bool  m_IsLocalCatalogInBundle;

constexpr void __set_m_LocalDataPath(::StringW  value) ;

constexpr ::StringW& __get_m_LocalDataPath() ;

constexpr ::StringW const& __get_m_LocalDataPath() const;

constexpr void __set_m_RemoteHashValue(::StringW  value) ;

constexpr ::StringW& __get_m_RemoteHashValue() ;

constexpr ::StringW const& __get_m_RemoteHashValue() const;

constexpr void __set_m_LocalHashValue(::StringW  value) ;

constexpr ::StringW& __get_m_LocalHashValue() ;

constexpr ::StringW const& __get_m_LocalHashValue() const;

constexpr void __set_m_ProviderInterface(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& __get_m_ProviderInterface() ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const& __get_m_ProviderInterface() const;

constexpr void __set_m_ContentCatalogData(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*  value) ;

constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* __get_m_ContentCatalogData() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> __get_m_ContentCatalogData() const;

constexpr void __set_m_ContentCatalogDataLoadOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>& __get_m_ContentCatalogDataLoadOp() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*> const& __get_m_ContentCatalogDataLoadOp() const;

constexpr void __set_m_BundledCatalog(::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*  value) ;

constexpr ::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog* __get_m_BundledCatalog() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*> __get_m_BundledCatalog() const;

constexpr void __set_m_Retried(bool  value) ;

constexpr bool& __get_m_Retried() ;

constexpr bool const& __get_m_Retried() const;

constexpr void __set_m_DisableCatalogUpdateOnStart(bool  value) ;

constexpr bool& __get_m_DisableCatalogUpdateOnStart() ;

constexpr bool const& __get_m_DisableCatalogUpdateOnStart() const;

constexpr void __set_m_IsLocalCatalogInBundle(bool  value) ;

constexpr bool& __get_m_IsLocalCatalogInBundle() ;

constexpr bool const& __get_m_IsLocalCatalogInBundle() const;

/// @brief Method Start addr 0x2a2aa3c size 0x17c virtual false final false
inline void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  providerInterface, bool  disableCatalogUpdateOnStart, bool  isLocalCatalogInBundle) ;

/// @brief Method WaitForCompletionCallback addr 0x2a2b860 size 0xc8 virtual false final false
inline bool WaitForCompletionCallback() ;

/// @brief Method Release addr 0x2a2a8c8 size 0x10 virtual false final false
inline void Release() ;

/// @brief Method CanLoadCatalogFromBundle addr 0x2a2b300 size 0xc4 virtual false final false
inline bool CanLoadCatalogFromBundle(::StringW  idToLoad, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location) ;

/// @brief Method LoadCatalog addr 0x2a2b3c4 size 0x49c virtual false final false
inline void LoadCatalog(::StringW  idToLoad, bool  loadCatalogFromLocalBundle) ;

/// @brief Method CatalogLoadOpCompleteCallback addr 0x2a2bf8c size 0xe0 virtual false final false
inline void CatalogLoadOpCompleteCallback(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>  op) ;

/// @brief Method GetTransformedInternalId addr 0x2a2ba64 size 0xbc virtual false final false
inline ::StringW GetTransformedInternalId(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  loc) ;

/// @brief Method DetermineIdToLoad addr 0x2a2abb8 size 0x748 virtual false final false
inline ::StringW DetermineIdToLoad(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::System::Collections::Generic::IList_1<::System::Object*>*  dependencyObjects, bool  disableCatalogUpdateOnStart) ;

/// @brief Method OnCatalogLoaded addr 0x2a2c06c size 0x7c0 virtual false final false
inline void OnCatalogLoaded(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*  ccd) ;

static inline ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp* New_ctor() ;

/// @brief Method .ctor addr 0x2a2aa34 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <LoadCatalog>b__14_0 addr 0x2a2c82c size 0x8 virtual false final false
inline void _LoadCatalog_b__14_0(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*  ccd) ;

// Ctor Parameters [CppParam { name: "", ty: "__ContentCatalogProvider__InternalOp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ContentCatalogProvider__InternalOp(__ContentCatalogProvider__InternalOp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ContentCatalogProvider__InternalOp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ContentCatalogProvider__InternalOp(__ContentCatalogProvider__InternalOp const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ContentCatalogProvider__InternalOp()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp, 0x78>, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets::ResourceProviders
// Type: UnityEngine.AddressableAssets.ResourceProviders::ContentCatalogProvider
namespace UnityEngine::AddressableAssets::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14013))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14107))
// CS Name: ::UnityEngine.AddressableAssets.ResourceProviders::ContentCatalogProvider*
class CORDL_TYPE ContentCatalogProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
// Declarations
using InternalOp = ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp;

using DependencyHashIndex = ::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase)]{};

/// @brief Field DisableCatalogUpdateOnStart offset 0x1c
 __declspec(property(get=__get_DisableCatalogUpdateOnStart, put=__set_DisableCatalogUpdateOnStart)) bool  DisableCatalogUpdateOnStart;

/// @brief Field IsLocalCatalogInBundle offset 0x1d
 __declspec(property(get=__get_IsLocalCatalogInBundle, put=__set_IsLocalCatalogInBundle)) bool  IsLocalCatalogInBundle;

/// @brief Field m_LocationToCatalogLoadOpMap offset 0x20
 __declspec(property(get=__get_m_LocationToCatalogLoadOpMap, put=__set_m_LocationToCatalogLoadOpMap)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>*  m_LocationToCatalogLoadOpMap;

/// @brief Field m_RM offset 0x28
 __declspec(property(get=__get_m_RM, put=__set_m_RM)) ::UnityEngine::ResourceManagement::ResourceManager*  m_RM;

constexpr void __set_DisableCatalogUpdateOnStart(bool  value) ;

constexpr bool& __get_DisableCatalogUpdateOnStart() ;

constexpr bool const& __get_DisableCatalogUpdateOnStart() const;

constexpr void __set_IsLocalCatalogInBundle(bool  value) ;

constexpr bool& __get_IsLocalCatalogInBundle() ;

constexpr bool const& __get_IsLocalCatalogInBundle() const;

constexpr void __set_m_LocationToCatalogLoadOpMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>* __get_m_LocationToCatalogLoadOpMap() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*>*> __get_m_LocationToCatalogLoadOpMap() const;

constexpr void __set_m_RM(::UnityEngine::ResourceManagement::ResourceManager*  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceManager* __get_m_RM() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceManager*> __get_m_RM() const;

static inline ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider* New_ctor(::UnityEngine::ResourceManagement::ResourceManager*  resourceManagerInstance) ;

/// @brief Method .ctor addr 0x2a2a754 size 0x98 virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::ResourceManager*  resourceManagerInstance) ;

/// @brief Method Release addr 0x2a2a7ec size 0xdc virtual true final false
inline void Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::System::Object*  obj) ;

/// @brief Method Provide addr 0x2a2a8d8 size 0x15c virtual true final false
inline void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  providerInterface) ;

// Ctor Parameters [CppParam { name: "", ty: "ContentCatalogProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContentCatalogProvider(ContentCatalogProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContentCatalogProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContentCatalogProvider(ContentCatalogProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContentCatalogProvider()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets::ResourceProviders
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__DependencyHashIndex, "UnityEngine.AddressableAssets.ResourceProviders", "ContentCatalogProvider/DependencyHashIndex");
NEED_NO_BOX(::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ContentCatalogProvider__InternalOp__BundledCatalog*, "UnityEngine.AddressableAssets.ResourceProviders", "ContentCatalogProvider/InternalOp/BundledCatalog");
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*, "UnityEngine.AddressableAssets.ResourceProviders", "ContentCatalogProvider");
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceProviders::__ContentCatalogProvider__InternalOp*, "UnityEngine.AddressableAssets.ResourceProviders", "ContentCatalogProvider/InternalOp");
