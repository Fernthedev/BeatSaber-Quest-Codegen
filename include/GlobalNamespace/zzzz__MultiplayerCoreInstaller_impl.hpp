#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerCoreInstaller_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__ScoreSyncStateManager_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgesModelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerCoreInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerCoreInstaller::*)()>(&::GlobalNamespace::MultiplayerCoreInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x22725cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerCoreInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerCoreInstaller*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerCoreInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerCoreInstaller::*)()>(&::GlobalNamespace::MultiplayerCoreInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2272be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerCoreInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerCoreInstaller::__set__scoreSyncStateManagerPrefab(::GlobalNamespace::ScoreSyncStateManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ScoreSyncStateManager*, 0x20>(this, std::forward<::GlobalNamespace::ScoreSyncStateManager*>(value));
}
constexpr ::GlobalNamespace::ScoreSyncStateManager* GlobalNamespace::MultiplayerCoreInstaller::__get__scoreSyncStateManagerPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScoreSyncStateManager*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScoreSyncStateManager*> GlobalNamespace::MultiplayerCoreInstaller::__get__scoreSyncStateManagerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScoreSyncStateManager*, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerCoreInstaller::__set__multiplayerBadgesModel(::GlobalNamespace::MultiplayerBadgesModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerBadgesModelSO*, 0x28>(this, std::forward<::GlobalNamespace::MultiplayerBadgesModelSO*>(value));
}
constexpr ::GlobalNamespace::MultiplayerBadgesModelSO* GlobalNamespace::MultiplayerCoreInstaller::__get__multiplayerBadgesModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerBadgesModelSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerBadgesModelSO*> GlobalNamespace::MultiplayerCoreInstaller::__get__multiplayerBadgesModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerBadgesModelSO*, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerCoreInstaller::__set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x30>(this, std::forward<::GlobalNamespace::GameplayCoreSceneSetupData*>(value));
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* GlobalNamespace::MultiplayerCoreInstaller::__get__sceneSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> GlobalNamespace::MultiplayerCoreInstaller::__get__sceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x30>(this);
}
constexpr void GlobalNamespace::MultiplayerCoreInstaller::__set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x38>(this, std::forward<::GlobalNamespace::IMultiplayerSessionManager*>(value));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager* GlobalNamespace::MultiplayerCoreInstaller::__get__multiplayerSessionManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> GlobalNamespace::MultiplayerCoreInstaller::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x38>(this);
}
inline void GlobalNamespace::MultiplayerCoreInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerCoreInstaller*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerCoreInstaller* GlobalNamespace::MultiplayerCoreInstaller::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerCoreInstaller*>());
}
inline void GlobalNamespace::MultiplayerCoreInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerCoreInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
