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
  // Forward declaring type: ServiceProvider
  struct ServiceProvider;
  // Forward declaring type: TimeWindow
  struct TimeWindow;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.UserOptions
  // [TokenAttribute] Offset: FFFFFFFF
  class UserOptions : public ::Il2CppObject {
    public:
    // private System.IntPtr Handle
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr Handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: UserOptions
    UserOptions(System::IntPtr Handle_ = {}) noexcept : Handle{Handle_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return Handle;
    }
    // Get instance field reference: private System.IntPtr Handle
    System::IntPtr& dyn_Handle();
    // public System.Void SetMaxUsers(System.UInt32 value)
    // Offset: 0x23DBF78
    void SetMaxUsers(uint value);
    // public System.Void AddServiceProvider(Oculus.Platform.ServiceProvider value)
    // Offset: 0x23D80C8
    void AddServiceProvider(Oculus::Platform::ServiceProvider value);
    // public System.Void ClearServiceProviders()
    // Offset: 0x23DBFF4
    void ClearServiceProviders();
    // public System.Void SetTimeWindow(Oculus.Platform.TimeWindow value)
    // Offset: 0x23DC060
    void SetTimeWindow(Oculus::Platform::TimeWindow value);
    // static public System.IntPtr op_Explicit(Oculus.Platform.UserOptions options)
    // Offset: 0x23D8144
    // ABORTED: conflicts with another method.  explicit operator System::IntPtr();
    // public System.Void .ctor()
    // Offset: 0x23D8050
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::UserOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserOptions*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x23DC0DC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.UserOptions
  #pragma pack(pop)
  static check_size<sizeof(UserOptions), 16 + sizeof(System::IntPtr)> __Oculus_Platform_UserOptionsSizeCheck;
  static_assert(sizeof(UserOptions) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::UserOptions*, "Oculus.Platform", "UserOptions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::UserOptions::SetMaxUsers
// Il2CppName: SetMaxUsers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::UserOptions::*)(uint)>(&Oculus::Platform::UserOptions::SetMaxUsers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserOptions*), "SetMaxUsers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserOptions::AddServiceProvider
// Il2CppName: AddServiceProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::UserOptions::*)(Oculus::Platform::ServiceProvider)>(&Oculus::Platform::UserOptions::AddServiceProvider)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "ServiceProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserOptions*), "AddServiceProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserOptions::ClearServiceProviders
// Il2CppName: ClearServiceProviders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::UserOptions::*)()>(&Oculus::Platform::UserOptions::ClearServiceProviders)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserOptions*), "ClearServiceProviders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserOptions::SetTimeWindow
// Il2CppName: SetTimeWindow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::UserOptions::*)(Oculus::Platform::TimeWindow)>(&Oculus::Platform::UserOptions::SetTimeWindow)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "TimeWindow")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserOptions*), "SetTimeWindow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserOptions::operator System::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::UserOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::UserOptions::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::UserOptions::*)()>(&Oculus::Platform::UserOptions::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserOptions*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
