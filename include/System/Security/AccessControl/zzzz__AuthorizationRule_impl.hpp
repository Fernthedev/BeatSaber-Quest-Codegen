#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/AccessControl/zzzz__AuthorizationRule_def.hpp"
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_def.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::AuthorizationRule._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::AuthorizationRule::*)(::System::Security::Principal::IdentityReference*, int32_t, bool, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags)>(&::System::Security::AccessControl::AuthorizationRule::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2480770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AuthorizationRule*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::IdentityReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::InheritanceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::PropagationFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::AuthorizationRule.get_AccessMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::AccessControl::AuthorizationRule::*)()>(&::System::Security::AccessControl::AuthorizationRule::get_AccessMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24809e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AuthorizationRule*>::get(),
                            "get_AccessMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::AccessControl::AuthorizationRule::__set_identity(::System::Security::Principal::IdentityReference*  value)  {
::cordl_internals::setInstanceField<::System::Security::Principal::IdentityReference*, 0x10>(this, std::forward<::System::Security::Principal::IdentityReference*>(value));
}
constexpr ::System::Security::Principal::IdentityReference* System::Security::AccessControl::AuthorizationRule::__get_identity()  {
return ::cordl_internals::getInstanceField<::System::Security::Principal::IdentityReference*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::IdentityReference*> System::Security::AccessControl::AuthorizationRule::__get_identity() const {
return ::cordl_internals::getInstanceField<::System::Security::Principal::IdentityReference*, 0x10>(this);
}
constexpr void System::Security::AccessControl::AuthorizationRule::__set_accessMask(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::AccessControl::AuthorizationRule::__get_accessMask()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Security::AccessControl::AuthorizationRule::__get_accessMask() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void System::Security::AccessControl::AuthorizationRule::__set_isInherited(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this, std::forward<bool>(value));
}
constexpr bool& System::Security::AccessControl::AuthorizationRule::__get_isInherited()  {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr bool const& System::Security::AccessControl::AuthorizationRule::__get_isInherited() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr void System::Security::AccessControl::AuthorizationRule::__set_inheritanceFlags(::System::Security::AccessControl::InheritanceFlags  value)  {
::cordl_internals::setInstanceField<::System::Security::AccessControl::InheritanceFlags, 0x20>(this, std::forward<::System::Security::AccessControl::InheritanceFlags>(value));
}
constexpr ::System::Security::AccessControl::InheritanceFlags& System::Security::AccessControl::AuthorizationRule::__get_inheritanceFlags()  {
return ::cordl_internals::getInstanceField<::System::Security::AccessControl::InheritanceFlags, 0x20>(this);
}
constexpr ::System::Security::AccessControl::InheritanceFlags const& System::Security::AccessControl::AuthorizationRule::__get_inheritanceFlags() const {
return ::cordl_internals::getInstanceField<::System::Security::AccessControl::InheritanceFlags, 0x20>(this);
}
constexpr void System::Security::AccessControl::AuthorizationRule::__set_propagationFlags(::System::Security::AccessControl::PropagationFlags  value)  {
::cordl_internals::setInstanceField<::System::Security::AccessControl::PropagationFlags, 0x24>(this, std::forward<::System::Security::AccessControl::PropagationFlags>(value));
}
constexpr ::System::Security::AccessControl::PropagationFlags& System::Security::AccessControl::AuthorizationRule::__get_propagationFlags()  {
return ::cordl_internals::getInstanceField<::System::Security::AccessControl::PropagationFlags, 0x24>(this);
}
constexpr ::System::Security::AccessControl::PropagationFlags const& System::Security::AccessControl::AuthorizationRule::__get_propagationFlags() const {
return ::cordl_internals::getInstanceField<::System::Security::AccessControl::PropagationFlags, 0x24>(this);
}
inline ::System::Security::AccessControl::AuthorizationRule* System::Security::AccessControl::AuthorizationRule::New_ctor(::System::Security::Principal::IdentityReference*  identity, int32_t  accessMask, bool  isInherited, ::System::Security::AccessControl::InheritanceFlags  inheritanceFlags, ::System::Security::AccessControl::PropagationFlags  propagationFlags)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::AccessControl::AuthorizationRule*>(identity, accessMask, isInherited, inheritanceFlags, propagationFlags));
}
inline void System::Security::AccessControl::AuthorizationRule::_ctor(::System::Security::Principal::IdentityReference*  identity, int32_t  accessMask, bool  isInherited, ::System::Security::AccessControl::InheritanceFlags  inheritanceFlags, ::System::Security::AccessControl::PropagationFlags  propagationFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AuthorizationRule*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::IdentityReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::InheritanceFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::PropagationFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, identity, accessMask, isInherited, inheritanceFlags, propagationFlags);
}
inline int32_t System::Security::AccessControl::AuthorizationRule::get_AccessMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AuthorizationRule*>::get(),
                            "get_AccessMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
