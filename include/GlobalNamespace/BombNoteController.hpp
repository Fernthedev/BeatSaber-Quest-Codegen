// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CuttableBySaber
  class CuttableBySaber;
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: Saber
  class Saber;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x89
  #pragma pack(push, 1)
  // Autogenerated type: BombNoteController
  class BombNoteController : public GlobalNamespace::NoteController {
    public:
    // Nested type: GlobalNamespace::BombNoteController::Pool
    class Pool;
    // private CuttableBySaber _cuttableBySaber
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::CuttableBySaber* cuttableBySaber;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CuttableBySaber*) == 0x8);
    // private UnityEngine.GameObject _wrapperGO
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::GameObject* wrapperGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.Boolean _hidden
    // Size: 0x1
    // Offset: 0x88
    bool hidden;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: BombNoteController
    BombNoteController(GlobalNamespace::CuttableBySaber* cuttableBySaber_ = {}, UnityEngine::GameObject* wrapperGO_ = {}, bool hidden_ = {}) noexcept : cuttableBySaber{cuttableBySaber_}, wrapperGO{wrapperGO_}, hidden{hidden_} {}
    // public System.Void Init(NoteData noteData, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity)
    // Offset: 0x1111A30
    void Init(GlobalNamespace::NoteData* noteData, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity);
    // private System.Void HandleDidPassHalfJump()
    // Offset: 0x1111CFC
    void HandleDidPassHalfJump();
    // private System.Void HandleWasCutBySaber(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0x1111D20
    void HandleWasCutBySaber(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec);
    // public override System.Void set_hide(System.Boolean value)
    // Offset: 0x11119D4
    // Implemented from: NoteController
    // Base method: System.Void NoteController::set_hide(System.Boolean value)
    void set_hide(bool value);
    // public override System.Boolean get_hide()
    // Offset: 0x1111A18
    // Implemented from: NoteController
    // Base method: System.Boolean NoteController::get_hide()
    bool get_hide();
    // public override System.Void set_pause(System.Boolean value)
    // Offset: 0x1111A20
    // Implemented from: NoteController
    // Base method: System.Void NoteController::set_pause(System.Boolean value)
    void set_pause(bool value);
    // protected override System.Void Awake()
    // Offset: 0x1111B00
    // Implemented from: NoteController
    // Base method: System.Void NoteController::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0x1111BDC
    // Implemented from: NoteController
    // Base method: System.Void NoteController::OnDestroy()
    void OnDestroy();
    // protected override System.Void NoteDidPassMissedMarker()
    // Offset: 0x1111CBC
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidPassMissedMarker()
    void NoteDidPassMissedMarker();
    // protected override System.Void NoteDidStartDissolving()
    // Offset: 0x1111EDC
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidStartDissolving()
    void NoteDidStartDissolving();
    // public System.Void .ctor()
    // Offset: 0x1111F00
    // Implemented from: NoteController
    // Base method: System.Void NoteController::.ctor()
    // Base method: System.Void NoteControllerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BombNoteController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BombNoteController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BombNoteController*, creationType>()));
    }
  }; // BombNoteController
  #pragma pack(pop)
  static check_size<sizeof(BombNoteController), 136 + sizeof(bool)> __GlobalNamespace_BombNoteControllerSizeCheck;
  static_assert(sizeof(BombNoteController) == 0x89);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BombNoteController*, "", "BombNoteController");
// Writing includes for template specializations
#include "GlobalNamespace/NoteData.hpp"
#include "GlobalNamespace/Saber.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombNoteController::*)(GlobalNamespace::NoteData*, float, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float, float, float)>(&GlobalNamespace::BombNoteController::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombNoteController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::NoteData*>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::HandleDidPassHalfJump
// Il2CppName: HandleDidPassHalfJump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombNoteController::*)()>(&GlobalNamespace::BombNoteController::HandleDidPassHalfJump)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombNoteController*), "HandleDidPassHalfJump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::HandleWasCutBySaber
// Il2CppName: HandleWasCutBySaber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombNoteController::*)(GlobalNamespace::Saber*, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3)>(&GlobalNamespace::BombNoteController::HandleWasCutBySaber)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombNoteController*), "HandleWasCutBySaber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::Saber*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::set_hide
// Il2CppName: set_hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombNoteController::*)(bool)>(&GlobalNamespace::BombNoteController::set_hide)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombNoteController*), "set_hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::get_hide
// Il2CppName: get_hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BombNoteController::*)()>(&GlobalNamespace::BombNoteController::get_hide)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombNoteController*), "get_hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::set_pause
// Il2CppName: set_pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombNoteController::*)(bool)>(&GlobalNamespace::BombNoteController::set_pause)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombNoteController*), "set_pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombNoteController::*)()>(&GlobalNamespace::BombNoteController::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombNoteController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombNoteController::*)()>(&GlobalNamespace::BombNoteController::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombNoteController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::NoteDidPassMissedMarker
// Il2CppName: NoteDidPassMissedMarker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombNoteController::*)()>(&GlobalNamespace::BombNoteController::NoteDidPassMissedMarker)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombNoteController*), "NoteDidPassMissedMarker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::NoteDidStartDissolving
// Il2CppName: NoteDidStartDissolving
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombNoteController::*)()>(&GlobalNamespace::BombNoteController::NoteDidStartDissolving)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombNoteController*), "NoteDidStartDissolving", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
