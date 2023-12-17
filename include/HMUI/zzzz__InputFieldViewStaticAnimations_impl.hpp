#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__InputFieldViewStaticAnimations_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "HMUI/zzzz__InputFieldView_def.hpp"
//  Writing Method size for method: ::HMUI::InputFieldViewStaticAnimations.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldViewStaticAnimations::*)()>(&::HMUI::InputFieldViewStaticAnimations::Awake)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2141750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewStaticAnimations.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldViewStaticAnimations::*)()>(&::HMUI::InputFieldViewStaticAnimations::Start)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x21417d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewStaticAnimations.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldViewStaticAnimations::*)()>(&::HMUI::InputFieldViewStaticAnimations::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21418fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewStaticAnimations.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldViewStaticAnimations::*)()>(&::HMUI::InputFieldViewStaticAnimations::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2141918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewStaticAnimations.HandleInputFieldViewSelectionStateDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldViewStaticAnimations::*)(::HMUI::__InputFieldView__SelectionState)>(&::HMUI::InputFieldViewStaticAnimations::HandleInputFieldViewSelectionStateDidChange)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x21417fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(),
                            "HandleInputFieldViewSelectionStateDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__InputFieldView__SelectionState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewStaticAnimations._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldViewStaticAnimations::*)()>(&::HMUI::InputFieldViewStaticAnimations::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21419e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::InputFieldViewStaticAnimations::__set__inputFieldView(::HMUI::InputFieldView*  value)  {
::cordl_internals::setInstanceField<::HMUI::InputFieldView*, 0x18>(this, std::forward<::HMUI::InputFieldView*>(value));
}
constexpr ::HMUI::InputFieldView* HMUI::InputFieldViewStaticAnimations::__get__inputFieldView()  {
return ::cordl_internals::getInstanceField<::HMUI::InputFieldView*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::InputFieldView*> HMUI::InputFieldViewStaticAnimations::__get__inputFieldView() const {
return ::cordl_internals::getInstanceField<::HMUI::InputFieldView*, 0x18>(this);
}
constexpr void HMUI::InputFieldViewStaticAnimations::__set__normalClip(::UnityEngine::AnimationClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip*, 0x20>(this, std::forward<::UnityEngine::AnimationClip*>(value));
}
constexpr ::UnityEngine::AnimationClip* HMUI::InputFieldViewStaticAnimations::__get__normalClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> HMUI::InputFieldViewStaticAnimations::__get__normalClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x20>(this);
}
constexpr void HMUI::InputFieldViewStaticAnimations::__set__highlightedClip(::UnityEngine::AnimationClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip*, 0x28>(this, std::forward<::UnityEngine::AnimationClip*>(value));
}
constexpr ::UnityEngine::AnimationClip* HMUI::InputFieldViewStaticAnimations::__get__highlightedClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> HMUI::InputFieldViewStaticAnimations::__get__highlightedClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x28>(this);
}
constexpr void HMUI::InputFieldViewStaticAnimations::__set__pressedClip(::UnityEngine::AnimationClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip*, 0x30>(this, std::forward<::UnityEngine::AnimationClip*>(value));
}
constexpr ::UnityEngine::AnimationClip* HMUI::InputFieldViewStaticAnimations::__get__pressedClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> HMUI::InputFieldViewStaticAnimations::__get__pressedClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x30>(this);
}
constexpr void HMUI::InputFieldViewStaticAnimations::__set__disabledClip(::UnityEngine::AnimationClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip*, 0x38>(this, std::forward<::UnityEngine::AnimationClip*>(value));
}
constexpr ::UnityEngine::AnimationClip* HMUI::InputFieldViewStaticAnimations::__get__disabledClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> HMUI::InputFieldViewStaticAnimations::__get__disabledClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x38>(this);
}
constexpr void HMUI::InputFieldViewStaticAnimations::__set__selectedClip(::UnityEngine::AnimationClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip*, 0x40>(this, std::forward<::UnityEngine::AnimationClip*>(value));
}
constexpr ::UnityEngine::AnimationClip* HMUI::InputFieldViewStaticAnimations::__get__selectedClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> HMUI::InputFieldViewStaticAnimations::__get__selectedClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x40>(this);
}
constexpr void HMUI::InputFieldViewStaticAnimations::__set__didStart(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::InputFieldViewStaticAnimations::__get__didStart()  {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr bool const& HMUI::InputFieldViewStaticAnimations::__get__didStart() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
inline void HMUI::InputFieldViewStaticAnimations::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::InputFieldViewStaticAnimations::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::InputFieldViewStaticAnimations::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::InputFieldViewStaticAnimations::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::InputFieldViewStaticAnimations::HandleInputFieldViewSelectionStateDidChange(::HMUI::__InputFieldView__SelectionState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(),
                            "HandleInputFieldViewSelectionStateDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__InputFieldView__SelectionState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state);
}
inline ::HMUI::InputFieldViewStaticAnimations* HMUI::InputFieldViewStaticAnimations::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::InputFieldViewStaticAnimations*>());
}
inline void HMUI::InputFieldViewStaticAnimations::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
