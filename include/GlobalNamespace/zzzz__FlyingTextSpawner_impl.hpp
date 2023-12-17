#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingTextSpawner_def.hpp"
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "GlobalNamespace/zzzz__FlyingTextEffect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__IFlyingObjectEffectDidFinishEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlyingTextSpawner.SpawnText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingTextSpawner::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::StringW)>(&::GlobalNamespace::FlyingTextSpawner::SpawnText)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x23a1f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingTextSpawner*>::get(),
                            "SpawnText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingTextSpawner.HandleFlyingObjectEffectDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingTextSpawner::*)(::GlobalNamespace::FlyingObjectEffect*)>(&::GlobalNamespace::FlyingTextSpawner::HandleFlyingObjectEffectDidFinish)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x23a2110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingTextSpawner*>::get(),
                            "HandleFlyingObjectEffectDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FlyingObjectEffect*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingTextSpawner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingTextSpawner::*)()>(&::GlobalNamespace::FlyingTextSpawner::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23a222c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingTextSpawner*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
constexpr  GlobalNamespace::FlyingTextSpawner::operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*() noexcept {
return static_cast<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__duration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FlyingTextSpawner::__get__duration()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::FlyingTextSpawner::__get__duration() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__xSpread(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FlyingTextSpawner::__get__xSpread()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::FlyingTextSpawner::__get__xSpread() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__targetYPos(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FlyingTextSpawner::__get__targetYPos()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::FlyingTextSpawner::__get__targetYPos() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__targetZPos(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FlyingTextSpawner::__get__targetZPos()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::FlyingTextSpawner::__get__targetZPos() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__color(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x28>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::FlyingTextSpawner::__get__color()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x28>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::FlyingTextSpawner::__get__color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x28>(this);
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__fontSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FlyingTextSpawner::__get__fontSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::FlyingTextSpawner::__get__fontSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__shake(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::FlyingTextSpawner::__get__shake()  {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this);
}
constexpr bool const& GlobalNamespace::FlyingTextSpawner::__get__shake() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this);
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__flyingTextEffectPool(::GlobalNamespace::__FlyingTextEffect__Pool*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__FlyingTextEffect__Pool*, 0x40>(this, std::forward<::GlobalNamespace::__FlyingTextEffect__Pool*>(value));
}
constexpr ::GlobalNamespace::__FlyingTextEffect__Pool* GlobalNamespace::FlyingTextSpawner::__get__flyingTextEffectPool()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__FlyingTextEffect__Pool*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FlyingTextEffect__Pool*> GlobalNamespace::FlyingTextSpawner::__get__flyingTextEffectPool() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__FlyingTextEffect__Pool*, 0x40>(this);
}
inline void GlobalNamespace::FlyingTextSpawner::SpawnText(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Quaternion  inverseRotation, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingTextSpawner*>::get(),
                            "SpawnText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pos, rotation, inverseRotation, text);
}
inline void GlobalNamespace::FlyingTextSpawner::HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect*  flyingObjectEffect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingTextSpawner*>::get(),
                            "HandleFlyingObjectEffectDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FlyingObjectEffect*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, flyingObjectEffect);
}
inline ::GlobalNamespace::FlyingTextSpawner* GlobalNamespace::FlyingTextSpawner::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FlyingTextSpawner*>());
}
inline void GlobalNamespace::FlyingTextSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingTextSpawner*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
