// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.WaitHandle
#include "System/Threading/WaitHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Microsoft::Win32::SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeProcessHandle
  class SafeProcessHandle;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.ProcessWaitHandle
  // [TokenAttribute] Offset: FFFFFFFF
  class ProcessWaitHandle : public System::Threading::WaitHandle {
    public:
    // Creating value type constructor for type: ProcessWaitHandle
    ProcessWaitHandle() noexcept {}
    // System.Void .ctor(Microsoft.Win32.SafeHandles.SafeProcessHandle processHandle)
    // Offset: 0x18B9DC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProcessWaitHandle* New_ctor(Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::ProcessWaitHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProcessWaitHandle*, creationType>(processHandle)));
    }
  }; // System.Diagnostics.ProcessWaitHandle
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::ProcessWaitHandle*, "System.Diagnostics", "ProcessWaitHandle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::ProcessWaitHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
