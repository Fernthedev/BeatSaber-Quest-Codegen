#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ContentCatalogData_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ContentCatalogData_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__SerializedType_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ResourceLocationMap_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ObjectInitializationData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
constexpr void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__Bucket::__set_dataOffset(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__Bucket::__get_dataOffset()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__Bucket::__get_dataOffset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__Bucket::__set_entries(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__Bucket::__get_entries()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__Bucket::__get_entries() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "dataOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "entries", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__Bucket::__ContentCatalogData__Bucket(int32_t  dataOffset, ::ArrayW<int32_t,::Array<int32_t>*>  entries) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->dataOffset = dataOffset;
this->entries = entries;
}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.get_InternalId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_InternalId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2dcd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "get_InternalId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.get_ProviderId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_ProviderId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2dcd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "get_ProviderId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.get_Dependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_Dependencies)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2a2dce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "get_Dependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.get_HasDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_HasDependencies)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a2e600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "get_HasDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.get_DependencyHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_DependencyHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2e610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "get_DependencyHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.get_Data
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2e618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "get_Data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.get_PrimaryKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_PrimaryKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2e620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "get_PrimaryKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.set_PrimaryKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)(::StringW)>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::set_PrimaryKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2e628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "set_PrimaryKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.get_ResourceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_ResourceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2e630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "get_ResourceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2e638;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation.Hash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)(::System::Type*)>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::Hash)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2a2e640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "Hash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::*)(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*, ::StringW, ::StringW, ::System::Object*, ::System::Object*, int32_t, ::StringW, ::System::Type*)>(&::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2a2dab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation"
constexpr  UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::operator ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*() noexcept {
return static_cast<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(static_cast<void*>(this));
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__set_m_Locator(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*, 0x10>(this, std::forward<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>(value));
}
constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__get_m_Locator()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*> UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__get_m_Locator() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*, 0x10>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__set_m_InternalId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__get_m_InternalId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__get_m_InternalId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__set_m_ProviderId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__get_m_ProviderId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__get_m_ProviderId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__set_m_Dependency(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x28>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__get_m_Dependency()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__get_m_Dependency() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__set_m_Data(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x30>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__get_m_Data()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__get_m_Data() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x30>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__set_m_HashCode(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__get_m_HashCode()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr int32_t const& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__get_m_HashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__set_m_DependencyHashCode(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__get_m_DependencyHashCode()  {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr int32_t const& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__get_m_DependencyHashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__set_m_PrimaryKey(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__get_m_PrimaryKey()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__get_m_PrimaryKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__set_m_Type(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x48>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__get_m_Type()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::__get_m_Type() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x48>(this);
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_InternalId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "get_InternalId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_ProviderId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "get_ProviderId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_Dependencies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "get_Dependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, false>(*this, ___internal_method);
}
inline bool UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_HasDependencies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "get_HasDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_DependencyHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "get_DependencyHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_Data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "get_Data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_PrimaryKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "get_PrimaryKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::set_PrimaryKey(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "set_PrimaryKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Type* UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::get_ResourceType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "get_ResourceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(*this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::Hash(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            "Hash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, t);
}
inline ::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation* UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::New_ctor(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*  locator, ::StringW  internalId, ::StringW  providerId, ::System::Object*  dependencyKey, ::System::Object*  data, int32_t  depHash, ::StringW  primaryKey, ::System::Type*  type)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>(locator, internalId, providerId, dependencyKey, data, depHash, primaryKey, type));
}
inline void UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation::_ctor(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*  locator, ::StringW  internalId, ::StringW  providerId, ::System::Object*  dependencyKey, ::System::Object*  data, int32_t  depHash, ::StringW  primaryKey, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::__ContentCatalogData__CompactLocation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, locator, internalId, providerId, dependencyKey, data, depHash, primaryKey, type);
}
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_ProviderId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2d148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "get_ProviderId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.set_ProviderId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ProviderId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2d150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "set_ProviderId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_InstanceProviderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::Util::ObjectInitializationData (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InstanceProviderData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a2d158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "get_InstanceProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.set_InstanceProviderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::UnityEngine::ResourceManagement::Util::ObjectInitializationData)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_InstanceProviderData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a2d170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "set_InstanceProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_SceneProviderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::Util::ObjectInitializationData (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_SceneProviderData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a2d188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "get_SceneProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.set_SceneProviderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::UnityEngine::ResourceManagement::Util::ObjectInitializationData)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_SceneProviderData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a2d1a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "set_SceneProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_ResourceProviderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ResourceProviderData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2d1b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "get_ResourceProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.set_ResourceProviderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ResourceProviderData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2d1c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "set_ResourceProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_ProviderIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2d1c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "get_ProviderIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_InternalIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InternalIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2d1d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "get_InternalIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.CleanData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CleanData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a2ba0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "CleanData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.CreateCustomLocator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW, ::StringW)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateCustomLocator)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a26644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "CreateCustomLocator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.CreateLocator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateLocator)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x2a2d1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "CreateLocator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.ExpandInternalId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<::StringW,::Array<::StringW>*>, ::StringW)>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::ExpandInternalId)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2a2d9f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "ExpandInternalId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2a2dc54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_localHash(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_localHash()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_localHash() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, 0x18>(this, std::forward<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(value));
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_location()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_location() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, 0x18>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_LocatorId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_LocatorId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_LocatorId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_InstanceProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::Util::ObjectInitializationData, 0x28>(this, std::forward<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(value));
}
constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_InstanceProviderData()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::Util::ObjectInitializationData, 0x28>(this);
}
constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_InstanceProviderData() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::Util::ObjectInitializationData, 0x28>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_SceneProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::Util::ObjectInitializationData, 0x58>(this, std::forward<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(value));
}
constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_SceneProviderData()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::Util::ObjectInitializationData, 0x58>(this);
}
constexpr ::UnityEngine::ResourceManagement::Util::ObjectInitializationData const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_SceneProviderData() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::Util::ObjectInitializationData, 0x58>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_ResourceProviderData(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*, 0x88>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_ResourceProviderData()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*> UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_ResourceProviderData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*, 0x88>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_ProviderIds(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x90>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_ProviderIds()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x90>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_ProviderIds() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x90>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_InternalIds(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x98>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_InternalIds()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x98>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_InternalIds() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x98>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_KeyDataString(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xa0>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_KeyDataString()  {
return ::cordl_internals::getInstanceField<::StringW, 0xa0>(this);
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_KeyDataString() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa0>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_BucketDataString(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xa8>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_BucketDataString()  {
return ::cordl_internals::getInstanceField<::StringW, 0xa8>(this);
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_BucketDataString() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa8>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_EntryDataString(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xb0>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_EntryDataString()  {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this);
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_EntryDataString() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_ExtraDataString(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xb8>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_ExtraDataString()  {
return ::cordl_internals::getInstanceField<::StringW, 0xb8>(this);
}
constexpr ::StringW const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_ExtraDataString() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb8>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_resourceTypes(::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType,::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType,::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*>, 0xc0>(this, std::forward<::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType,::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType,::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*>& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_resourceTypes()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType,::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*>, 0xc0>(this);
}
constexpr ::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType,::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*> const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_resourceTypes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType,::Array<::UnityEngine::ResourceManagement::Util::SerializedType>*>, 0xc0>(this);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_InternalIdPrefixes(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0xc8>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_InternalIdPrefixes()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0xc8>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_InternalIdPrefixes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0xc8>(this);
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "get_ProviderId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ProviderId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "set_ProviderId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::ResourceManagement::Util::ObjectInitializationData UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InstanceProviderData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "get_InstanceProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::ObjectInitializationData, false>(*this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_InstanceProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "set_InstanceProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::ResourceManagement::Util::ObjectInitializationData UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_SceneProviderData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "get_SceneProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::ObjectInitializationData, false>(*this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_SceneProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "set_SceneProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ResourceProviderData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "get_ResourceProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*, false>(*this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ResourceProviderData(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "set_ResourceProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::ArrayW<::StringW,::Array<::StringW>*> UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "get_ProviderIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(*this, ___internal_method);
}
inline ::ArrayW<::StringW,::Array<::StringW>*> UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InternalIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "get_InternalIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(*this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CleanData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "CleanData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param providerSuffix: ::StringW (default: csnull)
inline ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateCustomLocator(::StringW  overrideId, ::StringW  providerSuffix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "CreateCustomLocator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*, false>(*this, ___internal_method, overrideId, providerSuffix);
}
/// @param providerSuffix: ::StringW (default: csnull)
inline ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateLocator(::StringW  providerSuffix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "CreateLocator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*, false>(*this, ___internal_method, providerSuffix);
}
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::ExpandInternalId(::ArrayW<::StringW,::Array<::StringW>*>  internalIdPrefixes, ::StringW  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            "ExpandInternalId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, internalIdPrefixes, v);
}
inline ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>());
}
inline void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
