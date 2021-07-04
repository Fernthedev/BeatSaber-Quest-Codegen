// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ILobbyGameStateController
#include "GlobalNamespace/ILobbyGameStateController.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: ILobbyHostGameStateController
  class ILobbyHostGameStateController/*, public GlobalNamespace::ILobbyGameStateController*/ {
    public:
    // Creating value type constructor for type: ILobbyHostGameStateController
    ILobbyHostGameStateController() noexcept {}
    // Creating interface conversion operator: operator GlobalNamespace::ILobbyGameStateController
    operator GlobalNamespace::ILobbyGameStateController() noexcept {
      return *reinterpret_cast<GlobalNamespace::ILobbyGameStateController*>(this);
    }
    // public System.Void StartGame()
    // Offset: 0xFFFFFFFF
    void StartGame();
    // public System.Void CancelGame()
    // Offset: 0xFFFFFFFF
    void CancelGame();
  }; // ILobbyHostGameStateController
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ILobbyHostGameStateController*, "", "ILobbyHostGameStateController");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::ILobbyHostGameStateController::StartGame
// Il2CppName: StartGame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyHostGameStateController::*)()>(&GlobalNamespace::ILobbyHostGameStateController::StartGame)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyHostGameStateController*), "StartGame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyHostGameStateController::CancelGame
// Il2CppName: CancelGame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyHostGameStateController::*)()>(&GlobalNamespace::ILobbyHostGameStateController::CancelGame)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyHostGameStateController*), "CancelGame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
