// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MissionHelpSO
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionHelpSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.String _missionHelpId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* missionHelpId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MissionHelpSO
    MissionHelpSO(::Il2CppString* missionHelpId_ = {}) noexcept : missionHelpId{missionHelpId_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _missionHelpId
    ::Il2CppString*& dyn__missionHelpId();
    // public System.String get_missionHelpId()
    // Offset: 0x113E2E8
    ::Il2CppString* get_missionHelpId();
    // public System.Void .ctor()
    // Offset: 0x113E2F0
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionHelpSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionHelpSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionHelpSO*, creationType>()));
    }
  }; // MissionHelpSO
  #pragma pack(pop)
  static check_size<sizeof(MissionHelpSO), 24 + sizeof(::Il2CppString*)> __GlobalNamespace_MissionHelpSOSizeCheck;
  static_assert(sizeof(MissionHelpSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionHelpSO*, "", "MissionHelpSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionHelpSO::get_missionHelpId
// Il2CppName: get_missionHelpId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::MissionHelpSO::*)()>(&GlobalNamespace::MissionHelpSO::get_missionHelpId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionHelpSO*), "get_missionHelpId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionHelpSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
