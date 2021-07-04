// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Principal.WindowsImpersonationContext
  // [ComVisibleAttribute] Offset: D7D64C
  class WindowsImpersonationContext : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private System.IntPtr _token
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr token;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.Boolean undo
    // Size: 0x1
    // Offset: 0x18
    bool undo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: WindowsImpersonationContext
    WindowsImpersonationContext(System::IntPtr token_ = {}, bool undo_ = {}) noexcept : token{token_}, undo{undo_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // System.Void .ctor(System.IntPtr token)
    // Offset: 0x1AF35D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WindowsImpersonationContext* New_ctor(System::IntPtr token) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Principal::WindowsImpersonationContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WindowsImpersonationContext*, creationType>(token)));
    }
    // public System.Void Dispose()
    // Offset: 0x1AF3B40
    void Dispose();
    // public System.Void Undo()
    // Offset: 0x1AF3B50
    void Undo();
    // static private System.Boolean CloseToken(System.IntPtr token)
    // Offset: 0x1AF3C14
    static bool CloseToken(System::IntPtr token);
    // static private System.IntPtr DuplicateToken(System.IntPtr token)
    // Offset: 0x1AF3B08
    static System::IntPtr DuplicateToken(System::IntPtr token);
    // static private System.Boolean SetCurrentToken(System.IntPtr token)
    // Offset: 0x1AF3B0C
    static bool SetCurrentToken(System::IntPtr token);
    // static private System.Boolean RevertToSelf()
    // Offset: 0x1AF3C10
    static bool RevertToSelf();
  }; // System.Security.Principal.WindowsImpersonationContext
  #pragma pack(pop)
  static check_size<sizeof(WindowsImpersonationContext), 24 + sizeof(bool)> __System_Security_Principal_WindowsImpersonationContextSizeCheck;
  static_assert(sizeof(WindowsImpersonationContext) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::WindowsImpersonationContext*, "System.Security.Principal", "WindowsImpersonationContext");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Security::Principal::WindowsImpersonationContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Principal::WindowsImpersonationContext::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Principal::WindowsImpersonationContext::*)()>(&System::Security::Principal::WindowsImpersonationContext::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsImpersonationContext*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsImpersonationContext::Undo
// Il2CppName: Undo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Principal::WindowsImpersonationContext::*)()>(&System::Security::Principal::WindowsImpersonationContext::Undo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsImpersonationContext*), "Undo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsImpersonationContext::CloseToken
// Il2CppName: CloseToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::IntPtr)>(&System::Security::Principal::WindowsImpersonationContext::CloseToken)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsImpersonationContext*), "CloseToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsImpersonationContext::DuplicateToken
// Il2CppName: DuplicateToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr)>(&System::Security::Principal::WindowsImpersonationContext::DuplicateToken)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsImpersonationContext*), "DuplicateToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsImpersonationContext::SetCurrentToken
// Il2CppName: SetCurrentToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::IntPtr)>(&System::Security::Principal::WindowsImpersonationContext::SetCurrentToken)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsImpersonationContext*), "SetCurrentToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsImpersonationContext::RevertToSelf
// Il2CppName: RevertToSelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Security::Principal::WindowsImpersonationContext::RevertToSelf)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsImpersonationContext*), "RevertToSelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
