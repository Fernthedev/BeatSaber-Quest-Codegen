#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Clipping_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Clipping_def.hpp"
constexpr void UnityEngine::ProBuilder::__Clipping__OutCode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::ProBuilder::__Clipping__OutCode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::ProBuilder::__Clipping__OutCode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::__Clipping__OutCode::__Clipping__OutCode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::ProBuilder::__Clipping__OutCode  UnityEngine::ProBuilder::__Clipping__OutCode::Inside{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ProBuilder::__Clipping__OutCode  UnityEngine::ProBuilder::__Clipping__OutCode::Left{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::ProBuilder::__Clipping__OutCode  UnityEngine::ProBuilder::__Clipping__OutCode::Right{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::ProBuilder::__Clipping__OutCode  UnityEngine::ProBuilder::__Clipping__OutCode::Bottom{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::ProBuilder::__Clipping__OutCode  UnityEngine::ProBuilder::__Clipping__OutCode::Top{static_cast<int32_t>(0x8)};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Clipping.ComputeOutCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::__Clipping__OutCode (*)(::UnityEngine::Rect, float_t, float_t)>(&::UnityEngine::ProBuilder::Clipping::ComputeOutCode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2b3c214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Clipping*>::get(),
                            "ComputeOutCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Clipping.RectContainsLineSegment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rect, float_t, float_t, float_t, float_t)>(&::UnityEngine::ProBuilder::Clipping::RectContainsLineSegment)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2b3c2b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Clipping*>::get(),
                            "RectContainsLineSegment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
inline ::UnityEngine::ProBuilder::__Clipping__OutCode UnityEngine::ProBuilder::Clipping::ComputeOutCode(::UnityEngine::Rect  rect, float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Clipping*>::get(),
                            "ComputeOutCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::__Clipping__OutCode, false>(nullptr, ___internal_method, rect, x, y);
}
inline bool UnityEngine::ProBuilder::Clipping::RectContainsLineSegment(::UnityEngine::Rect  rect, float_t  x0, float_t  y0, float_t  x1, float_t  y1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Clipping*>::get(),
                            "RectContainsLineSegment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rect, x0, y0, x1, y1);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
