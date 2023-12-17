#pragma once
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__LimitedInputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::LimitedInputStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::LimitedInputStream::*)(::System::IO::Stream*, int32_t)>(&::Org::BouncyCastle::Asn1::LimitedInputStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x11c00bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::LimitedInputStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::LimitedInputStream.get_Limit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Asn1::LimitedInputStream::*)()>(&::Org::BouncyCastle::Asn1::LimitedInputStream::get_Limit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c00e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::LimitedInputStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::LimitedInputStream*>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::LimitedInputStream.SetParentEofDetect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::LimitedInputStream::*)(bool)>(&::Org::BouncyCastle::Asn1::LimitedInputStream::SetParentEofDetect)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x11c00f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::LimitedInputStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::LimitedInputStream*>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Asn1::LimitedInputStream::__set__in(::System::IO::Stream*  value)  {
::cordl_internals::setInstanceField<::System::IO::Stream*, 0x30>(this, std::forward<::System::IO::Stream*>(value));
}
constexpr ::System::IO::Stream* Org::BouncyCastle::Asn1::LimitedInputStream::__get__in()  {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> Org::BouncyCastle::Asn1::LimitedInputStream::__get__in() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x30>(this);
}
constexpr void Org::BouncyCastle::Asn1::LimitedInputStream::__set__limit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Asn1::LimitedInputStream::__get__limit()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr int32_t const& Org::BouncyCastle::Asn1::LimitedInputStream::__get__limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
inline ::Org::BouncyCastle::Asn1::LimitedInputStream* Org::BouncyCastle::Asn1::LimitedInputStream::New_ctor(::System::IO::Stream*  inStream, int32_t  limit)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::LimitedInputStream*>(inStream, limit));
}
inline void Org::BouncyCastle::Asn1::LimitedInputStream::_ctor(::System::IO::Stream*  inStream, int32_t  limit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::LimitedInputStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inStream, limit);
}
inline int32_t Org::BouncyCastle::Asn1::LimitedInputStream::get_Limit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::LimitedInputStream*>::get(),
                            "get_Limit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::LimitedInputStream::SetParentEofDetect(bool  on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::LimitedInputStream*>::get(),
                            "SetParentEofDetect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, on);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
