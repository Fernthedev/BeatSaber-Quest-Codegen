#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactivePlayerInstaller_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumePerLevelModel_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarDataSender_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x23dcc48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dd264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__set__audioManager(::GlobalNamespace::AudioManagerSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioManagerSO*, 0x20>(this, std::forward<::GlobalNamespace::AudioManagerSO*>(value));
}
constexpr ::GlobalNamespace::AudioManagerSO* GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__audioManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioManagerSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioManagerSO*> GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__audioManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioManagerSO*, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x28>(this, std::forward<::GlobalNamespace::GameplayCoreSceneSetupData*>(value));
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__sceneSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__sceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__set__beatmapLoudnessModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PerceivedLoudnessPerLevelModel*, 0x30>(this, std::forward<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>(value));
}
constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel* GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__beatmapLoudnessModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PerceivedLoudnessPerLevelModel*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerceivedLoudnessPerLevelModel*> GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__beatmapLoudnessModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PerceivedLoudnessPerLevelModel*, 0x30>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__set__relativeSfxVolumePerLevelModel(::GlobalNamespace::RelativeSfxVolumePerLevelModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RelativeSfxVolumePerLevelModel*, 0x38>(this, std::forward<::GlobalNamespace::RelativeSfxVolumePerLevelModel*>(value));
}
constexpr ::GlobalNamespace::RelativeSfxVolumePerLevelModel* GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__relativeSfxVolumePerLevelModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RelativeSfxVolumePerLevelModel*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RelativeSfxVolumePerLevelModel*> GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__relativeSfxVolumePerLevelModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RelativeSfxVolumePerLevelModel*, 0x38>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel*, 0x40>(this, std::forward<::GlobalNamespace::PlayerDataModel*>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel* GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__playerDataModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x40>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__set__optionalAvatarDataSender(::BeatSaber::AvatarCore::OptionalAvatarDataSender*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::AvatarCore::OptionalAvatarDataSender*, 0x48>(this, std::forward<::BeatSaber::AvatarCore::OptionalAvatarDataSender*>(value));
}
constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSender* GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__optionalAvatarDataSender()  {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::OptionalAvatarDataSender*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::OptionalAvatarDataSender*> GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__optionalAvatarDataSender() const {
return ::cordl_internals::getInstanceField<::BeatSaber::AvatarCore::OptionalAvatarDataSender*, 0x48>(this);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller* GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*>());
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
