#pragma once
#include "System/Net/NetworkInformation/zzzz__UnicastIPAddressInformation_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__LinuxUnicastIPAddressInformation_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::*)(::System::Net::IPAddress*)>(&::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29ef2ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation.get_Address
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPAddress* (::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::*)()>(&::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::get_Address)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ef2d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::__set_address(::System::Net::IPAddress*  value)  {
::cordl_internals::setInstanceField<::System::Net::IPAddress*, 0x10>(this, std::forward<::System::Net::IPAddress*>(value));
}
constexpr ::System::Net::IPAddress* System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::__get_address()  {
return ::cordl_internals::getInstanceField<::System::Net::IPAddress*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IPAddress*> System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::__get_address() const {
return ::cordl_internals::getInstanceField<::System::Net::IPAddress*, 0x10>(this);
}
inline ::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation* System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::New_ctor(::System::Net::IPAddress*  address)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*>(address));
}
inline void System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::_ctor(::System::Net::IPAddress*  address)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, address);
}
inline ::System::Net::IPAddress* System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::get_Address()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*>::get(),
                            "get_Address",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
