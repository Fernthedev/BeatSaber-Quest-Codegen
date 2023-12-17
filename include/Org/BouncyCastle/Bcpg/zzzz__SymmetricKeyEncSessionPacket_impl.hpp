#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyEncSessionPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__S2k_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(&::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x11ce3c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::S2k*, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x11d4c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::S2k*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket.get_EncAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag (::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::*)()>(&::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::get_EncAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11d4c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>::get(),
                            "get_EncAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket.get_S2k
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::S2k* (::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::*)()>(&::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::get_S2k)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11d4c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>::get(),
                            "get_S2k",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket.GetSecKeyData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::*)()>(&::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::GetSecKeyData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11d4c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>::get(),
                            "GetSecKeyData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::*)()>(&::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11d4c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket.Encode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(&::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::Encode)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x11d4c68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__set_version(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__get_version()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__get_version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__set_encAlgorithm(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, 0x14>(this, std::forward<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__get_encAlgorithm()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, 0x14>(this);
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__get_encAlgorithm() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, 0x14>(this);
}
constexpr void Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__set_s2k(::Org::BouncyCastle::Bcpg::S2k*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::S2k*, 0x18>(this, std::forward<::Org::BouncyCastle::Bcpg::S2k*>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::S2k* Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__get_s2k()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::S2k*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::S2k*> Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__get_s2k() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::S2k*, 0x18>(this);
}
constexpr void Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__set_secKeyData(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x20>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__get_secKeyData()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x20>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::__get_secKeyData() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x20>(this);
}
inline ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(bcpgIn));
}
inline void Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bcpgIn);
}
inline ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  encAlgorithm, ::Org::BouncyCastle::Bcpg::S2k*  s2k, ::ArrayW<uint8_t,::Array<uint8_t>*>  secKeyData)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(encAlgorithm, s2k, secKeyData));
}
inline void Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag  encAlgorithm, ::Org::BouncyCastle::Bcpg::S2k*  s2k, ::ArrayW<uint8_t,::Array<uint8_t>*>  secKeyData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::S2k*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, encAlgorithm, s2k, secKeyData);
}
inline ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::get_EncAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>::get(),
                            "get_EncAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::S2k* Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::get_S2k()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>::get(),
                            "get_S2k",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::S2k*, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::GetSecKeyData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>::get(),
                            "GetSecKeyData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream*  bcpgOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bcpgOut);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
