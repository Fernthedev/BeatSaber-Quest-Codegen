#pragma once
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__MixedNafR2LMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::*)()>(&::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1036bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::*)(int32_t, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1036c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier.MultiplyPositive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::MultiplyPositive)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x1036c3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier.ConfigureCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::*)(::Org::BouncyCastle::Math::EC::ECCurve*, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::ConfigureCurve)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1037098;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::__set_additionCoord(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::__get_additionCoord()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::__get_additionCoord() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::__set_doublingCoord(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::__get_doublingCoord()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::__get_doublingCoord() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier* Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>());
}
inline void Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier* Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::New_ctor(int32_t  additionCoord, int32_t  doublingCoord)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>(additionCoord, doublingCoord));
}
inline void Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::_ctor(int32_t  additionCoord, int32_t  doublingCoord)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, additionCoord, doublingCoord);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint*  p, ::Org::BouncyCastle::Math::BigInteger*  k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>::get(),
                            "MultiplyPositive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(*this, ___internal_method, p, k);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::ConfigureCurve(::Org::BouncyCastle::Math::EC::ECCurve*  c, int32_t  coord)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier*>::get(),
                            "ConfigureCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*, false>(*this, ___internal_method, c, coord);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
