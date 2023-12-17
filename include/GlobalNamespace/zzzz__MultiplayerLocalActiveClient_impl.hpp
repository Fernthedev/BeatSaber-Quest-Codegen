#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalActiveClient_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__ComboController_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__INodePoseSyncStateManager_def.hpp"
#include "GlobalNamespace/zzzz__IScoreSyncStateManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__IScoreController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)()>(&::GlobalNamespace::MultiplayerLocalActiveClient::Start)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x23d8948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)()>(&::GlobalNamespace::MultiplayerLocalActiveClient::OnDestroy)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x23d9028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)()>(&::GlobalNamespace::MultiplayerLocalActiveClient::LateUpdate)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x23d945c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.HandleNoteWasAdded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)(::GlobalNamespace::NoteData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData, float_t)>(&::GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasAdded)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x23d97a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "HandleNoteWasAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.HandleObstacleWasAdded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)(::GlobalNamespace::ObstacleData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, float_t)>(&::GlobalNamespace::MultiplayerLocalActiveClient::HandleObstacleWasAdded)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x23d9904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "HandleObstacleWasAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.HandleSliderWasAdded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)(::GlobalNamespace::SliderData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, float_t)>(&::GlobalNamespace::MultiplayerLocalActiveClient::HandleSliderWasAdded)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x23d9a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "HandleSliderWasAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.HandleNoteWasMissed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)(::GlobalNamespace::NoteController*)>(&::GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasMissed)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x23d9c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "HandleNoteWasMissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.HandleNoteWasCut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)(::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&::GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x23d9d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "HandleNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.HandleComboDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)(int32_t)>(&::GlobalNamespace::MultiplayerLocalActiveClient::HandleComboDidChange)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x23d9ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "HandleComboDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.HandleMultiplierDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)(int32_t, float_t)>(&::GlobalNamespace::MultiplayerLocalActiveClient::HandleMultiplierDidChange)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x23d9fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "HandleMultiplierDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.HandleScoreDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)(int32_t, int32_t)>(&::GlobalNamespace::MultiplayerLocalActiveClient::HandleScoreDidChange)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x23da070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "HandleScoreDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)()>(&::GlobalNamespace::MultiplayerLocalActiveClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23da2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerLocalActiveClient::__set__playerTransforms(::GlobalNamespace::PlayerTransforms*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerTransforms*, 0x18>(this, std::forward<::GlobalNamespace::PlayerTransforms*>(value));
}
constexpr ::GlobalNamespace::PlayerTransforms* GlobalNamespace::MultiplayerLocalActiveClient::__get__playerTransforms()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerTransforms*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> GlobalNamespace::MultiplayerLocalActiveClient::__get__playerTransforms() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerTransforms*, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActiveClient::__set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x20>(this, std::forward<::GlobalNamespace::AudioTimeSyncController*>(value));
}
constexpr ::GlobalNamespace::AudioTimeSyncController* GlobalNamespace::MultiplayerLocalActiveClient::__get__audioTimeSyncController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> GlobalNamespace::MultiplayerLocalActiveClient::__get__audioTimeSyncController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActiveClient::__set__scoreSyncStateManager(::GlobalNamespace::IScoreSyncStateManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IScoreSyncStateManager*, 0x28>(this, std::forward<::GlobalNamespace::IScoreSyncStateManager*>(value));
}
constexpr ::GlobalNamespace::IScoreSyncStateManager* GlobalNamespace::MultiplayerLocalActiveClient::__get__scoreSyncStateManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IScoreSyncStateManager*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreSyncStateManager*> GlobalNamespace::MultiplayerLocalActiveClient::__get__scoreSyncStateManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IScoreSyncStateManager*, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActiveClient::__set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::INodePoseSyncStateManager*, 0x30>(this, std::forward<::GlobalNamespace::INodePoseSyncStateManager*>(value));
}
constexpr ::GlobalNamespace::INodePoseSyncStateManager* GlobalNamespace::MultiplayerLocalActiveClient::__get__nodePoseSyncStateManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INodePoseSyncStateManager*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INodePoseSyncStateManager*> GlobalNamespace::MultiplayerLocalActiveClient::__get__nodePoseSyncStateManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INodePoseSyncStateManager*, 0x30>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActiveClient::__set__rpcManager(::GlobalNamespace::IGameplayRpcManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IGameplayRpcManager*, 0x38>(this, std::forward<::GlobalNamespace::IGameplayRpcManager*>(value));
}
constexpr ::GlobalNamespace::IGameplayRpcManager* GlobalNamespace::MultiplayerLocalActiveClient::__get__rpcManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IGameplayRpcManager*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> GlobalNamespace::MultiplayerLocalActiveClient::__get__rpcManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IGameplayRpcManager*, 0x38>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActiveClient::__set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x40>(this, std::forward<::GlobalNamespace::BeatmapObjectManager*>(value));
}
constexpr ::GlobalNamespace::BeatmapObjectManager* GlobalNamespace::MultiplayerLocalActiveClient::__get__beatmapObjectManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> GlobalNamespace::MultiplayerLocalActiveClient::__get__beatmapObjectManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x40>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActiveClient::__set__scoreController(::GlobalNamespace::IScoreController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IScoreController*, 0x48>(this, std::forward<::GlobalNamespace::IScoreController*>(value));
}
constexpr ::GlobalNamespace::IScoreController* GlobalNamespace::MultiplayerLocalActiveClient::__get__scoreController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IScoreController*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> GlobalNamespace::MultiplayerLocalActiveClient::__get__scoreController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IScoreController*, 0x48>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalActiveClient::__set__comboController(::GlobalNamespace::ComboController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ComboController*, 0x50>(this, std::forward<::GlobalNamespace::ComboController*>(value));
}
constexpr ::GlobalNamespace::ComboController* GlobalNamespace::MultiplayerLocalActiveClient::__get__comboController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ComboController*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ComboController*> GlobalNamespace::MultiplayerLocalActiveClient::__get__comboController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ComboController*, 0x50>(this);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasAdded(::GlobalNamespace::NoteData*  noteData, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData  noteSpawnData, float_t  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "HandleNoteWasAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteData, noteSpawnData, rotation);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::HandleObstacleWasAdded(::GlobalNamespace::ObstacleData*  obstacleData, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData  obstacleSpawnData, float_t  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "HandleObstacleWasAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obstacleData, obstacleSpawnData, rotation);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::HandleSliderWasAdded(::GlobalNamespace::SliderData*  sliderData, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData  sliderSpawnData, float_t  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "HandleSliderWasAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sliderData, sliderSpawnData, rotation);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasMissed(::GlobalNamespace::NoteController*  noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "HandleNoteWasMissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteController);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasCut(::GlobalNamespace::NoteController*  noteController, ByRef<::GlobalNamespace::NoteCutInfo>  noteCutInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "HandleNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteController, noteCutInfo);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::HandleComboDidChange(int32_t  combo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "HandleComboDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, combo);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::HandleMultiplierDidChange(int32_t  multiplier, float_t  multiplierProgress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "HandleMultiplierDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, multiplier, multiplierProgress);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::HandleScoreDidChange(int32_t  multipliedScore, int32_t  modifiedScore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            "HandleScoreDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, multipliedScore, modifiedScore);
}
inline ::GlobalNamespace::MultiplayerLocalActiveClient* GlobalNamespace::MultiplayerLocalActiveClient::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLocalActiveClient*>());
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
