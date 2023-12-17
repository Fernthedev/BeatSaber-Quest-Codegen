#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ButtonStaticAnimations_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)()>(&::HMUI::ButtonStaticAnimations::Awake)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2130848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)()>(&::HMUI::ButtonStaticAnimations::Start)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x21308d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)()>(&::HMUI::ButtonStaticAnimations::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21309ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)()>(&::HMUI::ButtonStaticAnimations::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2130a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations.HandleButtonSelectionStateDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)(::HMUI::__NoTransitionsButton__SelectionState)>(&::HMUI::ButtonStaticAnimations::HandleButtonSelectionStateDidChange)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x21308f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(),
                            "HandleButtonSelectionStateDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__NoTransitionsButton__SelectionState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)()>(&::HMUI::ButtonStaticAnimations::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2130ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::ButtonStaticAnimations::__set__button(::HMUI::NoTransitionsButton*  value)  {
::cordl_internals::setInstanceField<::HMUI::NoTransitionsButton*, 0x18>(this, std::forward<::HMUI::NoTransitionsButton*>(value));
}
constexpr ::HMUI::NoTransitionsButton* HMUI::ButtonStaticAnimations::__get__button()  {
return ::cordl_internals::getInstanceField<::HMUI::NoTransitionsButton*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::NoTransitionsButton*> HMUI::ButtonStaticAnimations::__get__button() const {
return ::cordl_internals::getInstanceField<::HMUI::NoTransitionsButton*, 0x18>(this);
}
constexpr void HMUI::ButtonStaticAnimations::__set__normalClip(::UnityEngine::AnimationClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip*, 0x20>(this, std::forward<::UnityEngine::AnimationClip*>(value));
}
constexpr ::UnityEngine::AnimationClip* HMUI::ButtonStaticAnimations::__get__normalClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> HMUI::ButtonStaticAnimations::__get__normalClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x20>(this);
}
constexpr void HMUI::ButtonStaticAnimations::__set__highlightedClip(::UnityEngine::AnimationClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip*, 0x28>(this, std::forward<::UnityEngine::AnimationClip*>(value));
}
constexpr ::UnityEngine::AnimationClip* HMUI::ButtonStaticAnimations::__get__highlightedClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> HMUI::ButtonStaticAnimations::__get__highlightedClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x28>(this);
}
constexpr void HMUI::ButtonStaticAnimations::__set__pressedClip(::UnityEngine::AnimationClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip*, 0x30>(this, std::forward<::UnityEngine::AnimationClip*>(value));
}
constexpr ::UnityEngine::AnimationClip* HMUI::ButtonStaticAnimations::__get__pressedClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> HMUI::ButtonStaticAnimations::__get__pressedClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x30>(this);
}
constexpr void HMUI::ButtonStaticAnimations::__set__disabledClip(::UnityEngine::AnimationClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip*, 0x38>(this, std::forward<::UnityEngine::AnimationClip*>(value));
}
constexpr ::UnityEngine::AnimationClip* HMUI::ButtonStaticAnimations::__get__disabledClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> HMUI::ButtonStaticAnimations::__get__disabledClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x38>(this);
}
constexpr void HMUI::ButtonStaticAnimations::__set__didStart(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::ButtonStaticAnimations::__get__didStart()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& HMUI::ButtonStaticAnimations::__get__didStart() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
inline void HMUI::ButtonStaticAnimations::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::ButtonStaticAnimations::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::ButtonStaticAnimations::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::ButtonStaticAnimations::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::ButtonStaticAnimations::HandleButtonSelectionStateDidChange(::HMUI::__NoTransitionsButton__SelectionState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(),
                            "HandleButtonSelectionStateDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__NoTransitionsButton__SelectionState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state);
}
inline ::HMUI::ButtonStaticAnimations* HMUI::ButtonStaticAnimations::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::ButtonStaticAnimations*>());
}
inline void HMUI::ButtonStaticAnimations::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
