#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "Mono/Security/X509/zzzz__X509ExtensionCollection_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509Certificate::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Mono::Security::X509::X509Certificate::Parse)> {
  constexpr static std::size_t size = 0x908;
  constexpr static std::size_t addrs = 0x23f9c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509Certificate::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Mono::Security::X509::X509Certificate::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x23efb04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.GetUnsignedBigInteger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Mono::Security::X509::X509Certificate::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Mono::Security::X509::X509Certificate::GetUnsignedBigInteger)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x23fa6c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "GetUnsignedBigInteger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_DSA
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::DSA* (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_DSA)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x23f348c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_DSA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.set_DSA
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509Certificate::*)(::System::Security::Cryptography::DSA*)>(&::Mono::Security::X509::X509Certificate::set_DSA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23fa75c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "set_DSA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSA*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_Extensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509ExtensionCollection* (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_Extensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fa76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_Extensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_Hash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_Hash)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x23fa774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_Hash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_IssuerName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_IssuerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23faa08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_KeyAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_KeyAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23faa10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_KeyAlgorithmParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_KeyAlgorithmParameters)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23faa18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.set_KeyAlgorithmParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509Certificate::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Mono::Security::X509::X509Certificate::set_KeyAlgorithmParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23faa8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_PublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_PublicKey)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23faa94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_RSA
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA* (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_RSA)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x23fab08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.set_RSA
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509Certificate::*)(::System::Security::Cryptography::RSA*)>(&::Mono::Security::X509::X509Certificate::set_RSA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23fac94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_RawData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_RawData)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23faca4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_SerialNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_SerialNumber)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23fad18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_Signature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_Signature)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x23fad8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_SubjectName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_SubjectName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fb1c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_ValidFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_ValidFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fb1d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_ValidUntil
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_ValidUntil)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fb1d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23fb1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_IsCurrent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_IsCurrent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23fb1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_IsCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.WasCurrent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Certificate::*)(::System::DateTime)>(&::Mono::Security::X509::X509Certificate::WasCurrent)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23fb248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "WasCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.VerifySignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Certificate::*)(::System::Security::Cryptography::DSA*)>(&::Mono::Security::X509::X509Certificate::VerifySignature)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x23fb320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSA*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.VerifySignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Certificate::*)(::System::Security::Cryptography::RSA*)>(&::Mono::Security::X509::X509Certificate::VerifySignature)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x23fb3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSA*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.VerifySignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Certificate::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::Mono::Security::X509::X509Certificate::VerifySignature)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x23fb510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.get_IsSelfSigned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Certificate::*)()>(&::Mono::Security::X509::X509Certificate::get_IsSelfSigned)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x23fb69c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_IsSelfSigned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509Certificate::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::Mono::Security::X509::X509Certificate::GetObjectData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23fb7a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Certificate.PEM
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (*)(::StringW, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Mono::Security::X509::X509Certificate::PEM)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x23fa594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "PEM",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  Mono::Security::X509::X509Certificate::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
constexpr void Mono::Security::X509::X509Certificate::__set_decoder(::Mono::Security::ASN1*  value)  {
::cordl_internals::setInstanceField<::Mono::Security::ASN1*, 0x10>(this, std::forward<::Mono::Security::ASN1*>(value));
}
constexpr ::Mono::Security::ASN1* Mono::Security::X509::X509Certificate::__get_decoder()  {
return ::cordl_internals::getInstanceField<::Mono::Security::ASN1*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::ASN1*> Mono::Security::X509::X509Certificate::__get_decoder() const {
return ::cordl_internals::getInstanceField<::Mono::Security::ASN1*, 0x10>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set_m_encodedcert(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Mono::Security::X509::X509Certificate::__get_m_encodedcert()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Mono::Security::X509::X509Certificate::__get_m_encodedcert() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set_m_from(::System::DateTime  value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x20>(this, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime& Mono::Security::X509::X509Certificate::__get_m_from()  {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x20>(this);
}
constexpr ::System::DateTime const& Mono::Security::X509::X509Certificate::__get_m_from() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x20>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set_m_until(::System::DateTime  value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x28>(this, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime& Mono::Security::X509::X509Certificate::__get_m_until()  {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x28>(this);
}
constexpr ::System::DateTime const& Mono::Security::X509::X509Certificate::__get_m_until() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x28>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set_issuer(::Mono::Security::ASN1*  value)  {
::cordl_internals::setInstanceField<::Mono::Security::ASN1*, 0x30>(this, std::forward<::Mono::Security::ASN1*>(value));
}
constexpr ::Mono::Security::ASN1* Mono::Security::X509::X509Certificate::__get_issuer()  {
return ::cordl_internals::getInstanceField<::Mono::Security::ASN1*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::ASN1*> Mono::Security::X509::X509Certificate::__get_issuer() const {
return ::cordl_internals::getInstanceField<::Mono::Security::ASN1*, 0x30>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set_m_issuername(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Mono::Security::X509::X509Certificate::__get_m_issuername()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& Mono::Security::X509::X509Certificate::__get_m_issuername() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set_m_keyalgo(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Mono::Security::X509::X509Certificate::__get_m_keyalgo()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& Mono::Security::X509::X509Certificate::__get_m_keyalgo() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set_m_keyalgoparams(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x48>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Mono::Security::X509::X509Certificate::__get_m_keyalgoparams()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x48>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Mono::Security::X509::X509Certificate::__get_m_keyalgoparams() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x48>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set_subject(::Mono::Security::ASN1*  value)  {
::cordl_internals::setInstanceField<::Mono::Security::ASN1*, 0x50>(this, std::forward<::Mono::Security::ASN1*>(value));
}
constexpr ::Mono::Security::ASN1* Mono::Security::X509::X509Certificate::__get_subject()  {
return ::cordl_internals::getInstanceField<::Mono::Security::ASN1*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::ASN1*> Mono::Security::X509::X509Certificate::__get_subject() const {
return ::cordl_internals::getInstanceField<::Mono::Security::ASN1*, 0x50>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set_m_subject(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Mono::Security::X509::X509Certificate::__get_m_subject()  {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this);
}
constexpr ::StringW const& Mono::Security::X509::X509Certificate::__get_m_subject() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set_m_publickey(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x60>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Mono::Security::X509::X509Certificate::__get_m_publickey()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x60>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Mono::Security::X509::X509Certificate::__get_m_publickey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x60>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set_signature(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x68>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Mono::Security::X509::X509Certificate::__get_signature()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x68>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Mono::Security::X509::X509Certificate::__get_signature() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x68>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set_m_signaturealgo(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Mono::Security::X509::X509Certificate::__get_m_signaturealgo()  {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this);
}
constexpr ::StringW const& Mono::Security::X509::X509Certificate::__get_m_signaturealgo() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set_m_signaturealgoparams(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x78>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Mono::Security::X509::X509Certificate::__get_m_signaturealgoparams()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x78>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Mono::Security::X509::X509Certificate::__get_m_signaturealgoparams() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x78>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set_certhash(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x80>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Mono::Security::X509::X509Certificate::__get_certhash()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x80>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Mono::Security::X509::X509Certificate::__get_certhash() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x80>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set__rsa(::System::Security::Cryptography::RSA*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::RSA*, 0x88>(this, std::forward<::System::Security::Cryptography::RSA*>(value));
}
constexpr ::System::Security::Cryptography::RSA* Mono::Security::X509::X509Certificate::__get__rsa()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::RSA*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RSA*> Mono::Security::X509::X509Certificate::__get__rsa() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::RSA*, 0x88>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set__dsa(::System::Security::Cryptography::DSA*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::DSA*, 0x90>(this, std::forward<::System::Security::Cryptography::DSA*>(value));
}
constexpr ::System::Security::Cryptography::DSA* Mono::Security::X509::X509Certificate::__get__dsa()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::DSA*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DSA*> Mono::Security::X509::X509Certificate::__get__dsa() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::DSA*, 0x90>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set_version(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x98>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Security::X509::X509Certificate::__get_version()  {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this);
}
constexpr int32_t const& Mono::Security::X509::X509Certificate::__get_version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set_serialnumber(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xa0>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Mono::Security::X509::X509Certificate::__get_serialnumber()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xa0>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Mono::Security::X509::X509Certificate::__get_serialnumber() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xa0>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set_issuerUniqueID(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xa8>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Mono::Security::X509::X509Certificate::__get_issuerUniqueID()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xa8>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Mono::Security::X509::X509Certificate::__get_issuerUniqueID() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xa8>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set_subjectUniqueID(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xb0>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Mono::Security::X509::X509Certificate::__get_subjectUniqueID()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xb0>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Mono::Security::X509::X509Certificate::__get_subjectUniqueID() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xb0>(this);
}
constexpr void Mono::Security::X509::X509Certificate::__set_extensions(::Mono::Security::X509::X509ExtensionCollection*  value)  {
::cordl_internals::setInstanceField<::Mono::Security::X509::X509ExtensionCollection*, 0xb8>(this, std::forward<::Mono::Security::X509::X509ExtensionCollection*>(value));
}
constexpr ::Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::X509Certificate::__get_extensions()  {
return ::cordl_internals::getInstanceField<::Mono::Security::X509::X509ExtensionCollection*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509ExtensionCollection*> Mono::Security::X509::X509Certificate::__get_extensions() const {
return ::cordl_internals::getInstanceField<::Mono::Security::X509::X509ExtensionCollection*, 0xb8>(this);
}
inline void Mono::Security::X509::X509Certificate::setStaticF_encoding_error(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "encoding_error", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::X509::X509Certificate::getStaticF_encoding_error()  {
return ::cordl_internals::getStaticField<::StringW, "encoding_error", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get>();
}
inline void Mono::Security::X509::X509Certificate::Parse(::ArrayW<uint8_t,::Array<uint8_t>*>  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data);
}
inline ::Mono::Security::X509::X509Certificate* Mono::Security::X509::X509Certificate::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  data)  {
return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::X509::X509Certificate*>(data));
}
inline void Mono::Security::X509::X509Certificate::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Mono::Security::X509::X509Certificate::GetUnsignedBigInteger(::ArrayW<uint8_t,::Array<uint8_t>*>  integer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "GetUnsignedBigInteger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, integer);
}
inline ::System::Security::Cryptography::DSA* Mono::Security::X509::X509Certificate::get_DSA()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_DSA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSA*, false>(*this, ___internal_method);
}
inline void Mono::Security::X509::X509Certificate::set_DSA(::System::Security::Cryptography::DSA*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "set_DSA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSA*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::X509Certificate::get_Extensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_Extensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509ExtensionCollection*, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Mono::Security::X509::X509Certificate::get_Hash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_Hash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline ::StringW Mono::Security::X509::X509Certificate::get_IssuerName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_IssuerName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW Mono::Security::X509::X509Certificate::get_KeyAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_KeyAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Mono::Security::X509::X509Certificate::get_KeyAlgorithmParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_KeyAlgorithmParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline void Mono::Security::X509::X509Certificate::set_KeyAlgorithmParameters(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "set_KeyAlgorithmParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Mono::Security::X509::X509Certificate::get_PublicKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_PublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline ::System::Security::Cryptography::RSA* Mono::Security::X509::X509Certificate::get_RSA()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_RSA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*, false>(*this, ___internal_method);
}
inline void Mono::Security::X509::X509Certificate::set_RSA(::System::Security::Cryptography::RSA*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "set_RSA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSA*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Mono::Security::X509::X509Certificate::get_RawData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_RawData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Mono::Security::X509::X509Certificate::get_SerialNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_SerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Mono::Security::X509::X509Certificate::get_Signature()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_Signature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline ::StringW Mono::Security::X509::X509Certificate::get_SubjectName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_SubjectName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::System::DateTime Mono::Security::X509::X509Certificate::get_ValidFrom()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_ValidFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(*this, ___internal_method);
}
inline ::System::DateTime Mono::Security::X509::X509Certificate::get_ValidUntil()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_ValidUntil",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(*this, ___internal_method);
}
inline int32_t Mono::Security::X509::X509Certificate::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool Mono::Security::X509::X509Certificate::get_IsCurrent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_IsCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool Mono::Security::X509::X509Certificate::WasCurrent(::System::DateTime  instant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "WasCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, instant);
}
inline bool Mono::Security::X509::X509Certificate::VerifySignature(::System::Security::Cryptography::DSA*  dsa)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSA*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, dsa);
}
inline bool Mono::Security::X509::X509Certificate::VerifySignature(::System::Security::Cryptography::RSA*  rsa)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSA*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, rsa);
}
inline bool Mono::Security::X509::X509Certificate::VerifySignature(::System::Security::Cryptography::AsymmetricAlgorithm*  aa)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, aa);
}
inline bool Mono::Security::X509::X509Certificate::get_IsSelfSigned()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "get_IsSelfSigned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void Mono::Security::X509::X509Certificate::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Mono::Security::X509::X509Certificate::PEM(::StringW  type, ::ArrayW<uint8_t,::Array<uint8_t>*>  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Certificate*>::get(),
                            "PEM",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(nullptr, ___internal_method, type, data);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
