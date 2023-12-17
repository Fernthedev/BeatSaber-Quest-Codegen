#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LocationCacheKey_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IOperationCacheKey_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::LocationCacheKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::LocationCacheKey::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Type*)>(&::UnityEngine::ResourceManagement::Util::LocationCacheKey::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2bcbc00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::LocationCacheKey.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ResourceManagement::Util::LocationCacheKey::*)()>(&::UnityEngine::ResourceManagement::Util::LocationCacheKey::GetHashCode)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2bd1618;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::LocationCacheKey.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::Util::LocationCacheKey::*)(::System::Object*)>(&::UnityEngine::ResourceManagement::Util::LocationCacheKey::Equals)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2bd16c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::LocationCacheKey.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::Util::LocationCacheKey::*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*)>(&::UnityEngine::ResourceManagement::Util::LocationCacheKey::Equals)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2bd1784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::LocationCacheKey.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::Util::LocationCacheKey::*)(::UnityEngine::ResourceManagement::Util::LocationCacheKey*)>(&::UnityEngine::ResourceManagement::Util::LocationCacheKey::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2bd1728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IOperationCacheKey"
constexpr  UnityEngine::ResourceManagement::Util::LocationCacheKey::operator ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*() noexcept {
return static_cast<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>"
constexpr  UnityEngine::ResourceManagement::Util::LocationCacheKey::operator ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>*() noexcept {
return static_cast<::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>*>(static_cast<void*>(this));
}
constexpr void UnityEngine::ResourceManagement::Util::LocationCacheKey::__set_m_Location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, 0x10>(this, std::forward<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(value));
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* UnityEngine::ResourceManagement::Util::LocationCacheKey::__get_m_Location()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> UnityEngine::ResourceManagement::Util::LocationCacheKey::__get_m_Location() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, 0x10>(this);
}
constexpr void UnityEngine::ResourceManagement::Util::LocationCacheKey::__set_m_DesiredType(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x18>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* UnityEngine::ResourceManagement::Util::LocationCacheKey::__get_m_DesiredType()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> UnityEngine::ResourceManagement::Util::LocationCacheKey::__get_m_DesiredType() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x18>(this);
}
inline ::UnityEngine::ResourceManagement::Util::LocationCacheKey* UnityEngine::ResourceManagement::Util::LocationCacheKey::New_ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::System::Type*  desiredType)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>(location, desiredType));
}
inline void UnityEngine::ResourceManagement::Util::LocationCacheKey::_ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::System::Type*  desiredType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, location, desiredType);
}
inline int32_t UnityEngine::ResourceManagement::Util::LocationCacheKey::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::Util::LocationCacheKey::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
inline bool UnityEngine::ResourceManagement::Util::LocationCacheKey::Equals(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline bool UnityEngine::ResourceManagement::Util::LocationCacheKey::Equals(::UnityEngine::ResourceManagement::Util::LocationCacheKey*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::LocationCacheKey*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
