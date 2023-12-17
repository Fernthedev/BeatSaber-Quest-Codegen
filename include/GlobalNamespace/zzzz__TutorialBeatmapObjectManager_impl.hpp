#pragma once
#include "GlobalNamespace/zzzz__BeatmapObjectManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialBeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__TutorialBeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__TutorialNoteController_def.hpp"
#include "GlobalNamespace/zzzz__BombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__TutorialBeatmapObjectManager__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TutorialBeatmapObjectManager__InitData::*)(float_t)>(&::GlobalNamespace::__TutorialBeatmapObjectManager__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2396150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TutorialBeatmapObjectManager__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__TutorialBeatmapObjectManager__InitData::__set_cutAngleTolerance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__TutorialBeatmapObjectManager__InitData::__get_cutAngleTolerance()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& GlobalNamespace::__TutorialBeatmapObjectManager__InitData::__get_cutAngleTolerance() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
inline ::GlobalNamespace::__TutorialBeatmapObjectManager__InitData* GlobalNamespace::__TutorialBeatmapObjectManager__InitData::New_ctor(float_t  cutAngleTolerance)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__TutorialBeatmapObjectManager__InitData*>(cutAngleTolerance));
}
inline void GlobalNamespace::__TutorialBeatmapObjectManager__InitData::_ctor(float_t  cutAngleTolerance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TutorialBeatmapObjectManager__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cutAngleTolerance);
}
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectManager.get_activeObstacleControllers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>* (::GlobalNamespace::TutorialBeatmapObjectManager::*)()>(&::GlobalNamespace::TutorialBeatmapObjectManager::get_activeObstacleControllers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2395bf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectManager.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectManager::*)(::GlobalNamespace::__TutorialBeatmapObjectManager__InitData*, ::GlobalNamespace::__TutorialNoteController__Pool*, ::GlobalNamespace::__BombNoteController__Pool*, ::GlobalNamespace::__ObstacleController__Pool*)>(&::GlobalNamespace::TutorialBeatmapObjectManager::Init)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2395c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TutorialBeatmapObjectManager__InitData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TutorialNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BombNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObstacleController__Pool*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectManager.ProcessObstacleData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectManager::*)(::GlobalNamespace::ObstacleData*, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData>, float_t)>(&::GlobalNamespace::TutorialBeatmapObjectManager::ProcessObstacleData)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2395d6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectManager.ProcessNoteData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectManager::*)(::GlobalNamespace::NoteData*, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>, float_t, bool)>(&::GlobalNamespace::TutorialBeatmapObjectManager::ProcessNoteData)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2395e64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectManager.ProcessSliderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectManager::*)(::GlobalNamespace::SliderData*, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>, float_t)>(&::GlobalNamespace::TutorialBeatmapObjectManager::ProcessSliderData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2395fe4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectManager.DespawnInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(&::GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2395fe8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectManager.DespawnInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(&::GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23960ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectManager.DespawnInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(&::GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2396144;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectManager::*)()>(&::GlobalNamespace::TutorialBeatmapObjectManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2396148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TutorialBeatmapObjectManager::__set__tutorialNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::TutorialNoteController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::TutorialNoteController*>*, 0x98>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::TutorialNoteController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::TutorialNoteController*>* GlobalNamespace::TutorialBeatmapObjectManager::__get__tutorialNotePoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::TutorialNoteController*>*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::TutorialNoteController*>*> GlobalNamespace::TutorialBeatmapObjectManager::__get__tutorialNotePoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::TutorialNoteController*>*, 0x98>(this);
}
constexpr void GlobalNamespace::TutorialBeatmapObjectManager::__set__bombNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>*, 0xa0>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>* GlobalNamespace::TutorialBeatmapObjectManager::__get__bombNotePoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>*> GlobalNamespace::TutorialBeatmapObjectManager::__get__bombNotePoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>*, 0xa0>(this);
}
constexpr void GlobalNamespace::TutorialBeatmapObjectManager::__set__obstaclePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>*, 0xa8>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>* GlobalNamespace::TutorialBeatmapObjectManager::__get__obstaclePoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>*> GlobalNamespace::TutorialBeatmapObjectManager::__get__obstaclePoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>*, 0xa8>(this);
}
constexpr void GlobalNamespace::TutorialBeatmapObjectManager::__set__initData(::GlobalNamespace::__TutorialBeatmapObjectManager__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__TutorialBeatmapObjectManager__InitData*, 0xb0>(this, std::forward<::GlobalNamespace::__TutorialBeatmapObjectManager__InitData*>(value));
}
constexpr ::GlobalNamespace::__TutorialBeatmapObjectManager__InitData* GlobalNamespace::TutorialBeatmapObjectManager::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__TutorialBeatmapObjectManager__InitData*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__TutorialBeatmapObjectManager__InitData*> GlobalNamespace::TutorialBeatmapObjectManager::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__TutorialBeatmapObjectManager__InitData*, 0xb0>(this);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>* GlobalNamespace::TutorialBeatmapObjectManager::get_activeObstacleControllers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                            "get_activeObstacleControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::TutorialBeatmapObjectManager::Init(::GlobalNamespace::__TutorialBeatmapObjectManager__InitData*  initData, ::GlobalNamespace::__TutorialNoteController__Pool*  tutorialNotePool, ::GlobalNamespace::__BombNoteController__Pool*  bombNotePool, ::GlobalNamespace::__ObstacleController__Pool*  obstaclePool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TutorialBeatmapObjectManager__InitData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TutorialNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BombNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObstacleController__Pool*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initData, tutorialNotePool, bombNotePool, obstaclePool);
}
inline void GlobalNamespace::TutorialBeatmapObjectManager::ProcessObstacleData(::GlobalNamespace::ObstacleData*  obstacleData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData>  obstacleSpawnData, float_t  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                            "ProcessObstacleData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obstacleData, obstacleSpawnData, rotation);
}
inline void GlobalNamespace::TutorialBeatmapObjectManager::ProcessNoteData(::GlobalNamespace::NoteData*  noteData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>  noteSpawnData, float_t  rotation, bool  forceIsFirstNoteBehaviour)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                            "ProcessNoteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteData, noteSpawnData, rotation, forceIsFirstNoteBehaviour);
}
inline void GlobalNamespace::TutorialBeatmapObjectManager::ProcessSliderData(::GlobalNamespace::SliderData*  sliderData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>  sliderSpawnData, float_t  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                            "ProcessSliderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sliderData, sliderSpawnData, rotation);
}
inline void GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal(::GlobalNamespace::NoteController*  noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                            "DespawnInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteController);
}
inline void GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal(::GlobalNamespace::ObstacleController*  obstacleController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                            "DespawnInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal(::GlobalNamespace::SliderController*  sliderNoteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                            "DespawnInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sliderNoteController);
}
inline ::GlobalNamespace::TutorialBeatmapObjectManager* GlobalNamespace::TutorialBeatmapObjectManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TutorialBeatmapObjectManager*>());
}
inline void GlobalNamespace::TutorialBeatmapObjectManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
