#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X509Crl_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "Mono/Security/X509/zzzz__X509ExtensionCollection_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "Mono/Security/X509/zzzz__X509Crl_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::__X509Crl__X509CrlEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::__X509Crl__X509CrlEntry::*)(::Mono::Security::ASN1*)>(&::Mono::Security::X509::__X509Crl__X509CrlEntry::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23f9054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__X509Crl__X509CrlEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::__X509Crl__X509CrlEntry.get_SerialNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Mono::Security::X509::__X509Crl__X509CrlEntry::*)()>(&::Mono::Security::X509::__X509Crl__X509CrlEntry::get_SerialNumber)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23f96d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__X509Crl__X509CrlEntry*>::get(),
                            "get_SerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::__X509Crl__X509CrlEntry.get_RevocationDate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Mono::Security::X509::__X509Crl__X509CrlEntry::*)()>(&::Mono::Security::X509::__X509Crl__X509CrlEntry::get_RevocationDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f9c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__X509Crl__X509CrlEntry*>::get(),
                            "get_RevocationDate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::__X509Crl__X509CrlEntry.get_Extensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509ExtensionCollection* (::Mono::Security::X509::__X509Crl__X509CrlEntry::*)()>(&::Mono::Security::X509::__X509Crl__X509CrlEntry::get_Extensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f9c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__X509Crl__X509CrlEntry*>::get(),
                            "get_Extensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Security::X509::__X509Crl__X509CrlEntry::__set_sn(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Mono::Security::X509::__X509Crl__X509CrlEntry::__get_sn()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Mono::Security::X509::__X509Crl__X509CrlEntry::__get_sn() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this);
}
constexpr void Mono::Security::X509::__X509Crl__X509CrlEntry::__set_revocationDate(::System::DateTime  value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x18>(this, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime& Mono::Security::X509::__X509Crl__X509CrlEntry::__get_revocationDate()  {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x18>(this);
}
constexpr ::System::DateTime const& Mono::Security::X509::__X509Crl__X509CrlEntry::__get_revocationDate() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x18>(this);
}
constexpr void Mono::Security::X509::__X509Crl__X509CrlEntry::__set_extensions(::Mono::Security::X509::X509ExtensionCollection*  value)  {
::cordl_internals::setInstanceField<::Mono::Security::X509::X509ExtensionCollection*, 0x20>(this, std::forward<::Mono::Security::X509::X509ExtensionCollection*>(value));
}
constexpr ::Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::__X509Crl__X509CrlEntry::__get_extensions()  {
return ::cordl_internals::getInstanceField<::Mono::Security::X509::X509ExtensionCollection*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509ExtensionCollection*> Mono::Security::X509::__X509Crl__X509CrlEntry::__get_extensions() const {
return ::cordl_internals::getInstanceField<::Mono::Security::X509::X509ExtensionCollection*, 0x20>(this);
}
inline ::Mono::Security::X509::__X509Crl__X509CrlEntry* Mono::Security::X509::__X509Crl__X509CrlEntry::New_ctor(::Mono::Security::ASN1*  entry)  {
return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::X509::__X509Crl__X509CrlEntry*>(entry));
}
inline void Mono::Security::X509::__X509Crl__X509CrlEntry::_ctor(::Mono::Security::ASN1*  entry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__X509Crl__X509CrlEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, entry);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Mono::Security::X509::__X509Crl__X509CrlEntry::get_SerialNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__X509Crl__X509CrlEntry*>::get(),
                            "get_SerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline ::System::DateTime Mono::Security::X509::__X509Crl__X509CrlEntry::get_RevocationDate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__X509Crl__X509CrlEntry*>::get(),
                            "get_RevocationDate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(*this, ___internal_method);
}
inline ::Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::__X509Crl__X509CrlEntry::get_Extensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::__X509Crl__X509CrlEntry*>::get(),
                            "get_Extensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509ExtensionCollection*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::Mono::Security::X509::X509Crl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509Crl::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Mono::Security::X509::X509Crl::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x23f88ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509Crl::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Mono::Security::X509::X509Crl::Parse)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x23f89a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_Extensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509ExtensionCollection* (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_Extensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f9268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "get_Extensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_Hash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_Hash)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x23f9270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "get_Hash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_IssuerName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_IssuerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f9484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "get_IssuerName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_NextUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_NextUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f948c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "get_NextUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Crl::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Mono::Security::X509::X509Crl::Compare)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23f9494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.GetCrlEntry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::__X509Crl__X509CrlEntry* (::Mono::Security::X509::X509Crl::*)(::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::X509Crl::GetCrlEntry)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x23f9510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "GetCrlEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.GetCrlEntry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::__X509Crl__X509CrlEntry* (::Mono::Security::X509::X509Crl::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Mono::Security::X509::X509Crl::GetCrlEntry)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x23f9590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "GetCrlEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.VerifySignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Crl::*)(::System::Security::Cryptography::DSA*)>(&::Mono::Security::X509::X509Crl::VerifySignature)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x23f9750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSA*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.VerifySignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Crl::*)(::System::Security::Cryptography::RSA*)>(&::Mono::Security::X509::X509Crl::VerifySignature)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x23f9a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSA*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.VerifySignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Crl::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::Mono::Security::X509::X509Crl::VerifySignature)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x23f9af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Security::X509::X509Crl::__set_issuer(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Mono::Security::X509::X509Crl::__get_issuer()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& Mono::Security::X509::X509Crl::__get_issuer() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void Mono::Security::X509::X509Crl::__set_version(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x18>(this, std::forward<uint8_t>(value));
}
constexpr uint8_t& Mono::Security::X509::X509Crl::__get_version()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x18>(this);
}
constexpr uint8_t const& Mono::Security::X509::X509Crl::__get_version() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x18>(this);
}
constexpr void Mono::Security::X509::X509Crl::__set_thisUpdate(::System::DateTime  value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x20>(this, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime& Mono::Security::X509::X509Crl::__get_thisUpdate()  {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x20>(this);
}
constexpr ::System::DateTime const& Mono::Security::X509::X509Crl::__get_thisUpdate() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x20>(this);
}
constexpr void Mono::Security::X509::X509Crl::__set_nextUpdate(::System::DateTime  value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x28>(this, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime& Mono::Security::X509::X509Crl::__get_nextUpdate()  {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x28>(this);
}
constexpr ::System::DateTime const& Mono::Security::X509::X509Crl::__get_nextUpdate() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x28>(this);
}
constexpr void Mono::Security::X509::X509Crl::__set_entries(::System::Collections::ArrayList*  value)  {
::cordl_internals::setInstanceField<::System::Collections::ArrayList*, 0x30>(this, std::forward<::System::Collections::ArrayList*>(value));
}
constexpr ::System::Collections::ArrayList* Mono::Security::X509::X509Crl::__get_entries()  {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> Mono::Security::X509::X509Crl::__get_entries() const {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList*, 0x30>(this);
}
constexpr void Mono::Security::X509::X509Crl::__set_signatureOID(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Mono::Security::X509::X509Crl::__get_signatureOID()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& Mono::Security::X509::X509Crl::__get_signatureOID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void Mono::Security::X509::X509Crl::__set_signature(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x40>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Mono::Security::X509::X509Crl::__get_signature()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x40>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Mono::Security::X509::X509Crl::__get_signature() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x40>(this);
}
constexpr void Mono::Security::X509::X509Crl::__set_extensions(::Mono::Security::X509::X509ExtensionCollection*  value)  {
::cordl_internals::setInstanceField<::Mono::Security::X509::X509ExtensionCollection*, 0x48>(this, std::forward<::Mono::Security::X509::X509ExtensionCollection*>(value));
}
constexpr ::Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::X509Crl::__get_extensions()  {
return ::cordl_internals::getInstanceField<::Mono::Security::X509::X509ExtensionCollection*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509ExtensionCollection*> Mono::Security::X509::X509Crl::__get_extensions() const {
return ::cordl_internals::getInstanceField<::Mono::Security::X509::X509ExtensionCollection*, 0x48>(this);
}
constexpr void Mono::Security::X509::X509Crl::__set_encoded(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x50>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Mono::Security::X509::X509Crl::__get_encoded()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x50>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Mono::Security::X509::X509Crl::__get_encoded() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x50>(this);
}
constexpr void Mono::Security::X509::X509Crl::__set_hash_value(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x58>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Mono::Security::X509::X509Crl::__get_hash_value()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x58>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Mono::Security::X509::X509Crl::__get_hash_value() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x58>(this);
}
inline ::Mono::Security::X509::X509Crl* Mono::Security::X509::X509Crl::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  crl)  {
return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::X509::X509Crl*>(crl));
}
inline void Mono::Security::X509::X509Crl::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  crl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, crl);
}
inline void Mono::Security::X509::X509Crl::Parse(::ArrayW<uint8_t,::Array<uint8_t>*>  crl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, crl);
}
inline ::Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::X509Crl::get_Extensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "get_Extensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509ExtensionCollection*, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Mono::Security::X509::X509Crl::get_Hash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "get_Hash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline ::StringW Mono::Security::X509::X509Crl::get_IssuerName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "get_IssuerName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::System::DateTime Mono::Security::X509::X509Crl::get_NextUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "get_NextUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(*this, ___internal_method);
}
inline bool Mono::Security::X509::X509Crl::Compare(::ArrayW<uint8_t,::Array<uint8_t>*>  array1, ::ArrayW<uint8_t,::Array<uint8_t>*>  array2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, array1, array2);
}
inline ::Mono::Security::X509::__X509Crl__X509CrlEntry* Mono::Security::X509::X509Crl::GetCrlEntry(::Mono::Security::X509::X509Certificate*  x509)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "GetCrlEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::__X509Crl__X509CrlEntry*, false>(*this, ___internal_method, x509);
}
inline ::Mono::Security::X509::__X509Crl__X509CrlEntry* Mono::Security::X509::X509Crl::GetCrlEntry(::ArrayW<uint8_t,::Array<uint8_t>*>  serialNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "GetCrlEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::__X509Crl__X509CrlEntry*, false>(*this, ___internal_method, serialNumber);
}
inline bool Mono::Security::X509::X509Crl::VerifySignature(::System::Security::Cryptography::DSA*  dsa)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSA*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, dsa);
}
inline bool Mono::Security::X509::X509Crl::VerifySignature(::System::Security::Cryptography::RSA*  rsa)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSA*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, rsa);
}
inline bool Mono::Security::X509::X509Crl::VerifySignature(::System::Security::Cryptography::AsymmetricAlgorithm*  aa)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl*>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, aa);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
