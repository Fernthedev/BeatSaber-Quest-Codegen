#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509CrlParser_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__PemParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1InputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CertificateList_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Crl_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CrlParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509CrlParser::*)()>(&::Org::BouncyCastle::X509::X509CrlParser::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x117e4e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CrlParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509CrlParser::*)(bool)>(&::Org::BouncyCastle::X509::X509CrlParser::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x117e500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CrlParser.ReadPemCrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Crl* (::Org::BouncyCastle::X509::X509CrlParser::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::X509::X509CrlParser::ReadPemCrl)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x117e528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                            "ReadPemCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CrlParser.ReadDerCrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Crl* (::Org::BouncyCastle::X509::X509CrlParser::*)(::Org::BouncyCastle::Asn1::Asn1InputStream*)>(&::Org::BouncyCastle::X509::X509CrlParser::ReadDerCrl)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x117e5d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                            "ReadDerCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1InputStream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CrlParser.GetCrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Crl* (::Org::BouncyCastle::X509::X509CrlParser::*)()>(&::Org::BouncyCastle::X509::X509CrlParser::GetCrl)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x117e7e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                            "GetCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CrlParser.CreateX509Crl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Crl* (::Org::BouncyCastle::X509::X509CrlParser::*)(::Org::BouncyCastle::Asn1::X509::CertificateList*)>(&::Org::BouncyCastle::X509::X509CrlParser::CreateX509Crl)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x117e86c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CrlParser.ReadCrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Crl* (::Org::BouncyCastle::X509::X509CrlParser::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::X509::X509CrlParser::ReadCrl)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x117e8cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                            "ReadCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CrlParser.ReadCrls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::X509::X509CrlParser::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::X509::X509CrlParser::ReadCrls)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x117eca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                            "ReadCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CrlParser.ReadCrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Crl* (::Org::BouncyCastle::X509::X509CrlParser::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::X509::X509CrlParser::ReadCrl)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x117e944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                            "ReadCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CrlParser.ReadCrls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::X509::X509CrlParser::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::X509::X509CrlParser::ReadCrls)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x117ed1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                            "ReadCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::X509::X509CrlParser::setStaticF_PemCrlParser(::Org::BouncyCastle::X509::PemParser*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::X509::PemParser*, "PemCrlParser", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get>(std::forward<::Org::BouncyCastle::X509::PemParser*>(value));
}
inline ::Org::BouncyCastle::X509::PemParser* Org::BouncyCastle::X509::X509CrlParser::getStaticF_PemCrlParser()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::X509::PemParser*, "PemCrlParser", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get>();
}
constexpr void Org::BouncyCastle::X509::X509CrlParser::__set_lazyAsn1(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::X509::X509CrlParser::__get_lazyAsn1()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& Org::BouncyCastle::X509::X509CrlParser::__get_lazyAsn1() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void Org::BouncyCastle::X509::X509CrlParser::__set_sCrlData(::Org::BouncyCastle::Asn1::Asn1Set*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x18>(this, std::forward<::Org::BouncyCastle::Asn1::Asn1Set*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::X509::X509CrlParser::__get_sCrlData()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> Org::BouncyCastle::X509::X509CrlParser::__get_sCrlData() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1Set*, 0x18>(this);
}
constexpr void Org::BouncyCastle::X509::X509CrlParser::__set_sCrlDataObjectCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::X509::X509CrlParser::__get_sCrlDataObjectCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& Org::BouncyCastle::X509::X509CrlParser::__get_sCrlDataObjectCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void Org::BouncyCastle::X509::X509CrlParser::__set_currentCrlStream(::System::IO::Stream*  value)  {
::cordl_internals::setInstanceField<::System::IO::Stream*, 0x28>(this, std::forward<::System::IO::Stream*>(value));
}
constexpr ::System::IO::Stream* Org::BouncyCastle::X509::X509CrlParser::__get_currentCrlStream()  {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> Org::BouncyCastle::X509::X509CrlParser::__get_currentCrlStream() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x28>(this);
}
inline ::Org::BouncyCastle::X509::X509CrlParser* Org::BouncyCastle::X509::X509CrlParser::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::X509::X509CrlParser*>());
}
inline void Org::BouncyCastle::X509::X509CrlParser::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509CrlParser* Org::BouncyCastle::X509::X509CrlParser::New_ctor(bool  lazyAsn1)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::X509::X509CrlParser*>(lazyAsn1));
}
inline void Org::BouncyCastle::X509::X509CrlParser::_ctor(bool  lazyAsn1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lazyAsn1);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::X509::X509CrlParser::ReadPemCrl(::System::IO::Stream*  inStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                            "ReadPemCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*, false>(*this, ___internal_method, inStream);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::X509::X509CrlParser::ReadDerCrl(::Org::BouncyCastle::Asn1::Asn1InputStream*  dIn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                            "ReadDerCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1InputStream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*, false>(*this, ___internal_method, dIn);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::X509::X509CrlParser::GetCrl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                            "GetCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::X509::X509CrlParser::CreateX509Crl(::Org::BouncyCastle::Asn1::X509::CertificateList*  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                            "CreateX509Crl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::CertificateList*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*, false>(*this, ___internal_method, c);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::X509::X509CrlParser::ReadCrl(::ArrayW<uint8_t,::Array<uint8_t>*>  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                            "ReadCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*, false>(*this, ___internal_method, input);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::X509CrlParser::ReadCrls(::ArrayW<uint8_t,::Array<uint8_t>*>  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                            "ReadCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(*this, ___internal_method, input);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::X509::X509CrlParser::ReadCrl(::System::IO::Stream*  inStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                            "ReadCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl*, false>(*this, ___internal_method, inStream);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::X509CrlParser::ReadCrls(::System::IO::Stream*  inStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509CrlParser*>::get(),
                            "ReadCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(*this, ___internal_method, inStream);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
