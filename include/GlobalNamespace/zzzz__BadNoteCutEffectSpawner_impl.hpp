#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BadNoteCutEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__FlyingSpriteSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BadNoteCutEffectSpawner.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BadNoteCutEffectSpawner::*)()>(&::GlobalNamespace::BadNoteCutEffectSpawner::Start)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x23a0eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BadNoteCutEffectSpawner.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BadNoteCutEffectSpawner::*)()>(&::GlobalNamespace::BadNoteCutEffectSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x23a0f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BadNoteCutEffectSpawner.HandleNoteWasCut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BadNoteCutEffectSpawner::*)(::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&::GlobalNamespace::BadNoteCutEffectSpawner::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x23a0ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(),
                            "HandleNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BadNoteCutEffectSpawner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BadNoteCutEffectSpawner::*)()>(&::GlobalNamespace::BadNoteCutEffectSpawner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a1310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BadNoteCutEffectSpawner::__set__failFlyingSpriteSpawner(::GlobalNamespace::FlyingSpriteSpawner*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FlyingSpriteSpawner*, 0x18>(this, std::forward<::GlobalNamespace::FlyingSpriteSpawner*>(value));
}
constexpr ::GlobalNamespace::FlyingSpriteSpawner* GlobalNamespace::BadNoteCutEffectSpawner::__get__failFlyingSpriteSpawner()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FlyingSpriteSpawner*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FlyingSpriteSpawner*> GlobalNamespace::BadNoteCutEffectSpawner::__get__failFlyingSpriteSpawner() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FlyingSpriteSpawner*, 0x18>(this);
}
constexpr void GlobalNamespace::BadNoteCutEffectSpawner::__set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x20>(this, std::forward<::GlobalNamespace::BeatmapObjectManager*>(value));
}
constexpr ::GlobalNamespace::BeatmapObjectManager* GlobalNamespace::BadNoteCutEffectSpawner::__get__beatmapObjectManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> GlobalNamespace::BadNoteCutEffectSpawner::__get__beatmapObjectManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x20>(this);
}
constexpr void GlobalNamespace::BadNoteCutEffectSpawner::__set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x28>(this, std::forward<::GlobalNamespace::AudioTimeSyncController*>(value));
}
constexpr ::GlobalNamespace::AudioTimeSyncController* GlobalNamespace::BadNoteCutEffectSpawner::__get__audioTimeSyncController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> GlobalNamespace::BadNoteCutEffectSpawner::__get__audioTimeSyncController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x28>(this);
}
constexpr void GlobalNamespace::BadNoteCutEffectSpawner::__set__initData(::GlobalNamespace::__CoreGameHUDController__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__CoreGameHUDController__InitData*, 0x30>(this, std::forward<::GlobalNamespace::__CoreGameHUDController__InitData*>(value));
}
constexpr ::GlobalNamespace::__CoreGameHUDController__InitData* GlobalNamespace::BadNoteCutEffectSpawner::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__CoreGameHUDController__InitData*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CoreGameHUDController__InitData*> GlobalNamespace::BadNoteCutEffectSpawner::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__CoreGameHUDController__InitData*, 0x30>(this);
}
inline void GlobalNamespace::BadNoteCutEffectSpawner::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BadNoteCutEffectSpawner::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BadNoteCutEffectSpawner::HandleNoteWasCut(::GlobalNamespace::NoteController*  noteController, ByRef<::GlobalNamespace::NoteCutInfo>  noteCutInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(),
                            "HandleNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteController, noteCutInfo);
}
inline ::GlobalNamespace::BadNoteCutEffectSpawner* GlobalNamespace::BadNoteCutEffectSpawner::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BadNoteCutEffectSpawner*>());
}
inline void GlobalNamespace::BadNoteCutEffectSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
