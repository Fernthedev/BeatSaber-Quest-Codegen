// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameplayModifiersPanelController
#include "GlobalNamespace/GameplayModifiersPanelController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierToggle
  class GameplayModifierToggle;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: GameplayModifiersPanelController/<>c__DisplayClass16_0
  // [CompilerGeneratedAttribute] Offset: E12768
  class GameplayModifiersPanelController::$$c__DisplayClass16_0 : public ::Il2CppObject {
    public:
    // public GameplayModifierToggle gameplayModifierToggle
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::GameplayModifierToggle* gameplayModifierToggle;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierToggle*) == 0x8);
    // public GameplayModifiersPanelController <>4__this
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::GameplayModifiersPanelController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiersPanelController*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass16_0
    $$c__DisplayClass16_0(GlobalNamespace::GameplayModifierToggle* gameplayModifierToggle_ = {}, GlobalNamespace::GameplayModifiersPanelController* $$4__this_ = {}) noexcept : gameplayModifierToggle{gameplayModifierToggle_}, $$4__this{$$4__this_} {}
    // System.Void <Awake>b__0(System.Boolean on)
    // Offset: 0x108C84C
    void $Awake$b__0(bool on);
    // public System.Void .ctor()
    // Offset: 0x108C3D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayModifiersPanelController::$$c__DisplayClass16_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayModifiersPanelController::$$c__DisplayClass16_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayModifiersPanelController::$$c__DisplayClass16_0*, creationType>()));
    }
  }; // GameplayModifiersPanelController/<>c__DisplayClass16_0
  #pragma pack(pop)
  static check_size<sizeof(GameplayModifiersPanelController::$$c__DisplayClass16_0), 24 + sizeof(GlobalNamespace::GameplayModifiersPanelController*)> __GlobalNamespace_GameplayModifiersPanelController_$$c__DisplayClass16_0SizeCheck;
  static_assert(sizeof(GameplayModifiersPanelController::$$c__DisplayClass16_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiersPanelController::$$c__DisplayClass16_0*, "", "GameplayModifiersPanelController/<>c__DisplayClass16_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersPanelController::$$c__DisplayClass16_0::$Awake$b__0
// Il2CppName: <Awake>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersPanelController::$$c__DisplayClass16_0::*)(bool)>(&GlobalNamespace::GameplayModifiersPanelController::$$c__DisplayClass16_0::$Awake$b__0)> {
  const MethodInfo* get() {
    static auto* on = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersPanelController::$$c__DisplayClass16_0*), "<Awake>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{on});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersPanelController::$$c__DisplayClass16_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
