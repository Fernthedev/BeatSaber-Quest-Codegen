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
  // Autogenerated type: Microsoft.Win32.SafeHandles.SafeRegistryHandle
  class SafeRegistryHandle : public Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
    public:
    // Creating value type constructor for type: SafeRegistryHandle
    SafeRegistryHandle() noexcept {}
    // public System.Void .ctor(System.IntPtr preexistingHandle, System.Boolean ownsHandle)
    // Offset: 0x1A54C78
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Void SafeHandle::.ctor(System.IntPtr preexistingHandle, System.Boolean ownsHandle)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SafeRegistryHandle* New_ctor(System::IntPtr preexistingHandle, bool ownsHandle) {
      static auto ___internal__logger = ::Logger::get().WithContext("Microsoft::Win32::SafeHandles::SafeRegistryHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SafeRegistryHandle*, creationType>(preexistingHandle, ownsHandle)));
    }
    // protected override System.Boolean ReleaseHandle()
    // Offset: 0x1A555C4
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Boolean SafeHandle::ReleaseHandle()
    bool ReleaseHandle();
  }; // Microsoft.Win32.SafeHandles.SafeRegistryHandle
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::SafeHandles::SafeRegistryHandle*, "Microsoft.Win32.SafeHandles", "SafeRegistryHandle");
// Writing includes for template specializations
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafeRegistryHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafeRegistryHandle::ReleaseHandle
// Il2CppName: ReleaseHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Microsoft::Win32::SafeHandles::SafeRegistryHandle::*)()>(&Microsoft::Win32::SafeHandles::SafeRegistryHandle::ReleaseHandle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::SafeHandles::SafeRegistryHandle*), "ReleaseHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
