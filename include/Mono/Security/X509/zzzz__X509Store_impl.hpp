#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X509Store_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "Mono/Security/X509/zzzz__X509Crl_def.hpp"
#include "Mono/Security/X509/zzzz__X509CertificateCollection_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509Store._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509Store::*)(::StringW, bool, bool)>(&::Mono::Security::X509::X509Store::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23fd568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.get_Certificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509CertificateCollection* (::Mono::Security::X509::X509Store::*)()>(&::Mono::Security::X509::X509Store::get_Certificates)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23fd5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(),
                            "get_Certificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.get_Crls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::Mono::Security::X509::X509Store::*)()>(&::Mono::Security::X509::X509Store::get_Crls)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23fd7a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(),
                            "get_Crls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Mono::Security::X509::X509Store::*)(::StringW)>(&::Mono::Security::X509::X509Store::Load)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x23fd9f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.LoadCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Certificate* (::Mono::Security::X509::X509Store::*)(::StringW)>(&::Mono::Security::X509::X509Store::LoadCertificate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23fdc00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(),
                            "LoadCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.LoadCrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Crl* (::Mono::Security::X509::X509Store::*)(::StringW)>(&::Mono::Security::X509::X509Store::LoadCrl)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23fdc70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(),
                            "LoadCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.CheckStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Store::*)(::StringW, bool)>(&::Mono::Security::X509::X509Store::CheckStore)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23fdce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(),
                            "CheckStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.BuildCertificatesCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509CertificateCollection* (::Mono::Security::X509::X509Store::*)(::StringW)>(&::Mono::Security::X509::X509Store::BuildCertificatesCollection)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x23fd5d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(),
                            "BuildCertificatesCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.BuildCrlsCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::Mono::Security::X509::X509Store::*)(::StringW)>(&::Mono::Security::X509::X509Store::BuildCrlsCollection)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x23fd834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(),
                            "BuildCrlsCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Security::X509::X509Store::__set__storePath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Mono::Security::X509::X509Store::__get__storePath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& Mono::Security::X509::X509Store::__get__storePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void Mono::Security::X509::X509Store::__set__certificates(::Mono::Security::X509::X509CertificateCollection*  value)  {
::cordl_internals::setInstanceField<::Mono::Security::X509::X509CertificateCollection*, 0x18>(this, std::forward<::Mono::Security::X509::X509CertificateCollection*>(value));
}
constexpr ::Mono::Security::X509::X509CertificateCollection* Mono::Security::X509::X509Store::__get__certificates()  {
return ::cordl_internals::getInstanceField<::Mono::Security::X509::X509CertificateCollection*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509CertificateCollection*> Mono::Security::X509::X509Store::__get__certificates() const {
return ::cordl_internals::getInstanceField<::Mono::Security::X509::X509CertificateCollection*, 0x18>(this);
}
constexpr void Mono::Security::X509::X509Store::__set__crls(::System::Collections::ArrayList*  value)  {
::cordl_internals::setInstanceField<::System::Collections::ArrayList*, 0x20>(this, std::forward<::System::Collections::ArrayList*>(value));
}
constexpr ::System::Collections::ArrayList* Mono::Security::X509::X509Store::__get__crls()  {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> Mono::Security::X509::X509Store::__get__crls() const {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList*, 0x20>(this);
}
constexpr void Mono::Security::X509::X509Store::__set__crl(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& Mono::Security::X509::X509Store::__get__crl()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& Mono::Security::X509::X509Store::__get__crl() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void Mono::Security::X509::X509Store::__set__newFormat(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this, std::forward<bool>(value));
}
constexpr bool& Mono::Security::X509::X509Store::__get__newFormat()  {
return ::cordl_internals::getInstanceField<bool, 0x29>(this);
}
constexpr bool const& Mono::Security::X509::X509Store::__get__newFormat() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this);
}
inline ::Mono::Security::X509::X509Store* Mono::Security::X509::X509Store::New_ctor(::StringW  path, bool  crl, bool  newFormat)  {
return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::X509::X509Store*>(path, crl, newFormat));
}
inline void Mono::Security::X509::X509Store::_ctor(::StringW  path, bool  crl, bool  newFormat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, path, crl, newFormat);
}
inline ::Mono::Security::X509::X509CertificateCollection* Mono::Security::X509::X509Store::get_Certificates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(),
                            "get_Certificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection*, false>(*this, ___internal_method);
}
inline ::System::Collections::ArrayList* Mono::Security::X509::X509Store::get_Crls()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(),
                            "get_Crls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Mono::Security::X509::X509Store::Load(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, filename);
}
inline ::Mono::Security::X509::X509Certificate* Mono::Security::X509::X509Store::LoadCertificate(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(),
                            "LoadCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*, false>(*this, ___internal_method, filename);
}
inline ::Mono::Security::X509::X509Crl* Mono::Security::X509::X509Store::LoadCrl(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(),
                            "LoadCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Crl*, false>(*this, ___internal_method, filename);
}
inline bool Mono::Security::X509::X509Store::CheckStore(::StringW  path, bool  throwException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(),
                            "CheckStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, path, throwException);
}
inline ::Mono::Security::X509::X509CertificateCollection* Mono::Security::X509::X509Store::BuildCertificatesCollection(::StringW  storeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(),
                            "BuildCertificatesCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection*, false>(*this, ___internal_method, storeName);
}
inline ::System::Collections::ArrayList* Mono::Security::X509::X509Store::BuildCrlsCollection(::StringW  storeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(),
                            "BuildCrlsCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(*this, ___internal_method, storeName);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
