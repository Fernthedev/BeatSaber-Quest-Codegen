#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MirroredBeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__INoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__MirroredGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredSliderController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredBombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "GlobalNamespace/zzzz__IGameNoteMirrorable_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(::GlobalNamespace::BeatmapObjectManager*, ::GlobalNamespace::__MirroredGameNoteController__Pool*, ::GlobalNamespace::__MirroredGameNoteController__Pool*, ::GlobalNamespace::__MirroredGameNoteController__Pool*, ::GlobalNamespace::__MirroredGameNoteController__Pool*, ::GlobalNamespace::__MirroredBombNoteController__Pool*, ::GlobalNamespace::__MirroredObstacleController__Pool*, ::GlobalNamespace::__MirroredSliderController__Pool*)>(&::GlobalNamespace::MirroredBeatmapObjectManager::Init)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x238101c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredGameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredGameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredGameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredGameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredBombNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredObstacleController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredSliderController__Pool*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)()>(&::GlobalNamespace::MirroredBeatmapObjectManager::Finalize)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x2381454;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleNoteWasSpawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(&::GlobalNamespace::MirroredBeatmapObjectManager::HandleNoteWasSpawned)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x23817b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                            "HandleNoteWasSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleNoteWasDespawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(&::GlobalNamespace::MirroredBeatmapObjectManager::HandleNoteWasDespawned)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x23819e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                            "HandleNoteWasDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleObstacleWasSpawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(&::GlobalNamespace::MirroredBeatmapObjectManager::HandleObstacleWasSpawned)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2381b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                            "HandleObstacleWasSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleObstacleWasDespawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(&::GlobalNamespace::MirroredBeatmapObjectManager::HandleObstacleWasDespawned)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2381bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                            "HandleObstacleWasDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleSliderWasSpawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(&::GlobalNamespace::MirroredBeatmapObjectManager::HandleSliderWasSpawned)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2381cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                            "HandleSliderWasSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleSliderWasDespawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(&::GlobalNamespace::MirroredBeatmapObjectManager::HandleSliderWasDespawned)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2381f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                            "HandleSliderWasDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleDidHideAllBeatmapObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(bool)>(&::GlobalNamespace::MirroredBeatmapObjectManager::HandleDidHideAllBeatmapObjects)> {
  constexpr static std::size_t size = 0x7c8;
  constexpr static std::size_t addrs = 0x238201c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                            "HandleDidHideAllBeatmapObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)()>(&::GlobalNamespace::MirroredBeatmapObjectManager::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2382810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x10>(this, std::forward<::GlobalNamespace::BeatmapObjectManager*>(value));
}
constexpr ::GlobalNamespace::BeatmapObjectManager* GlobalNamespace::MirroredBeatmapObjectManager::__get__beatmapObjectManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> GlobalNamespace::MirroredBeatmapObjectManager::__get__beatmapObjectManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x10>(this);
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__set__mirroredBasicGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*, 0x18>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>* GlobalNamespace::MirroredBeatmapObjectManager::__get__mirroredBasicGameNotePoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*> GlobalNamespace::MirroredBeatmapObjectManager::__get__mirroredBasicGameNotePoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*, 0x18>(this);
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__set__mirroredBurstSliderHeadGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*, 0x20>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>* GlobalNamespace::MirroredBeatmapObjectManager::__get__mirroredBurstSliderHeadGameNotePoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*> GlobalNamespace::MirroredBeatmapObjectManager::__get__mirroredBurstSliderHeadGameNotePoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*, 0x20>(this);
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__set__mirroredBurstSliderGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*, 0x28>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>* GlobalNamespace::MirroredBeatmapObjectManager::__get__mirroredBurstSliderGameNotePoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*> GlobalNamespace::MirroredBeatmapObjectManager::__get__mirroredBurstSliderGameNotePoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*, 0x28>(this);
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__set__mirroredBurstSliderFillPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*, 0x30>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>* GlobalNamespace::MirroredBeatmapObjectManager::__get__mirroredBurstSliderFillPoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*> GlobalNamespace::MirroredBeatmapObjectManager::__get__mirroredBurstSliderFillPoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*, 0x30>(this);
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__set__mirroredBombNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredBombNoteController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredBombNoteController*>*, 0x38>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredBombNoteController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredBombNoteController*>* GlobalNamespace::MirroredBeatmapObjectManager::__get__mirroredBombNotePoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredBombNoteController*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredBombNoteController*>*> GlobalNamespace::MirroredBeatmapObjectManager::__get__mirroredBombNotePoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredBombNoteController*>*, 0x38>(this);
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__set__mirroredObstaclePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredObstacleController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredObstacleController*>*, 0x40>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredObstacleController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredObstacleController*>* GlobalNamespace::MirroredBeatmapObjectManager::__get__mirroredObstaclePoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredObstacleController*>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredObstacleController*>*> GlobalNamespace::MirroredBeatmapObjectManager::__get__mirroredObstaclePoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredObstacleController*>*, 0x40>(this);
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__set__mirroredSlidersPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredSliderController*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredSliderController*>*, 0x48>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredSliderController*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredSliderController*>* GlobalNamespace::MirroredBeatmapObjectManager::__get__mirroredSlidersPoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredSliderController*>*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredSliderController*>*> GlobalNamespace::MirroredBeatmapObjectManager::__get__mirroredSlidersPoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredSliderController*>*, 0x48>(this);
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__set__gameNoteControllersToMirroredGameNoteControllers(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IGameNoteMirrorable*,::System::ValueTuple_2<::GlobalNamespace::MirroredGameNoteController*,::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IGameNoteMirrorable*,::System::ValueTuple_2<::GlobalNamespace::MirroredGameNoteController*,::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*>>*, 0x50>(this, std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IGameNoteMirrorable*,::System::ValueTuple_2<::GlobalNamespace::MirroredGameNoteController*,::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*>>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IGameNoteMirrorable*,::System::ValueTuple_2<::GlobalNamespace::MirroredGameNoteController*,::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*>>* GlobalNamespace::MirroredBeatmapObjectManager::__get__gameNoteControllersToMirroredGameNoteControllers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IGameNoteMirrorable*,::System::ValueTuple_2<::GlobalNamespace::MirroredGameNoteController*,::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*>>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IGameNoteMirrorable*,::System::ValueTuple_2<::GlobalNamespace::MirroredGameNoteController*,::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*>>*> GlobalNamespace::MirroredBeatmapObjectManager::__get__gameNoteControllersToMirroredGameNoteControllers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IGameNoteMirrorable*,::System::ValueTuple_2<::GlobalNamespace::MirroredGameNoteController*,::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*>>*, 0x50>(this);
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__set__bombNoteControllersToMirroredBombNoteControllers(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*,::GlobalNamespace::MirroredBombNoteController*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*,::GlobalNamespace::MirroredBombNoteController*>*, 0x58>(this, std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*,::GlobalNamespace::MirroredBombNoteController*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*,::GlobalNamespace::MirroredBombNoteController*>* GlobalNamespace::MirroredBeatmapObjectManager::__get__bombNoteControllersToMirroredBombNoteControllers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*,::GlobalNamespace::MirroredBombNoteController*>*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*,::GlobalNamespace::MirroredBombNoteController*>*> GlobalNamespace::MirroredBeatmapObjectManager::__get__bombNoteControllersToMirroredBombNoteControllers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*,::GlobalNamespace::MirroredBombNoteController*>*, 0x58>(this);
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__set__obstacleControllersToMirroredObstacleControllers(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ObstacleController*,::GlobalNamespace::MirroredObstacleController*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ObstacleController*,::GlobalNamespace::MirroredObstacleController*>*, 0x60>(this, std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ObstacleController*,::GlobalNamespace::MirroredObstacleController*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ObstacleController*,::GlobalNamespace::MirroredObstacleController*>* GlobalNamespace::MirroredBeatmapObjectManager::__get__obstacleControllersToMirroredObstacleControllers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ObstacleController*,::GlobalNamespace::MirroredObstacleController*>*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ObstacleController*,::GlobalNamespace::MirroredObstacleController*>*> GlobalNamespace::MirroredBeatmapObjectManager::__get__obstacleControllersToMirroredObstacleControllers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ObstacleController*,::GlobalNamespace::MirroredObstacleController*>*, 0x60>(this);
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__set__sliderControllersToMirroredSliderControllers(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController*,::GlobalNamespace::MirroredSliderController*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController*,::GlobalNamespace::MirroredSliderController*>*, 0x68>(this, std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController*,::GlobalNamespace::MirroredSliderController*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController*,::GlobalNamespace::MirroredSliderController*>* GlobalNamespace::MirroredBeatmapObjectManager::__get__sliderControllersToMirroredSliderControllers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController*,::GlobalNamespace::MirroredSliderController*>*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController*,::GlobalNamespace::MirroredSliderController*>*> GlobalNamespace::MirroredBeatmapObjectManager::__get__sliderControllersToMirroredSliderControllers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController*,::GlobalNamespace::MirroredSliderController*>*, 0x68>(this);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::Init(::GlobalNamespace::BeatmapObjectManager*  beatmapObjectManager, ::GlobalNamespace::__MirroredGameNoteController__Pool*  mirroredBasicGameNotePool, ::GlobalNamespace::__MirroredGameNoteController__Pool*  burstSliderHeadGameNotePool, ::GlobalNamespace::__MirroredGameNoteController__Pool*  burstSliderGameNotePool, ::GlobalNamespace::__MirroredGameNoteController__Pool*  burstSliderFillPool, ::GlobalNamespace::__MirroredBombNoteController__Pool*  mirroredBombNotePool, ::GlobalNamespace::__MirroredObstacleController__Pool*  mirroredObstaclePool, ::GlobalNamespace::__MirroredSliderController__Pool*  mirroredSlidersPool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredGameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredGameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredGameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredGameNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredBombNoteController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredObstacleController__Pool*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredSliderController__Pool*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapObjectManager, mirroredBasicGameNotePool, burstSliderHeadGameNotePool, burstSliderGameNotePool, burstSliderFillPool, mirroredBombNotePool, mirroredObstaclePool, mirroredSlidersPool);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleNoteWasSpawned(::GlobalNamespace::NoteController*  noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                            "HandleNoteWasSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteController);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleNoteWasDespawned(::GlobalNamespace::NoteController*  noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                            "HandleNoteWasDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteController);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleObstacleWasSpawned(::GlobalNamespace::ObstacleController*  obstacleController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                            "HandleObstacleWasSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleObstacleWasDespawned(::GlobalNamespace::ObstacleController*  obstacleController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                            "HandleObstacleWasDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleSliderWasSpawned(::GlobalNamespace::SliderController*  sliderController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                            "HandleSliderWasSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sliderController);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleSliderWasDespawned(::GlobalNamespace::SliderController*  sliderController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                            "HandleSliderWasDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sliderController);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleDidHideAllBeatmapObjects(bool  hide)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                            "HandleDidHideAllBeatmapObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, hide);
}
inline ::GlobalNamespace::MirroredBeatmapObjectManager* GlobalNamespace::MirroredBeatmapObjectManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MirroredBeatmapObjectManager*>());
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
