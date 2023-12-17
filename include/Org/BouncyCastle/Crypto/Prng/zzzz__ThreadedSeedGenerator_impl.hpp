#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__ThreadedSeedGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__ThreadedSeedGenerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator::*)(::System::Object*)>(&::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator::Run)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xf44d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator*>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator.GenerateSeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator::*)(int32_t, bool)>(&::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator::GenerateSeed)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xf44c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator*>::get(),
                            "GenerateSeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator.DoGenerateSeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator::*)(int32_t, bool)>(&::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator::DoGenerateSeed)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xf44dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator*>::get(),
                            "DoGenerateSeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator::*)()>(&::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf44c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator::__set_counter(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator::__get_counter()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator::__get_counter() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator::__set_stop(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator::__get_stop()  {
return ::cordl_internals::getInstanceField<bool, 0x14>(this);
}
constexpr bool const& Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator::__get_stop() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this);
}
inline void Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator::Run(::System::Object*  ignored)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator*>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ignored);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator::GenerateSeed(int32_t  numBytes, bool  fast)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator*>::get(),
                            "GenerateSeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, numBytes, fast);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator::DoGenerateSeed(int32_t  numBytes, bool  fast)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator*>::get(),
                            "DoGenerateSeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, numBytes, fast);
}
inline ::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator* Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator*>());
}
inline void Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator.GenerateSeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator::*)(int32_t, bool)>(&::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator::GenerateSeed)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xf44bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator*>::get(),
                            "GenerateSeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator::*)()>(&::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf44d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator::GenerateSeed(int32_t  numBytes, bool  fast)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator*>::get(),
                            "GenerateSeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, numBytes, fast);
}
inline ::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator* Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator*>());
}
inline void Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
