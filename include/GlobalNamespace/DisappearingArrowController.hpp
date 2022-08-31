// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DisappearingArrowControllerBase`1
#include "GlobalNamespace/DisappearingArrowControllerBase_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameNoteController
  class GameNoteController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DisappearingArrowController
  class DisappearingArrowController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DisappearingArrowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisappearingArrowController*, "", "DisappearingArrowController");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: DisappearingArrowController
  // [TokenAttribute] Offset: FFFFFFFF
  class DisappearingArrowController : public ::GlobalNamespace::DisappearingArrowControllerBase_1<::GlobalNamespace::GameNoteController*> {
    public:
    public:
    // private GameNoteController _gameNoteController
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::GameNoteController* gameNoteController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameNoteController*) == 0x8);
    public:
    // Get instance field reference: private GameNoteController _gameNoteController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameNoteController*& dyn__gameNoteController();
    // protected GameNoteController get_gameNoteController()
    // Offset: 0x149A364
    ::GlobalNamespace::GameNoteController* get_gameNoteController();
    // public System.Void .ctor()
    // Offset: 0x149A36C
    // Implemented from: DisappearingArrowControllerBase`1
    // Base method: System.Void DisappearingArrowControllerBase_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisappearingArrowController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DisappearingArrowController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisappearingArrowController*, creationType>()));
    }
  }; // DisappearingArrowController
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DisappearingArrowController::get_gameNoteController
// Il2CppName: get_gameNoteController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameNoteController* (GlobalNamespace::DisappearingArrowController::*)()>(&GlobalNamespace::DisappearingArrowController::get_gameNoteController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisappearingArrowController*), "get_gameNoteController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisappearingArrowController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
