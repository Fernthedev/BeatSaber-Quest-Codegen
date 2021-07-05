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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRController
  class VRController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MenuPlayerController
  class MenuPlayerController : public UnityEngine::MonoBehaviour {
    public:
    // private VRController _leftController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::VRController* leftController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRController*) == 0x8);
    // private VRController _rightController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::VRController* rightController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRController*) == 0x8);
    // private UnityEngine.Transform _headTransform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* headTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: MenuPlayerController
    MenuPlayerController(GlobalNamespace::VRController* leftController_ = {}, GlobalNamespace::VRController* rightController_ = {}, UnityEngine::Transform* headTransform_ = {}) noexcept : leftController{leftController_}, rightController{rightController_}, headTransform{headTransform_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public VRController get_leftController()
    // Offset: 0x2407E58
    GlobalNamespace::VRController* get_leftController();
    // public VRController get_rightController()
    // Offset: 0x2407E60
    GlobalNamespace::VRController* get_rightController();
    // public UnityEngine.Vector3 get_headPos()
    // Offset: 0x2407E68
    UnityEngine::Vector3 get_headPos();
    // public UnityEngine.Quaternion get_headRot()
    // Offset: 0x2407E84
    UnityEngine::Quaternion get_headRot();
    // public System.Void .ctor()
    // Offset: 0x2407EA0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuPlayerController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuPlayerController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuPlayerController*, creationType>()));
    }
  }; // MenuPlayerController
  #pragma pack(pop)
  static check_size<sizeof(MenuPlayerController), 40 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_MenuPlayerControllerSizeCheck;
  static_assert(sizeof(MenuPlayerController) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuPlayerController*, "", "MenuPlayerController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuPlayerController::get_leftController
// Il2CppName: get_leftController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::VRController* (GlobalNamespace::MenuPlayerController::*)()>(&GlobalNamespace::MenuPlayerController::get_leftController)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuPlayerController*), "get_leftController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuPlayerController::get_rightController
// Il2CppName: get_rightController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::VRController* (GlobalNamespace::MenuPlayerController::*)()>(&GlobalNamespace::MenuPlayerController::get_rightController)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuPlayerController*), "get_rightController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuPlayerController::get_headPos
// Il2CppName: get_headPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::MenuPlayerController::*)()>(&GlobalNamespace::MenuPlayerController::get_headPos)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuPlayerController*), "get_headPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuPlayerController::get_headRot
// Il2CppName: get_headRot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (GlobalNamespace::MenuPlayerController::*)()>(&GlobalNamespace::MenuPlayerController::get_headRot)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuPlayerController*), "get_headRot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuPlayerController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
