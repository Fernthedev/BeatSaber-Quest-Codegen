#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalActivePlayerFacade_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalActivePlayerFacade_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksUpdater_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerLevelEndActionsListener_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerLevelEndActionsPublisher_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalActivePlayerIntroAnimator_def.hpp"
#include "GlobalNamespace/zzzz__IStartSeekSongControllerProvider_def.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__GameSongController_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__IStartSeekSongController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.get_introAnimator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_introAnimator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23da6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "get_introAnimator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.get_outroAnimator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_outroAnimator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23da6e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "get_outroAnimator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.get_songController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IStartSeekSongController* (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_songController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23da6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "get_songController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.get_currentLocalPlayerLevelCompletionResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LevelCompletionResults* (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_currentLocalPlayerLevelCompletionResult)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23da6f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "get_currentLocalPlayerLevelCompletionResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.add_playerDidFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerDidFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23da71c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "add_playerDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.remove_playerDidFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerDidFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23da7cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "remove_playerDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.add_playerNetworkDidFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerNetworkDidFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23da87c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "add_playerNetworkDidFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.remove_playerNetworkDidFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerNetworkDidFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23da92c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "remove_playerNetworkDidFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.ReportPlayerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(::GlobalNamespace::MultiplayerLevelCompletionResults*)>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerDidFinish)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23da9dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "ReportPlayerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.ReportPlayerNetworkDidFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(::GlobalNamespace::MultiplayerLevelCompletionResults*)>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerNetworkDidFailed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23da9f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "ReportPlayerNetworkDidFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.DisablePlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::DisablePlayer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23daa14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "DisablePlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.PauseSpawning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::PauseSpawning)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23daa78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "PauseSpawning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.ResumeSpawning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::ResumeSpawning)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23daa94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "ResumeSpawning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.__ForceStopSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__ForceStopSong)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x23daab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "__ForceStopSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.__GetActiveOnlyGameObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__GetActiveOnlyGameObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23daae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "__GetActiveOnlyGameObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23daaec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerLevelEndActionsPublisher"
constexpr  GlobalNamespace::MultiplayerLocalActivePlayerFacade::operator ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*() noexcept {
return static_cast<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerLevelEndActionsListener"
constexpr  GlobalNamespace::MultiplayerLocalActivePlayerFacade::operator ::GlobalNamespace::IMultiplayerLevelEndActionsListener*() noexcept {
return static_cast<::GlobalNamespace::IMultiplayerLevelEndActionsListener*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IStartSeekSongControllerProvider"
constexpr  GlobalNamespace::MultiplayerLocalActivePlayerFacade::operator ::GlobalNamespace::IStartSeekSongControllerProvider*() noexcept {
return static_cast<::GlobalNamespace::IStartSeekSongControllerProvider*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__activeOnlyGameObjects(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0x18>(this, std::forward<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>& GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__activeOnlyGameObjects()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0x18>(this);
}
constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> const& GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__activeOnlyGameObjects() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__outroAnimator(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x20>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__outroAnimator()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__outroAnimator() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__songController(::GlobalNamespace::IStartSeekSongController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IStartSeekSongController*, 0x28>(this, std::forward<::GlobalNamespace::IStartSeekSongController*>(value));
}
constexpr ::GlobalNamespace::IStartSeekSongController* GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__songController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IStartSeekSongController*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IStartSeekSongController*> GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__songController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IStartSeekSongController*, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__introAnimator(::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*, 0x30>(this, std::forward<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__introAnimator()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*> GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__introAnimator() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*, 0x30>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__gameSongController(::GlobalNamespace::GameSongController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameSongController*, 0x38>(this, std::forward<::GlobalNamespace::GameSongController*>(value));
}
constexpr ::GlobalNamespace::GameSongController* GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__gameSongController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameSongController*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameSongController*> GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__gameSongController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameSongController*, 0x38>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x40>(this, std::forward<::GlobalNamespace::BeatmapObjectManager*>(value));
}
constexpr ::GlobalNamespace::BeatmapObjectManager* GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__beatmapObjectManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__beatmapObjectManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x40>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PrepareLevelCompletionResults*, 0x48>(this, std::forward<::GlobalNamespace::PrepareLevelCompletionResults*>(value));
}
constexpr ::GlobalNamespace::PrepareLevelCompletionResults* GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__prepareLevelCompletionResults()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PrepareLevelCompletionResults*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrepareLevelCompletionResults*> GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__prepareLevelCompletionResults() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PrepareLevelCompletionResults*, 0x48>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__beatmapCallbacksUpdater(::GlobalNamespace::BeatmapCallbacksUpdater*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksUpdater*, 0x50>(this, std::forward<::GlobalNamespace::BeatmapCallbacksUpdater*>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksUpdater* GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__beatmapCallbacksUpdater()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksUpdater*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksUpdater*> GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__beatmapCallbacksUpdater() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksUpdater*, 0x50>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*, 0x58>(this, std::forward<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get_playerDidFinishEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*> GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get_playerDidFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*, 0x58>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*, 0x60>(this, std::forward<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get_playerNetworkDidFailedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*> GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get_playerNetworkDidFailedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*, 0x60>(this);
}
inline ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_introAnimator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "get_introAnimator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*, false>(*this, ___internal_method);
}
inline ::UnityEngine::GameObject* GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_outroAnimator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "get_outroAnimator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::IStartSeekSongController* GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_songController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "get_songController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IStartSeekSongController*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_currentLocalPlayerLevelCompletionResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "get_currentLocalPlayerLevelCompletionResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "add_playerDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "remove_playerDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "add_playerNetworkDidFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "remove_playerNetworkDidFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults*  results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "ReportPlayerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, results);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults*  results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "ReportPlayerNetworkDidFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, results);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::DisablePlayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "DisablePlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::PauseSpawning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "PauseSpawning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::ResumeSpawning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "ResumeSpawning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__ForceStopSong()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "__ForceStopSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> GlobalNamespace::MultiplayerLocalActivePlayerFacade::__GetActiveOnlyGameObjects()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            "__GetActiveOnlyGameObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLocalActivePlayerFacade* GlobalNamespace::MultiplayerLocalActivePlayerFacade::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>());
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory::*)()>(&::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23daaf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory* GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory*>());
}
inline void GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
