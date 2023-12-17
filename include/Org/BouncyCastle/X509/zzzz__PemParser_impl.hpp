#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__PemParser_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::PemParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::PemParser::*)(::StringW)>(&::Org::BouncyCastle::X509::PemParser::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1174a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::PemParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::PemParser.ReadLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::X509::PemParser::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::X509::PemParser::ReadLine)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1174ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::PemParser*>::get(),
                            "ReadLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::PemParser.ReadPemObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (::Org::BouncyCastle::X509::PemParser::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::X509::PemParser::ReadPemObject)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x1174c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::PemParser*>::get(),
                            "ReadPemObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::X509::PemParser::__set__header1(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Org::BouncyCastle::X509::PemParser::__get__header1()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& Org::BouncyCastle::X509::PemParser::__get__header1() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void Org::BouncyCastle::X509::PemParser::__set__header2(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Org::BouncyCastle::X509::PemParser::__get__header2()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& Org::BouncyCastle::X509::PemParser::__get__header2() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void Org::BouncyCastle::X509::PemParser::__set__footer1(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Org::BouncyCastle::X509::PemParser::__get__footer1()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& Org::BouncyCastle::X509::PemParser::__get__footer1() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void Org::BouncyCastle::X509::PemParser::__set__footer2(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Org::BouncyCastle::X509::PemParser::__get__footer2()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& Org::BouncyCastle::X509::PemParser::__get__footer2() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
inline ::Org::BouncyCastle::X509::PemParser* Org::BouncyCastle::X509::PemParser::New_ctor(::StringW  type)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::X509::PemParser*>(type));
}
inline void Org::BouncyCastle::X509::PemParser::_ctor(::StringW  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::PemParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type);
}
inline ::StringW Org::BouncyCastle::X509::PemParser::ReadLine(::System::IO::Stream*  inStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::PemParser*>::get(),
                            "ReadLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, inStream);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::X509::PemParser::ReadPemObject(::System::IO::Stream*  inStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::PemParser*>::get(),
                            "ReadPemObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*, false>(*this, ___internal_method, inStream);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
