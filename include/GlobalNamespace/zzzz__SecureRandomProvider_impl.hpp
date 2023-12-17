#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SecureRandomProvider_def.hpp"
#include "GlobalNamespace/zzzz__SecureRandomProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__RNGCryptoServiceProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SecureRandomProvider__SecureRandomState.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SecureRandomProvider__SecureRandomState::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::GlobalNamespace::__SecureRandomProvider__SecureRandomState::GetBytes)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xe567c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SecureRandomProvider__SecureRandomState.GetByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::__SecureRandomProvider__SecureRandomState::*)()>(&::GlobalNamespace::__SecureRandomProvider__SecureRandomState::GetByte)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xe568e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*>::get(),
                            "GetByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SecureRandomProvider__SecureRandomState.FillBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SecureRandomProvider__SecureRandomState::*)()>(&::GlobalNamespace::__SecureRandomProvider__SecureRandomState::FillBuffer)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xe56b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*>::get(),
                            "FillBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SecureRandomProvider__SecureRandomState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SecureRandomProvider__SecureRandomState::*)()>(&::GlobalNamespace::__SecureRandomProvider__SecureRandomState::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe56af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__SecureRandomProvider__SecureRandomState::__set__random(::System::Security::Cryptography::RNGCryptoServiceProvider*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::RNGCryptoServiceProvider*, 0x10>(this, std::forward<::System::Security::Cryptography::RNGCryptoServiceProvider*>(value));
}
constexpr ::System::Security::Cryptography::RNGCryptoServiceProvider* GlobalNamespace::__SecureRandomProvider__SecureRandomState::__get__random()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::RNGCryptoServiceProvider*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RNGCryptoServiceProvider*> GlobalNamespace::__SecureRandomProvider__SecureRandomState::__get__random() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::RNGCryptoServiceProvider*, 0x10>(this);
}
constexpr void GlobalNamespace::__SecureRandomProvider__SecureRandomState::__set__randomBuffer0(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& GlobalNamespace::__SecureRandomProvider__SecureRandomState::__get__randomBuffer0()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& GlobalNamespace::__SecureRandomProvider__SecureRandomState::__get__randomBuffer0() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this);
}
constexpr void GlobalNamespace::__SecureRandomProvider__SecureRandomState::__set__randomBuffer1(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x20>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& GlobalNamespace::__SecureRandomProvider__SecureRandomState::__get__randomBuffer1()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x20>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& GlobalNamespace::__SecureRandomProvider__SecureRandomState::__get__randomBuffer1() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x20>(this);
}
constexpr void GlobalNamespace::__SecureRandomProvider__SecureRandomState::__set__index(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__SecureRandomProvider__SecureRandomState::__get__index()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& GlobalNamespace::__SecureRandomProvider__SecureRandomState::__get__index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
inline void GlobalNamespace::__SecureRandomProvider__SecureRandomState::GetBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer, offset, length);
}
inline uint8_t GlobalNamespace::__SecureRandomProvider__SecureRandomState::GetByte()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*>::get(),
                            "GetByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__SecureRandomProvider__SecureRandomState::FillBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*>::get(),
                            "FillBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__SecureRandomProvider__SecureRandomState* GlobalNamespace::__SecureRandomProvider__SecureRandomState::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*>());
}
inline void GlobalNamespace::__SecureRandomProvider__SecureRandomState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::SecureRandomProvider.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (*)(int32_t)>(&::GlobalNamespace::SecureRandomProvider::GetBytes)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xe56720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SecureRandomProvider*>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecureRandomProvider.GetByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)()>(&::GlobalNamespace::SecureRandomProvider::GetByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xe56880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SecureRandomProvider*>::get(),
                            "GetByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecureRandomProvider.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::GlobalNamespace::SecureRandomProvider::GetBytes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xe56988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SecureRandomProvider*>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecureRandomProvider.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::GlobalNamespace::SecureRandomProvider::GetBytes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xe56a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SecureRandomProvider*>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SecureRandomProvider::setStaticF__secureRandomState(::GlobalNamespace::__SecureRandomProvider__SecureRandomState*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*, "_secureRandomState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SecureRandomProvider*>::get>(std::forward<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*>(value));
}
inline ::GlobalNamespace::__SecureRandomProvider__SecureRandomState* GlobalNamespace::SecureRandomProvider::getStaticF__secureRandomState()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*, "_secureRandomState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SecureRandomProvider*>::get>();
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GlobalNamespace::SecureRandomProvider::GetBytes(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SecureRandomProvider*>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(nullptr, ___internal_method, length);
}
inline uint8_t GlobalNamespace::SecureRandomProvider::GetByte()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SecureRandomProvider*>::get(),
                            "GetByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SecureRandomProvider::GetBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SecureRandomProvider*>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer, offset, length);
}
inline void GlobalNamespace::SecureRandomProvider::GetBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SecureRandomProvider*>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
