#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__IPHostEntry_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::System::Net::IPHostEntry.get_HostName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::IPHostEntry::*)()>(&::System::Net::IPHostEntry::get_HostName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x299d6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(),
                            "get_HostName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPHostEntry.set_HostName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::IPHostEntry::*)(::StringW)>(&::System::Net::IPHostEntry::set_HostName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x299d6ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(),
                            "set_HostName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPHostEntry.set_Aliases
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::IPHostEntry::*)(::ArrayW<::StringW,::Array<::StringW>*>)>(&::System::Net::IPHostEntry::set_Aliases)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x299d6f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(),
                            "set_Aliases",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPHostEntry.get_AddressList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*> (::System::Net::IPHostEntry::*)()>(&::System::Net::IPHostEntry::get_AddressList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x299d6fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(),
                            "get_AddressList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPHostEntry.set_AddressList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::IPHostEntry::*)(::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>)>(&::System::Net::IPHostEntry::set_AddressList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x299d704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(),
                            "set_AddressList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPHostEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::IPHostEntry::*)()>(&::System::Net::IPHostEntry::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x299d70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::IPHostEntry::__set_hostName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Net::IPHostEntry::__get_hostName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Net::IPHostEntry::__get_hostName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::Net::IPHostEntry::__set_aliases(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::Net::IPHostEntry::__get_aliases()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::Net::IPHostEntry::__get_aliases() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this);
}
constexpr void System::Net::IPHostEntry::__set_addressList(::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>, 0x20>(this, std::forward<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>>(value));
}
constexpr ::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>& System::Net::IPHostEntry::__get_addressList()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>, 0x20>(this);
}
constexpr ::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*> const& System::Net::IPHostEntry::__get_addressList() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>, 0x20>(this);
}
constexpr void System::Net::IPHostEntry::__set_isTrustedHost(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::IPHostEntry::__get_isTrustedHost()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& System::Net::IPHostEntry::__get_isTrustedHost() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
inline ::StringW System::Net::IPHostEntry::get_HostName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(),
                            "get_HostName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Net::IPHostEntry::set_HostName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(),
                            "set_HostName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Net::IPHostEntry::set_Aliases(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(),
                            "set_Aliases",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*> System::Net::IPHostEntry::get_AddressList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(),
                            "get_AddressList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>, false>(*this, ___internal_method);
}
inline void System::Net::IPHostEntry::set_AddressList(::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(),
                            "set_AddressList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Net::IPHostEntry* System::Net::IPHostEntry::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::IPHostEntry*>());
}
inline void System::Net::IPHostEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPHostEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
