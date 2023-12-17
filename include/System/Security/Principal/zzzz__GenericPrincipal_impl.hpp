#pragma once
#include "System/Security/Claims/zzzz__ClaimsPrincipal_impl.hpp"
#include "System/Security/Principal/zzzz__GenericPrincipal_def.hpp"
#include "System/Security/Principal/zzzz__IIdentity_def.hpp"
//  Writing Method size for method: ::System::Security::Principal::GenericPrincipal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Principal::GenericPrincipal::*)(::System::Security::Principal::IIdentity*, ::ArrayW<::StringW,::Array<::StringW>*>)>(&::System::Security::Principal::GenericPrincipal::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2476bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::GenericPrincipal*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::IIdentity*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::Principal::GenericPrincipal::__set_m_identity(::System::Security::Principal::IIdentity*  value)  {
::cordl_internals::setInstanceField<::System::Security::Principal::IIdentity*, 0x28>(this, std::forward<::System::Security::Principal::IIdentity*>(value));
}
constexpr ::System::Security::Principal::IIdentity* System::Security::Principal::GenericPrincipal::__get_m_identity()  {
return ::cordl_internals::getInstanceField<::System::Security::Principal::IIdentity*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::IIdentity*> System::Security::Principal::GenericPrincipal::__get_m_identity() const {
return ::cordl_internals::getInstanceField<::System::Security::Principal::IIdentity*, 0x28>(this);
}
constexpr void System::Security::Principal::GenericPrincipal::__set_m_roles(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x30>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::Security::Principal::GenericPrincipal::__get_m_roles()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x30>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::Security::Principal::GenericPrincipal::__get_m_roles() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x30>(this);
}
inline ::System::Security::Principal::GenericPrincipal* System::Security::Principal::GenericPrincipal::New_ctor(::System::Security::Principal::IIdentity*  identity, ::ArrayW<::StringW,::Array<::StringW>*>  roles)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Principal::GenericPrincipal*>(identity, roles));
}
inline void System::Security::Principal::GenericPrincipal::_ctor(::System::Security::Principal::IIdentity*  identity, ::ArrayW<::StringW,::Array<::StringW>*>  roles)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::GenericPrincipal*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::IIdentity*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, identity, roles);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
