// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Autogenerated type: Valve.VR.IVRSystem/_TriggerHapticPulse
  // [UnmanagedFunctionPointerAttribute] Offset: DD34D8
  class IVRSystem::_TriggerHapticPulse : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _TriggerHapticPulse
    _TriggerHapticPulse() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C9D878
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_TriggerHapticPulse* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_TriggerHapticPulse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_TriggerHapticPulse*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.UInt32 unControllerDeviceIndex, System.UInt32 unAxisId, System.Char usDurationMicroSec)
    // Offset: 0x1C9D888
    void Invoke(uint unControllerDeviceIndex, uint unAxisId, ::Il2CppChar usDurationMicroSec);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unControllerDeviceIndex, System.UInt32 unAxisId, System.Char usDurationMicroSec, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C9DB20
    System::IAsyncResult* BeginInvoke(uint unControllerDeviceIndex, uint unAxisId, ::Il2CppChar usDurationMicroSec, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C9DBE4
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_TriggerHapticPulse
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_TriggerHapticPulse*, "Valve.VR", "IVRSystem/_TriggerHapticPulse");
// Writing includes for template specializations
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_TriggerHapticPulse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_TriggerHapticPulse::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRSystem::_TriggerHapticPulse::*)(uint, uint, ::Il2CppChar)>(&Valve::VR::IVRSystem::_TriggerHapticPulse::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_TriggerHapticPulse*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppChar>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_TriggerHapticPulse::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRSystem::_TriggerHapticPulse::*)(uint, uint, ::Il2CppChar, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_TriggerHapticPulse::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_TriggerHapticPulse*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppChar>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_TriggerHapticPulse::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRSystem::_TriggerHapticPulse::*)(System::IAsyncResult*)>(&Valve::VR::IVRSystem::_TriggerHapticPulse::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_TriggerHapticPulse*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
