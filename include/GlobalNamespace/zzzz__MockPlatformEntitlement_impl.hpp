#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlatformEntitlement_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPlatformEntitlement.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MockPlatformEntitlement::*)()>(&::GlobalNamespace::MockPlatformEntitlement::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223526c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformEntitlement*>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformEntitlement.get_status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EntitlementStatus (::GlobalNamespace::MockPlatformEntitlement::*)()>(&::GlobalNamespace::MockPlatformEntitlement::get_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2235274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformEntitlement*>::get(),
                            "get_status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformEntitlement._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlatformEntitlement::*)(::StringW, ::GlobalNamespace::EntitlementStatus)>(&::GlobalNamespace::MockPlatformEntitlement::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2234e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformEntitlement*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EntitlementStatus>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlatformEntitlement.GetIt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlatformEntitlement::*)()>(&::GlobalNamespace::MockPlatformEntitlement::GetIt)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2234e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformEntitlement*>::get(),
                            "GetIt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MockPlatformEntitlement::__set__id(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::MockPlatformEntitlement::__get__id()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::MockPlatformEntitlement::__get__id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::MockPlatformEntitlement::__set__status(::GlobalNamespace::EntitlementStatus  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EntitlementStatus, 0x18>(this, std::forward<::GlobalNamespace::EntitlementStatus>(value));
}
constexpr ::GlobalNamespace::EntitlementStatus& GlobalNamespace::MockPlatformEntitlement::__get__status()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EntitlementStatus, 0x18>(this);
}
constexpr ::GlobalNamespace::EntitlementStatus const& GlobalNamespace::MockPlatformEntitlement::__get__status() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EntitlementStatus, 0x18>(this);
}
inline ::StringW GlobalNamespace::MockPlatformEntitlement::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformEntitlement*>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::EntitlementStatus GlobalNamespace::MockPlatformEntitlement::get_status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformEntitlement*>::get(),
                            "get_status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EntitlementStatus, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MockPlatformEntitlement* GlobalNamespace::MockPlatformEntitlement::New_ctor(::StringW  id, ::GlobalNamespace::EntitlementStatus  status)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MockPlatformEntitlement*>(id, status));
}
inline void GlobalNamespace::MockPlatformEntitlement::_ctor(::StringW  id, ::GlobalNamespace::EntitlementStatus  status)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformEntitlement*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EntitlementStatus>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, id, status);
}
inline void GlobalNamespace::MockPlatformEntitlement::GetIt()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlatformEntitlement*>::get(),
                            "GetIt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
