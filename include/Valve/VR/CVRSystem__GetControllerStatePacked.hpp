// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.CVRSystem
#include "Valve/VR/CVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: VRControllerState_t_Packed
  struct VRControllerState_t_Packed;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRSystem/Valve.VR._GetControllerStatePacked
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF4260
  class CVRSystem::_GetControllerStatePacked : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetControllerStatePacked
    _GetControllerStatePacked() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x170F154
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRSystem::_GetControllerStatePacked* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::CVRSystem::_GetControllerStatePacked::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRSystem::_GetControllerStatePacked*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.UInt32 unControllerDeviceIndex, ref Valve.VR.VRControllerState_t_Packed pControllerState, System.UInt32 unControllerStateSize)
    // Offset: 0x170E7E0
    bool Invoke(uint unControllerDeviceIndex, ByRef<Valve::VR::VRControllerState_t_Packed> pControllerState, uint unControllerStateSize);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unControllerDeviceIndex, ref Valve.VR.VRControllerState_t_Packed pControllerState, System.UInt32 unControllerStateSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x170F164
    System::IAsyncResult* BeginInvoke(uint unControllerDeviceIndex, ByRef<Valve::VR::VRControllerState_t_Packed> pControllerState, uint unControllerStateSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.VRControllerState_t_Packed pControllerState, System.IAsyncResult result)
    // Offset: 0x170F230
    bool EndInvoke(ByRef<Valve::VR::VRControllerState_t_Packed> pControllerState, System::IAsyncResult* result);
  }; // Valve.VR.CVRSystem/Valve.VR._GetControllerStatePacked
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRSystem::_GetControllerStatePacked*, "Valve.VR", "CVRSystem/_GetControllerStatePacked");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::CVRSystem::_GetControllerStatePacked::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::CVRSystem::_GetControllerStatePacked::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRSystem::_GetControllerStatePacked::*)(uint, ByRef<Valve::VR::VRControllerState_t_Packed>, uint)>(&Valve::VR::CVRSystem::_GetControllerStatePacked::Invoke)> {
  static const MethodInfo* get() {
    static auto* unControllerDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRControllerState_t_Packed")->this_arg;
    static auto* unControllerStateSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSystem::_GetControllerStatePacked*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unControllerDeviceIndex, pControllerState, unControllerStateSize});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRSystem::_GetControllerStatePacked::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::CVRSystem::_GetControllerStatePacked::*)(uint, ByRef<Valve::VR::VRControllerState_t_Packed>, uint, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::CVRSystem::_GetControllerStatePacked::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* unControllerDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRControllerState_t_Packed")->this_arg;
    static auto* unControllerStateSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSystem::_GetControllerStatePacked*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unControllerDeviceIndex, pControllerState, unControllerStateSize, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRSystem::_GetControllerStatePacked::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRSystem::_GetControllerStatePacked::*)(ByRef<Valve::VR::VRControllerState_t_Packed>, System::IAsyncResult*)>(&Valve::VR::CVRSystem::_GetControllerStatePacked::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRControllerState_t_Packed")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSystem::_GetControllerStatePacked*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pControllerState, result});
  }
};
