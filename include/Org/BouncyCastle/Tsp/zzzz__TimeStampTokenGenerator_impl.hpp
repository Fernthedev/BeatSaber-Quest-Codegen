#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampTokenGenerator_def.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampToken_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TimeStampRequest_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::X509::X509Certificate*, ::StringW, ::StringW)>(&::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11538a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::X509::X509Certificate*, ::StringW, ::StringW, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(&::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::_ctor)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x11538b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(::Org::BouncyCastle::X509::Store::IX509Store*)>(&::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetCertificates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1153cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                            "SetCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetCrls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(::Org::BouncyCastle::X509::Store::IX509Store*)>(&::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetCrls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1153d00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                            "SetCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetAccuracySeconds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(int32_t)>(&::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracySeconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1153d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                            "SetAccuracySeconds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetAccuracyMillis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(int32_t)>(&::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracyMillis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1153d10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                            "SetAccuracyMillis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetAccuracyMicros
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(int32_t)>(&::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracyMicros)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1153d18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                            "SetAccuracyMicros",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetOrdering
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(bool)>(&::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetOrdering)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1153d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                            "SetOrdering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.SetTsa
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(::Org::BouncyCastle::Asn1::X509::GeneralName*)>(&::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetTsa)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1153d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                            "SetTsa",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Tsp::TimeStampToken* (::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::*)(::Org::BouncyCastle::Tsp::TimeStampRequest*, ::Org::BouncyCastle::Math::BigInteger*, ::System::DateTime)>(&::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::Generate)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0x1151950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Tsp::TimeStampRequest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__set_accuracySeconds(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_accuracySeconds()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_accuracySeconds() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__set_accuracyMillis(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_accuracyMillis()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_accuracyMillis() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__set_accuracyMicros(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_accuracyMicros()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_accuracyMicros() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__set_ordering(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_ordering()  {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr bool const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_ordering() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__set_tsa(::Org::BouncyCastle::Asn1::X509::GeneralName*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::GeneralName*, 0x20>(this, std::forward<::Org::BouncyCastle::Asn1::X509::GeneralName*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_tsa()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::GeneralName*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_tsa() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::GeneralName*, 0x20>(this);
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__set_tsaPolicyOID(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_tsaPolicyOID()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_tsaPolicyOID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__set_key(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, 0x30>(this, std::forward<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(value));
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_key()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_key() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, 0x30>(this);
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__set_cert(::Org::BouncyCastle::X509::X509Certificate*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::X509::X509Certificate*, 0x38>(this, std::forward<::Org::BouncyCastle::X509::X509Certificate*>(value));
}
constexpr ::Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_cert()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::X509::X509Certificate*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::X509Certificate*> Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_cert() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::X509::X509Certificate*, 0x38>(this);
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__set_digestOID(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_digestOID()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_digestOID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__set_signedAttr(::Org::BouncyCastle::Asn1::Cms::AttributeTable*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, 0x48>(this, std::forward<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_signedAttr()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_signedAttr() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, 0x48>(this);
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__set_unsignedAttr(::Org::BouncyCastle::Asn1::Cms::AttributeTable*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, 0x50>(this, std::forward<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_unsignedAttr()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_unsignedAttr() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, 0x50>(this);
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__set_x509Certs(::Org::BouncyCastle::X509::Store::IX509Store*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::X509::Store::IX509Store*, 0x58>(this, std::forward<::Org::BouncyCastle::X509::Store::IX509Store*>(value));
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_x509Certs()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::X509::Store::IX509Store*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::IX509Store*> Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_x509Certs() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::X509::Store::IX509Store*, 0x58>(this);
}
constexpr void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__set_x509Crls(::Org::BouncyCastle::X509::Store::IX509Store*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::X509::Store::IX509Store*, 0x60>(this, std::forward<::Org::BouncyCastle::X509::Store::IX509Store*>(value));
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_x509Crls()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::X509::Store::IX509Store*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::IX509Store*> Org::BouncyCastle::Tsp::TimeStampTokenGenerator::__get_x509Crls() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::X509::Store::IX509Store*, 0x60>(this);
}
inline ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* Org::BouncyCastle::Tsp::TimeStampTokenGenerator::New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  key, ::Org::BouncyCastle::X509::X509Certificate*  cert, ::StringW  digestOID, ::StringW  tsaPolicyOID)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(key, cert, digestOID, tsaPolicyOID));
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  key, ::Org::BouncyCastle::X509::X509Certificate*  cert, ::StringW  digestOID, ::StringW  tsaPolicyOID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, cert, digestOID, tsaPolicyOID);
}
inline ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* Org::BouncyCastle::Tsp::TimeStampTokenGenerator::New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  key, ::Org::BouncyCastle::X509::X509Certificate*  cert, ::StringW  digestOID, ::StringW  tsaPolicyOID, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*  signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*  unsignedAttr)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>(key, cert, digestOID, tsaPolicyOID, signedAttr, unsignedAttr));
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  key, ::Org::BouncyCastle::X509::X509Certificate*  cert, ::StringW  digestOID, ::StringW  tsaPolicyOID, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*  signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*  unsignedAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, cert, digestOID, tsaPolicyOID, signedAttr, unsignedAttr);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetCertificates(::Org::BouncyCastle::X509::Store::IX509Store*  certificates)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                            "SetCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, certificates);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetCrls(::Org::BouncyCastle::X509::Store::IX509Store*  crls)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                            "SetCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, crls);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracySeconds(int32_t  accuracySeconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                            "SetAccuracySeconds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, accuracySeconds);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracyMillis(int32_t  accuracyMillis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                            "SetAccuracyMillis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, accuracyMillis);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracyMicros(int32_t  accuracyMicros)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                            "SetAccuracyMicros",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, accuracyMicros);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetOrdering(bool  ordering)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                            "SetOrdering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ordering);
}
inline void Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetTsa(::Org::BouncyCastle::Asn1::X509::GeneralName*  tsa)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                            "SetTsa",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tsa);
}
inline ::Org::BouncyCastle::Tsp::TimeStampToken* Org::BouncyCastle::Tsp::TimeStampTokenGenerator::Generate(::Org::BouncyCastle::Tsp::TimeStampRequest*  request, ::Org::BouncyCastle::Math::BigInteger*  serialNumber, ::System::DateTime  genTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Tsp::TimeStampRequest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Tsp::TimeStampToken*, false>(*this, ___internal_method, request, serialNumber, genTime);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
