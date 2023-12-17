#pragma once
#include "TMPro/zzzz__Extents_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::TMPro::Extents._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::Extents::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::TMPro::Extents::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c010b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Extents>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::Extents.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::Extents::*)()>(&::TMPro::Extents::ToString)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x2c010bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Extents>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Extents>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
inline void TMPro::Extents::setStaticF_zero(::TMPro::Extents  value)  {
::cordl_internals::setStaticField<::TMPro::Extents, "zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Extents>::get>(std::forward<::TMPro::Extents>(value));
}
inline ::TMPro::Extents TMPro::Extents::getStaticF_zero()  {
return ::cordl_internals::getStaticField<::TMPro::Extents, "zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Extents>::get>();
}
inline void TMPro::Extents::setStaticF_uninitialized(::TMPro::Extents  value)  {
::cordl_internals::setStaticField<::TMPro::Extents, "uninitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Extents>::get>(std::forward<::TMPro::Extents>(value));
}
inline ::TMPro::Extents TMPro::Extents::getStaticF_uninitialized()  {
return ::cordl_internals::getStaticField<::TMPro::Extents, "uninitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Extents>::get>();
}
constexpr void TMPro::Extents::__set_min(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& TMPro::Extents::__get_min()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector2 const& TMPro::Extents::__get_min() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void TMPro::Extents::__set_max(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& TMPro::Extents::__get_max()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector2 const& TMPro::Extents::__get_max() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void TMPro::Extents::_ctor(::UnityEngine::Vector2  min, ::UnityEngine::Vector2  max)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Extents>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, min, max);
}
inline ::StringW TMPro::Extents::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Extents>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "min", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "max", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::Extents::Extents(::UnityEngine::Vector2  min, ::UnityEngine::Vector2  max) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->min = min;
this->max = max;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
