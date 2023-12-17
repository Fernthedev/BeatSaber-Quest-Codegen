#pragma once
#include "GlobalNamespace/zzzz__BeatmapObjectManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerBeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerObstacleController_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerBombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_2_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerBeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayerBeatmapObjectEventManager_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnInfoNetSerializable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData::*)(bool, bool, float_t)>(&::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23d4708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData::__set_disappearingArrows(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData::__get_disappearingArrows()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData::__get_disappearingArrows() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData::__set_ghostNotes(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData::__get_ghostNotes()  {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr bool const& GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData::__get_ghostNotes() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr void GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData::__set_notesUniformScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData::__get_notesUniformScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData::__get_notesUniformScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
inline ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData* GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData::New_ctor(bool  disappearingArrows, bool  ghostNotes, float_t  notesUniformScale)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData*>(disappearingArrows, ghostNotes, notesUniformScale));
}
inline void GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData::_ctor(bool  disappearingArrows, bool  ghostNotes, float_t  notesUniformScale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disappearingArrows, ghostNotes, notesUniformScale);
}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.get_activeObstacleControllers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>* (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::get_activeObstacleControllers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23d2bbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData*, ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*, ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*, ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*, ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*, ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*, ::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool*, ::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::_ctor)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x23d2c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::Dispose)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x23d308c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.ProcessObstacleData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::ObstacleData*, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData>, float_t)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::ProcessObstacleData)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x23d33a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.ProcessNoteData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::NoteData*, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>, float_t, bool)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::ProcessNoteData)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x23d34a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.ProcessSliderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::SliderData*, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>, float_t)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::ProcessSliderData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23d3964;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.DespawnInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x23d3968;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.DespawnInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x23d3ab4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.DespawnInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23d3b5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::NoteSpawnInfoNetSerializable*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x23d3b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            "HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::ObstacleSpawnInfoNetSerializable*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x23d3cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            "HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::SliderSpawnInfoNetSerializable*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x23d3e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            "HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::NoteCutInfoNetSerializable*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x23d40e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            "HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfoNetSerializable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.AreNotesSame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::NoteController*, ::GlobalNamespace::NoteCutInfoNetSerializable*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::AreNotesSame)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23d462c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            "AreNotesSame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfoNetSerializable*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__set__firstBasicNoteTime(::System::Nullable_1<float_t>  value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<float_t>, 0x94>(this, std::forward<::System::Nullable_1<float_t>>(value));
}
constexpr ::System::Nullable_1<float_t>& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__get__firstBasicNoteTime()  {
return ::cordl_internals::getInstanceField<::System::Nullable_1<float_t>, 0x94>(this);
}
constexpr ::System::Nullable_1<float_t> const& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__get__firstBasicNoteTime() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<float_t>, 0x94>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__set__gameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*, 0xa0>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__get__gameNotePoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*> GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__get__gameNotePoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*, 0xa0>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__set__burstSliderHeadGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*, 0xa8>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__get__burstSliderHeadGameNotePoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*> GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__get__burstSliderHeadGameNotePoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*, 0xa8>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__set__burstSliderGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*, 0xb0>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__get__burstSliderGameNotePoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*> GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__get__burstSliderGameNotePoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*, 0xb0>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__set__burstSliderFillPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*, 0xb8>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__get__burstSliderFillPoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*> GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__get__burstSliderFillPoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*, 0xb8>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__set__bombNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*>*, 0xc0>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*>* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__get__bombNotePoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*>*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*>*> GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__get__bombNotePoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*>*, 0xc0>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__set__obstaclePoolContainer(::GlobalNamespace::MemoryPoolContainer_2<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*,::GlobalNamespace::ObstacleController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_2<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*,::GlobalNamespace::ObstacleController*>*, 0xc8>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_2<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*,::GlobalNamespace::ObstacleController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_2<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*,::GlobalNamespace::ObstacleController*>* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__get__obstaclePoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_2<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*,::GlobalNamespace::ObstacleController*>*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_2<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*,::GlobalNamespace::ObstacleController*>*> GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__get__obstaclePoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_2<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*,::GlobalNamespace::ObstacleController*>*, 0xc8>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__set__beatmapObjectEventManager(::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*, 0xd0>(this, std::forward<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*>(value));
}
constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__get__beatmapObjectEventManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*> GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__get__beatmapObjectEventManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*, 0xd0>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__set__initData(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData*, 0xd8>(this, std::forward<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData*>(value));
}
constexpr ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData*> GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData*, 0xd8>(this);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::get_activeObstacleControllers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            "get_activeObstacleControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::New_ctor(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData*  initData, ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*  beatmapObjectEventManager, ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*  gameNotePool, ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*  burstSliderHeadGameNotePool, ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*  burstSliderGameNotePool, ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*  burstSliderFillPool, ::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool*  bombNotePool, ::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool*  obstaclePool)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(initData, beatmapObjectEventManager, gameNotePool, burstSliderHeadGameNotePool, burstSliderGameNotePool, burstSliderFillPool, bombNotePool, obstaclePool));
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::_ctor(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData*  initData, ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*  beatmapObjectEventManager, ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*  gameNotePool, ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*  burstSliderHeadGameNotePool, ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*  burstSliderGameNotePool, ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*  burstSliderFillPool, ::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool*  bombNotePool, ::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool*  obstaclePool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initData, beatmapObjectEventManager, gameNotePool, burstSliderHeadGameNotePool, burstSliderGameNotePool, burstSliderFillPool, bombNotePool, obstaclePool);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::ProcessObstacleData(::GlobalNamespace::ObstacleData*  obstacleData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData>  obstacleSpawnData, float_t  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            "ProcessObstacleData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obstacleData, obstacleSpawnData, rotation);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::ProcessNoteData(::GlobalNamespace::NoteData*  noteData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>  noteSpawnData, float_t  rotation, bool  forceIsFirstNoteBehaviour)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            "ProcessNoteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteData, noteSpawnData, rotation, forceIsFirstNoteBehaviour);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::ProcessSliderData(::GlobalNamespace::SliderData*  sliderData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>  sliderSpawnData, float_t  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            "ProcessSliderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sliderData, sliderSpawnData, rotation);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::DespawnInternal(::GlobalNamespace::NoteController*  noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            "DespawnInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteController);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::DespawnInternal(::GlobalNamespace::ObstacleController*  obstacleController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            "DespawnInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::DespawnInternal(::GlobalNamespace::SliderController*  sliderNoteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            "DespawnInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sliderNoteController);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned(::GlobalNamespace::NoteSpawnInfoNetSerializable*  noteSpawnInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            "HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteSpawnInfo);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned(::GlobalNamespace::ObstacleSpawnInfoNetSerializable*  obstacleSpawnInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            "HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obstacleSpawnInfo);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned(::GlobalNamespace::SliderSpawnInfoNetSerializable*  sliderSpawnInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            "HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sliderSpawnInfo);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut(::GlobalNamespace::NoteCutInfoNetSerializable*  noteCutInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            "HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfoNetSerializable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteCutInfo);
}
inline bool GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::AreNotesSame(::GlobalNamespace::NoteController*  noteController, ::GlobalNamespace::NoteCutInfoNetSerializable*  noteCutInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                            "AreNotesSame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfoNetSerializable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, noteController, noteCutInfo);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
