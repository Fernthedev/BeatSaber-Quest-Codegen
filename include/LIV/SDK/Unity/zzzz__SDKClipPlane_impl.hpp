#pragma once
#include "LIV/SDK/Unity/zzzz__SDKClipPlane_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKMatrix4x4_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKClipPlane.get_empty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKClipPlane (*)()>(&::LIV::SDK::Unity::SDKClipPlane::get_empty)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2215234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKClipPlane>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKClipPlane.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LIV::SDK::Unity::SDKClipPlane::*)()>(&::LIV::SDK::Unity::SDKClipPlane::ToString)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2215da8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKClipPlane>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKClipPlane>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void LIV::SDK::Unity::SDKClipPlane::__set_transform(::LIV::SDK::Unity::SDKMatrix4x4  value)  {
::cordl_internals::setInstanceField<::LIV::SDK::Unity::SDKMatrix4x4, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::LIV::SDK::Unity::SDKMatrix4x4>(value));
}
constexpr ::LIV::SDK::Unity::SDKMatrix4x4& LIV::SDK::Unity::SDKClipPlane::__get_transform()  {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKMatrix4x4, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::LIV::SDK::Unity::SDKMatrix4x4 const& LIV::SDK::Unity::SDKClipPlane::__get_transform() const {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKMatrix4x4, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void LIV::SDK::Unity::SDKClipPlane::__set_width(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& LIV::SDK::Unity::SDKClipPlane::__get_width()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& LIV::SDK::Unity::SDKClipPlane::__get_width() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void LIV::SDK::Unity::SDKClipPlane::__set_height(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& LIV::SDK::Unity::SDKClipPlane::__get_height()  {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& LIV::SDK::Unity::SDKClipPlane::__get_height() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void LIV::SDK::Unity::SDKClipPlane::__set_tesselation(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& LIV::SDK::Unity::SDKClipPlane::__get_tesselation()  {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& LIV::SDK::Unity::SDKClipPlane::__get_tesselation() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::LIV::SDK::Unity::SDKClipPlane LIV::SDK::Unity::SDKClipPlane::get_empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKClipPlane>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKClipPlane, false>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKClipPlane::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKClipPlane>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "transform", ty: "::LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "tesselation", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKClipPlane::SDKClipPlane(::LIV::SDK::Unity::SDKMatrix4x4  transform, int32_t  width, int32_t  height, float_t  tesselation) noexcept : ::bs_hook::ValueTypeWrapper<0x4c>() {this->transform = transform;
this->width = width;
this->height = height;
this->tesselation = tesselation;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
