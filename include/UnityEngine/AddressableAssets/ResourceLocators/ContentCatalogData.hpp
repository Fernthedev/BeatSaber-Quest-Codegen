// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ResourceManagement.Util.ObjectInitializationData
#include "UnityEngine/ResourceManagement/Util/ObjectInitializationData.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AddressableAssets::ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: ResourceLocationMap
  class ResourceLocationMap;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData
  class ContentCatalogData : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::Bucket
    struct Bucket;
    // Nested type: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation
    class CompactLocation;
    // System.String localHash
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* localHash;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*) == 0x8);
    // System.String m_LocatorId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* m_LocatorId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.ResourceManagement.Util.ObjectInitializationData m_InstanceProviderData
    // Size: 0x30
    // Offset: 0x28
    UnityEngine::ResourceManagement::Util::ObjectInitializationData m_InstanceProviderData;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::Util::ObjectInitializationData) == 0x30);
    // private UnityEngine.ResourceManagement.Util.ObjectInitializationData m_SceneProviderData
    // Size: 0x30
    // Offset: 0x58
    UnityEngine::ResourceManagement::Util::ObjectInitializationData m_SceneProviderData;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::Util::ObjectInitializationData) == 0x30);
    // System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.ObjectInitializationData> m_ResourceProviderData
    // Size: 0x8
    // Offset: 0x88
    System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData>* m_ResourceProviderData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData>*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xE029C4
    // System.String[] m_ProviderIds
    // Size: 0x8
    // Offset: 0x90
    ::Array<::Il2CppString*>* m_ProviderIds;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xE02A10
    // System.String[] m_InternalIds
    // Size: 0x8
    // Offset: 0x98
    ::Array<::Il2CppString*>* m_InternalIds;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xE02A5C
    // System.String m_KeyDataString
    // Size: 0x8
    // Offset: 0xA0
    ::Il2CppString* m_KeyDataString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xE02AA8
    // System.String m_BucketDataString
    // Size: 0x8
    // Offset: 0xA8
    ::Il2CppString* m_BucketDataString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xE02AF4
    // System.String m_EntryDataString
    // Size: 0x8
    // Offset: 0xB0
    ::Il2CppString* m_EntryDataString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xE02B40
    // System.String m_ExtraDataString
    // Size: 0x8
    // Offset: 0xB8
    ::Il2CppString* m_ExtraDataString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // UnityEngine.ResourceManagement.Util.SerializedType[] m_resourceTypes
    // Size: 0x8
    // Offset: 0xC0
    ::Array<UnityEngine::ResourceManagement::Util::SerializedType>* m_resourceTypes;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::ResourceManagement::Util::SerializedType>*) == 0x8);
    // private System.String[] m_InternalIdPrefixes
    // Size: 0x8
    // Offset: 0xC8
    ::Array<::Il2CppString*>* m_InternalIdPrefixes;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: ContentCatalogData
    ContentCatalogData(::Il2CppString* localHash_ = {}, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location_ = {}, ::Il2CppString* m_LocatorId_ = {}, UnityEngine::ResourceManagement::Util::ObjectInitializationData m_InstanceProviderData_ = {}, UnityEngine::ResourceManagement::Util::ObjectInitializationData m_SceneProviderData_ = {}, System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData>* m_ResourceProviderData_ = {}, ::Array<::Il2CppString*>* m_ProviderIds_ = {}, ::Array<::Il2CppString*>* m_InternalIds_ = {}, ::Il2CppString* m_KeyDataString_ = {}, ::Il2CppString* m_BucketDataString_ = {}, ::Il2CppString* m_EntryDataString_ = {}, ::Il2CppString* m_ExtraDataString_ = {}, ::Array<UnityEngine::ResourceManagement::Util::SerializedType>* m_resourceTypes_ = {}, ::Array<::Il2CppString*>* m_InternalIdPrefixes_ = {}) noexcept : localHash{localHash_}, location{location_}, m_LocatorId{m_LocatorId_}, m_InstanceProviderData{m_InstanceProviderData_}, m_SceneProviderData{m_SceneProviderData_}, m_ResourceProviderData{m_ResourceProviderData_}, m_ProviderIds{m_ProviderIds_}, m_InternalIds{m_InternalIds_}, m_KeyDataString{m_KeyDataString_}, m_BucketDataString{m_BucketDataString_}, m_EntryDataString{m_EntryDataString_}, m_ExtraDataString{m_ExtraDataString_}, m_resourceTypes{m_resourceTypes_}, m_InternalIdPrefixes{m_InternalIdPrefixes_} {}
    // static field const value: static private System.Int32 kBytesPerInt32
    static constexpr const int kBytesPerInt32 = 4;
    // Get static field: static private System.Int32 kBytesPerInt32
    static int _get_kBytesPerInt32();
    // Set static field: static private System.Int32 kBytesPerInt32
    static void _set_kBytesPerInt32(int value);
    // static field const value: static private System.Int32 k_EntryDataItemPerEntry
    static constexpr const int k_EntryDataItemPerEntry = 7;
    // Get static field: static private System.Int32 k_EntryDataItemPerEntry
    static int _get_k_EntryDataItemPerEntry();
    // Set static field: static private System.Int32 k_EntryDataItemPerEntry
    static void _set_k_EntryDataItemPerEntry(int value);
    // public System.String get_ProviderId()
    // Offset: 0x13F6748
    ::Il2CppString* get_ProviderId();
    // System.Void set_ProviderId(System.String value)
    // Offset: 0x13F6750
    void set_ProviderId(::Il2CppString* value);
    // public UnityEngine.ResourceManagement.Util.ObjectInitializationData get_InstanceProviderData()
    // Offset: 0x13F6758
    UnityEngine::ResourceManagement::Util::ObjectInitializationData get_InstanceProviderData();
    // public System.Void set_InstanceProviderData(UnityEngine.ResourceManagement.Util.ObjectInitializationData value)
    // Offset: 0x13F6770
    void set_InstanceProviderData(UnityEngine::ResourceManagement::Util::ObjectInitializationData value);
    // public UnityEngine.ResourceManagement.Util.ObjectInitializationData get_SceneProviderData()
    // Offset: 0x13F6788
    UnityEngine::ResourceManagement::Util::ObjectInitializationData get_SceneProviderData();
    // public System.Void set_SceneProviderData(UnityEngine.ResourceManagement.Util.ObjectInitializationData value)
    // Offset: 0x13F67A0
    void set_SceneProviderData(UnityEngine::ResourceManagement::Util::ObjectInitializationData value);
    // public System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.ObjectInitializationData> get_ResourceProviderData()
    // Offset: 0x13F67B8
    System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData>* get_ResourceProviderData();
    // public System.Void set_ResourceProviderData(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.ObjectInitializationData> value)
    // Offset: 0x13F67C0
    void set_ResourceProviderData(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData>* value);
    // public System.String[] get_ProviderIds()
    // Offset: 0x13F67C8
    ::Array<::Il2CppString*>* get_ProviderIds();
    // public System.String[] get_InternalIds()
    // Offset: 0x13F67D0
    ::Array<::Il2CppString*>* get_InternalIds();
    // System.Void CleanData()
    // Offset: 0x13F67D8
    void CleanData();
    // UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap CreateCustomLocator(System.String overrideId, System.String providerSuffix)
    // Offset: 0x13F5964
    UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* CreateCustomLocator(::Il2CppString* overrideId, ::Il2CppString* providerSuffix);
    // public UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap CreateLocator(System.String providerSuffix)
    // Offset: 0x13F6838
    UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* CreateLocator(::Il2CppString* providerSuffix);
    // static System.String ExpandInternalId(System.String[] internalIdPrefixes, System.String v)
    // Offset: 0x13F7068
    static ::Il2CppString* ExpandInternalId(::Array<::Il2CppString*>* internalIdPrefixes, ::Il2CppString* v);
    // public System.Void .ctor()
    // Offset: 0x13F72EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContentCatalogData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContentCatalogData*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData
  #pragma pack(pop)
  static check_size<sizeof(ContentCatalogData), 200 + sizeof(::Array<::Il2CppString*>*)> __UnityEngine_AddressableAssets_ResourceLocators_ContentCatalogDataSizeCheck;
  static_assert(sizeof(ContentCatalogData) == 0xD0);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderId
// Il2CppName: get_ProviderId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "get_ProviderId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ProviderId
// Il2CppName: set_ProviderId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::Il2CppString*)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ProviderId)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "set_ProviderId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InstanceProviderData
// Il2CppName: get_InstanceProviderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::Util::ObjectInitializationData (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InstanceProviderData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "get_InstanceProviderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_InstanceProviderData
// Il2CppName: set_InstanceProviderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(UnityEngine::ResourceManagement::Util::ObjectInitializationData)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_InstanceProviderData)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.Util", "ObjectInitializationData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "set_InstanceProviderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_SceneProviderData
// Il2CppName: get_SceneProviderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::Util::ObjectInitializationData (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_SceneProviderData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "get_SceneProviderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_SceneProviderData
// Il2CppName: set_SceneProviderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(UnityEngine::ResourceManagement::Util::ObjectInitializationData)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_SceneProviderData)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.Util", "ObjectInitializationData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "set_SceneProviderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ResourceProviderData
// Il2CppName: get_ResourceProviderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData>* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ResourceProviderData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "get_ResourceProviderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ResourceProviderData
// Il2CppName: set_ResourceProviderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData>*)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ResourceProviderData)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.Util", "ObjectInitializationData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "set_ResourceProviderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderIds
// Il2CppName: get_ProviderIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderIds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "get_ProviderIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InternalIds
// Il2CppName: get_InternalIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InternalIds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "get_InternalIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CleanData
// Il2CppName: CleanData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CleanData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "CleanData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateCustomLocator
// Il2CppName: CreateCustomLocator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::Il2CppString*, ::Il2CppString*)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateCustomLocator)> {
  const MethodInfo* get() {
    static auto* overrideId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* providerSuffix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "CreateCustomLocator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{overrideId, providerSuffix});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateLocator
// Il2CppName: CreateLocator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::Il2CppString*)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateLocator)> {
  const MethodInfo* get() {
    static auto* providerSuffix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "CreateLocator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{providerSuffix});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::ExpandInternalId
// Il2CppName: ExpandInternalId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Array<::Il2CppString*>*, ::Il2CppString*)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::ExpandInternalId)> {
  const MethodInfo* get() {
    static auto* internalIdPrefixes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "ExpandInternalId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{internalIdPrefixes, v});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
