#pragma once
#include "GlobalNamespace/zzzz__BeatmapObjectManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__BombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "GlobalNamespace/zzzz__GameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__BurstSliderGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BasicBeatmapObjectManager__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BasicBeatmapObjectManager__InitData::*)(bool, bool, float_t, float_t)>(&::GlobalNamespace::__BasicBeatmapObjectManager__InitData::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2379a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BasicBeatmapObjectManager__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BasicBeatmapObjectManager__InitData::__set_disappearingArrows(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__BasicBeatmapObjectManager__InitData::__get_disappearingArrows()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__BasicBeatmapObjectManager__InitData::__get_disappearingArrows() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::__BasicBeatmapObjectManager__InitData::__set_ghostNotes(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__BasicBeatmapObjectManager__InitData::__get_ghostNotes()  {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr bool const& GlobalNamespace::__BasicBeatmapObjectManager__InitData::__get_ghostNotes() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr void GlobalNamespace::__BasicBeatmapObjectManager__InitData::__set_cutAngleTolerance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__BasicBeatmapObjectManager__InitData::__get_cutAngleTolerance()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__BasicBeatmapObjectManager__InitData::__get_cutAngleTolerance() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void GlobalNamespace::__BasicBeatmapObjectManager__InitData::__set_notesUniformScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__BasicBeatmapObjectManager__InitData::__get_notesUniformScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::__BasicBeatmapObjectManager__InitData::__get_notesUniformScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
inline ::GlobalNamespace::__BasicBeatmapObjectManager__InitData* GlobalNamespace::__BasicBeatmapObjectManager__InitData::New_ctor(bool  disappearingArrows, bool  ghostNotes, float_t  cutAngleTolerance, float_t  notesUniformScale)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BasicBeatmapObjectManager__InitData*>(disappearingArrows, ghostNotes, cutAngleTolerance, notesUniformScale));
}
inline void GlobalNamespace::__BasicBeatmapObjectManager__InitData::_ctor(bool  disappearingArrows, bool  ghostNotes, float_t  cutAngleTolerance, float_t  notesUniformScale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BasicBeatmapObjectManager__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disappearingArrows, ghostNotes, cutAngleTolerance, notesUniformScale);
}
//  Writing Method size for method: ::GlobalNamespace::BasicBeatmapObjectManager.get_activeObstacleControllers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>* (::GlobalNamespace::BasicBeatmapObjectManager::*)()>(&::GlobalNamespace::BasicBeatmapObjectManager::get_activeObstacleControllers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2377964;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicBeatmapObjectManager.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicBeatmapObjectManager::*)(::GlobalNamespace::__BasicBeatmapObjectManager__InitData*, ::GlobalNamespace::__GameNoteController__Pool*, ::GlobalNamespace::__GameNoteController__Pool*, ::GlobalNamespace::__BurstSliderGameNoteController__Pool*, ::GlobalNamespace::__BurstSliderGameNoteController__Pool*, ::GlobalNamespace::__BombNoteController__Pool*, ::GlobalNamespace::__ObstacleController__Pool*, ::GlobalNamespace::__SliderController__Pool*)>(&::GlobalNamespace::BasicBeatmapObjectManager::Init)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x23779b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BasicBeatmapObjectManager__InitData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BurstSliderGameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BurstSliderGameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BombNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObstacleController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__Pool*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicBeatmapObjectManager.ProcessObstacleData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicBeatmapObjectManager::*)(::GlobalNamespace::ObstacleData*, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData>, float_t)>(&::GlobalNamespace::BasicBeatmapObjectManager::ProcessObstacleData)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2377f74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicBeatmapObjectManager.DespawnInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicBeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(&::GlobalNamespace::BasicBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2378200;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicBeatmapObjectManager.ProcessNoteData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicBeatmapObjectManager::*)(::GlobalNamespace::NoteData*, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>, float_t, bool)>(&::GlobalNamespace::BasicBeatmapObjectManager::ProcessNoteData)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x2378258;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicBeatmapObjectManager.DespawnInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicBeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(&::GlobalNamespace::BasicBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2378e2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicBeatmapObjectManager.ProcessSliderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicBeatmapObjectManager::*)(::GlobalNamespace::SliderData*, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>, float_t)>(&::GlobalNamespace::BasicBeatmapObjectManager::ProcessSliderData)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x2379020;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicBeatmapObjectManager.DespawnInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicBeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(&::GlobalNamespace::BasicBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x237992c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicBeatmapObjectManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicBeatmapObjectManager::*)()>(&::GlobalNamespace::BasicBeatmapObjectManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23799c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BasicBeatmapObjectManager::__set__firstBasicNoteTime(::System::Nullable_1<float_t>  value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<float_t>, 0x94>(this, std::forward<::System::Nullable_1<float_t>>(value));
}
constexpr ::System::Nullable_1<float_t>& GlobalNamespace::BasicBeatmapObjectManager::__get__firstBasicNoteTime()  {
return ::cordl_internals::getInstanceField<::System::Nullable_1<float_t>, 0x94>(this);
}
constexpr ::System::Nullable_1<float_t> const& GlobalNamespace::BasicBeatmapObjectManager::__get__firstBasicNoteTime() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<float_t>, 0x94>(this);
}
constexpr void GlobalNamespace::BasicBeatmapObjectManager::__set__initData(::GlobalNamespace::__BasicBeatmapObjectManager__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BasicBeatmapObjectManager__InitData*, 0xa0>(this, std::forward<::GlobalNamespace::__BasicBeatmapObjectManager__InitData*>(value));
}
constexpr ::GlobalNamespace::__BasicBeatmapObjectManager__InitData* GlobalNamespace::BasicBeatmapObjectManager::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BasicBeatmapObjectManager__InitData*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BasicBeatmapObjectManager__InitData*> GlobalNamespace::BasicBeatmapObjectManager::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BasicBeatmapObjectManager__InitData*, 0xa0>(this);
}
constexpr void GlobalNamespace::BasicBeatmapObjectManager::__set__basicGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>*, 0xa8>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>* GlobalNamespace::BasicBeatmapObjectManager::__get__basicGameNotePoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>*> GlobalNamespace::BasicBeatmapObjectManager::__get__basicGameNotePoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>*, 0xa8>(this);
}
constexpr void GlobalNamespace::BasicBeatmapObjectManager::__set__burstSliderHeadGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>*, 0xb0>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>* GlobalNamespace::BasicBeatmapObjectManager::__get__burstSliderHeadGameNotePoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>*> GlobalNamespace::BasicBeatmapObjectManager::__get__burstSliderHeadGameNotePoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>*, 0xb0>(this);
}
constexpr void GlobalNamespace::BasicBeatmapObjectManager::__set__burstSliderGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>*, 0xb8>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>* GlobalNamespace::BasicBeatmapObjectManager::__get__burstSliderGameNotePoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>*> GlobalNamespace::BasicBeatmapObjectManager::__get__burstSliderGameNotePoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>*, 0xb8>(this);
}
constexpr void GlobalNamespace::BasicBeatmapObjectManager::__set__burstSliderFillPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>*, 0xc0>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>* GlobalNamespace::BasicBeatmapObjectManager::__get__burstSliderFillPoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>*> GlobalNamespace::BasicBeatmapObjectManager::__get__burstSliderFillPoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>*, 0xc0>(this);
}
constexpr void GlobalNamespace::BasicBeatmapObjectManager::__set__bombNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>*, 0xc8>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>* GlobalNamespace::BasicBeatmapObjectManager::__get__bombNotePoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>*> GlobalNamespace::BasicBeatmapObjectManager::__get__bombNotePoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>*, 0xc8>(this);
}
constexpr void GlobalNamespace::BasicBeatmapObjectManager::__set__obstaclePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>*, 0xd0>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>* GlobalNamespace::BasicBeatmapObjectManager::__get__obstaclePoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>*> GlobalNamespace::BasicBeatmapObjectManager::__get__obstaclePoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>*, 0xd0>(this);
}
constexpr void GlobalNamespace::BasicBeatmapObjectManager::__set__sliderNotePoolContainersDictionary(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__SliderController__LengthType,::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::SliderController*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__SliderController__LengthType,::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::SliderController*>*>*, 0xd8>(this, std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__SliderController__LengthType,::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::SliderController*>*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__SliderController__LengthType,::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::SliderController*>*>* GlobalNamespace::BasicBeatmapObjectManager::__get__sliderNotePoolContainersDictionary()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__SliderController__LengthType,::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::SliderController*>*>*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__SliderController__LengthType,::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::SliderController*>*>*> GlobalNamespace::BasicBeatmapObjectManager::__get__sliderNotePoolContainersDictionary() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__SliderController__LengthType,::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::SliderController*>*>*, 0xd8>(this);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>* GlobalNamespace::BasicBeatmapObjectManager::get_activeObstacleControllers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                            "get_activeObstacleControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BasicBeatmapObjectManager::Init(::GlobalNamespace::__BasicBeatmapObjectManager__InitData*  initData, ::GlobalNamespace::__GameNoteController__Pool*  basicGameNotePool, ::GlobalNamespace::__GameNoteController__Pool*  burstSliderHeadGameNotePool, ::GlobalNamespace::__BurstSliderGameNoteController__Pool*  burstSliderGameNotePool, ::GlobalNamespace::__BurstSliderGameNoteController__Pool*  burstSliderFillPool, ::GlobalNamespace::__BombNoteController__Pool*  bombNotePool, ::GlobalNamespace::__ObstacleController__Pool*  obstaclePool, ::GlobalNamespace::__SliderController__Pool*  sliderPools)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BasicBeatmapObjectManager__InitData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BurstSliderGameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BurstSliderGameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BombNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObstacleController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__Pool*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initData, basicGameNotePool, burstSliderHeadGameNotePool, burstSliderGameNotePool, burstSliderFillPool, bombNotePool, obstaclePool, sliderPools);
}
inline void GlobalNamespace::BasicBeatmapObjectManager::ProcessObstacleData(::GlobalNamespace::ObstacleData*  obstacleData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData>  obstacleSpawnData, float_t  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                            "ProcessObstacleData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obstacleData, obstacleSpawnData, rotation);
}
inline void GlobalNamespace::BasicBeatmapObjectManager::DespawnInternal(::GlobalNamespace::ObstacleController*  obstacleController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                            "DespawnInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::BasicBeatmapObjectManager::ProcessNoteData(::GlobalNamespace::NoteData*  noteData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>  noteSpawnData, float_t  rotation, bool  forceIsFirstNoteBehaviour)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                            "ProcessNoteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteData, noteSpawnData, rotation, forceIsFirstNoteBehaviour);
}
inline void GlobalNamespace::BasicBeatmapObjectManager::DespawnInternal(::GlobalNamespace::NoteController*  noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                            "DespawnInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteController);
}
inline void GlobalNamespace::BasicBeatmapObjectManager::ProcessSliderData(::GlobalNamespace::SliderData*  sliderData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>  sliderSpawnData, float_t  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                            "ProcessSliderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sliderData, sliderSpawnData, rotation);
}
inline void GlobalNamespace::BasicBeatmapObjectManager::DespawnInternal(::GlobalNamespace::SliderController*  sliderNoteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                            "DespawnInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sliderNoteController);
}
inline ::GlobalNamespace::BasicBeatmapObjectManager* GlobalNamespace::BasicBeatmapObjectManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BasicBeatmapObjectManager*>());
}
inline void GlobalNamespace::BasicBeatmapObjectManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
