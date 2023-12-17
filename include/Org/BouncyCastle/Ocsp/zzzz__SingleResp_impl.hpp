#pragma once
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__SingleResp_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Utilities/Date/zzzz__DateTimeObject_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__SingleResponse_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateID_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::SingleResp._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::SingleResp::*)(::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*)>(&::Org::BouncyCastle::Ocsp::SingleResp::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x109c070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::SingleResp*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::SingleResp.GetCertID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Ocsp::CertificateID* (::Org::BouncyCastle::Ocsp::SingleResp::*)()>(&::Org::BouncyCastle::Ocsp::SingleResp::GetCertID)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x10a5030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::SingleResp*>::get(),
                            "GetCertID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::SingleResp.GetCertStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Ocsp::SingleResp::*)()>(&::Org::BouncyCastle::Ocsp::SingleResp::GetCertStatus)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x10a509c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::SingleResp*>::get(),
                            "GetCertStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::SingleResp.get_ThisUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Org::BouncyCastle::Ocsp::SingleResp::*)()>(&::Org::BouncyCastle::Ocsp::SingleResp::get_ThisUpdate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x10a51bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::SingleResp*>::get(),
                            "get_ThisUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::SingleResp.get_NextUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Date::DateTimeObject* (::Org::BouncyCastle::Ocsp::SingleResp::*)()>(&::Org::BouncyCastle::Ocsp::SingleResp::get_NextUpdate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x10a51e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::SingleResp*>::get(),
                            "get_NextUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::SingleResp.get_SingleExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Ocsp::SingleResp::*)()>(&::Org::BouncyCastle::Ocsp::SingleResp::get_SingleExtensions)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10a526c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::SingleResp*>::get(),
                            "get_SingleExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::SingleResp.GetX509Extensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Ocsp::SingleResp::*)()>(&::Org::BouncyCastle::Ocsp::SingleResp::GetX509Extensions)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10a5288;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::SingleResp*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::SingleResp*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Ocsp::SingleResp::__set_resp(::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*, 0x10>(this, std::forward<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* Org::BouncyCastle::Ocsp::SingleResp::__get_resp()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*> Org::BouncyCastle::Ocsp::SingleResp::__get_resp() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*, 0x10>(this);
}
inline ::Org::BouncyCastle::Ocsp::SingleResp* Org::BouncyCastle::Ocsp::SingleResp::New_ctor(::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*  resp)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Ocsp::SingleResp*>(resp));
}
inline void Org::BouncyCastle::Ocsp::SingleResp::_ctor(::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*  resp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::SingleResp*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, resp);
}
inline ::Org::BouncyCastle::Ocsp::CertificateID* Org::BouncyCastle::Ocsp::SingleResp::GetCertID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::SingleResp*>::get(),
                            "GetCertID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::CertificateID*, false>(*this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Ocsp::SingleResp::GetCertStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::SingleResp*>::get(),
                            "GetCertStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::Ocsp::SingleResp::get_ThisUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::SingleResp*>::get(),
                            "get_ThisUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* Org::BouncyCastle::Ocsp::SingleResp::get_NextUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::SingleResp*>::get(),
                            "get_NextUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Date::DateTimeObject*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Ocsp::SingleResp::get_SingleExtensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::SingleResp*>::get(),
                            "get_SingleExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Ocsp::SingleResp::GetX509Extensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::SingleResp*>::get(),
                            "GetX509Extensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
