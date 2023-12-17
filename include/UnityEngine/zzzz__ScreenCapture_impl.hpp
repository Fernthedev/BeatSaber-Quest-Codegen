#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScreenCapture_def.hpp"
#include "UnityEngine/zzzz__ScreenCapture_def.hpp"
constexpr void UnityEngine::__ScreenCapture__StereoScreenCaptureMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::__ScreenCapture__StereoScreenCaptureMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::__ScreenCapture__StereoScreenCaptureMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__ScreenCapture__StereoScreenCaptureMode::__ScreenCapture__StereoScreenCaptureMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::__ScreenCapture__StereoScreenCaptureMode  UnityEngine::__ScreenCapture__StereoScreenCaptureMode::LeftEye{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::__ScreenCapture__StereoScreenCaptureMode  UnityEngine::__ScreenCapture__StereoScreenCaptureMode::RightEye{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::__ScreenCapture__StereoScreenCaptureMode  UnityEngine::__ScreenCapture__StereoScreenCaptureMode::BothEyes{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::UnityEngine::ScreenCapture.CaptureScreenshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::ScreenCapture::CaptureScreenshot)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d17f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScreenCapture*>::get(),
                            "CaptureScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ScreenCapture.CaptureScreenshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::__ScreenCapture__StereoScreenCaptureMode)>(&::UnityEngine::ScreenCapture::CaptureScreenshot)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d17fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScreenCapture*>::get(),
                            "CaptureScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ScreenCapture__StereoScreenCaptureMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ScreenCapture.CaptureScreenshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, int32_t, ::UnityEngine::__ScreenCapture__StereoScreenCaptureMode)>(&::UnityEngine::ScreenCapture::CaptureScreenshot)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2d17f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScreenCapture*>::get(),
                            "CaptureScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ScreenCapture__StereoScreenCaptureMode>::get()}
                        )));
    return ___internal_method;
  }
};
inline void UnityEngine::ScreenCapture::CaptureScreenshot(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScreenCapture*>::get(),
                            "CaptureScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, filename);
}
inline void UnityEngine::ScreenCapture::CaptureScreenshot(::StringW  filename, ::UnityEngine::__ScreenCapture__StereoScreenCaptureMode  stereoCaptureMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScreenCapture*>::get(),
                            "CaptureScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ScreenCapture__StereoScreenCaptureMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, filename, stereoCaptureMode);
}
inline void UnityEngine::ScreenCapture::CaptureScreenshot(::StringW  filename, int32_t  superSize, ::UnityEngine::__ScreenCapture__StereoScreenCaptureMode  CaptureMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScreenCapture*>::get(),
                            "CaptureScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ScreenCapture__StereoScreenCaptureMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, filename, superSize, CaptureMode);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
