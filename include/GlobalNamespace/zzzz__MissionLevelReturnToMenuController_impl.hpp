#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionLevelReturnToMenuController_def.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveCheckersManager_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__IReturnToMenuController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionLevelReturnToMenuController.ReturnToMenu
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelReturnToMenuController::*)()>(&::GlobalNamespace::MissionLevelReturnToMenuController::ReturnToMenu)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23c9b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelReturnToMenuController*>::get(),
                            "ReturnToMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelReturnToMenuController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelReturnToMenuController::*)()>(&::GlobalNamespace::MissionLevelReturnToMenuController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c9bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelReturnToMenuController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IReturnToMenuController"
constexpr  GlobalNamespace::MissionLevelReturnToMenuController::operator ::GlobalNamespace::IReturnToMenuController*() noexcept {
return static_cast<::GlobalNamespace::IReturnToMenuController*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::MissionLevelReturnToMenuController::__set__missionLevelSceneSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, 0x18>(this, std::forward<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* GlobalNamespace::MissionLevelReturnToMenuController::__get__missionLevelSceneSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> GlobalNamespace::MissionLevelReturnToMenuController::__get__missionLevelSceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr void GlobalNamespace::MissionLevelReturnToMenuController::__set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PrepareLevelCompletionResults*, 0x20>(this, std::forward<::GlobalNamespace::PrepareLevelCompletionResults*>(value));
}
constexpr ::GlobalNamespace::PrepareLevelCompletionResults* GlobalNamespace::MissionLevelReturnToMenuController::__get__prepareLevelCompletionResults()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PrepareLevelCompletionResults*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrepareLevelCompletionResults*> GlobalNamespace::MissionLevelReturnToMenuController::__get__prepareLevelCompletionResults() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PrepareLevelCompletionResults*, 0x20>(this);
}
constexpr void GlobalNamespace::MissionLevelReturnToMenuController::__set__missionObjectiveCheckersManager(::GlobalNamespace::MissionObjectiveCheckersManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionObjectiveCheckersManager*, 0x28>(this, std::forward<::GlobalNamespace::MissionObjectiveCheckersManager*>(value));
}
constexpr ::GlobalNamespace::MissionObjectiveCheckersManager* GlobalNamespace::MissionLevelReturnToMenuController::__get__missionObjectiveCheckersManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionObjectiveCheckersManager*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjectiveCheckersManager*> GlobalNamespace::MissionLevelReturnToMenuController::__get__missionObjectiveCheckersManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionObjectiveCheckersManager*, 0x28>(this);
}
inline void GlobalNamespace::MissionLevelReturnToMenuController::ReturnToMenu()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelReturnToMenuController*>::get(),
                            "ReturnToMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MissionLevelReturnToMenuController* GlobalNamespace::MissionLevelReturnToMenuController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionLevelReturnToMenuController*>());
}
inline void GlobalNamespace::MissionLevelReturnToMenuController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelReturnToMenuController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
