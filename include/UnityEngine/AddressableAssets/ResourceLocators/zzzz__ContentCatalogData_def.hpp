#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContentCatalogData)
namespace UnityEngine::AddressableAssets::ResourceLocators {
struct __ContentCatalogData__Bucket;
}
namespace UnityEngine::ResourceManagement::Util {
struct SerializedType;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ResourceLocationMap;
}
namespace UnityEngine::ResourceManagement::Util {
struct ObjectInitializationData;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class __ContentCatalogData__CompactLocation;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ContentCatalogData;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class __ContentCatalogData__CompactLocation;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
struct __ContentCatalogData__Bucket;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation);
MARK_VAL_T(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__Bucket);
// Type: ::Bucket
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14109))
// CS Name: ::ContentCatalogData::Bucket
struct CORDL_TYPE __ContentCatalogData__Bucket : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field dataOffset offset 0x0
 __declspec(property(get=__get_dataOffset, put=__set_dataOffset)) int32_t  dataOffset;

/// @brief Field entries offset 0x8
 __declspec(property(get=__get_entries, put=__set_entries)) ::ArrayW<int32_t,::Array<int32_t>*>  entries;

constexpr void __set_dataOffset(int32_t  value) ;

constexpr int32_t& __get_dataOffset() ;

constexpr int32_t const& __get_dataOffset() const;

constexpr void __set_entries(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_entries() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_entries() const;

// Ctor Parameters [CppParam { name: "dataOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "entries", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: None }]
constexpr __ContentCatalogData__Bucket(int32_t  dataOffset, ::ArrayW<int32_t,::Array<int32_t>*>  entries) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ContentCatalogData__Bucket(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ContentCatalogData__Bucket()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__Bucket, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets::ResourceLocators
// Type: ::CompactLocation
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14110))
// CS Name: ::ContentCatalogData::CompactLocation*
class CORDL_TYPE __ContentCatalogData__CompactLocation : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field m_Locator offset 0x10
 __declspec(property(get=__get_m_Locator, put=__set_m_Locator)) ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*  m_Locator;

/// @brief Field m_InternalId offset 0x18
 __declspec(property(get=__get_m_InternalId, put=__set_m_InternalId)) ::StringW  m_InternalId;

/// @brief Field m_ProviderId offset 0x20
 __declspec(property(get=__get_m_ProviderId, put=__set_m_ProviderId)) ::StringW  m_ProviderId;

/// @brief Field m_Dependency offset 0x28
 __declspec(property(get=__get_m_Dependency, put=__set_m_Dependency)) ::System::Object*  m_Dependency;

/// @brief Field m_Data offset 0x30
 __declspec(property(get=__get_m_Data, put=__set_m_Data)) ::System::Object*  m_Data;

/// @brief Field m_HashCode offset 0x38
 __declspec(property(get=__get_m_HashCode, put=__set_m_HashCode)) int32_t  m_HashCode;

/// @brief Field m_DependencyHashCode offset 0x3c
 __declspec(property(get=__get_m_DependencyHashCode, put=__set_m_DependencyHashCode)) int32_t  m_DependencyHashCode;

/// @brief Field m_PrimaryKey offset 0x40
 __declspec(property(get=__get_m_PrimaryKey, put=__set_m_PrimaryKey)) ::StringW  m_PrimaryKey;

/// @brief Field m_Type offset 0x48
 __declspec(property(get=__get_m_Type, put=__set_m_Type)) ::System::Type*  m_Type;

 __declspec(property(get=get_InternalId)) ::StringW  InternalId;

 __declspec(property(get=get_ProviderId)) ::StringW  ProviderId;

 __declspec(property(get=get_Dependencies)) ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  Dependencies;

 __declspec(property(get=get_HasDependencies)) bool  HasDependencies;

 __declspec(property(get=get_DependencyHashCode)) int32_t  DependencyHashCode;

 __declspec(property(get=get_Data)) ::System::Object*  Data;

 __declspec(property(get=get_PrimaryKey, put=set_PrimaryKey)) ::StringW  PrimaryKey;

 __declspec(property(get=get_ResourceType)) ::System::Type*  ResourceType;

/// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation"
constexpr operator  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*() noexcept;

constexpr void __set_m_Locator(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*  value) ;

constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* __get_m_Locator() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*> __get_m_Locator() const;

constexpr void __set_m_InternalId(::StringW  value) ;

constexpr ::StringW& __get_m_InternalId() ;

constexpr ::StringW const& __get_m_InternalId() const;

constexpr void __set_m_ProviderId(::StringW  value) ;

constexpr ::StringW& __get_m_ProviderId() ;

constexpr ::StringW const& __get_m_ProviderId() const;

constexpr void __set_m_Dependency(::System::Object*  value) ;

constexpr ::System::Object* __get_m_Dependency() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_m_Dependency() const;

constexpr void __set_m_Data(::System::Object*  value) ;

constexpr ::System::Object* __get_m_Data() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_m_Data() const;

constexpr void __set_m_HashCode(int32_t  value) ;

constexpr int32_t& __get_m_HashCode() ;

constexpr int32_t const& __get_m_HashCode() const;

constexpr void __set_m_DependencyHashCode(int32_t  value) ;

constexpr int32_t& __get_m_DependencyHashCode() ;

constexpr int32_t const& __get_m_DependencyHashCode() const;

constexpr void __set_m_PrimaryKey(::StringW  value) ;

constexpr ::StringW& __get_m_PrimaryKey() ;

constexpr ::StringW const& __get_m_PrimaryKey() const;

constexpr void __set_m_Type(::System::Type*  value) ;

constexpr ::System::Type* __get_m_Type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_m_Type() const;

/// @brief Method get_InternalId addr 0x2a2dcd0 size 0x8 virtual true final true
inline ::StringW get_InternalId() ;

/// @brief Method get_ProviderId addr 0x2a2dcd8 size 0x8 virtual true final true
inline ::StringW get_ProviderId() ;

/// @brief Method get_Dependencies addr 0x2a2dce0 size 0xb4 virtual true final true
inline ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* get_Dependencies() ;

/// @brief Method get_HasDependencies addr 0x2a2e600 size 0x10 virtual true final true
inline bool get_HasDependencies() ;

/// @brief Method get_DependencyHashCode addr 0x2a2e610 size 0x8 virtual true final true
inline int32_t get_DependencyHashCode() ;

/// @brief Method get_Data addr 0x2a2e618 size 0x8 virtual true final true
inline ::System::Object* get_Data() ;

/// @brief Method get_PrimaryKey addr 0x2a2e620 size 0x8 virtual true final true
inline ::StringW get_PrimaryKey() ;

/// @brief Method set_PrimaryKey addr 0x2a2e628 size 0x8 virtual false final false
inline void set_PrimaryKey(::StringW  value) ;

/// @brief Method get_ResourceType addr 0x2a2e630 size 0x8 virtual true final true
inline ::System::Type* get_ResourceType() ;

/// @brief Method ToString addr 0x2a2e638 size 0x8 virtual true final false
inline ::StringW ToString() ;

/// @brief Method Hash addr 0x2a2e640 size 0x54 virtual true final true
inline int32_t Hash(::System::Type*  t) ;

static inline ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation* New_ctor(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*  locator, ::StringW  internalId, ::StringW  providerId, ::System::Object*  dependencyKey, ::System::Object*  data, int32_t  depHash, ::StringW  primaryKey, ::System::Type*  type) ;

/// @brief Method .ctor addr 0x2a2dab8 size 0x134 virtual false final false
inline void _ctor(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*  locator, ::StringW  internalId, ::StringW  providerId, ::System::Object*  dependencyKey, ::System::Object*  data, int32_t  depHash, ::StringW  primaryKey, ::System::Type*  type) ;

// Ctor Parameters [CppParam { name: "", ty: "__ContentCatalogData__CompactLocation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ContentCatalogData__CompactLocation(__ContentCatalogData__CompactLocation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ContentCatalogData__CompactLocation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ContentCatalogData__CompactLocation(__ContentCatalogData__CompactLocation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ContentCatalogData__CompactLocation()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation, 0x50>, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets::ResourceLocators
// Type: UnityEngine.AddressableAssets.ResourceLocators::ContentCatalogData
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14111))
// CS Name: ::UnityEngine.AddressableAssets.ResourceLocators::ContentCatalogData*
class CORDL_TYPE ContentCatalogData : public ::System::Object {
public:
// Declarations
using CompactLocation = ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation;

using Bucket = ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__Bucket;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xd0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xd0 - sizeof(::System::Object)]{};

/// @brief Field kBytesPerInt32 offset 0x0
static constexpr int32_t  kBytesPerInt32{static_cast<int32_t>(0x4)};

/// @brief Field k_EntryDataItemPerEntry offset 0x0
static constexpr int32_t  k_EntryDataItemPerEntry{static_cast<int32_t>(0x7)};

/// @brief Field localHash offset 0x10
 __declspec(property(get=__get_localHash, put=__set_localHash)) ::StringW  localHash;

/// @brief Field location offset 0x18
 __declspec(property(get=__get_location, put=__set_location)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location;

/// @brief Field m_LocatorId offset 0x20
 __declspec(property(get=__get_m_LocatorId, put=__set_m_LocatorId)) ::StringW  m_LocatorId;

/// @brief Field m_InstanceProviderData offset 0x28
 __declspec(property(get=__get_m_InstanceProviderData, put=__set_m_InstanceProviderData)) ::UnityEngine::ResourceManagement::Util::ObjectInitializationData  m_InstanceProviderData;

/// @brief Field m_SceneProviderData offset 0x58
 __declspec(property(get=__get_m_SceneProviderData, put=__set_m_SceneProviderData)) ::UnityEngine::ResourceManagement::Util::ObjectInitializationData  m_SceneProviderData;

/// @brief Field m_ResourceProviderData offset 0x88
 __declspec(property(get=__get_m_ResourceProviderData, put=__set_m_ResourceProviderData)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*  m_ResourceProviderData;

/// @brief Field m_ProviderIds offset 0x90
 __declspec(property(get=__get_m_ProviderIds, put=__set_m_ProviderIds)) ::ArrayW<::StringW,::Array<::StringW>*>  m_ProviderIds;

/// @brief Field m_InternalIds offset 0x98
 __declspec(property(get=__get_m_InternalIds, put=__set_m_InternalIds)) ::ArrayW<::StringW,::Array<::StringW>*>  m_InternalIds;

/// @brief Field m_KeyDataString offset 0xa0
 __declspec(property(get=__get_m_KeyDataString, put=__set_m_KeyDataString)) ::StringW  m_KeyDataString;

/// @brief Field m_BucketDataString offset 0xa8
 __declspec(property(get=__get_m_BucketDataString, put=__set_m_BucketDataString)) ::StringW  m_BucketDataString;

/// @brief Field m_EntryDataString offset 0xb0
 __declspec(property(get=__get_m_EntryDataString, put=__set_m_EntryDataString)) ::StringW  m_EntryDataString;

/// @brief Field m_ExtraDataString offset 0xb8
 __declspec(property(get=__get_m_ExtraDataString, put=__set_m_ExtraDataString)) ::StringW  m_ExtraDataString;

/// @brief Field m_resourceTypes offset 0xc0
 __declspec(property(get=__get_m_resourceTypes, put=__set_m_resourceTypes)) ::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType,::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*>  m_resourceTypes;

/// @brief Field m_InternalIdPrefixes offset 0xc8
 __declspec(property(get=__get_m_InternalIdPrefixes, put=__set_m_InternalIdPrefixes)) ::ArrayW<::StringW,::Array<::StringW>*>  m_InternalIdPrefixes;

 __declspec(property(get=get_ProviderId, put=set_ProviderId)) ::StringW  ProviderId;

 __declspec(property(get=get_InstanceProviderData, put=set_InstanceProviderData)) ::UnityEngine::ResourceManagement::Util::ObjectInitializationData  InstanceProviderData;

 __declspec(property(get=get_SceneProviderData, put=set_SceneProviderData)) ::UnityEngine::ResourceManagement::Util::ObjectInitializationData  SceneProviderData;

 __declspec(property(get=get_ResourceProviderData, put=set_ResourceProviderData)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*  ResourceProviderData;

 __declspec(property(get=get_ProviderIds)) ::ArrayW<::StringW,::Array<::StringW>*>  ProviderIds;

 __declspec(property(get=get_InternalIds)) ::ArrayW<::StringW,::Array<::StringW>*>  InternalIds;

constexpr void __set_localHash(::StringW  value) ;

constexpr ::StringW& __get_localHash() ;

constexpr ::StringW const& __get_localHash() const;

constexpr void __set_location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* __get_location() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> __get_location() const;

constexpr void __set_m_LocatorId(::StringW  value) ;

constexpr ::StringW& __get_m_LocatorId() ;

constexpr ::StringW const& __get_m_LocatorId() const;

constexpr void __set_m_InstanceProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData  value) ;

constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData& __get_m_InstanceProviderData() ;

constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData const& __get_m_InstanceProviderData() const;

constexpr void __set_m_SceneProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData  value) ;

constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData& __get_m_SceneProviderData() ;

constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData const& __get_m_SceneProviderData() const;

constexpr void __set_m_ResourceProviderData(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* __get_m_ResourceProviderData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*> __get_m_ResourceProviderData() const;

constexpr void __set_m_ProviderIds(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_m_ProviderIds() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_m_ProviderIds() const;

constexpr void __set_m_InternalIds(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_m_InternalIds() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_m_InternalIds() const;

constexpr void __set_m_KeyDataString(::StringW  value) ;

constexpr ::StringW& __get_m_KeyDataString() ;

constexpr ::StringW const& __get_m_KeyDataString() const;

constexpr void __set_m_BucketDataString(::StringW  value) ;

constexpr ::StringW& __get_m_BucketDataString() ;

constexpr ::StringW const& __get_m_BucketDataString() const;

constexpr void __set_m_EntryDataString(::StringW  value) ;

constexpr ::StringW& __get_m_EntryDataString() ;

constexpr ::StringW const& __get_m_EntryDataString() const;

constexpr void __set_m_ExtraDataString(::StringW  value) ;

constexpr ::StringW& __get_m_ExtraDataString() ;

constexpr ::StringW const& __get_m_ExtraDataString() const;

constexpr void __set_m_resourceTypes(::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType,::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*>  value) ;

constexpr ::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType,::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*>& __get_m_resourceTypes() ;

constexpr ::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType,::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*> const& __get_m_resourceTypes() const;

constexpr void __set_m_InternalIdPrefixes(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_m_InternalIdPrefixes() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_m_InternalIdPrefixes() const;

/// @brief Method get_ProviderId addr 0x2a2d148 size 0x8 virtual false final false
inline ::StringW get_ProviderId() ;

/// @brief Method set_ProviderId addr 0x2a2d150 size 0x8 virtual false final false
inline void set_ProviderId(::StringW  value) ;

/// @brief Method get_InstanceProviderData addr 0x2a2d158 size 0x18 virtual false final false
inline ::UnityEngine::ResourceManagement::Util::ObjectInitializationData get_InstanceProviderData() ;

/// @brief Method set_InstanceProviderData addr 0x2a2d170 size 0x18 virtual false final false
inline void set_InstanceProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData  value) ;

/// @brief Method get_SceneProviderData addr 0x2a2d188 size 0x18 virtual false final false
inline ::UnityEngine::ResourceManagement::Util::ObjectInitializationData get_SceneProviderData() ;

/// @brief Method set_SceneProviderData addr 0x2a2d1a0 size 0x18 virtual false final false
inline void set_SceneProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData  value) ;

/// @brief Method get_ResourceProviderData addr 0x2a2d1b8 size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* get_ResourceProviderData() ;

/// @brief Method set_ResourceProviderData addr 0x2a2d1c0 size 0x8 virtual false final false
inline void set_ResourceProviderData(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*  value) ;

/// @brief Method get_ProviderIds addr 0x2a2d1c8 size 0x8 virtual false final false
inline ::ArrayW<::StringW,::Array<::StringW>*> get_ProviderIds() ;

/// @brief Method get_InternalIds addr 0x2a2d1d0 size 0x8 virtual false final false
inline ::ArrayW<::StringW,::Array<::StringW>*> get_InternalIds() ;

/// @brief Method CleanData addr 0x2a2ba0c size 0x58 virtual false final false
inline void CleanData() ;

/// @brief Method CreateCustomLocator addr 0x2a26644 size 0xc virtual false final false
inline ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* CreateCustomLocator(::StringW  overrideId, ::StringW  providerSuffix) ;

/// @brief Method CreateLocator addr 0x2a2d1d8 size 0x780 virtual false final false
inline ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* CreateLocator(::StringW  providerSuffix) ;

/// @brief Method ExpandInternalId addr 0x2a2d9f8 size 0xc0 virtual false final false
static inline ::StringW ExpandInternalId(::ArrayW<::StringW,::Array<::StringW>*>  internalIdPrefixes, ::StringW  v) ;

static inline ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* New_ctor() ;

/// @brief Method .ctor addr 0x2a2dc54 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ContentCatalogData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContentCatalogData(ContentCatalogData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContentCatalogData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContentCatalogData(ContentCatalogData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContentCatalogData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, 0xd0>, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets::ResourceLocators
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData");
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData/CompactLocation");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__Bucket, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData/Bucket");
