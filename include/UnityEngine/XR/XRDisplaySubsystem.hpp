// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.IntegratedSubsystem`1
#include "UnityEngine/IntegratedSubsystem_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRDisplaySubsystemDescriptor
  class XRDisplaySubsystemDescriptor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.XRDisplaySubsystem
  // [NativeHeaderAttribute] Offset: DB699C
  // [NativeConditionalAttribute] Offset: DB699C
  // [NativeTypeAttribute] Offset: DB699C
  // [UsedByNativeCodeAttribute] Offset: DB699C
  class XRDisplaySubsystem : public UnityEngine::IntegratedSubsystem_1<UnityEngine::XR::XRDisplaySubsystemDescriptor*> {
    public:
    // Nested type: UnityEngine::XR::XRDisplaySubsystem::XRRenderPass
    struct XRRenderPass;
    // Nested type: UnityEngine::XR::XRDisplaySubsystem::XRMirrorViewBlitDesc
    struct XRMirrorViewBlitDesc;
    // Creating value type constructor for type: XRDisplaySubsystem
    XRDisplaySubsystem() noexcept {}
    // [CompilerGeneratedAttribute] Offset: 0xDB7068
    // [DebuggerBrowsableAttribute] Offset: 0xDB7068
    // Get static field: static private System.Action`1<System.Boolean> displayFocusChanged
    static System::Action_1<bool>* _get_displayFocusChanged();
    // Set static field: static private System.Action`1<System.Boolean> displayFocusChanged
    static void _set_displayFocusChanged(System::Action_1<bool>* value);
    // static private System.Void InvokeDisplayFocusChanged(System.Boolean focus)
    // Offset: 0x23DD9AC
    static void InvokeDisplayFocusChanged(bool focus);
    // public System.Void .ctor()
    // Offset: 0x23DDA20
    // Implemented from: UnityEngine.IntegratedSubsystem`1
    // Base method: System.Void IntegratedSubsystem_1::.ctor()
    // Base method: System.Void IntegratedSubsystem::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRDisplaySubsystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::XR::XRDisplaySubsystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRDisplaySubsystem*, creationType>()));
    }
  }; // UnityEngine.XR.XRDisplaySubsystem
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRDisplaySubsystem*, "UnityEngine.XR", "XRDisplaySubsystem");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::XR::XRDisplaySubsystem::InvokeDisplayFocusChanged
// Il2CppName: InvokeDisplayFocusChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::XR::XRDisplaySubsystem::InvokeDisplayFocusChanged)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRDisplaySubsystem*), "InvokeDisplayFocusChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRDisplaySubsystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
