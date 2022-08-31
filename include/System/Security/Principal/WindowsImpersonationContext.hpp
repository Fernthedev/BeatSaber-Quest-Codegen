// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Forward declaring type: WindowsImpersonationContext
  class WindowsImpersonationContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Principal::WindowsImpersonationContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::WindowsImpersonationContext*, "System.Security.Principal", "WindowsImpersonationContext");
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Principal.WindowsImpersonationContext
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 10433E0
  class WindowsImpersonationContext : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.IntPtr _token
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr token;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.Boolean undo
    // Size: 0x1
    // Offset: 0x18
    bool undo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.IntPtr _token
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn__token();
    // Get instance field reference: private System.Boolean undo
    [[deprecated("Use field access instead!")]] bool& dyn_undo();
    // System.Void .ctor(System.IntPtr token)
    // Offset: 0x210C3E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WindowsImpersonationContext* New_ctor(::System::IntPtr token) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Principal::WindowsImpersonationContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WindowsImpersonationContext*, creationType>(token)));
    }
    // public System.Void Dispose()
    // Offset: 0x210C91C
    void Dispose();
    // public System.Void Undo()
    // Offset: 0x210C92C
    void Undo();
    // static private System.Boolean CloseToken(System.IntPtr token)
    // Offset: 0x210C9F4
    static bool CloseToken(::System::IntPtr token);
    // static private System.IntPtr DuplicateToken(System.IntPtr token)
    // Offset: 0x210C914
    static ::System::IntPtr DuplicateToken(::System::IntPtr token);
    // static private System.Boolean SetCurrentToken(System.IntPtr token)
    // Offset: 0x210C918
    static bool SetCurrentToken(::System::IntPtr token);
    // static private System.Boolean RevertToSelf()
    // Offset: 0x210C9F0
    static bool RevertToSelf();
  }; // System.Security.Principal.WindowsImpersonationContext
  #pragma pack(pop)
  static check_size<sizeof(WindowsImpersonationContext), 24 + sizeof(bool)> __System_Security_Principal_WindowsImpersonationContextSizeCheck;
  static_assert(sizeof(WindowsImpersonationContext) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Principal::WindowsImpersonationContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Principal::WindowsImpersonationContext::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Principal::WindowsImpersonationContext::*)()>(&System::Security::Principal::WindowsImpersonationContext::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsImpersonationContext*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsImpersonationContext::Undo
// Il2CppName: Undo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Principal::WindowsImpersonationContext::*)()>(&System::Security::Principal::WindowsImpersonationContext::Undo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsImpersonationContext*), "Undo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsImpersonationContext::CloseToken
// Il2CppName: CloseToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&System::Security::Principal::WindowsImpersonationContext::CloseToken)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsImpersonationContext*), "CloseToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsImpersonationContext::DuplicateToken
// Il2CppName: DuplicateToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&System::Security::Principal::WindowsImpersonationContext::DuplicateToken)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsImpersonationContext*), "DuplicateToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsImpersonationContext::SetCurrentToken
// Il2CppName: SetCurrentToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&System::Security::Principal::WindowsImpersonationContext::SetCurrentToken)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsImpersonationContext*), "SetCurrentToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsImpersonationContext::RevertToSelf
// Il2CppName: RevertToSelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Security::Principal::WindowsImpersonationContext::RevertToSelf)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsImpersonationContext*), "RevertToSelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
