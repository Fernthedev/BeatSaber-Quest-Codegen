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
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IK
  class IK;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.EditorIK
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class EditorIK : public UnityEngine::MonoBehaviour {
    public:
    // private RootMotion.FinalIK.IK ik
    // Size: 0x8
    // Offset: 0x18
    RootMotion::FinalIK::IK* ik;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IK*) == 0x8);
    // Creating value type constructor for type: EditorIK
    EditorIK(RootMotion::FinalIK::IK* ik_ = {}) noexcept : ik{ik_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private RootMotion.FinalIK.IK ik
    RootMotion::FinalIK::IK*& dyn_ik();
    // private System.Void Start()
    // Offset: 0x1D3492C
    void Start();
    // private System.Void Update()
    // Offset: 0x1D349C0
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1D34A90
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EditorIK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::EditorIK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EditorIK*, creationType>()));
    }
  }; // RootMotion.FinalIK.EditorIK
  #pragma pack(pop)
  static check_size<sizeof(EditorIK), 24 + sizeof(RootMotion::FinalIK::IK*)> __RootMotion_FinalIK_EditorIKSizeCheck;
  static_assert(sizeof(EditorIK) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::EditorIK*, "RootMotion.FinalIK", "EditorIK");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::EditorIK::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::EditorIK::*)()>(&RootMotion::FinalIK::EditorIK::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::EditorIK*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::EditorIK::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::EditorIK::*)()>(&RootMotion::FinalIK::EditorIK::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::EditorIK*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::EditorIK::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
