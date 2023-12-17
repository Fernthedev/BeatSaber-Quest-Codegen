#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__ColorUsageAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::ColorUsageAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ColorUsageAttribute::*)(bool)>(&::UnityEngine::ColorUsageAttribute::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ccc278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ColorUsageAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColorUsageAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ColorUsageAttribute::*)(bool, bool)>(&::UnityEngine::ColorUsageAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ccc2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ColorUsageAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ColorUsageAttribute::__set_showAlpha(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ColorUsageAttribute::__get_showAlpha()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& UnityEngine::ColorUsageAttribute::__get_showAlpha() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void UnityEngine::ColorUsageAttribute::__set_hdr(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::ColorUsageAttribute::__get_hdr()  {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr bool const& UnityEngine::ColorUsageAttribute::__get_hdr() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr void UnityEngine::ColorUsageAttribute::__set_minBrightness(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::ColorUsageAttribute::__get_minBrightness()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& UnityEngine::ColorUsageAttribute::__get_minBrightness() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void UnityEngine::ColorUsageAttribute::__set_maxBrightness(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::ColorUsageAttribute::__get_maxBrightness()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& UnityEngine::ColorUsageAttribute::__get_maxBrightness() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void UnityEngine::ColorUsageAttribute::__set_minExposureValue(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::ColorUsageAttribute::__get_minExposureValue()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& UnityEngine::ColorUsageAttribute::__get_minExposureValue() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void UnityEngine::ColorUsageAttribute::__set_maxExposureValue(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::ColorUsageAttribute::__get_maxExposureValue()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& UnityEngine::ColorUsageAttribute::__get_maxExposureValue() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
inline ::UnityEngine::ColorUsageAttribute* UnityEngine::ColorUsageAttribute::New_ctor(bool  showAlpha)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ColorUsageAttribute*>(showAlpha));
}
inline void UnityEngine::ColorUsageAttribute::_ctor(bool  showAlpha)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ColorUsageAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, showAlpha);
}
inline ::UnityEngine::ColorUsageAttribute* UnityEngine::ColorUsageAttribute::New_ctor(bool  showAlpha, bool  hdr)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ColorUsageAttribute*>(showAlpha, hdr));
}
inline void UnityEngine::ColorUsageAttribute::_ctor(bool  showAlpha, bool  hdr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ColorUsageAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, showAlpha, hdr);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
