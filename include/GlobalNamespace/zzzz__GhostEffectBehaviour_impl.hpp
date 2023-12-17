#pragma once
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GhostEffectBehaviour_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__GhostEffectBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
constexpr void GlobalNamespace::__GhostEffectBehaviour__EndBehavior::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__GhostEffectBehaviour__EndBehavior::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__GhostEffectBehaviour__EndBehavior::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior::__GhostEffectBehaviour__EndBehavior(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior  GlobalNamespace::__GhostEffectBehaviour__EndBehavior::DisableAll{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior  GlobalNamespace::__GhostEffectBehaviour__EndBehavior::DisableCopies{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior  GlobalNamespace::__GhostEffectBehaviour__EndBehavior::Nothing{static_cast<int32_t>(0x2)};
constexpr void GlobalNamespace::__GhostEffectBehaviour__GhostEffectType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__GhostEffectBehaviour__GhostEffectType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__GhostEffectBehaviour__GhostEffectType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType::__GhostEffectBehaviour__GhostEffectType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType  GlobalNamespace::__GhostEffectBehaviour__GhostEffectType::TextMeshPro{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType  GlobalNamespace::__GhostEffectBehaviour__GhostEffectType::Canvas{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::GhostEffectBehaviour.OnBehaviourPlay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostEffectBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&::GlobalNamespace::GhostEffectBehaviour::OnBehaviourPlay)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2317380;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectBehaviour*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostEffectBehaviour.ProcessFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostEffectBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::GlobalNamespace::GhostEffectBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x2317624;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectBehaviour*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostEffectBehaviour.EnableObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostEffectBehaviour::*)(bool)>(&::GlobalNamespace::GhostEffectBehaviour::EnableObjects)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2317510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectBehaviour*>::get(),
                            "EnableObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostEffectBehaviour._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostEffectBehaviour::*)()>(&::GlobalNamespace::GhostEffectBehaviour::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2317a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectBehaviour*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GhostEffectBehaviour::__set_alphaCurve(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x10>(this, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* GlobalNamespace::GhostEffectBehaviour::__get_alphaCurve()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> GlobalNamespace::GhostEffectBehaviour::__get_alphaCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x10>(this);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set_sizeCurve(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x18>(this, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* GlobalNamespace::GhostEffectBehaviour::__get_sizeCurve()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> GlobalNamespace::GhostEffectBehaviour::__get_sizeCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x18>(this);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set_distanceCurve(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x20>(this, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* GlobalNamespace::GhostEffectBehaviour::__get_distanceCurve()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> GlobalNamespace::GhostEffectBehaviour::__get_distanceCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x20>(this);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__distanceMultiplier(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x28>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GhostEffectBehaviour::__get__distanceMultiplier()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x28>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GhostEffectBehaviour::__get__distanceMultiplier() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x28>(this);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__useStartTransform(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x34>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::GhostEffectBehaviour::__get__useStartTransform()  {
return ::cordl_internals::getInstanceField<bool, 0x34>(this);
}
constexpr bool const& GlobalNamespace::GhostEffectBehaviour::__get__useStartTransform() const {
return ::cordl_internals::getInstanceField<bool, 0x34>(this);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__useEndTransform(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x35>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::GhostEffectBehaviour::__get__useEndTransform()  {
return ::cordl_internals::getInstanceField<bool, 0x35>(this);
}
constexpr bool const& GlobalNamespace::GhostEffectBehaviour::__get__useEndTransform() const {
return ::cordl_internals::getInstanceField<bool, 0x35>(this);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__startLocalPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x38>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GhostEffectBehaviour::__get__startLocalPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x38>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GhostEffectBehaviour::__get__startLocalPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x38>(this);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__startTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x48>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::GhostEffectBehaviour::__get__startTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::GhostEffectBehaviour::__get__startTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x48>(this);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__endLocalPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x50>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GhostEffectBehaviour::__get__endLocalPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x50>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GhostEffectBehaviour::__get__endLocalPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x50>(this);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__endTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x60>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::GhostEffectBehaviour::__get__endTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::GhostEffectBehaviour::__get__endTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x60>(this);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__positionEasing(::GlobalNamespace::EaseType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EaseType, 0x68>(this, std::forward<::GlobalNamespace::EaseType>(value));
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::GhostEffectBehaviour::__get__positionEasing()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EaseType, 0x68>(this);
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::GhostEffectBehaviour::__get__positionEasing() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EaseType, 0x68>(this);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__endBehavior(::GlobalNamespace::__GhostEffectBehaviour__EndBehavior  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__GhostEffectBehaviour__EndBehavior, 0x6c>(this, std::forward<::GlobalNamespace::__GhostEffectBehaviour__EndBehavior>(value));
}
constexpr ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior& GlobalNamespace::GhostEffectBehaviour::__get__endBehavior()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GhostEffectBehaviour__EndBehavior, 0x6c>(this);
}
constexpr ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior const& GlobalNamespace::GhostEffectBehaviour::__get__endBehavior() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GhostEffectBehaviour__EndBehavior, 0x6c>(this);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set_progress(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::GhostEffectBehaviour::__get_progress()  {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
constexpr float_t const& GlobalNamespace::GhostEffectBehaviour::__get_progress() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set_textMeshPros(::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*>, 0x78>(this, std::forward<::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*>>(value));
}
constexpr ::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*>& GlobalNamespace::GhostEffectBehaviour::__get_textMeshPros()  {
return ::cordl_internals::getInstanceField<::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*>, 0x78>(this);
}
constexpr ::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*> const& GlobalNamespace::GhostEffectBehaviour::__get_textMeshPros() const {
return ::cordl_internals::getInstanceField<::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*>, 0x78>(this);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__canvasGroups(::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>, 0x80>(this, std::forward<::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>& GlobalNamespace::GhostEffectBehaviour::__get__canvasGroups()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>, 0x80>(this);
}
constexpr ::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*> const& GlobalNamespace::GhostEffectBehaviour::__get__canvasGroups() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>, 0x80>(this);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__ghostEffectType(::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType, 0x88>(this, std::forward<::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType>(value));
}
constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType& GlobalNamespace::GhostEffectBehaviour::__get__ghostEffectType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType, 0x88>(this);
}
constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType const& GlobalNamespace::GhostEffectBehaviour::__get__ghostEffectType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType, 0x88>(this);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__ghostEffectTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x90>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::GhostEffectBehaviour::__get__ghostEffectTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::GhostEffectBehaviour::__get__ghostEffectTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x90>(this);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__direction(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x98>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GhostEffectBehaviour::__get__direction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x98>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GhostEffectBehaviour::__get__direction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x98>(this);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__finished(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa4>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::GhostEffectBehaviour::__get__finished()  {
return ::cordl_internals::getInstanceField<bool, 0xa4>(this);
}
constexpr bool const& GlobalNamespace::GhostEffectBehaviour::__get__finished() const {
return ::cordl_internals::getInstanceField<bool, 0xa4>(this);
}
inline void GlobalNamespace::GhostEffectBehaviour::OnBehaviourPlay(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectBehaviour*>::get(),
                            "OnBehaviourPlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playable, info);
}
inline void GlobalNamespace::GhostEffectBehaviour::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectBehaviour*>::get(),
                            "ProcessFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playable, info, playerData);
}
inline void GlobalNamespace::GhostEffectBehaviour::EnableObjects(bool  on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectBehaviour*>::get(),
                            "EnableObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, on);
}
inline ::GlobalNamespace::GhostEffectBehaviour* GlobalNamespace::GhostEffectBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GhostEffectBehaviour*>());
}
inline void GlobalNamespace::GhostEffectBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostEffectBehaviour*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
