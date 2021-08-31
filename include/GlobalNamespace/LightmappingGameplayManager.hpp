// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LightmappingGameplayManager
  // [TokenAttribute] Offset: FFFFFFFF
  class LightmappingGameplayManager : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xE38C44
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // Creating value type constructor for type: LightmappingGameplayManager
    LightmappingGameplayManager(GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}) noexcept : beatmapObjectCallbackController{beatmapObjectCallbackController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    GlobalNamespace::IBeatmapObjectCallbackController* _get__beatmapObjectCallbackController();
    // Set instance field: private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    void _set__beatmapObjectCallbackController(GlobalNamespace::IBeatmapObjectCallbackController* value);
    // protected System.Void Start()
    // Offset: 0x1200A7C
    void Start();
    // public System.Void .ctor()
    // Offset: 0x1200DAC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightmappingGameplayManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LightmappingGameplayManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightmappingGameplayManager*, creationType>()));
    }
  }; // LightmappingGameplayManager
  #pragma pack(pop)
  static check_size<sizeof(LightmappingGameplayManager), 24 + sizeof(GlobalNamespace::IBeatmapObjectCallbackController*)> __GlobalNamespace_LightmappingGameplayManagerSizeCheck;
  static_assert(sizeof(LightmappingGameplayManager) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightmappingGameplayManager*, "", "LightmappingGameplayManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightmappingGameplayManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmappingGameplayManager::*)()>(&GlobalNamespace::LightmappingGameplayManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmappingGameplayManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmappingGameplayManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
