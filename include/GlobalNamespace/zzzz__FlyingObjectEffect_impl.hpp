#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__IFlyingObjectEffectDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlyingObjectEffect.get_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* (::GlobalNamespace::FlyingObjectEffect::*)()>(&::GlobalNamespace::FlyingObjectEffect::get_didFinishEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x239821c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(),
                            "get_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingObjectEffect.InitAndPresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingObjectEffect::*)(float_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool)>(&::GlobalNamespace::FlyingObjectEffect::InitAndPresent)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2398224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(),
                            "InitAndPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingObjectEffect.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingObjectEffect::*)()>(&::GlobalNamespace::FlyingObjectEffect::Update)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x239830c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingObjectEffect.ManualUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingObjectEffect::*)(float_t)>(&::GlobalNamespace::FlyingObjectEffect::ManualUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingObjectEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingObjectEffect::*)()>(&::GlobalNamespace::FlyingObjectEffect::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x23986c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FlyingObjectEffect::__set__moveAnimationCurve(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x18>(this, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* GlobalNamespace::FlyingObjectEffect::__get__moveAnimationCurve()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> GlobalNamespace::FlyingObjectEffect::__get__moveAnimationCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x18>(this);
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__shakeFrequency(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FlyingObjectEffect::__get__shakeFrequency()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::FlyingObjectEffect::__get__shakeFrequency() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__shakeStrength(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FlyingObjectEffect::__get__shakeStrength()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::FlyingObjectEffect::__get__shakeStrength() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__shakeStrengthAnimationCurve(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x28>(this, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* GlobalNamespace::FlyingObjectEffect::__get__shakeStrengthAnimationCurve()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> GlobalNamespace::FlyingObjectEffect::__get__shakeStrengthAnimationCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x28>(this);
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__initialized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::FlyingObjectEffect::__get__initialized()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& GlobalNamespace::FlyingObjectEffect::__get__initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__shakeRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x34>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::FlyingObjectEffect::__get__shakeRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x34>(this);
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::FlyingObjectEffect::__get__shakeRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x34>(this);
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__rotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x44>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::FlyingObjectEffect::__get__rotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x44>(this);
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::FlyingObjectEffect::__get__rotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x44>(this);
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__elapsedTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FlyingObjectEffect::__get__elapsedTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
constexpr float_t const& GlobalNamespace::FlyingObjectEffect::__get__elapsedTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__startPos(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x58>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FlyingObjectEffect::__get__startPos()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x58>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FlyingObjectEffect::__get__startPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x58>(this);
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__targetPos(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x64>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FlyingObjectEffect::__get__targetPos()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x64>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FlyingObjectEffect::__get__targetPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x64>(this);
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__duration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FlyingObjectEffect::__get__duration()  {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
constexpr float_t const& GlobalNamespace::FlyingObjectEffect::__get__duration() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__shake(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x74>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::FlyingObjectEffect::__get__shake()  {
return ::cordl_internals::getInstanceField<bool, 0x74>(this);
}
constexpr bool const& GlobalNamespace::FlyingObjectEffect::__get__shake() const {
return ::cordl_internals::getInstanceField<bool, 0x74>(this);
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__didFinishEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*, 0x78>(this, std::forward<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*>(value));
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* GlobalNamespace::FlyingObjectEffect::__get__didFinishEvent()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*> GlobalNamespace::FlyingObjectEffect::__get__didFinishEvent() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*, 0x78>(this);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* GlobalNamespace::FlyingObjectEffect::get_didFinishEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(),
                            "get_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::FlyingObjectEffect::InitAndPresent(float_t  duration, ::UnityEngine::Vector3  targetPos, ::UnityEngine::Quaternion  rotation, bool  shake)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(),
                            "InitAndPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, duration, targetPos, rotation, shake);
}
inline void GlobalNamespace::FlyingObjectEffect::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::FlyingObjectEffect::ManualUpdate(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, t);
}
inline ::GlobalNamespace::FlyingObjectEffect* GlobalNamespace::FlyingObjectEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FlyingObjectEffect*>());
}
inline void GlobalNamespace::FlyingObjectEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
