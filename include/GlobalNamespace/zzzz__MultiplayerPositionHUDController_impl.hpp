#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPositionHUDController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionHUDController.set_alpha
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerPositionHUDController::*)(float_t)>(&::GlobalNamespace::MultiplayerPositionHUDController::set_alpha)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c1f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPositionHUDController*>::get(),
                            "set_alpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionHUDController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerPositionHUDController::*)()>(&::GlobalNamespace::MultiplayerPositionHUDController::Start)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x23c1f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPositionHUDController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionHUDController.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerPositionHUDController::*)()>(&::GlobalNamespace::MultiplayerPositionHUDController::Update)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x23c2078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPositionHUDController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionHUDController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerPositionHUDController::*)()>(&::GlobalNamespace::MultiplayerPositionHUDController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23c2228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPositionHUDController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__playerCountText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x18>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::MultiplayerPositionHUDController::__get__playerCountText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::MultiplayerPositionHUDController::__get__playerCountText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__positionText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x20>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::MultiplayerPositionHUDController::__get__positionText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::MultiplayerPositionHUDController::__get__positionText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__canvasGroup(::UnityEngine::CanvasGroup*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::CanvasGroup*, 0x28>(this, std::forward<::UnityEngine::CanvasGroup*>(value));
}
constexpr ::UnityEngine::CanvasGroup* GlobalNamespace::MultiplayerPositionHUDController::__get__canvasGroup()  {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasGroup*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> GlobalNamespace::MultiplayerPositionHUDController::__get__canvasGroup() const {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasGroup*, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__firstPlayerAnimationGo(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x30>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::MultiplayerPositionHUDController::__get__firstPlayerAnimationGo()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::MultiplayerPositionHUDController::__get__firstPlayerAnimationGo() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x30>(this);
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerScoreProvider*, 0x38>(this, std::forward<::GlobalNamespace::MultiplayerScoreProvider*>(value));
}
constexpr ::GlobalNamespace::MultiplayerScoreProvider* GlobalNamespace::MultiplayerPositionHUDController::__get__scoreProvider()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerScoreProvider*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreProvider*> GlobalNamespace::MultiplayerPositionHUDController::__get__scoreProvider() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerScoreProvider*, 0x38>(this);
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__playersManager(::GlobalNamespace::MultiplayerPlayersManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerPlayersManager*, 0x40>(this, std::forward<::GlobalNamespace::MultiplayerPlayersManager*>(value));
}
constexpr ::GlobalNamespace::MultiplayerPlayersManager* GlobalNamespace::MultiplayerPositionHUDController::__get__playersManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerPlayersManager*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayersManager*> GlobalNamespace::MultiplayerPositionHUDController::__get__playersManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerPlayersManager*, 0x40>(this);
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__initData(::GlobalNamespace::__CoreGameHUDController__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__CoreGameHUDController__InitData*, 0x48>(this, std::forward<::GlobalNamespace::__CoreGameHUDController__InitData*>(value));
}
constexpr ::GlobalNamespace::__CoreGameHUDController__InitData* GlobalNamespace::MultiplayerPositionHUDController::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__CoreGameHUDController__InitData*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CoreGameHUDController__InitData*> GlobalNamespace::MultiplayerPositionHUDController::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__CoreGameHUDController__InitData*, 0x48>(this);
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__prevPosition(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::MultiplayerPositionHUDController::__get__prevPosition()  {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr int32_t const& GlobalNamespace::MultiplayerPositionHUDController::__get__prevPosition() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
inline void GlobalNamespace::MultiplayerPositionHUDController::set_alpha(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPositionHUDController*>::get(),
                            "set_alpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerPositionHUDController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPositionHUDController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerPositionHUDController::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPositionHUDController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerPositionHUDController* GlobalNamespace::MultiplayerPositionHUDController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerPositionHUDController*>());
}
inline void GlobalNamespace::MultiplayerPositionHUDController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerPositionHUDController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
