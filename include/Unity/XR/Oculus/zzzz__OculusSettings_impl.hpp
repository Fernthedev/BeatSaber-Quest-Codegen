#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Unity/XR/Oculus/zzzz__OculusSettings_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "Unity/XR/Oculus/zzzz__OculusSettings_def.hpp"
constexpr void Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop::__OculusSettings__StereoRenderingModeDesktop(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop  Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop::MultiPass{static_cast<int32_t>(0x0)};
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop  Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop::SinglePassInstanced{static_cast<int32_t>(0x1)};
constexpr void Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid::__OculusSettings__StereoRenderingModeAndroid(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid  Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid::MultiPass{static_cast<int32_t>(0x0)};
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid  Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid::Multiview{static_cast<int32_t>(0x2)};
constexpr void Unity::XR::Oculus::__OculusSettings__FoveationMethod::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Unity::XR::Oculus::__OculusSettings__FoveationMethod::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Unity::XR::Oculus::__OculusSettings__FoveationMethod::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::XR::Oculus::__OculusSettings__FoveationMethod::__OculusSettings__FoveationMethod(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Unity::XR::Oculus::__OculusSettings__FoveationMethod  Unity::XR::Oculus::__OculusSettings__FoveationMethod::FixedFoveatedRendering{static_cast<int32_t>(0x0)};
constexpr ::Unity::XR::Oculus::__OculusSettings__FoveationMethod  Unity::XR::Oculus::__OculusSettings__FoveationMethod::EyeTrackedFoveatedRendering{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Unity::XR::Oculus::OculusSettings.GetStereoRenderingMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::Unity::XR::Oculus::OculusSettings::*)()>(&::Unity::XR::Oculus::OculusSettings::GetStereoRenderingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c783ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusSettings*>::get(),
                            "GetStereoRenderingMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::OculusSettings.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::Oculus::OculusSettings::*)()>(&::Unity::XR::Oculus::OculusSettings::Awake)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2c7bc04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusSettings*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::OculusSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::Oculus::OculusSettings::*)()>(&::Unity::XR::Oculus::OculusSettings::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2c7bc50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Unity::XR::Oculus::OculusSettings::__set_m_StereoRenderingModeDesktop(::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop  value)  {
::cordl_internals::setInstanceField<::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop, 0x18>(this, std::forward<::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop>(value));
}
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop& Unity::XR::Oculus::OculusSettings::__get_m_StereoRenderingModeDesktop()  {
return ::cordl_internals::getInstanceField<::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop, 0x18>(this);
}
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop const& Unity::XR::Oculus::OculusSettings::__get_m_StereoRenderingModeDesktop() const {
return ::cordl_internals::getInstanceField<::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeDesktop, 0x18>(this);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_m_StereoRenderingModeAndroid(::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid  value)  {
::cordl_internals::setInstanceField<::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid, 0x1c>(this, std::forward<::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid>(value));
}
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid& Unity::XR::Oculus::OculusSettings::__get_m_StereoRenderingModeAndroid()  {
return ::cordl_internals::getInstanceField<::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid, 0x1c>(this);
}
constexpr ::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid const& Unity::XR::Oculus::OculusSettings::__get_m_StereoRenderingModeAndroid() const {
return ::cordl_internals::getInstanceField<::Unity::XR::Oculus::__OculusSettings__StereoRenderingModeAndroid, 0x1c>(this);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_SharedDepthBuffer(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_SharedDepthBuffer()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_SharedDepthBuffer() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_DepthSubmission(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this, std::forward<bool>(value));
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_DepthSubmission()  {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_DepthSubmission() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_DashSupport(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x22>(this, std::forward<bool>(value));
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_DashSupport()  {
return ::cordl_internals::getInstanceField<bool, 0x22>(this);
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_DashSupport() const {
return ::cordl_internals::getInstanceField<bool, 0x22>(this);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_LowOverheadMode(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x23>(this, std::forward<bool>(value));
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_LowOverheadMode()  {
return ::cordl_internals::getInstanceField<bool, 0x23>(this);
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_LowOverheadMode() const {
return ::cordl_internals::getInstanceField<bool, 0x23>(this);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_OptimizeBufferDiscards(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this, std::forward<bool>(value));
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_OptimizeBufferDiscards()  {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_OptimizeBufferDiscards() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_PhaseSync(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x25>(this, std::forward<bool>(value));
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_PhaseSync()  {
return ::cordl_internals::getInstanceField<bool, 0x25>(this);
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_PhaseSync() const {
return ::cordl_internals::getInstanceField<bool, 0x25>(this);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_SymmetricProjection(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x26>(this, std::forward<bool>(value));
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_SymmetricProjection()  {
return ::cordl_internals::getInstanceField<bool, 0x26>(this);
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_SymmetricProjection() const {
return ::cordl_internals::getInstanceField<bool, 0x26>(this);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_SubsampledLayout(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x27>(this, std::forward<bool>(value));
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_SubsampledLayout()  {
return ::cordl_internals::getInstanceField<bool, 0x27>(this);
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_SubsampledLayout() const {
return ::cordl_internals::getInstanceField<bool, 0x27>(this);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_FoveatedRenderingMethod(::Unity::XR::Oculus::__OculusSettings__FoveationMethod  value)  {
::cordl_internals::setInstanceField<::Unity::XR::Oculus::__OculusSettings__FoveationMethod, 0x28>(this, std::forward<::Unity::XR::Oculus::__OculusSettings__FoveationMethod>(value));
}
constexpr ::Unity::XR::Oculus::__OculusSettings__FoveationMethod& Unity::XR::Oculus::OculusSettings::__get_FoveatedRenderingMethod()  {
return ::cordl_internals::getInstanceField<::Unity::XR::Oculus::__OculusSettings__FoveationMethod, 0x28>(this);
}
constexpr ::Unity::XR::Oculus::__OculusSettings__FoveationMethod const& Unity::XR::Oculus::OculusSettings::__get_FoveatedRenderingMethod() const {
return ::cordl_internals::getInstanceField<::Unity::XR::Oculus::__OculusSettings__FoveationMethod, 0x28>(this);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_LateLatching(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this, std::forward<bool>(value));
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_LateLatching()  {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_LateLatching() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_LateLatchingDebug(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2d>(this, std::forward<bool>(value));
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_LateLatchingDebug()  {
return ::cordl_internals::getInstanceField<bool, 0x2d>(this);
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_LateLatchingDebug() const {
return ::cordl_internals::getInstanceField<bool, 0x2d>(this);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_EnableTrackingOriginStageMode(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2e>(this, std::forward<bool>(value));
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_EnableTrackingOriginStageMode()  {
return ::cordl_internals::getInstanceField<bool, 0x2e>(this);
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_EnableTrackingOriginStageMode() const {
return ::cordl_internals::getInstanceField<bool, 0x2e>(this);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_SpaceWarp(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2f>(this, std::forward<bool>(value));
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_SpaceWarp()  {
return ::cordl_internals::getInstanceField<bool, 0x2f>(this);
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_SpaceWarp() const {
return ::cordl_internals::getInstanceField<bool, 0x2f>(this);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_TargetQuest(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_TargetQuest()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_TargetQuest() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_TargetQuest2(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this, std::forward<bool>(value));
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_TargetQuest2()  {
return ::cordl_internals::getInstanceField<bool, 0x31>(this);
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_TargetQuest2() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_TargetQuestPro(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x32>(this, std::forward<bool>(value));
}
constexpr bool& Unity::XR::Oculus::OculusSettings::__get_TargetQuestPro()  {
return ::cordl_internals::getInstanceField<bool, 0x32>(this);
}
constexpr bool const& Unity::XR::Oculus::OculusSettings::__get_TargetQuestPro() const {
return ::cordl_internals::getInstanceField<bool, 0x32>(this);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_SystemSplashScreen(::UnityEngine::Texture2D*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Texture2D*, 0x38>(this, std::forward<::UnityEngine::Texture2D*>(value));
}
constexpr ::UnityEngine::Texture2D* Unity::XR::Oculus::OculusSettings::__get_SystemSplashScreen()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture2D*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> Unity::XR::Oculus::OculusSettings::__get_SystemSplashScreen() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture2D*, 0x38>(this);
}
inline void Unity::XR::Oculus::OculusSettings::setStaticF_s_Settings(::Unity::XR::Oculus::OculusSettings*  value)  {
::cordl_internals::setStaticField<::Unity::XR::Oculus::OculusSettings*, "s_Settings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusSettings*>::get>(std::forward<::Unity::XR::Oculus::OculusSettings*>(value));
}
inline ::Unity::XR::Oculus::OculusSettings* Unity::XR::Oculus::OculusSettings::getStaticF_s_Settings()  {
return ::cordl_internals::getStaticField<::Unity::XR::Oculus::OculusSettings*, "s_Settings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusSettings*>::get>();
}
inline uint16_t Unity::XR::Oculus::OculusSettings::GetStereoRenderingMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusSettings*>::get(),
                            "GetStereoRenderingMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(*this, ___internal_method);
}
inline void Unity::XR::Oculus::OculusSettings::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusSettings*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Unity::XR::Oculus::OculusSettings* Unity::XR::Oculus::OculusSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Unity::XR::Oculus::OculusSettings*>());
}
inline void Unity::XR::Oculus::OculusSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::OculusSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
