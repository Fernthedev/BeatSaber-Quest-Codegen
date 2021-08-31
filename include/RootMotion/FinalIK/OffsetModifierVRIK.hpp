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
  // Forward declaring type: VRIK
  class VRIK;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.OffsetModifierVRIK
  // [TokenAttribute] Offset: FFFFFFFF
  class OffsetModifierVRIK : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: RootMotion::FinalIK::OffsetModifierVRIK::$Initiate$d__7
    class $Initiate$d__7;
    // [TooltipAttribute] Offset: 0xE28304
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x18
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: weight and: ik
    char __padding0[0x4] = {};
    // [TooltipAttribute] Offset: 0xE2833C
    // public RootMotion.FinalIK.VRIK ik
    // Size: 0x8
    // Offset: 0x20
    RootMotion::FinalIK::VRIK* ik;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::VRIK*) == 0x8);
    // private System.Single lastTime
    // Size: 0x4
    // Offset: 0x28
    float lastTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: OffsetModifierVRIK
    OffsetModifierVRIK(float weight_ = {}, RootMotion::FinalIK::VRIK* ik_ = {}, float lastTime_ = {}) noexcept : weight{weight_}, ik{ik_}, lastTime{lastTime_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: public System.Single weight
    float _get_weight();
    // Set instance field: public System.Single weight
    void _set_weight(float value);
    // Get instance field: public RootMotion.FinalIK.VRIK ik
    RootMotion::FinalIK::VRIK* _get_ik();
    // Set instance field: public RootMotion.FinalIK.VRIK ik
    void _set_ik(RootMotion::FinalIK::VRIK* value);
    // Get instance field: private System.Single lastTime
    float _get_lastTime();
    // Set instance field: private System.Single lastTime
    void _set_lastTime(float value);
    // protected System.Single get_deltaTime()
    // Offset: 0x1AD8818
    float get_deltaTime();
    // protected System.Void OnModifyOffset()
    // Offset: 0xFFFFFFFF
    void OnModifyOffset();
    // protected System.Void Start()
    // Offset: 0x1AD8844
    void Start();
    // private System.Collections.IEnumerator Initiate()
    // Offset: 0x1AD8870
    System::Collections::IEnumerator* Initiate();
    // private System.Void ModifyOffset()
    // Offset: 0x1AD890C
    void ModifyOffset();
    // protected System.Void OnDestroy()
    // Offset: 0x1AD8A18
    void OnDestroy();
    // protected System.Void .ctor()
    // Offset: 0x1AD8B10
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OffsetModifierVRIK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::OffsetModifierVRIK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OffsetModifierVRIK*, creationType>()));
    }
  }; // RootMotion.FinalIK.OffsetModifierVRIK
  #pragma pack(pop)
  static check_size<sizeof(OffsetModifierVRIK), 40 + sizeof(float)> __RootMotion_FinalIK_OffsetModifierVRIKSizeCheck;
  static_assert(sizeof(OffsetModifierVRIK) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::OffsetModifierVRIK*, "RootMotion.FinalIK", "OffsetModifierVRIK");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifierVRIK::get_deltaTime
// Il2CppName: get_deltaTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::OffsetModifierVRIK::*)()>(&RootMotion::FinalIK::OffsetModifierVRIK::get_deltaTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetModifierVRIK*), "get_deltaTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifierVRIK::OnModifyOffset
// Il2CppName: OnModifyOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetModifierVRIK::*)()>(&RootMotion::FinalIK::OffsetModifierVRIK::OnModifyOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetModifierVRIK*), "OnModifyOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifierVRIK::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetModifierVRIK::*)()>(&RootMotion::FinalIK::OffsetModifierVRIK::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetModifierVRIK*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifierVRIK::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (RootMotion::FinalIK::OffsetModifierVRIK::*)()>(&RootMotion::FinalIK::OffsetModifierVRIK::Initiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetModifierVRIK*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifierVRIK::ModifyOffset
// Il2CppName: ModifyOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetModifierVRIK::*)()>(&RootMotion::FinalIK::OffsetModifierVRIK::ModifyOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetModifierVRIK*), "ModifyOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifierVRIK::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetModifierVRIK::*)()>(&RootMotion::FinalIK::OffsetModifierVRIK::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetModifierVRIK*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifierVRIK::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
