// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: VoipBitrate
  struct VoipBitrate;
  // Forward declaring type: VoipDtxState
  struct VoipDtxState;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.VoipOptions
  // [TokenAttribute] Offset: FFFFFFFF
  class VoipOptions : public ::Il2CppObject {
    public:
    // private System.IntPtr Handle
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr Handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: VoipOptions
    VoipOptions(System::IntPtr Handle_ = {}) noexcept : Handle{Handle_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return Handle;
    }
    // Get instance field: private System.IntPtr Handle
    System::IntPtr _get_Handle();
    // Set instance field: private System.IntPtr Handle
    void _set_Handle(System::IntPtr value);
    // public System.Void SetBitrateForNewConnections(Oculus.Platform.VoipBitrate value)
    // Offset: 0x23DEC4C
    void SetBitrateForNewConnections(Oculus::Platform::VoipBitrate value);
    // public System.Void SetCreateNewConnectionUseDtx(Oculus.Platform.VoipDtxState value)
    // Offset: 0x23DECC8
    void SetCreateNewConnectionUseDtx(Oculus::Platform::VoipDtxState value);
    // static public System.IntPtr op_Explicit(Oculus.Platform.VoipOptions options)
    // Offset: 0x23DDBDC
    // ABORTED: conflicts with another method.  explicit operator System::IntPtr();
    // public System.Void .ctor()
    // Offset: 0x23DEBD4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoipOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::VoipOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoipOptions*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x23DED44
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.VoipOptions
  #pragma pack(pop)
  static check_size<sizeof(VoipOptions), 16 + sizeof(System::IntPtr)> __Oculus_Platform_VoipOptionsSizeCheck;
  static_assert(sizeof(VoipOptions) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::VoipOptions*, "Oculus.Platform", "VoipOptions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::VoipOptions::SetBitrateForNewConnections
// Il2CppName: SetBitrateForNewConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::VoipOptions::*)(Oculus::Platform::VoipBitrate)>(&Oculus::Platform::VoipOptions::SetBitrateForNewConnections)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "VoipBitrate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::VoipOptions*), "SetBitrateForNewConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::VoipOptions::SetCreateNewConnectionUseDtx
// Il2CppName: SetCreateNewConnectionUseDtx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::VoipOptions::*)(Oculus::Platform::VoipDtxState)>(&Oculus::Platform::VoipOptions::SetCreateNewConnectionUseDtx)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "VoipDtxState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::VoipOptions*), "SetCreateNewConnectionUseDtx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::VoipOptions::operator System::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::VoipOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::VoipOptions::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::VoipOptions::*)()>(&Oculus::Platform::VoipOptions::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::VoipOptions*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
