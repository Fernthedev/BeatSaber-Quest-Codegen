#pragma once
#include "Zenject/zzzz__NoTransitionInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MissionLevelNoTransitionInstaller_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionLevelNoTransitionInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelNoTransitionInstaller::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::MissionLevelNoTransitionInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x231b0f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelNoTransitionInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelNoTransitionInstaller*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelNoTransitionInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelNoTransitionInstaller::*)()>(&::GlobalNamespace::MissionLevelNoTransitionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231b6e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelNoTransitionInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__beatmapLevel(::GlobalNamespace::BeatmapLevelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelSO*, 0x18>(this, std::forward<::GlobalNamespace::BeatmapLevelSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelSO* GlobalNamespace::MissionLevelNoTransitionInstaller::__get__beatmapLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelSO*> GlobalNamespace::MissionLevelNoTransitionInstaller::__get__beatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSO*, 0x18>(this);
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x20>(this, std::forward<::GlobalNamespace::BeatmapCharacteristicSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO* GlobalNamespace::MissionLevelNoTransitionInstaller::__get__beatmapCharacteristic()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> GlobalNamespace::MissionLevelNoTransitionInstaller::__get__beatmapCharacteristic() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x20>(this);
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x28>(this, std::forward<::GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__beatmapDifficulty()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x28>(this);
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__beatmapDifficulty() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x28>(this);
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__colorScheme(::GlobalNamespace::ColorSchemeSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorSchemeSO*, 0x30>(this, std::forward<::GlobalNamespace::ColorSchemeSO*>(value));
}
constexpr ::GlobalNamespace::ColorSchemeSO* GlobalNamespace::MissionLevelNoTransitionInstaller::__get__colorScheme()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSchemeSO*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeSO*> GlobalNamespace::MissionLevelNoTransitionInstaller::__get__colorScheme() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSchemeSO*, 0x30>(this);
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>, 0x38>(this, std::forward<::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__missionObjectives()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>, 0x38>(this);
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*> const& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__missionObjectives() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>, 0x38>(this);
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__gameplayModifiers(::GlobalNamespace::GameplayModifiers*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifiers*, 0x40>(this, std::forward<::GlobalNamespace::GameplayModifiers*>(value));
}
constexpr ::GlobalNamespace::GameplayModifiers* GlobalNamespace::MissionLevelNoTransitionInstaller::__get__gameplayModifiers()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiers*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> GlobalNamespace::MissionLevelNoTransitionInstaller::__get__gameplayModifiers() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiers*, 0x40>(this);
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerSpecificSettings*, 0x48>(this, std::forward<::GlobalNamespace::PlayerSpecificSettings*>(value));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings* GlobalNamespace::MissionLevelNoTransitionInstaller::__get__playerSpecificSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSpecificSettings*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> GlobalNamespace::MissionLevelNoTransitionInstaller::__get__playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSpecificSettings*, 0x48>(this);
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__backButtonText(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__backButtonText()  {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr ::StringW const& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__backButtonText() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__scenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, 0x58>(this, std::forward<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* GlobalNamespace::MissionLevelNoTransitionInstaller::__get__scenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> GlobalNamespace::MissionLevelNoTransitionInstaller::__get__scenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, 0x58>(this);
}
inline void GlobalNamespace::MissionLevelNoTransitionInstaller::InstallBindings(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelNoTransitionInstaller*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
inline ::GlobalNamespace::MissionLevelNoTransitionInstaller* GlobalNamespace::MissionLevelNoTransitionInstaller::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionLevelNoTransitionInstaller*>());
}
inline void GlobalNamespace::MissionLevelNoTransitionInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelNoTransitionInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
