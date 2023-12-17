#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FloatingTransformEffect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatingTransformEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatingTransformEffect::*)()>(&::GlobalNamespace::FloatingTransformEffect::Start)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2397e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatingTransformEffect*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatingTransformEffect.Tick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatingTransformEffect::*)()>(&::GlobalNamespace::FloatingTransformEffect::Tick)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2397f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatingTransformEffect*>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatingTransformEffect.Refresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatingTransformEffect::*)()>(&::GlobalNamespace::FloatingTransformEffect::Refresh)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2397ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatingTransformEffect*>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatingTransformEffect.GetPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::FloatingTransformEffect::*)(float_t)>(&::GlobalNamespace::FloatingTransformEffect::GetPoint)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x23980e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatingTransformEffect*>::get(),
                            "GetPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatingTransformEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatingTransformEffect::*)()>(&::GlobalNamespace::FloatingTransformEffect::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2398174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatingTransformEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::ITickable"
constexpr  GlobalNamespace::FloatingTransformEffect::operator ::Zenject::ITickable*() noexcept {
return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__positionMultiplier(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x18>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FloatingTransformEffect::__get__positionMultiplier()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FloatingTransformEffect::__get__positionMultiplier() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__rotationMultiplier(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x24>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FloatingTransformEffect::__get__rotationMultiplier()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x24>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FloatingTransformEffect::__get__rotationMultiplier() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x24>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__rotationTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x30>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::FloatingTransformEffect::__get__rotationTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::FloatingTransformEffect::__get__rotationTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x30>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__maxRotationDegrees(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FloatingTransformEffect::__get__maxRotationDegrees()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::FloatingTransformEffect::__get__maxRotationDegrees() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__xAmplitude(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x3c>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FloatingTransformEffect::__get__xAmplitude()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x3c>(this);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FloatingTransformEffect::__get__xAmplitude() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x3c>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__xFrequency(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x44>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FloatingTransformEffect::__get__xFrequency()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x44>(this);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FloatingTransformEffect::__get__xFrequency() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x44>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__yAmplitude(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x4c>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FloatingTransformEffect::__get__yAmplitude()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x4c>(this);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FloatingTransformEffect::__get__yAmplitude() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x4c>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__yFrequency(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x54>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FloatingTransformEffect::__get__yFrequency()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x54>(this);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FloatingTransformEffect::__get__yFrequency() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x54>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__zAmplitude(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x5c>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FloatingTransformEffect::__get__zAmplitude()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x5c>(this);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FloatingTransformEffect::__get__zAmplitude() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x5c>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__zFrequency(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x64>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FloatingTransformEffect::__get__zFrequency()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x64>(this);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FloatingTransformEffect::__get__zFrequency() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x64>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__transform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x70>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::FloatingTransformEffect::__get__transform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::FloatingTransformEffect::__get__transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x70>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__origin(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x78>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FloatingTransformEffect::__get__origin()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x78>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FloatingTransformEffect::__get__origin() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x78>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__offsetX(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x84>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FloatingTransformEffect::__get__offsetX()  {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this);
}
constexpr float_t const& GlobalNamespace::FloatingTransformEffect::__get__offsetX() const {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__offsetY(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x88>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FloatingTransformEffect::__get__offsetY()  {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this);
}
constexpr float_t const& GlobalNamespace::FloatingTransformEffect::__get__offsetY() const {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__offsetZ(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x8c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FloatingTransformEffect::__get__offsetZ()  {
return ::cordl_internals::getInstanceField<float_t, 0x8c>(this);
}
constexpr float_t const& GlobalNamespace::FloatingTransformEffect::__get__offsetZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x8c>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__amplitudeX(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x90>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FloatingTransformEffect::__get__amplitudeX()  {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this);
}
constexpr float_t const& GlobalNamespace::FloatingTransformEffect::__get__amplitudeX() const {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__amplitudeY(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x94>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FloatingTransformEffect::__get__amplitudeY()  {
return ::cordl_internals::getInstanceField<float_t, 0x94>(this);
}
constexpr float_t const& GlobalNamespace::FloatingTransformEffect::__get__amplitudeY() const {
return ::cordl_internals::getInstanceField<float_t, 0x94>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__amplitudeZ(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x98>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FloatingTransformEffect::__get__amplitudeZ()  {
return ::cordl_internals::getInstanceField<float_t, 0x98>(this);
}
constexpr float_t const& GlobalNamespace::FloatingTransformEffect::__get__amplitudeZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x98>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__frequencyX(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x9c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FloatingTransformEffect::__get__frequencyX()  {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this);
}
constexpr float_t const& GlobalNamespace::FloatingTransformEffect::__get__frequencyX() const {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__frequencyY(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xa0>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FloatingTransformEffect::__get__frequencyY()  {
return ::cordl_internals::getInstanceField<float_t, 0xa0>(this);
}
constexpr float_t const& GlobalNamespace::FloatingTransformEffect::__get__frequencyY() const {
return ::cordl_internals::getInstanceField<float_t, 0xa0>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__frequencyZ(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xa4>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FloatingTransformEffect::__get__frequencyZ()  {
return ::cordl_internals::getInstanceField<float_t, 0xa4>(this);
}
constexpr float_t const& GlobalNamespace::FloatingTransformEffect::__get__frequencyZ() const {
return ::cordl_internals::getInstanceField<float_t, 0xa4>(this);
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__targetRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0xa8>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::FloatingTransformEffect::__get__targetRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xa8>(this);
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::FloatingTransformEffect::__get__targetRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xa8>(this);
}
inline void GlobalNamespace::FloatingTransformEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatingTransformEffect*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::FloatingTransformEffect::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatingTransformEffect*>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::FloatingTransformEffect::Refresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatingTransformEffect*>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::FloatingTransformEffect::GetPoint(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatingTransformEffect*>::get(),
                            "GetPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method, time);
}
inline ::GlobalNamespace::FloatingTransformEffect* GlobalNamespace::FloatingTransformEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FloatingTransformEffect*>());
}
inline void GlobalNamespace::FloatingTransformEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatingTransformEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
