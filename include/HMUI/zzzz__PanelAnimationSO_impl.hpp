#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HMUI/zzzz__PanelAnimationSO_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
//  Writing Method size for method: ::HMUI::PanelAnimationSO.ExecuteAnimation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::PanelAnimationSO::*)(::UnityEngine::GameObject*)>(&::HMUI::PanelAnimationSO::ExecuteAnimation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2118200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::PanelAnimationSO*>::get(),
                            "ExecuteAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::PanelAnimationSO.ExecuteAnimation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::PanelAnimationSO::*)(::UnityEngine::GameObject*, ::System::Action*)>(&::HMUI::PanelAnimationSO::ExecuteAnimation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21182dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::PanelAnimationSO*>::get(),
                            "ExecuteAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::PanelAnimationSO.ExecuteAnimation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::PanelAnimationSO::*)(::UnityEngine::GameObject*, ::UnityEngine::CanvasGroup*, ::System::Action*)>(&::HMUI::PanelAnimationSO::ExecuteAnimation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21182ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::PanelAnimationSO*>::get(),
                            "ExecuteAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CanvasGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::PanelAnimationSO.ExecuteAnimation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::PanelAnimationSO::*)(::UnityEngine::GameObject*, ::UnityEngine::CanvasGroup*, bool, ::System::Action*)>(&::HMUI::PanelAnimationSO::ExecuteAnimation)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2118210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::PanelAnimationSO*>::get(),
                            "ExecuteAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CanvasGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::PanelAnimationSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::PanelAnimationSO::*)()>(&::HMUI::PanelAnimationSO::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x21182f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::PanelAnimationSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::PanelAnimationSO::__set__duration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::PanelAnimationSO::__get__duration()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& HMUI::PanelAnimationSO::__get__duration() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void HMUI::PanelAnimationSO::__set__scaleXAnimationCurve(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x20>(this, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* HMUI::PanelAnimationSO::__get__scaleXAnimationCurve()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> HMUI::PanelAnimationSO::__get__scaleXAnimationCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x20>(this);
}
constexpr void HMUI::PanelAnimationSO::__set__scaleYAnimationCurve(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x28>(this, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* HMUI::PanelAnimationSO::__get__scaleYAnimationCurve()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> HMUI::PanelAnimationSO::__get__scaleYAnimationCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x28>(this);
}
constexpr void HMUI::PanelAnimationSO::__set__alphaAnimationCurve(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x30>(this, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* HMUI::PanelAnimationSO::__get__alphaAnimationCurve()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> HMUI::PanelAnimationSO::__get__alphaAnimationCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x30>(this);
}
constexpr void HMUI::PanelAnimationSO::__set__parentAlphaAnimationCurve(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x38>(this, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* HMUI::PanelAnimationSO::__get__parentAlphaAnimationCurve()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> HMUI::PanelAnimationSO::__get__parentAlphaAnimationCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x38>(this);
}
inline void HMUI::PanelAnimationSO::ExecuteAnimation(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::PanelAnimationSO*>::get(),
                            "ExecuteAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, go);
}
inline void HMUI::PanelAnimationSO::ExecuteAnimation(::UnityEngine::GameObject*  go, ::System::Action*  finishedCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::PanelAnimationSO*>::get(),
                            "ExecuteAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, go, finishedCallback);
}
inline void HMUI::PanelAnimationSO::ExecuteAnimation(::UnityEngine::GameObject*  go, ::UnityEngine::CanvasGroup*  parentCanvasGroup, ::System::Action*  finishedCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::PanelAnimationSO*>::get(),
                            "ExecuteAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CanvasGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, go, parentCanvasGroup, finishedCallback);
}
inline void HMUI::PanelAnimationSO::ExecuteAnimation(::UnityEngine::GameObject*  go, ::UnityEngine::CanvasGroup*  parentCanvasGroup, bool  instant, ::System::Action*  finishedCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::PanelAnimationSO*>::get(),
                            "ExecuteAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CanvasGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, go, parentCanvasGroup, instant, finishedCallback);
}
inline ::HMUI::PanelAnimationSO* HMUI::PanelAnimationSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::PanelAnimationSO*>());
}
inline void HMUI::PanelAnimationSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::PanelAnimationSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
