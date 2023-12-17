#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetBundleRequestOptions)
namespace UnityEngine::ResourceManagement::ResourceLocations {
class ILocationSizeData;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct AssetLoadMode;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class AssetBundleRequestOptions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions);
// Type: UnityEngine.ResourceManagement.ResourceProviders::AssetBundleRequestOptions
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13991))
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::AssetBundleRequestOptions*
class CORDL_TYPE AssetBundleRequestOptions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field m_Hash offset 0x10
 __declspec(property(get=__get_m_Hash, put=__set_m_Hash)) ::StringW  m_Hash;

/// @brief Field m_Crc offset 0x18
 __declspec(property(get=__get_m_Crc, put=__set_m_Crc)) uint32_t  m_Crc;

/// @brief Field m_Timeout offset 0x1c
 __declspec(property(get=__get_m_Timeout, put=__set_m_Timeout)) int32_t  m_Timeout;

/// @brief Field m_ChunkedTransfer offset 0x20
 __declspec(property(get=__get_m_ChunkedTransfer, put=__set_m_ChunkedTransfer)) bool  m_ChunkedTransfer;

/// @brief Field m_RedirectLimit offset 0x24
 __declspec(property(get=__get_m_RedirectLimit, put=__set_m_RedirectLimit)) int32_t  m_RedirectLimit;

/// @brief Field m_RetryCount offset 0x28
 __declspec(property(get=__get_m_RetryCount, put=__set_m_RetryCount)) int32_t  m_RetryCount;

/// @brief Field m_BundleName offset 0x30
 __declspec(property(get=__get_m_BundleName, put=__set_m_BundleName)) ::StringW  m_BundleName;

/// @brief Field m_AssetLoadMode offset 0x38
 __declspec(property(get=__get_m_AssetLoadMode, put=__set_m_AssetLoadMode)) ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode  m_AssetLoadMode;

/// @brief Field m_BundleSize offset 0x40
 __declspec(property(get=__get_m_BundleSize, put=__set_m_BundleSize)) int64_t  m_BundleSize;

/// @brief Field m_UseCrcForCachedBundles offset 0x48
 __declspec(property(get=__get_m_UseCrcForCachedBundles, put=__set_m_UseCrcForCachedBundles)) bool  m_UseCrcForCachedBundles;

/// @brief Field m_UseUWRForLocalBundles offset 0x49
 __declspec(property(get=__get_m_UseUWRForLocalBundles, put=__set_m_UseUWRForLocalBundles)) bool  m_UseUWRForLocalBundles;

/// @brief Field m_ClearOtherCachedVersionsWhenLoaded offset 0x4a
 __declspec(property(get=__get_m_ClearOtherCachedVersionsWhenLoaded, put=__set_m_ClearOtherCachedVersionsWhenLoaded)) bool  m_ClearOtherCachedVersionsWhenLoaded;

 __declspec(property(get=get_Hash, put=set_Hash)) ::StringW  Hash;

 __declspec(property(get=get_Crc, put=set_Crc)) uint32_t  Crc;

 __declspec(property(get=get_Timeout, put=set_Timeout)) int32_t  Timeout;

 __declspec(property(get=get_ChunkedTransfer, put=set_ChunkedTransfer)) bool  ChunkedTransfer;

 __declspec(property(get=get_RedirectLimit, put=set_RedirectLimit)) int32_t  RedirectLimit;

 __declspec(property(get=get_RetryCount, put=set_RetryCount)) int32_t  RetryCount;

 __declspec(property(get=get_BundleName, put=set_BundleName)) ::StringW  BundleName;

 __declspec(property(get=get_AssetLoadMode, put=set_AssetLoadMode)) ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode  AssetLoadMode;

 __declspec(property(get=get_BundleSize, put=set_BundleSize)) int64_t  BundleSize;

 __declspec(property(get=get_UseCrcForCachedBundle, put=set_UseCrcForCachedBundle)) bool  UseCrcForCachedBundle;

 __declspec(property(get=get_UseUnityWebRequestForLocalBundles, put=set_UseUnityWebRequestForLocalBundles)) bool  UseUnityWebRequestForLocalBundles;

 __declspec(property(get=get_ClearOtherCachedVersionsWhenLoaded, put=set_ClearOtherCachedVersionsWhenLoaded)) bool  ClearOtherCachedVersionsWhenLoaded;

/// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData"
constexpr operator  ::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData*() noexcept;

constexpr void __set_m_Hash(::StringW  value) ;

constexpr ::StringW& __get_m_Hash() ;

constexpr ::StringW const& __get_m_Hash() const;

constexpr void __set_m_Crc(uint32_t  value) ;

constexpr uint32_t& __get_m_Crc() ;

constexpr uint32_t const& __get_m_Crc() const;

constexpr void __set_m_Timeout(int32_t  value) ;

constexpr int32_t& __get_m_Timeout() ;

constexpr int32_t const& __get_m_Timeout() const;

constexpr void __set_m_ChunkedTransfer(bool  value) ;

constexpr bool& __get_m_ChunkedTransfer() ;

constexpr bool const& __get_m_ChunkedTransfer() const;

constexpr void __set_m_RedirectLimit(int32_t  value) ;

constexpr int32_t& __get_m_RedirectLimit() ;

constexpr int32_t const& __get_m_RedirectLimit() const;

constexpr void __set_m_RetryCount(int32_t  value) ;

constexpr int32_t& __get_m_RetryCount() ;

constexpr int32_t const& __get_m_RetryCount() const;

constexpr void __set_m_BundleName(::StringW  value) ;

constexpr ::StringW& __get_m_BundleName() ;

constexpr ::StringW const& __get_m_BundleName() const;

constexpr void __set_m_AssetLoadMode(::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode& __get_m_AssetLoadMode() ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode const& __get_m_AssetLoadMode() const;

constexpr void __set_m_BundleSize(int64_t  value) ;

constexpr int64_t& __get_m_BundleSize() ;

constexpr int64_t const& __get_m_BundleSize() const;

constexpr void __set_m_UseCrcForCachedBundles(bool  value) ;

constexpr bool& __get_m_UseCrcForCachedBundles() ;

constexpr bool const& __get_m_UseCrcForCachedBundles() const;

constexpr void __set_m_UseUWRForLocalBundles(bool  value) ;

constexpr bool& __get_m_UseUWRForLocalBundles() ;

constexpr bool const& __get_m_UseUWRForLocalBundles() const;

constexpr void __set_m_ClearOtherCachedVersionsWhenLoaded(bool  value) ;

constexpr bool& __get_m_ClearOtherCachedVersionsWhenLoaded() ;

constexpr bool const& __get_m_ClearOtherCachedVersionsWhenLoaded() const;

/// @brief Method get_Hash addr 0x2bd3888 size 0x8 virtual false final false
inline ::StringW get_Hash() ;

/// @brief Method set_Hash addr 0x2bd3890 size 0x8 virtual false final false
inline void set_Hash(::StringW  value) ;

/// @brief Method get_Crc addr 0x2bd3898 size 0x8 virtual false final false
inline uint32_t get_Crc() ;

/// @brief Method set_Crc addr 0x2bd38a0 size 0x8 virtual false final false
inline void set_Crc(uint32_t  value) ;

/// @brief Method get_Timeout addr 0x2bd38a8 size 0x8 virtual false final false
inline int32_t get_Timeout() ;

/// @brief Method set_Timeout addr 0x2bd38b0 size 0x8 virtual false final false
inline void set_Timeout(int32_t  value) ;

/// @brief Method get_ChunkedTransfer addr 0x2bd38b8 size 0x8 virtual false final false
inline bool get_ChunkedTransfer() ;

/// @brief Method set_ChunkedTransfer addr 0x2bd38c0 size 0xc virtual false final false
inline void set_ChunkedTransfer(bool  value) ;

/// @brief Method get_RedirectLimit addr 0x2bd38cc size 0x8 virtual false final false
inline int32_t get_RedirectLimit() ;

/// @brief Method set_RedirectLimit addr 0x2bd38d4 size 0x8 virtual false final false
inline void set_RedirectLimit(int32_t  value) ;

/// @brief Method get_RetryCount addr 0x2bd38dc size 0x8 virtual false final false
inline int32_t get_RetryCount() ;

/// @brief Method set_RetryCount addr 0x2bd38e4 size 0x8 virtual false final false
inline void set_RetryCount(int32_t  value) ;

/// @brief Method get_BundleName addr 0x2bd38ec size 0x8 virtual false final false
inline ::StringW get_BundleName() ;

/// @brief Method set_BundleName addr 0x2bd38f4 size 0x8 virtual false final false
inline void set_BundleName(::StringW  value) ;

/// @brief Method get_AssetLoadMode addr 0x2bd38fc size 0x8 virtual false final false
inline ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode get_AssetLoadMode() ;

/// @brief Method set_AssetLoadMode addr 0x2bd3904 size 0x8 virtual false final false
inline void set_AssetLoadMode(::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode  value) ;

/// @brief Method get_BundleSize addr 0x2bd390c size 0x8 virtual false final false
inline int64_t get_BundleSize() ;

/// @brief Method set_BundleSize addr 0x2bd3914 size 0x8 virtual false final false
inline void set_BundleSize(int64_t  value) ;

/// @brief Method get_UseCrcForCachedBundle addr 0x2bd391c size 0x8 virtual false final false
inline bool get_UseCrcForCachedBundle() ;

/// @brief Method set_UseCrcForCachedBundle addr 0x2bd3924 size 0xc virtual false final false
inline void set_UseCrcForCachedBundle(bool  value) ;

/// @brief Method get_UseUnityWebRequestForLocalBundles addr 0x2bd3930 size 0x8 virtual false final false
inline bool get_UseUnityWebRequestForLocalBundles() ;

/// @brief Method set_UseUnityWebRequestForLocalBundles addr 0x2bd3938 size 0xc virtual false final false
inline void set_UseUnityWebRequestForLocalBundles(bool  value) ;

/// @brief Method get_ClearOtherCachedVersionsWhenLoaded addr 0x2bd3944 size 0x8 virtual false final false
inline bool get_ClearOtherCachedVersionsWhenLoaded() ;

/// @brief Method set_ClearOtherCachedVersionsWhenLoaded addr 0x2bd394c size 0xc virtual false final false
inline void set_ClearOtherCachedVersionsWhenLoaded(bool  value) ;

/// @brief Method ComputeSize addr 0x2bd3958 size 0x148 virtual true final false
inline int64_t ComputeSize(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::ResourceManagement::ResourceManager*  resourceManager) ;

static inline ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions* New_ctor() ;

/// @brief Method .ctor addr 0x2bd3aa0 size 0x58 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequestOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetBundleRequestOptions(AssetBundleRequestOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequestOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetBundleRequestOptions(AssetBundleRequestOptions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssetBundleRequestOptions()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions, 0x50>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*, "UnityEngine.ResourceManagement.ResourceProviders", "AssetBundleRequestOptions");
