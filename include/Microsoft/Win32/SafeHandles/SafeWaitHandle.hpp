// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
#include "Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Microsoft.Win32.SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Size: 0x1E
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.SafeHandles.SafeWaitHandle
  class SafeWaitHandle : public Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
    public:
    // Creating value type constructor for type: SafeWaitHandle
    SafeWaitHandle() noexcept {}
    // public System.Void .ctor(System.IntPtr existingHandle, System.Boolean ownsHandle)
    // Offset: 0x1A555CC
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Void SafeHandle::.ctor(System.IntPtr existingHandle, System.Boolean ownsHandle)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SafeWaitHandle* New_ctor(System::IntPtr existingHandle, bool ownsHandle) {
      static auto ___internal__logger = ::Logger::get().WithContext("Microsoft::Win32::SafeHandles::SafeWaitHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SafeWaitHandle*, creationType>(existingHandle, ownsHandle)));
    }
    // protected override System.Boolean ReleaseHandle()
    // Offset: 0x1A555F8
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Boolean SafeHandle::ReleaseHandle()
    bool ReleaseHandle();
  }; // Microsoft.Win32.SafeHandles.SafeWaitHandle
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::SafeHandles::SafeWaitHandle*, "Microsoft.Win32.SafeHandles", "SafeWaitHandle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafeWaitHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafeWaitHandle::ReleaseHandle
// Il2CppName: ReleaseHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Microsoft::Win32::SafeHandles::SafeWaitHandle::*)()>(&Microsoft::Win32::SafeHandles::SafeWaitHandle::ReleaseHandle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::SafeHandles::SafeWaitHandle*), "ReleaseHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
