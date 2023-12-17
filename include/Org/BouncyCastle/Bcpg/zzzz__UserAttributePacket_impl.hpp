#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributePacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacket_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributePacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::UserAttributePacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(&::Org::BouncyCastle::Bcpg::UserAttributePacket::_ctor)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x11cee70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributePacket*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributePacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::UserAttributePacket::*)(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*,::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>)>(&::Org::BouncyCastle::Bcpg::UserAttributePacket::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11d4f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributePacket*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*,::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributePacket.GetSubpackets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*,::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> (::Org::BouncyCastle::Bcpg::UserAttributePacket::*)()>(&::Org::BouncyCastle::Bcpg::UserAttributePacket::GetSubpackets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11d4f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributePacket*>::get(),
                            "GetSubpackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::UserAttributePacket.Encode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::UserAttributePacket::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(&::Org::BouncyCastle::Bcpg::UserAttributePacket::Encode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x11d4f3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributePacket*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributePacket*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Bcpg::UserAttributePacket::__set_subpackets(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*,::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*,::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>, 0x10>(this, std::forward<::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*,::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>>(value));
}
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*,::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>& Org::BouncyCastle::Bcpg::UserAttributePacket::__get_subpackets()  {
return ::cordl_internals::getInstanceField<::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*,::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>, 0x10>(this);
}
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*,::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> const& Org::BouncyCastle::Bcpg::UserAttributePacket::__get_subpackets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*,::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>, 0x10>(this);
}
inline ::Org::BouncyCastle::Bcpg::UserAttributePacket* Org::BouncyCastle::Bcpg::UserAttributePacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::UserAttributePacket*>(bcpgIn));
}
inline void Org::BouncyCastle::Bcpg::UserAttributePacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributePacket*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bcpgIn);
}
inline ::Org::BouncyCastle::Bcpg::UserAttributePacket* Org::BouncyCastle::Bcpg::UserAttributePacket::New_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*,::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>  subpackets)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::UserAttributePacket*>(subpackets));
}
inline void Org::BouncyCastle::Bcpg::UserAttributePacket::_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*,::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>  subpackets)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributePacket*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*,::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, subpackets);
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*,::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> Org::BouncyCastle::Bcpg::UserAttributePacket::GetSubpackets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributePacket*>::get(),
                            "GetSubpackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*,::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::UserAttributePacket::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream*  bcpgOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::UserAttributePacket*>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bcpgOut);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
