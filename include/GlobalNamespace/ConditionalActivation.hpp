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
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: ConditionalActivation
  // [TokenAttribute] Offset: FFFFFFFF
  class ConditionalActivation : public UnityEngine::MonoBehaviour {
    public:
    // private BoolSO _value
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BoolSO* value;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // private System.Boolean _activateOnFalse
    // Size: 0x1
    // Offset: 0x20
    bool activateOnFalse;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ConditionalActivation
    ConditionalActivation(GlobalNamespace::BoolSO* value_ = {}, bool activateOnFalse_ = {}) noexcept : value{value_}, activateOnFalse{activateOnFalse_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BoolSO _value
    GlobalNamespace::BoolSO*& dyn__value();
    // Get instance field reference: private System.Boolean _activateOnFalse
    bool& dyn__activateOnFalse();
    // protected System.Void Awake()
    // Offset: 0x10E5EFC
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x10E5F88
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConditionalActivation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ConditionalActivation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConditionalActivation*, creationType>()));
    }
  }; // ConditionalActivation
  #pragma pack(pop)
  static check_size<sizeof(ConditionalActivation), 32 + sizeof(bool)> __GlobalNamespace_ConditionalActivationSizeCheck;
  static_assert(sizeof(ConditionalActivation) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConditionalActivation*, "", "ConditionalActivation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ConditionalActivation::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConditionalActivation::*)()>(&GlobalNamespace::ConditionalActivation::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConditionalActivation*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConditionalActivation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
