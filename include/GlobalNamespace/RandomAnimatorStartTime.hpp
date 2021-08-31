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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RandomAnimatorStartTime
  // [TokenAttribute] Offset: FFFFFFFF
  class RandomAnimatorStartTime : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // private System.String _stateName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* stateName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: RandomAnimatorStartTime
    RandomAnimatorStartTime(UnityEngine::Animator* animator_ = {}, ::Il2CppString* stateName_ = {}) noexcept : animator{animator_}, stateName{stateName_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Animator _animator
    UnityEngine::Animator*& dyn__animator();
    // Get instance field reference: private System.String _stateName
    ::Il2CppString*& dyn__stateName();
    // protected System.Void Start()
    // Offset: 0x126B34C
    void Start();
    // public System.Void .ctor()
    // Offset: 0x126B390
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RandomAnimatorStartTime* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RandomAnimatorStartTime::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RandomAnimatorStartTime*, creationType>()));
    }
  }; // RandomAnimatorStartTime
  #pragma pack(pop)
  static check_size<sizeof(RandomAnimatorStartTime), 32 + sizeof(::Il2CppString*)> __GlobalNamespace_RandomAnimatorStartTimeSizeCheck;
  static_assert(sizeof(RandomAnimatorStartTime) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RandomAnimatorStartTime*, "", "RandomAnimatorStartTime");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RandomAnimatorStartTime::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomAnimatorStartTime::*)()>(&GlobalNamespace::RandomAnimatorStartTime::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomAnimatorStartTime*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RandomAnimatorStartTime::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
