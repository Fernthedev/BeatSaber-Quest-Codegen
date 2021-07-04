// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MonobehaviourCallbacksOrderDebuger
  class MonobehaviourCallbacksOrderDebuger : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: MonobehaviourCallbacksOrderDebuger
    MonobehaviourCallbacksOrderDebuger() noexcept {}
    // protected System.Void Awake()
    // Offset: 0x124CA4C
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x124CAF4
    void OnEnable();
    // protected System.Void Start()
    // Offset: 0x124CB9C
    void Start();
    // public System.Void .ctor()
    // Offset: 0x124CC44
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonobehaviourCallbacksOrderDebuger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MonobehaviourCallbacksOrderDebuger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonobehaviourCallbacksOrderDebuger*, creationType>()));
    }
  }; // MonobehaviourCallbacksOrderDebuger
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MonobehaviourCallbacksOrderDebuger*, "", "MonobehaviourCallbacksOrderDebuger");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::MonobehaviourCallbacksOrderDebuger::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonobehaviourCallbacksOrderDebuger::*)()>(&GlobalNamespace::MonobehaviourCallbacksOrderDebuger::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MonobehaviourCallbacksOrderDebuger*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MonobehaviourCallbacksOrderDebuger::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonobehaviourCallbacksOrderDebuger::*)()>(&GlobalNamespace::MonobehaviourCallbacksOrderDebuger::OnEnable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MonobehaviourCallbacksOrderDebuger*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MonobehaviourCallbacksOrderDebuger::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MonobehaviourCallbacksOrderDebuger::*)()>(&GlobalNamespace::MonobehaviourCallbacksOrderDebuger::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MonobehaviourCallbacksOrderDebuger*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MonobehaviourCallbacksOrderDebuger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
