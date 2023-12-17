#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBigAvatarInstaller_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PlayersSpecificSettingsAtGameStartModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBigAvatarInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerBigAvatarInstaller::*)()>(&::GlobalNamespace::MultiplayerBigAvatarInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x2245108;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBigAvatarInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBigAvatarInstaller*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBigAvatarInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerBigAvatarInstaller::*)()>(&::GlobalNamespace::MultiplayerBigAvatarInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224551c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBigAvatarInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerBigAvatarInstaller::__set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x20>(this, std::forward<::GlobalNamespace::IConnectedPlayer*>(value));
}
constexpr ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::MultiplayerBigAvatarInstaller::__get__connectedPlayer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> GlobalNamespace::MultiplayerBigAvatarInstaller::__get__connectedPlayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerBigAvatarInstaller::__set__saberManagerInitData(::GlobalNamespace::__SaberManager__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SaberManager__InitData*, 0x28>(this, std::forward<::GlobalNamespace::__SaberManager__InitData*>(value));
}
constexpr ::GlobalNamespace::__SaberManager__InitData* GlobalNamespace::MultiplayerBigAvatarInstaller::__get__saberManagerInitData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SaberManager__InitData*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SaberManager__InitData*> GlobalNamespace::MultiplayerBigAvatarInstaller::__get__saberManagerInitData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SaberManager__InitData*, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerBigAvatarInstaller::__set__playerSpecificSettings(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*, 0x30>(this, std::forward<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(value));
}
constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* GlobalNamespace::MultiplayerBigAvatarInstaller::__get__playerSpecificSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*> GlobalNamespace::MultiplayerBigAvatarInstaller::__get__playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*, 0x30>(this);
}
inline void GlobalNamespace::MultiplayerBigAvatarInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBigAvatarInstaller*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerBigAvatarInstaller* GlobalNamespace::MultiplayerBigAvatarInstaller::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerBigAvatarInstaller*>());
}
inline void GlobalNamespace::MultiplayerBigAvatarInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBigAvatarInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
