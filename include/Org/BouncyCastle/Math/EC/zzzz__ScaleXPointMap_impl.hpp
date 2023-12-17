#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ScaleXPointMap_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPointMap_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ScaleXPointMap._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::ScaleXPointMap::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&::Org::BouncyCastle::Math::EC::ScaleXPointMap::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x105adf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ScaleXPointMap*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECFieldElement*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::ScaleXPointMap.Map
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::ScaleXPointMap::*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(&::Org::BouncyCastle::Math::EC::ScaleXPointMap::Map)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x105ae20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ScaleXPointMap*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ScaleXPointMap*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::ECPointMap"
constexpr  Org::BouncyCastle::Math::EC::ScaleXPointMap::operator ::Org::BouncyCastle::Math::EC::ECPointMap*() noexcept {
return static_cast<::Org::BouncyCastle::Math::EC::ECPointMap*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Math::EC::ScaleXPointMap::__set_scale(::Org::BouncyCastle::Math::EC::ECFieldElement*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Math::EC::ECFieldElement*, 0x10>(this, std::forward<::Org::BouncyCastle::Math::EC::ECFieldElement*>(value));
}
constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::ScaleXPointMap::__get_scale()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Math::EC::ECFieldElement*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECFieldElement*> Org::BouncyCastle::Math::EC::ScaleXPointMap::__get_scale() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Math::EC::ECFieldElement*, 0x10>(this);
}
inline ::Org::BouncyCastle::Math::EC::ScaleXPointMap* Org::BouncyCastle::Math::EC::ScaleXPointMap::New_ctor(::Org::BouncyCastle::Math::EC::ECFieldElement*  scale)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Math::EC::ScaleXPointMap*>(scale));
}
inline void Org::BouncyCastle::Math::EC::ScaleXPointMap::_ctor(::Org::BouncyCastle::Math::EC::ECFieldElement*  scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ScaleXPointMap*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECFieldElement*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, scale);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ScaleXPointMap::Map(::Org::BouncyCastle::Math::EC::ECPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::ScaleXPointMap*>::get(),
                            "Map",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(*this, ___internal_method, p);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
