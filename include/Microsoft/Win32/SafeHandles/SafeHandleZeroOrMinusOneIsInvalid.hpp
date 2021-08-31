// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.InteropServices.SafeHandle
#include "System/Runtime/InteropServices/SafeHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Microsoft.Win32.SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Size: 0x1E
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
  // [TokenAttribute] Offset: FFFFFFFF
  class SafeHandleZeroOrMinusOneIsInvalid : public System::Runtime::InteropServices::SafeHandle {
    public:
    // Creating value type constructor for type: SafeHandleZeroOrMinusOneIsInvalid
    SafeHandleZeroOrMinusOneIsInvalid() noexcept {}
    // protected System.Void .ctor(System.Boolean ownsHandle)
    // Offset: 0x1A63D68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SafeHandleZeroOrMinusOneIsInvalid* New_ctor(bool ownsHandle) {
      static auto ___internal__logger = ::Logger::get().WithContext("Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SafeHandleZeroOrMinusOneIsInvalid*, creationType>(ownsHandle)));
    }
    // public override System.Boolean get_IsInvalid()
    // Offset: 0x1A63EE8
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Boolean SafeHandle::get_IsInvalid()
    bool get_IsInvalid();
  }; // Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid*, "Microsoft.Win32.SafeHandles", "SafeHandleZeroOrMinusOneIsInvalid");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::get_IsInvalid
// Il2CppName: get_IsInvalid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::*)()>(&Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::get_IsInvalid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid*), "get_IsInvalid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
