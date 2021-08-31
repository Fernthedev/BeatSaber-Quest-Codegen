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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSpaceConvertor
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSpaceConvertor : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Quaternion _worldToPlayerSpaceRotation
    // Size: 0x10
    // Offset: 0x18
    UnityEngine::Quaternion worldToPlayerSpaceRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: PlayerSpaceConvertor
    PlayerSpaceConvertor(UnityEngine::Quaternion worldToPlayerSpaceRotation_ = {}) noexcept : worldToPlayerSpaceRotation{worldToPlayerSpaceRotation_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Quaternion _worldToPlayerSpaceRotation
    UnityEngine::Quaternion& dyn__worldToPlayerSpaceRotation();
    // public UnityEngine.Quaternion get_worldToPlayerSpaceRotation()
    // Offset: 0x113C12C
    UnityEngine::Quaternion get_worldToPlayerSpaceRotation();
    // protected System.Void Start()
    // Offset: 0x113C138
    void Start();
    // public System.Void .ctor()
    // Offset: 0x113C1F4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSpaceConvertor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSpaceConvertor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSpaceConvertor*, creationType>()));
    }
  }; // PlayerSpaceConvertor
  #pragma pack(pop)
  static check_size<sizeof(PlayerSpaceConvertor), 24 + sizeof(UnityEngine::Quaternion)> __GlobalNamespace_PlayerSpaceConvertorSizeCheck;
  static_assert(sizeof(PlayerSpaceConvertor) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSpaceConvertor*, "", "PlayerSpaceConvertor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpaceConvertor::get_worldToPlayerSpaceRotation
// Il2CppName: get_worldToPlayerSpaceRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (GlobalNamespace::PlayerSpaceConvertor::*)()>(&GlobalNamespace::PlayerSpaceConvertor::get_worldToPlayerSpaceRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpaceConvertor*), "get_worldToPlayerSpaceRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpaceConvertor::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSpaceConvertor::*)()>(&GlobalNamespace::PlayerSpaceConvertor::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpaceConvertor*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpaceConvertor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
