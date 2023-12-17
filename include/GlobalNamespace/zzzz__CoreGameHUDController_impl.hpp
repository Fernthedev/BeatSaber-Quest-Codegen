#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__CoreGameHUDController__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CoreGameHUDController__InitData::*)(bool, bool, bool)>(&::GlobalNamespace::__CoreGameHUDController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23c0068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CoreGameHUDController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__CoreGameHUDController__InitData::__set_hide(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__CoreGameHUDController__InitData::__get_hide()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__CoreGameHUDController__InitData::__get_hide() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::__CoreGameHUDController__InitData::__set_showEnergyPanel(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__CoreGameHUDController__InitData::__get_showEnergyPanel()  {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr bool const& GlobalNamespace::__CoreGameHUDController__InitData::__get_showEnergyPanel() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr void GlobalNamespace::__CoreGameHUDController__InitData::__set_advancedHUD(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x12>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__CoreGameHUDController__InitData::__get_advancedHUD()  {
return ::cordl_internals::getInstanceField<bool, 0x12>(this);
}
constexpr bool const& GlobalNamespace::__CoreGameHUDController__InitData::__get_advancedHUD() const {
return ::cordl_internals::getInstanceField<bool, 0x12>(this);
}
inline ::GlobalNamespace::__CoreGameHUDController__InitData* GlobalNamespace::__CoreGameHUDController__InitData::New_ctor(bool  hide, bool  showEnergyPanel, bool  advancedHUD)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__CoreGameHUDController__InitData*>(hide, showEnergyPanel, advancedHUD));
}
inline void GlobalNamespace::__CoreGameHUDController__InitData::_ctor(bool  hide, bool  showEnergyPanel, bool  advancedHUD)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CoreGameHUDController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, hide, showEnergyPanel, advancedHUD);
}
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.get_songProgressPanelGO
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::GlobalNamespace::CoreGameHUDController::*)()>(&::GlobalNamespace::CoreGameHUDController::get_songProgressPanelGO)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bff94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                            "get_songProgressPanelGO",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.get_relativeScoreGo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::GlobalNamespace::CoreGameHUDController::*)()>(&::GlobalNamespace::CoreGameHUDController::get_relativeScoreGo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bff9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                            "get_relativeScoreGo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.get_immediateRankGo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::GlobalNamespace::CoreGameHUDController::*)()>(&::GlobalNamespace::CoreGameHUDController::get_immediateRankGo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bffa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                            "get_immediateRankGo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.get_energyPanelGo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::GlobalNamespace::CoreGameHUDController::*)()>(&::GlobalNamespace::CoreGameHUDController::get_energyPanelGo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bffac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                            "get_energyPanelGo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.set_alpha
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CoreGameHUDController::*)(float_t)>(&::GlobalNamespace::CoreGameHUDController::set_alpha)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23bffb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                            "set_alpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CoreGameHUDController::*)(::GlobalNamespace::__CoreGameHUDController__InitData*)>(&::GlobalNamespace::CoreGameHUDController::Initialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23bffd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__CoreGameHUDController__InitData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreGameHUDController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CoreGameHUDController::*)()>(&::GlobalNamespace::CoreGameHUDController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c0060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::CoreGameHUDController::__set__songProgressPanelGO(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x18>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::CoreGameHUDController::__get__songProgressPanelGO()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::CoreGameHUDController::__get__songProgressPanelGO() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x18>(this);
}
constexpr void GlobalNamespace::CoreGameHUDController::__set__relativeScoreGO(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x20>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::CoreGameHUDController::__get__relativeScoreGO()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::CoreGameHUDController::__get__relativeScoreGO() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x20>(this);
}
constexpr void GlobalNamespace::CoreGameHUDController::__set__immediateRankGO(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x28>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::CoreGameHUDController::__get__immediateRankGO()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::CoreGameHUDController::__get__immediateRankGO() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x28>(this);
}
constexpr void GlobalNamespace::CoreGameHUDController::__set__energyPanelGO(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x30>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::CoreGameHUDController::__get__energyPanelGO()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::CoreGameHUDController::__get__energyPanelGO() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x30>(this);
}
constexpr void GlobalNamespace::CoreGameHUDController::__set__canvasGroup(::UnityEngine::CanvasGroup*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::CanvasGroup*, 0x38>(this, std::forward<::UnityEngine::CanvasGroup*>(value));
}
constexpr ::UnityEngine::CanvasGroup* GlobalNamespace::CoreGameHUDController::__get__canvasGroup()  {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasGroup*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> GlobalNamespace::CoreGameHUDController::__get__canvasGroup() const {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasGroup*, 0x38>(this);
}
inline ::UnityEngine::GameObject* GlobalNamespace::CoreGameHUDController::get_songProgressPanelGO()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                            "get_songProgressPanelGO",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method);
}
inline ::UnityEngine::GameObject* GlobalNamespace::CoreGameHUDController::get_relativeScoreGo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                            "get_relativeScoreGo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method);
}
inline ::UnityEngine::GameObject* GlobalNamespace::CoreGameHUDController::get_immediateRankGo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                            "get_immediateRankGo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method);
}
inline ::UnityEngine::GameObject* GlobalNamespace::CoreGameHUDController::get_energyPanelGo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                            "get_energyPanelGo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::CoreGameHUDController::set_alpha(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                            "set_alpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::CoreGameHUDController::Initialize(::GlobalNamespace::__CoreGameHUDController__InitData*  initData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__CoreGameHUDController__InitData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initData);
}
inline ::GlobalNamespace::CoreGameHUDController* GlobalNamespace::CoreGameHUDController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CoreGameHUDController*>());
}
inline void GlobalNamespace::CoreGameHUDController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoreGameHUDController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
