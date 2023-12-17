#pragma once
#include "System/Net/Sockets/zzzz__IPPacketInformation_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::IPPacketInformation.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::IPPacketInformation::*)(::System::Object*)>(&::System::Net::Sockets::IPPacketInformation::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x28fc550;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::IPPacketInformation>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::IPPacketInformation>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::IPPacketInformation.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::IPPacketInformation::*)()>(&::System::Net::Sockets::IPPacketInformation::GetHashCode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x28fc5ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::IPPacketInformation>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::IPPacketInformation>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
constexpr void System::Net::Sockets::IPPacketInformation::__set_address(::System::Net::IPAddress*  value)  {
::cordl_internals::setInstanceField<::System::Net::IPAddress*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Net::IPAddress*>(value));
}
constexpr ::System::Net::IPAddress* System::Net::Sockets::IPPacketInformation::__get_address()  {
return ::cordl_internals::getInstanceField<::System::Net::IPAddress*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IPAddress*> System::Net::Sockets::IPPacketInformation::__get_address() const {
return ::cordl_internals::getInstanceField<::System::Net::IPAddress*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::Sockets::IPPacketInformation::__set_networkInterface(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Sockets::IPPacketInformation::__get_networkInterface()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::Sockets::IPPacketInformation::__get_networkInterface() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline bool System::Net::Sockets::IPPacketInformation::Equals(::System::Object*  comparand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::IPPacketInformation>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, comparand);
}
inline int32_t System::Net::Sockets::IPPacketInformation::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::IPPacketInformation>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "address", ty: "::System::Net::IPAddress*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "networkInterface", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::IPPacketInformation::IPPacketInformation(::System::Net::IPAddress*  address, int32_t  networkInterface) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->address = address;
this->networkInterface = networkInterface;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
