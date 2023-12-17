#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__OriginatorInfoGenerator_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorInfo_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInfoGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::OriginatorInfoGenerator::*)(::Org::BouncyCastle::X509::X509Certificate*)>(&::Org::BouncyCastle::Cms::OriginatorInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1206928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInfoGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::OriginatorInfoGenerator::*)(::Org::BouncyCastle::X509::Store::IX509Store*)>(&::Org::BouncyCastle::Cms::OriginatorInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1206a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInfoGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::OriginatorInfoGenerator::*)(::Org::BouncyCastle::X509::Store::IX509Store*, ::Org::BouncyCastle::X509::Store::IX509Store*)>(&::Org::BouncyCastle::Cms::OriginatorInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1206a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInfoGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* (::Org::BouncyCastle::Cms::OriginatorInfoGenerator::*)()>(&::Org::BouncyCastle::Cms::OriginatorInfoGenerator::Generate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1206ab4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cms::OriginatorInfoGenerator::__set_origCerts(::System::Collections::IList*  value)  {
::cordl_internals::setInstanceField<::System::Collections::IList*, 0x10>(this, std::forward<::System::Collections::IList*>(value));
}
constexpr ::System::Collections::IList* Org::BouncyCastle::Cms::OriginatorInfoGenerator::__get_origCerts()  {
return ::cordl_internals::getInstanceField<::System::Collections::IList*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> Org::BouncyCastle::Cms::OriginatorInfoGenerator::__get_origCerts() const {
return ::cordl_internals::getInstanceField<::System::Collections::IList*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Cms::OriginatorInfoGenerator::__set_origCrls(::System::Collections::IList*  value)  {
::cordl_internals::setInstanceField<::System::Collections::IList*, 0x18>(this, std::forward<::System::Collections::IList*>(value));
}
constexpr ::System::Collections::IList* Org::BouncyCastle::Cms::OriginatorInfoGenerator::__get_origCrls()  {
return ::cordl_internals::getInstanceField<::System::Collections::IList*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> Org::BouncyCastle::Cms::OriginatorInfoGenerator::__get_origCrls() const {
return ::cordl_internals::getInstanceField<::System::Collections::IList*, 0x18>(this);
}
inline ::Org::BouncyCastle::Cms::OriginatorInfoGenerator* Org::BouncyCastle::Cms::OriginatorInfoGenerator::New_ctor(::Org::BouncyCastle::X509::X509Certificate*  origCert)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>(origCert));
}
inline void Org::BouncyCastle::Cms::OriginatorInfoGenerator::_ctor(::Org::BouncyCastle::X509::X509Certificate*  origCert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, origCert);
}
inline ::Org::BouncyCastle::Cms::OriginatorInfoGenerator* Org::BouncyCastle::Cms::OriginatorInfoGenerator::New_ctor(::Org::BouncyCastle::X509::Store::IX509Store*  origCerts)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>(origCerts));
}
inline void Org::BouncyCastle::Cms::OriginatorInfoGenerator::_ctor(::Org::BouncyCastle::X509::Store::IX509Store*  origCerts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, origCerts);
}
inline ::Org::BouncyCastle::Cms::OriginatorInfoGenerator* Org::BouncyCastle::Cms::OriginatorInfoGenerator::New_ctor(::Org::BouncyCastle::X509::Store::IX509Store*  origCerts, ::Org::BouncyCastle::X509::Store::IX509Store*  origCrls)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>(origCerts, origCrls));
}
inline void Org::BouncyCastle::Cms::OriginatorInfoGenerator::_ctor(::Org::BouncyCastle::X509::Store::IX509Store*  origCerts, ::Org::BouncyCastle::X509::Store::IX509Store*  origCrls)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, origCerts, origCrls);
}
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* Org::BouncyCastle::Cms::OriginatorInfoGenerator::Generate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInfoGenerator*>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
