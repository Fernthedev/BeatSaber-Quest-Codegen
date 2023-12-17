#pragma once
#include "GlobalNamespace/zzzz__LightGroupSubsystem_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupCircularLayouter_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupCircularLayouter_def.hpp"
constexpr void GlobalNamespace::__LightGroupCircularLayouter__RotationDirection::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__LightGroupCircularLayouter__RotationDirection::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__LightGroupCircularLayouter__RotationDirection::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection::__LightGroupCircularLayouter__RotationDirection(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection  GlobalNamespace::__LightGroupCircularLayouter__RotationDirection::Clockwise{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection  GlobalNamespace::__LightGroupCircularLayouter__RotationDirection::Counterclockwise{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::LightGroupCircularLayouter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightGroupCircularLayouter::*)()>(&::GlobalNamespace::LightGroupCircularLayouter::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23a9830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupCircularLayouter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightGroupCircularLayouter::__set__radius(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LightGroupCircularLayouter::__get__radius()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::LightGroupCircularLayouter::__get__radius() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::LightGroupCircularLayouter::__set__angle(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LightGroupCircularLayouter::__get__angle()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::LightGroupCircularLayouter::__get__angle() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void GlobalNamespace::LightGroupCircularLayouter::__set__startingAngle(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LightGroupCircularLayouter::__get__startingAngle()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::LightGroupCircularLayouter::__get__startingAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void GlobalNamespace::LightGroupCircularLayouter::__set__rotationDirection(::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection, 0x2c>(this, std::forward<::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection>(value));
}
constexpr ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection& GlobalNamespace::LightGroupCircularLayouter::__get__rotationDirection()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection, 0x2c>(this);
}
constexpr ::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection const& GlobalNamespace::LightGroupCircularLayouter::__get__rotationDirection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__LightGroupCircularLayouter__RotationDirection, 0x2c>(this);
}
constexpr void GlobalNamespace::LightGroupCircularLayouter::__set__staticRotation(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::LightGroupCircularLayouter::__get__staticRotation()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& GlobalNamespace::LightGroupCircularLayouter::__get__staticRotation() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void GlobalNamespace::LightGroupCircularLayouter::__set__additionalAngle(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x34>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LightGroupCircularLayouter::__get__additionalAngle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x34>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LightGroupCircularLayouter::__get__additionalAngle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x34>(this);
}
inline ::GlobalNamespace::LightGroupCircularLayouter* GlobalNamespace::LightGroupCircularLayouter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightGroupCircularLayouter*>());
}
inline void GlobalNamespace::LightGroupCircularLayouter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupCircularLayouter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
