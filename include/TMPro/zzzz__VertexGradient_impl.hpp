#pragma once
#include "TMPro/zzzz__VertexGradient_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::TMPro::VertexGradient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::VertexGradient::*)(::UnityEngine::Color)>(&::TMPro::VertexGradient::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c00d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::VertexGradient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::VertexGradient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::VertexGradient::*)(::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(&::TMPro::VertexGradient::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c00d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::VertexGradient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void TMPro::VertexGradient::__set_topLeft(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& TMPro::VertexGradient::__get_topLeft()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Color const& TMPro::VertexGradient::__get_topLeft() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void TMPro::VertexGradient::__set_topRight(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& TMPro::VertexGradient::__get_topRight()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Color const& TMPro::VertexGradient::__get_topRight() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void TMPro::VertexGradient::__set_bottomLeft(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& TMPro::VertexGradient::__get_bottomLeft()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Color const& TMPro::VertexGradient::__get_bottomLeft() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void TMPro::VertexGradient::__set_bottomRight(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& TMPro::VertexGradient::__get_bottomRight()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Color const& TMPro::VertexGradient::__get_bottomRight() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void TMPro::VertexGradient::_ctor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::VertexGradient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, color);
}
inline void TMPro::VertexGradient::_ctor(::UnityEngine::Color  color0, ::UnityEngine::Color  color1, ::UnityEngine::Color  color2, ::UnityEngine::Color  color3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::VertexGradient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, color0, color1, color2, color3);
}
// Ctor Parameters [CppParam { name: "topLeft", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "topRight", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomLeft", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomRight", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::VertexGradient::VertexGradient(::UnityEngine::Color  topLeft, ::UnityEngine::Color  topRight, ::UnityEngine::Color  bottomLeft, ::UnityEngine::Color  bottomRight) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->topLeft = topLeft;
this->topRight = topRight;
this->bottomLeft = bottomLeft;
this->bottomRight = bottomRight;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
