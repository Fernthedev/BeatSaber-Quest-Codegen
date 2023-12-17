#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssetBundleResource)
namespace UnityEngine::ResourceManagement::ResourceProviders {
class AssetBundleRequestOptions;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace UnityEngine::Networking {
class DownloadHandlerAssetBundle;
}
namespace UnityEngine::ResourceManagement {
class WebRequestQueueOperation;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IAssetBundleResource;
}
namespace UnityEngine {
class AssetBundleRequest;
}
namespace UnityEngine::ResourceManagement {
class IUpdateReceiver;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct __AssetBundleResource__LoadType;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct __AssetBundleResource__LoadType;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class AssetBundleResource;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource);
// Type: ::LoadType
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13992))
// CS Name: ::AssetBundleResource::LoadType
struct CORDL_TYPE __AssetBundleResource__LoadType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____AssetBundleResource__LoadType_Unwrapped
enum struct ____AssetBundleResource__LoadType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Local = static_cast<int32_t>(0x1),
__E_Web = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType const None;

/// @brief Field Local value: static_cast<int32_t>(0x1)
static ::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType const Local;

/// @brief Field Web value: static_cast<int32_t>(0x2)
static ::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType const Web;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____AssetBundleResource__LoadType_Unwrapped () const noexcept {
return std::bit_cast<____AssetBundleResource__LoadType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __AssetBundleResource__LoadType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AssetBundleResource__LoadType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AssetBundleResource__LoadType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
// Type: UnityEngine.ResourceManagement.ResourceProviders::AssetBundleResource
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13993))
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::AssetBundleResource*
class CORDL_TYPE AssetBundleResource : public ::System::Object {
public:
// Declarations
using LoadType = ::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::System::Object)]{};

/// @brief Field k_WaitForWebRequestMainThreadSleep offset 0x0
static constexpr int32_t  k_WaitForWebRequestMainThreadSleep{static_cast<int32_t>(0x1)};

/// @brief Field m_AssetBundle offset 0x10
 __declspec(property(get=__get_m_AssetBundle, put=__set_m_AssetBundle)) ::UnityEngine::AssetBundle*  m_AssetBundle;

/// @brief Field m_downloadHandler offset 0x18
 __declspec(property(get=__get_m_downloadHandler, put=__set_m_downloadHandler)) ::UnityEngine::Networking::DownloadHandlerAssetBundle*  m_downloadHandler;

/// @brief Field m_RequestOperation offset 0x20
 __declspec(property(get=__get_m_RequestOperation, put=__set_m_RequestOperation)) ::UnityEngine::AsyncOperation*  m_RequestOperation;

/// @brief Field m_WebRequestQueueOperation offset 0x28
 __declspec(property(get=__get_m_WebRequestQueueOperation, put=__set_m_WebRequestQueueOperation)) ::UnityEngine::ResourceManagement::WebRequestQueueOperation*  m_WebRequestQueueOperation;

/// @brief Field m_ProvideHandle offset 0x30
 __declspec(property(get=__get_m_ProvideHandle, put=__set_m_ProvideHandle)) ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  m_ProvideHandle;

/// @brief Field m_Options offset 0x48
 __declspec(property(get=__get_m_Options, put=__set_m_Options)) ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*  m_Options;

/// @brief Field m_WebRequestCompletedCallbackCalled offset 0x50
 __declspec(property(get=__get_m_WebRequestCompletedCallbackCalled, put=__set_m_WebRequestCompletedCallbackCalled)) bool  m_WebRequestCompletedCallbackCalled;

/// @brief Field m_Retries offset 0x54
 __declspec(property(get=__get_m_Retries, put=__set_m_Retries)) int32_t  m_Retries;

/// @brief Field m_BytesToDownload offset 0x58
 __declspec(property(get=__get_m_BytesToDownload, put=__set_m_BytesToDownload)) int64_t  m_BytesToDownload;

/// @brief Field m_DownloadedBytes offset 0x60
 __declspec(property(get=__get_m_DownloadedBytes, put=__set_m_DownloadedBytes)) int64_t  m_DownloadedBytes;

/// @brief Field m_Completed offset 0x68
 __declspec(property(get=__get_m_Completed, put=__set_m_Completed)) bool  m_Completed;

/// @brief Field m_TransformedInternalId offset 0x70
 __declspec(property(get=__get_m_TransformedInternalId, put=__set_m_TransformedInternalId)) ::StringW  m_TransformedInternalId;

/// @brief Field m_PreloadRequest offset 0x78
 __declspec(property(get=__get_m_PreloadRequest, put=__set_m_PreloadRequest)) ::UnityEngine::AssetBundleRequest*  m_PreloadRequest;

/// @brief Field m_PreloadCompleted offset 0x80
 __declspec(property(get=__get_m_PreloadCompleted, put=__set_m_PreloadCompleted)) bool  m_PreloadCompleted;

/// @brief Field m_LastDownloadedByteCount offset 0x88
 __declspec(property(get=__get_m_LastDownloadedByteCount, put=__set_m_LastDownloadedByteCount)) uint64_t  m_LastDownloadedByteCount;

/// @brief Field m_TimeoutTimer offset 0x90
 __declspec(property(get=__get_m_TimeoutTimer, put=__set_m_TimeoutTimer)) float_t  m_TimeoutTimer;

/// @brief Field m_TimeoutOverFrames offset 0x94
 __declspec(property(get=__get_m_TimeoutOverFrames, put=__set_m_TimeoutOverFrames)) int32_t  m_TimeoutOverFrames;

 __declspec(property(get=get_HasTimedOut)) bool  HasTimedOut;

 __declspec(property(get=get_BytesToDownload)) int64_t  BytesToDownload;

/// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource"
constexpr operator  ::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*() noexcept;

/// @brief Convert operator to "::UnityEngine::ResourceManagement::IUpdateReceiver"
constexpr operator  ::UnityEngine::ResourceManagement::IUpdateReceiver*() noexcept;

constexpr void __set_m_AssetBundle(::UnityEngine::AssetBundle*  value) ;

constexpr ::UnityEngine::AssetBundle* __get_m_AssetBundle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundle*> __get_m_AssetBundle() const;

constexpr void __set_m_downloadHandler(::UnityEngine::Networking::DownloadHandlerAssetBundle*  value) ;

constexpr ::UnityEngine::Networking::DownloadHandlerAssetBundle* __get_m_downloadHandler() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::DownloadHandlerAssetBundle*> __get_m_downloadHandler() const;

constexpr void __set_m_RequestOperation(::UnityEngine::AsyncOperation*  value) ;

constexpr ::UnityEngine::AsyncOperation* __get_m_RequestOperation() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> __get_m_RequestOperation() const;

constexpr void __set_m_WebRequestQueueOperation(::UnityEngine::ResourceManagement::WebRequestQueueOperation*  value) ;

constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation* __get_m_WebRequestQueueOperation() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::WebRequestQueueOperation*> __get_m_WebRequestQueueOperation() const;

constexpr void __set_m_ProvideHandle(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& __get_m_ProvideHandle() ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const& __get_m_ProvideHandle() const;

constexpr void __set_m_Options(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions* __get_m_Options() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*> __get_m_Options() const;

constexpr void __set_m_WebRequestCompletedCallbackCalled(bool  value) ;

constexpr bool& __get_m_WebRequestCompletedCallbackCalled() ;

constexpr bool const& __get_m_WebRequestCompletedCallbackCalled() const;

constexpr void __set_m_Retries(int32_t  value) ;

constexpr int32_t& __get_m_Retries() ;

constexpr int32_t const& __get_m_Retries() const;

constexpr void __set_m_BytesToDownload(int64_t  value) ;

constexpr int64_t& __get_m_BytesToDownload() ;

constexpr int64_t const& __get_m_BytesToDownload() const;

constexpr void __set_m_DownloadedBytes(int64_t  value) ;

constexpr int64_t& __get_m_DownloadedBytes() ;

constexpr int64_t const& __get_m_DownloadedBytes() const;

constexpr void __set_m_Completed(bool  value) ;

constexpr bool& __get_m_Completed() ;

constexpr bool const& __get_m_Completed() const;

constexpr void __set_m_TransformedInternalId(::StringW  value) ;

constexpr ::StringW& __get_m_TransformedInternalId() ;

constexpr ::StringW const& __get_m_TransformedInternalId() const;

constexpr void __set_m_PreloadRequest(::UnityEngine::AssetBundleRequest*  value) ;

constexpr ::UnityEngine::AssetBundleRequest* __get_m_PreloadRequest() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleRequest*> __get_m_PreloadRequest() const;

constexpr void __set_m_PreloadCompleted(bool  value) ;

constexpr bool& __get_m_PreloadCompleted() ;

constexpr bool const& __get_m_PreloadCompleted() const;

constexpr void __set_m_LastDownloadedByteCount(uint64_t  value) ;

constexpr uint64_t& __get_m_LastDownloadedByteCount() ;

constexpr uint64_t const& __get_m_LastDownloadedByteCount() const;

constexpr void __set_m_TimeoutTimer(float_t  value) ;

constexpr float_t& __get_m_TimeoutTimer() ;

constexpr float_t const& __get_m_TimeoutTimer() const;

constexpr void __set_m_TimeoutOverFrames(int32_t  value) ;

constexpr int32_t& __get_m_TimeoutOverFrames() ;

constexpr int32_t const& __get_m_TimeoutOverFrames() const;

/// @brief Method get_HasTimedOut addr 0x2bd3af8 size 0x40 virtual false final false
inline bool get_HasTimedOut() ;

/// @brief Method get_BytesToDownload addr 0x2bd3b38 size 0x58 virtual false final false
inline int64_t get_BytesToDownload() ;

/// @brief Method CreateWebRequest addr 0x2bd3c3c size 0x28 virtual false final false
inline ::UnityEngine::Networking::UnityWebRequest* CreateWebRequest(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  loc) ;

/// @brief Method CreateWebRequest addr 0x2bd3c64 size 0x1bc virtual false final false
inline ::UnityEngine::Networking::UnityWebRequest* CreateWebRequest(::StringW  url) ;

/// @brief Method GetAssetPreloadRequest addr 0x2bd3e20 size 0x124 virtual false final false
inline ::UnityEngine::AssetBundleRequest* GetAssetPreloadRequest() ;

/// @brief Method PercentComplete addr 0x2bd403c size 0x18 virtual false final false
inline float_t PercentComplete() ;

/// @brief Method GetDownloadStatus addr 0x2bd4054 size 0x150 virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus() ;

/// @brief Method GetAssetBundle addr 0x2bd3f44 size 0xf8 virtual true final true
inline ::UnityEngine::AssetBundle* GetAssetBundle() ;

/// @brief Method Start addr 0x2bd41a4 size 0x238 virtual false final false
inline void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  provideHandle) ;

/// @brief Method WaitForCompletionHandler addr 0x2bd4970 size 0x240 virtual false final false
inline bool WaitForCompletionHandler() ;

/// @brief Method AddCallbackInvokeIfDone addr 0x2bd51a0 size 0x60 virtual false final false
inline void AddCallbackInvokeIfDone(::UnityEngine::AsyncOperation*  operation, ::System::Action_1<::UnityEngine::AsyncOperation*>*  callback) ;

/// @brief Method GetLoadInfo addr 0x2bd5200 size 0x30 virtual false final false
static inline void GetLoadInfo(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  handle, ByRef<::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType>  loadType, ByRef<::StringW>  path) ;

/// @brief Method GetLoadInfo addr 0x2bd5230 size 0x1f4 virtual false final false
static inline void GetLoadInfo(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::ResourceManagement::ResourceManager*  resourceManager, ByRef<::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType>  loadType, ByRef<::StringW>  path) ;

/// @brief Method BeginOperation addr 0x2bd45f8 size 0x378 virtual false final false
inline void BeginOperation() ;

/// @brief Method BeginWebRequestOperation addr 0x2bd5424 size 0xec virtual false final false
inline void BeginWebRequestOperation(::UnityEngine::AsyncOperation*  asyncOp) ;

/// @brief Method Update addr 0x2bd5510 size 0x120 virtual true final true
inline void Update(float_t  unscaledDeltaTime) ;

/// @brief Method LocalRequestOperationCompleted addr 0x2bd5630 size 0x8c virtual false final false
inline void LocalRequestOperationCompleted(::UnityEngine::AsyncOperation*  op) ;

/// @brief Method CompleteBundleLoad addr 0x2bd56bc size 0x13c virtual false final false
inline void CompleteBundleLoad(::UnityEngine::AssetBundle*  bundle) ;

/// @brief Method WebRequestOperationCompleted addr 0x2bd4bb0 size 0x5f0 virtual false final false
inline void WebRequestOperationCompleted(::UnityEngine::AsyncOperation*  op) ;

/// @brief Method Unload addr 0x2bd57f8 size 0xa0 virtual false final false
inline void Unload() ;

static inline ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource* New_ctor() ;

/// @brief Method .ctor addr 0x2bd5898 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetAssetPreloadRequest>b__25_0 addr 0x2bd58a0 size 0xc virtual false final false
inline void _GetAssetPreloadRequest_b__25_0(::UnityEngine::AsyncOperation*  operation) ;

/// @brief Method <BeginOperation>b__34_0 addr 0x2bd58ac size 0x4 virtual false final false
inline void _BeginOperation_b__34_0(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOp) ;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleResource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetBundleResource(AssetBundleResource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleResource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetBundleResource(AssetBundleResource const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssetBundleResource()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, 0x98>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::__AssetBundleResource__LoadType, "UnityEngine.ResourceManagement.ResourceProviders", "AssetBundleResource/LoadType");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*, "UnityEngine.ResourceManagement.ResourceProviders", "AssetBundleResource");
