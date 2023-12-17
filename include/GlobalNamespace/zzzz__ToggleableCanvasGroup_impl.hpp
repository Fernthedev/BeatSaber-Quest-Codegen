#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ToggleableCanvasGroup_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ToggleableCanvasGroup.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ToggleableCanvasGroup::*)()>(&::GlobalNamespace::ToggleableCanvasGroup::OnEnable)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2116b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToggleableCanvasGroup*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ToggleableCanvasGroup.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ToggleableCanvasGroup::*)()>(&::GlobalNamespace::ToggleableCanvasGroup::OnDisable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2116c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToggleableCanvasGroup*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ToggleableCanvasGroup.HandleToggleValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ToggleableCanvasGroup::*)(bool)>(&::GlobalNamespace::ToggleableCanvasGroup::HandleToggleValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2116cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToggleableCanvasGroup*>::get(),
                            "HandleToggleValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ToggleableCanvasGroup.SetCanvasGroupData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ToggleableCanvasGroup::*)(bool)>(&::GlobalNamespace::ToggleableCanvasGroup::SetCanvasGroupData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2116be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToggleableCanvasGroup*>::get(),
                            "SetCanvasGroupData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ToggleableCanvasGroup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ToggleableCanvasGroup::*)()>(&::GlobalNamespace::ToggleableCanvasGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2116cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToggleableCanvasGroup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ToggleableCanvasGroup::__set__canvasGroup(::UnityEngine::CanvasGroup*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::CanvasGroup*, 0x18>(this, std::forward<::UnityEngine::CanvasGroup*>(value));
}
constexpr ::UnityEngine::CanvasGroup* GlobalNamespace::ToggleableCanvasGroup::__get__canvasGroup()  {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasGroup*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> GlobalNamespace::ToggleableCanvasGroup::__get__canvasGroup() const {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasGroup*, 0x18>(this);
}
constexpr void GlobalNamespace::ToggleableCanvasGroup::__set__toggle(::UnityEngine::UI::Toggle*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Toggle*, 0x20>(this, std::forward<::UnityEngine::UI::Toggle*>(value));
}
constexpr ::UnityEngine::UI::Toggle* GlobalNamespace::ToggleableCanvasGroup::__get__toggle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> GlobalNamespace::ToggleableCanvasGroup::__get__toggle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0x20>(this);
}
constexpr void GlobalNamespace::ToggleableCanvasGroup::__set__invertToggle(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::ToggleableCanvasGroup::__get__invertToggle()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& GlobalNamespace::ToggleableCanvasGroup::__get__invertToggle() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
inline void GlobalNamespace::ToggleableCanvasGroup::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToggleableCanvasGroup*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ToggleableCanvasGroup::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToggleableCanvasGroup*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ToggleableCanvasGroup::HandleToggleValueChanged(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToggleableCanvasGroup*>::get(),
                            "HandleToggleValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, isOn);
}
inline void GlobalNamespace::ToggleableCanvasGroup::SetCanvasGroupData(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToggleableCanvasGroup*>::get(),
                            "SetCanvasGroupData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, isOn);
}
inline ::GlobalNamespace::ToggleableCanvasGroup* GlobalNamespace::ToggleableCanvasGroup::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ToggleableCanvasGroup*>());
}
inline void GlobalNamespace::ToggleableCanvasGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToggleableCanvasGroup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
