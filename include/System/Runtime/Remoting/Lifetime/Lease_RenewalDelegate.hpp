// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Lifetime.Lease
#include "System/Runtime/Remoting/Lifetime/Lease.hpp"
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
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Runtime::Remoting::Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Forward declaring type: ILease
  class ILease;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Lifetime.Lease/System.Runtime.Remoting.Lifetime.RenewalDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class Lease::RenewalDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: RenewalDelegate
    RenewalDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A43E78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lease::RenewalDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lease::RenewalDelegate*, creationType>(object, method)));
    }
    // public System.TimeSpan Invoke(System.Runtime.Remoting.Lifetime.ILease lease)
    // Offset: 0x1A440B4
    System::TimeSpan Invoke(System::Runtime::Remoting::Lifetime::ILease* lease);
    // public System.IAsyncResult BeginInvoke(System.Runtime.Remoting.Lifetime.ILease lease, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A43E88
    System::IAsyncResult* BeginInvoke(System::Runtime::Remoting::Lifetime::ILease* lease, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.TimeSpan EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A44088
    System::TimeSpan EndInvoke(System::IAsyncResult* result);
  }; // System.Runtime.Remoting.Lifetime.Lease/System.Runtime.Remoting.Lifetime.RenewalDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate*, "System.Runtime.Remoting.Lifetime", "Lease/RenewalDelegate");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate::*)(System::Runtime::Remoting::Lifetime::ILease*)>(&System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* lease = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Lifetime", "ILease")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lease});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate::*)(System::Runtime::Remoting::Lifetime::ILease*, System::AsyncCallback*, ::Il2CppObject*)>(&System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* lease = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Lifetime", "ILease")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lease, callback, object});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate::*)(System::IAsyncResult*)>(&System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
