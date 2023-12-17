#pragma once
#include "Mono/Security/X509/zzzz__X509Extension_impl.hpp"
#include "Mono/Security/X509/Extensions/zzzz__AuthorityKeyIdentifierExtension_def.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)(::Mono::Security::X509::X509Extension*)>(&::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23fe310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Extension*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension.Decode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)()>(&::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::Decode)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x23fe314;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension.Encode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)()>(&::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::Encode)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x23fe42c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension.get_Identifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)()>(&::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::get_Identifier)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23fe550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(),
                            "get_Identifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)()>(&::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::ToString)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x23fe5c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::__set_aki(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x28>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::__get_aki()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x28>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::__get_aki() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x28>(this);
}
inline ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension* Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::New_ctor(::Mono::Security::X509::X509Extension*  extension)  {
return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>(extension));
}
inline void Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::_ctor(::Mono::Security::X509::X509Extension*  extension)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Extension*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, extension);
}
inline void Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::Decode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::Encode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(),
                            "get_Identifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline ::StringW Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
