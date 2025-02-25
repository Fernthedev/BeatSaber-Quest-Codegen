// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Net::Http
namespace System::Net::Http {
  // Forward declaring type: HttpResponseMessage
  class HttpResponseMessage;
  // Forward declaring type: HttpRequestMessage
  class HttpRequestMessage;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.HttpMessageHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpMessageHandler : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: HttpMessageHandler
    HttpMessageHandler() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void Dispose()
    // Offset: 0x15B9730
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x15B6B44
    void Dispose(bool disposing);
    // protected internal System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> SendAsync(System.Net.Http.HttpRequestMessage request, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage*>* SendAsync(System::Net::Http::HttpRequestMessage* request, System::Threading::CancellationToken cancellationToken);
    // protected System.Void .ctor()
    // Offset: 0x15B6A28
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpMessageHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::HttpMessageHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpMessageHandler*, creationType>()));
    }
  }; // System.Net.Http.HttpMessageHandler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpMessageHandler*, "System.Net.Http", "HttpMessageHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::HttpMessageHandler::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpMessageHandler::*)()>(&System::Net::Http::HttpMessageHandler::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpMessageHandler*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpMessageHandler::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpMessageHandler::*)(bool)>(&System::Net::Http::HttpMessageHandler::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpMessageHandler*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpMessageHandler::SendAsync
// Il2CppName: SendAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage*>* (System::Net::Http::HttpMessageHandler::*)(System::Net::Http::HttpRequestMessage*, System::Threading::CancellationToken)>(&System::Net::Http::HttpMessageHandler::SendAsync)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net.Http", "HttpRequestMessage")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpMessageHandler*), "SendAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpMessageHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
