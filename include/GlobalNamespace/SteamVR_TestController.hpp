// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Valve.VR.EVRButtonId
#include "Valve/VR/EVRButtonId.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_TestController
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_TestController : public UnityEngine::MonoBehaviour {
    public:
    // private System.Collections.Generic.List`1<System.Int32> controllerIndices
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<int>* controllerIndices;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<int>*) == 0x8);
    // private Valve.VR.EVRButtonId[] buttonIds
    // Size: 0x8
    // Offset: 0x20
    ::Array<Valve::VR::EVRButtonId>* buttonIds;
    // Field size check
    static_assert(sizeof(::Array<Valve::VR::EVRButtonId>*) == 0x8);
    // private Valve.VR.EVRButtonId[] axisIds
    // Size: 0x8
    // Offset: 0x28
    ::Array<Valve::VR::EVRButtonId>* axisIds;
    // Field size check
    static_assert(sizeof(::Array<Valve::VR::EVRButtonId>*) == 0x8);
    // public UnityEngine.Transform point
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* point;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform pointer
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* pointer;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: SteamVR_TestController
    SteamVR_TestController(System::Collections::Generic::List_1<int>* controllerIndices_ = {}, ::Array<Valve::VR::EVRButtonId>* buttonIds_ = {}, ::Array<Valve::VR::EVRButtonId>* axisIds_ = {}, UnityEngine::Transform* point_ = {}, UnityEngine::Transform* pointer_ = {}) noexcept : controllerIndices{controllerIndices_}, buttonIds{buttonIds_}, axisIds{axisIds_}, point{point_}, pointer{pointer_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private System.Collections.Generic.List`1<System.Int32> controllerIndices
    System::Collections::Generic::List_1<int>* _get_controllerIndices();
    // Set instance field: private System.Collections.Generic.List`1<System.Int32> controllerIndices
    void _set_controllerIndices(System::Collections::Generic::List_1<int>* value);
    // Get instance field: private Valve.VR.EVRButtonId[] buttonIds
    ::Array<Valve::VR::EVRButtonId>* _get_buttonIds();
    // Set instance field: private Valve.VR.EVRButtonId[] buttonIds
    void _set_buttonIds(::Array<Valve::VR::EVRButtonId>* value);
    // Get instance field: private Valve.VR.EVRButtonId[] axisIds
    ::Array<Valve::VR::EVRButtonId>* _get_axisIds();
    // Set instance field: private Valve.VR.EVRButtonId[] axisIds
    void _set_axisIds(::Array<Valve::VR::EVRButtonId>* value);
    // Get instance field: public UnityEngine.Transform point
    UnityEngine::Transform* _get_point();
    // Set instance field: public UnityEngine.Transform point
    void _set_point(UnityEngine::Transform* value);
    // Get instance field: public UnityEngine.Transform pointer
    UnityEngine::Transform* _get_pointer();
    // Set instance field: public UnityEngine.Transform pointer
    void _set_pointer(UnityEngine::Transform* value);
    // private System.Void OnDeviceConnected(System.Int32 index, System.Boolean connected)
    // Offset: 0x1431618
    void OnDeviceConnected(int index, bool connected);
    // private System.Void OnEnable()
    // Offset: 0x1431C1C
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x1431CE0
    void OnDisable();
    // private System.Void PrintControllerStatus(System.Int32 index)
    // Offset: 0x14317CC
    void PrintControllerStatus(int index);
    // private System.Void Update()
    // Offset: 0x1431DA4
    void Update();
    // public System.Void .ctor()
    // Offset: 0x14326F4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_TestController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_TestController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_TestController*, creationType>()));
    }
  }; // SteamVR_TestController
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_TestController), 56 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_SteamVR_TestControllerSizeCheck;
  static_assert(sizeof(SteamVR_TestController) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_TestController*, "", "SteamVR_TestController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TestController::OnDeviceConnected
// Il2CppName: OnDeviceConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_TestController::*)(int, bool)>(&GlobalNamespace::SteamVR_TestController::OnDeviceConnected)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* connected = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TestController*), "OnDeviceConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, connected});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TestController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_TestController::*)()>(&GlobalNamespace::SteamVR_TestController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TestController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TestController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_TestController::*)()>(&GlobalNamespace::SteamVR_TestController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TestController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TestController::PrintControllerStatus
// Il2CppName: PrintControllerStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_TestController::*)(int)>(&GlobalNamespace::SteamVR_TestController::PrintControllerStatus)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TestController*), "PrintControllerStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TestController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_TestController::*)()>(&GlobalNamespace::SteamVR_TestController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TestController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TestController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
