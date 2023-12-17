#pragma once
#include "Mono/Security/X509/zzzz__X509Extension_impl.hpp"
#include "Mono/Security/X509/Extensions/zzzz__BasicConstraintsExtension_def.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::Extensions::BasicConstraintsExtension._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::Extensions::BasicConstraintsExtension::*)(::Mono::Security::X509::X509Extension*)>(&::Mono::Security::X509::Extensions::BasicConstraintsExtension::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23fcb3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Extension*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::BasicConstraintsExtension.Decode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::Extensions::BasicConstraintsExtension::*)()>(&::Mono::Security::X509::Extensions::BasicConstraintsExtension::Decode)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x23fe72c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::BasicConstraintsExtension.Encode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::Extensions::BasicConstraintsExtension::*)()>(&::Mono::Security::X509::Extensions::BasicConstraintsExtension::Encode)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x23fe864;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::BasicConstraintsExtension.get_CertificateAuthority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::Extensions::BasicConstraintsExtension::*)()>(&::Mono::Security::X509::Extensions::BasicConstraintsExtension::get_CertificateAuthority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fe998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                            "get_CertificateAuthority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::BasicConstraintsExtension.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::X509::Extensions::BasicConstraintsExtension::*)()>(&::Mono::Security::X509::Extensions::BasicConstraintsExtension::ToString)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x23fe9a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void Mono::Security::X509::Extensions::BasicConstraintsExtension::__set_cA(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& Mono::Security::X509::Extensions::BasicConstraintsExtension::__get_cA()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& Mono::Security::X509::Extensions::BasicConstraintsExtension::__get_cA() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void Mono::Security::X509::Extensions::BasicConstraintsExtension::__set_pathLenConstraint(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Security::X509::Extensions::BasicConstraintsExtension::__get_pathLenConstraint()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& Mono::Security::X509::Extensions::BasicConstraintsExtension::__get_pathLenConstraint() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
inline ::Mono::Security::X509::Extensions::BasicConstraintsExtension* Mono::Security::X509::Extensions::BasicConstraintsExtension::New_ctor(::Mono::Security::X509::X509Extension*  extension)  {
return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>(extension));
}
inline void Mono::Security::X509::Extensions::BasicConstraintsExtension::_ctor(::Mono::Security::X509::X509Extension*  extension)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Extension*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, extension);
}
inline void Mono::Security::X509::Extensions::BasicConstraintsExtension::Decode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Mono::Security::X509::Extensions::BasicConstraintsExtension::Encode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool Mono::Security::X509::Extensions::BasicConstraintsExtension::get_CertificateAuthority()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                            "get_CertificateAuthority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::StringW Mono::Security::X509::Extensions::BasicConstraintsExtension::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::Extensions::BasicConstraintsExtension*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
