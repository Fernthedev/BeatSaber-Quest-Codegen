#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactivePlayerFacade_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerLevelEndActionsPublisher_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerLevelEndActionsListener_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactivePlayerSongSyncController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSpectatorController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactivePlayerFacade_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__IStartSeekSongControllerProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactivePlayerOutroAnimator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__IStartSeekSongController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.get_songController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IStartSeekSongController* (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_songController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dc8c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "get_songController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.get_spectatorController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerSpectatorController* (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_spectatorController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dc8cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "get_spectatorController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.get_introAnimator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_introAnimator)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23dc8d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "get_introAnimator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.get_introPlayableDirector
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableDirector* (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_introPlayableDirector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dc8f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "get_introPlayableDirector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.get_outroAnimator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator* (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_outroAnimator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dc8f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "get_outroAnimator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.add_playerDidFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::add_playerDidFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23dc900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "add_playerDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.remove_playerDidFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::remove_playerDidFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23dc9b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "remove_playerDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.add_playerNetworkDidFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::add_playerNetworkDidFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23dca60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "add_playerNetworkDidFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.remove_playerNetworkDidFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::remove_playerNetworkDidFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23dcb10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "remove_playerNetworkDidFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.ReportPlayerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)(::GlobalNamespace::MultiplayerLevelCompletionResults*)>(&::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::ReportPlayerDidFinish)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23dcbc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "ReportPlayerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.ReportPlayerNetworkDidFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)(::GlobalNamespace::MultiplayerLevelCompletionResults*)>(&::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::ReportPlayerNetworkDidFailed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23dcbdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "ReportPlayerNetworkDidFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcbf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerLevelEndActionsPublisher"
constexpr  GlobalNamespace::MultiplayerLocalInactivePlayerFacade::operator ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*() noexcept {
return static_cast<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerLevelEndActionsListener"
constexpr  GlobalNamespace::MultiplayerLocalInactivePlayerFacade::operator ::GlobalNamespace::IMultiplayerLevelEndActionsListener*() noexcept {
return static_cast<::GlobalNamespace::IMultiplayerLevelEndActionsListener*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IStartSeekSongControllerProvider"
constexpr  GlobalNamespace::MultiplayerLocalInactivePlayerFacade::operator ::GlobalNamespace::IStartSeekSongControllerProvider*() noexcept {
return static_cast<::GlobalNamespace::IStartSeekSongControllerProvider*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__set__inactivePlayerSongSyncController(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*, 0x18>(this, std::forward<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController* GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__get__inactivePlayerSongSyncController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*> GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__get__inactivePlayerSongSyncController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__set__spectatorController(::GlobalNamespace::MultiplayerSpectatorController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerSpectatorController*, 0x20>(this, std::forward<::GlobalNamespace::MultiplayerSpectatorController*>(value));
}
constexpr ::GlobalNamespace::MultiplayerSpectatorController* GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__get__spectatorController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerSpectatorController*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerSpectatorController*> GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__get__spectatorController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerSpectatorController*, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__set__introAnimator(::UnityEngine::Playables::PlayableDirector*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::PlayableDirector*, 0x28>(this, std::forward<::UnityEngine::Playables::PlayableDirector*>(value));
}
constexpr ::UnityEngine::Playables::PlayableDirector* GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__get__introAnimator()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::PlayableDirector*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__get__introAnimator() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::PlayableDirector*, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__set__outroAnimator(::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*, 0x30>(this, std::forward<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator* GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__get__outroAnimator()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*> GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__get__outroAnimator() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*, 0x30>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__set_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*, 0x38>(this, std::forward<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__get_playerDidFinishEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*> GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__get_playerDidFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*, 0x38>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__set_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*, 0x40>(this, std::forward<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__get_playerNetworkDidFailedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*> GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__get_playerNetworkDidFailedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*, 0x40>(this);
}
inline ::GlobalNamespace::IStartSeekSongController* GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_songController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "get_songController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IStartSeekSongController*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerSpectatorController* GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_spectatorController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "get_spectatorController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerSpectatorController*, false>(*this, ___internal_method);
}
inline ::UnityEngine::GameObject* GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_introAnimator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "get_introAnimator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableDirector* GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_introPlayableDirector()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "get_introPlayableDirector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableDirector*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator* GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_outroAnimator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "get_outroAnimator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::add_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "add_playerDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::remove_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "remove_playerDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::add_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "add_playerNetworkDidFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::remove_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "remove_playerNetworkDidFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::ReportPlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults*  results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "ReportPlayerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, results);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::ReportPlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults*  results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            "ReportPlayerNetworkDidFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, results);
}
inline ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade* GlobalNamespace::MultiplayerLocalInactivePlayerFacade::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>());
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory::*)()>(&::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23dcc00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory* GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory*>());
}
inline void GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
