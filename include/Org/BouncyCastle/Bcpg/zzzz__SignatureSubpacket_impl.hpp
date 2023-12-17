#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacketTag_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignatureSubpacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::SignatureSubpacket::*)(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag, bool, bool, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Bcpg::SignatureSubpacket::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x11c71fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignatureSubpacket.get_SubpacketType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag (::Org::BouncyCastle::Bcpg::SignatureSubpacket::*)()>(&::Org::BouncyCastle::Bcpg::SignatureSubpacket::get_SubpacketType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c7244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>::get(),
                            "get_SubpacketType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignatureSubpacket.IsCritical
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::SignatureSubpacket::*)()>(&::Org::BouncyCastle::Bcpg::SignatureSubpacket::IsCritical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c724c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>::get(),
                            "IsCritical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignatureSubpacket.IsLongLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::SignatureSubpacket::*)()>(&::Org::BouncyCastle::Bcpg::SignatureSubpacket::IsLongLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c7254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>::get(),
                            "IsLongLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignatureSubpacket.GetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::SignatureSubpacket::*)()>(&::Org::BouncyCastle::Bcpg::SignatureSubpacket::GetData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x11c725c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>::get(),
                            "GetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SignatureSubpacket.Encode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::SignatureSubpacket::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Bcpg::SignatureSubpacket::Encode)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x11c72d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Bcpg::SignatureSubpacket::__set_type(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag, 0x10>(this, std::forward<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag& Org::BouncyCastle::Bcpg::SignatureSubpacket::__get_type()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag, 0x10>(this);
}
constexpr ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const& Org::BouncyCastle::Bcpg::SignatureSubpacket::__get_type() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag, 0x10>(this);
}
constexpr void Org::BouncyCastle::Bcpg::SignatureSubpacket::__set_critical(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Bcpg::SignatureSubpacket::__get_critical()  {
return ::cordl_internals::getInstanceField<bool, 0x14>(this);
}
constexpr bool const& Org::BouncyCastle::Bcpg::SignatureSubpacket::__get_critical() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this);
}
constexpr void Org::BouncyCastle::Bcpg::SignatureSubpacket::__set_isLongLength(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x15>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Bcpg::SignatureSubpacket::__get_isLongLength()  {
return ::cordl_internals::getInstanceField<bool, 0x15>(this);
}
constexpr bool const& Org::BouncyCastle::Bcpg::SignatureSubpacket::__get_isLongLength() const {
return ::cordl_internals::getInstanceField<bool, 0x15>(this);
}
constexpr void Org::BouncyCastle::Bcpg::SignatureSubpacket::__set_data(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Org::BouncyCastle::Bcpg::SignatureSubpacket::__get_data()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Org::BouncyCastle::Bcpg::SignatureSubpacket::__get_data() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this);
}
inline ::Org::BouncyCastle::Bcpg::SignatureSubpacket* Org::BouncyCastle::Bcpg::SignatureSubpacket::New_ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  type, bool  critical, bool  isLongLength, ::ArrayW<uint8_t,::Array<uint8_t>*>  data)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>(type, critical, isLongLength, data));
}
inline void Org::BouncyCastle::Bcpg::SignatureSubpacket::_ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  type, bool  critical, bool  isLongLength, ::ArrayW<uint8_t,::Array<uint8_t>*>  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, critical, isLongLength, data);
}
inline ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag Org::BouncyCastle::Bcpg::SignatureSubpacket::get_SubpacketType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>::get(),
                            "get_SubpacketType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag, false>(*this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::SignatureSubpacket::IsCritical()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>::get(),
                            "IsCritical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::SignatureSubpacket::IsLongLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>::get(),
                            "IsLongLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Bcpg::SignatureSubpacket::GetData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>::get(),
                            "GetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::SignatureSubpacket::Encode(::System::IO::Stream*  os)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, os);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
