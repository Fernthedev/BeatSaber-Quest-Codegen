// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Valve.VR.EVRButtonId
#include "Valve/VR/EVRButtonId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: SteamVR_TestController
  class SteamVR_TestController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamVR_TestController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_TestController*, "", "SteamVR_TestController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_TestController
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_TestController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Collections.Generic.List`1<System.Int32> controllerIndices
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<int>* controllerIndices;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<int>*) == 0x8);
    // private Valve.VR.EVRButtonId[] buttonIds
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::Valve::VR::EVRButtonId> buttonIds;
    // Field size check
    static_assert(sizeof(::ArrayW<::Valve::VR::EVRButtonId>) == 0x8);
    // private Valve.VR.EVRButtonId[] axisIds
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::Valve::VR::EVRButtonId> axisIds;
    // Field size check
    static_assert(sizeof(::ArrayW<::Valve::VR::EVRButtonId>) == 0x8);
    // public UnityEngine.Transform point
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* point;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform pointer
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* pointer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Collections.Generic.List`1<System.Int32> controllerIndices
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<int>*& dyn_controllerIndices();
    // Get instance field reference: private Valve.VR.EVRButtonId[] buttonIds
    [[deprecated("Use field access instead!")]] ::ArrayW<::Valve::VR::EVRButtonId>& dyn_buttonIds();
    // Get instance field reference: private Valve.VR.EVRButtonId[] axisIds
    [[deprecated("Use field access instead!")]] ::ArrayW<::Valve::VR::EVRButtonId>& dyn_axisIds();
    // Get instance field reference: public UnityEngine.Transform point
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_point();
    // Get instance field reference: public UnityEngine.Transform pointer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_pointer();
    // public System.Void .ctor()
    // Offset: 0x18BD5B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_TestController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_TestController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_TestController*, creationType>()));
    }
    // private System.Void OnDeviceConnected(System.Int32 index, System.Boolean connected)
    // Offset: 0x18BC4D4
    void OnDeviceConnected(int index, bool connected);
    // private System.Void OnEnable()
    // Offset: 0x18BCAD8
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x18BCB9C
    void OnDisable();
    // private System.Void PrintControllerStatus(System.Int32 index)
    // Offset: 0x18BC688
    void PrintControllerStatus(int index);
    // private System.Void Update()
    // Offset: 0x18BCC60
    void Update();
  }; // SteamVR_TestController
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_TestController), 56 + sizeof(::UnityEngine::Transform*)> __GlobalNamespace_SteamVR_TestControllerSizeCheck;
  static_assert(sizeof(SteamVR_TestController) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TestController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
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
