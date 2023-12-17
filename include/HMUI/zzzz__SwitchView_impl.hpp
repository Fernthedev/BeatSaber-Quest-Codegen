#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__SwitchView_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "HMUI/zzzz__ToggleWithCallbacks_def.hpp"
#include "HMUI/zzzz__SwitchView_def.hpp"
constexpr void HMUI::__SwitchView__AnimationType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::__SwitchView__AnimationType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HMUI::__SwitchView__AnimationType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__SwitchView__AnimationType::__SwitchView__AnimationType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HMUI::__SwitchView__AnimationType  HMUI::__SwitchView__AnimationType::OnOff{static_cast<int32_t>(0x0)};
constexpr ::HMUI::__SwitchView__AnimationType  HMUI::__SwitchView__AnimationType::SelectedState{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::HMUI::SwitchView.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SwitchView::*)()>(&::HMUI::SwitchView::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2146a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SwitchView.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SwitchView::*)()>(&::HMUI::SwitchView::Start)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2146acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SwitchView.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SwitchView::*)()>(&::HMUI::SwitchView::OnDestroy)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2146db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SwitchView.HandleOnValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SwitchView::*)(bool)>(&::HMUI::SwitchView::HandleOnValueChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2146f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(),
                            "HandleOnValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SwitchView.HandleStateDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SwitchView::*)(::HMUI::__ToggleWithCallbacks__SelectionState)>(&::HMUI::SwitchView::HandleStateDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2146f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(),
                            "HandleStateDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ToggleWithCallbacks__SelectionState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SwitchView.RefreshVisuals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SwitchView::*)()>(&::HMUI::SwitchView::RefreshVisuals)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2146c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(),
                            "RefreshVisuals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SwitchView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SwitchView::*)()>(&::HMUI::SwitchView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2146fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::SwitchView::__set__animationType(::HMUI::__SwitchView__AnimationType  value)  {
::cordl_internals::setInstanceField<::HMUI::__SwitchView__AnimationType, 0x18>(this, std::forward<::HMUI::__SwitchView__AnimationType>(value));
}
constexpr ::HMUI::__SwitchView__AnimationType& HMUI::SwitchView::__get__animationType()  {
return ::cordl_internals::getInstanceField<::HMUI::__SwitchView__AnimationType, 0x18>(this);
}
constexpr ::HMUI::__SwitchView__AnimationType const& HMUI::SwitchView::__get__animationType() const {
return ::cordl_internals::getInstanceField<::HMUI::__SwitchView__AnimationType, 0x18>(this);
}
constexpr void HMUI::SwitchView::__set__normalAnimationClip(::UnityEngine::AnimationClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip*, 0x20>(this, std::forward<::UnityEngine::AnimationClip*>(value));
}
constexpr ::UnityEngine::AnimationClip* HMUI::SwitchView::__get__normalAnimationClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> HMUI::SwitchView::__get__normalAnimationClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x20>(this);
}
constexpr void HMUI::SwitchView::__set__highlightedAnimationClip(::UnityEngine::AnimationClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip*, 0x28>(this, std::forward<::UnityEngine::AnimationClip*>(value));
}
constexpr ::UnityEngine::AnimationClip* HMUI::SwitchView::__get__highlightedAnimationClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> HMUI::SwitchView::__get__highlightedAnimationClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x28>(this);
}
constexpr void HMUI::SwitchView::__set__pressedAnimationClip(::UnityEngine::AnimationClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip*, 0x30>(this, std::forward<::UnityEngine::AnimationClip*>(value));
}
constexpr ::UnityEngine::AnimationClip* HMUI::SwitchView::__get__pressedAnimationClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> HMUI::SwitchView::__get__pressedAnimationClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x30>(this);
}
constexpr void HMUI::SwitchView::__set__disabledAnimationClip(::UnityEngine::AnimationClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip*, 0x38>(this, std::forward<::UnityEngine::AnimationClip*>(value));
}
constexpr ::UnityEngine::AnimationClip* HMUI::SwitchView::__get__disabledAnimationClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> HMUI::SwitchView::__get__disabledAnimationClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x38>(this);
}
constexpr void HMUI::SwitchView::__set__onAnimationClip(::UnityEngine::AnimationClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip*, 0x40>(this, std::forward<::UnityEngine::AnimationClip*>(value));
}
constexpr ::UnityEngine::AnimationClip* HMUI::SwitchView::__get__onAnimationClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> HMUI::SwitchView::__get__onAnimationClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x40>(this);
}
constexpr void HMUI::SwitchView::__set__offAnimationClip(::UnityEngine::AnimationClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip*, 0x48>(this, std::forward<::UnityEngine::AnimationClip*>(value));
}
constexpr ::UnityEngine::AnimationClip* HMUI::SwitchView::__get__offAnimationClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> HMUI::SwitchView::__get__offAnimationClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x48>(this);
}
constexpr void HMUI::SwitchView::__set__selectedAnimationClip(::UnityEngine::AnimationClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip*, 0x50>(this, std::forward<::UnityEngine::AnimationClip*>(value));
}
constexpr ::UnityEngine::AnimationClip* HMUI::SwitchView::__get__selectedAnimationClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> HMUI::SwitchView::__get__selectedAnimationClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x50>(this);
}
constexpr void HMUI::SwitchView::__set__selectedAndHighlightedAnimationClip(::UnityEngine::AnimationClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip*, 0x58>(this, std::forward<::UnityEngine::AnimationClip*>(value));
}
constexpr ::UnityEngine::AnimationClip* HMUI::SwitchView::__get__selectedAndHighlightedAnimationClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> HMUI::SwitchView::__get__selectedAndHighlightedAnimationClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x58>(this);
}
constexpr void HMUI::SwitchView::__set__toggle(::HMUI::ToggleWithCallbacks*  value)  {
::cordl_internals::setInstanceField<::HMUI::ToggleWithCallbacks*, 0x60>(this, std::forward<::HMUI::ToggleWithCallbacks*>(value));
}
constexpr ::HMUI::ToggleWithCallbacks* HMUI::SwitchView::__get__toggle()  {
return ::cordl_internals::getInstanceField<::HMUI::ToggleWithCallbacks*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleWithCallbacks*> HMUI::SwitchView::__get__toggle() const {
return ::cordl_internals::getInstanceField<::HMUI::ToggleWithCallbacks*, 0x60>(this);
}
inline void HMUI::SwitchView::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::SwitchView::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::SwitchView::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::SwitchView::HandleOnValueChanged(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(),
                            "HandleOnValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::SwitchView::HandleStateDidChange(::HMUI::__ToggleWithCallbacks__SelectionState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(),
                            "HandleStateDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ToggleWithCallbacks__SelectionState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::SwitchView::RefreshVisuals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(),
                            "RefreshVisuals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::HMUI::SwitchView* HMUI::SwitchView::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::SwitchView*>());
}
inline void HMUI::SwitchView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
