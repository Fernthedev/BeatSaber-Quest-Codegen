// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebRequest
#include "System/Net/WebRequest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: WindowsIdentity
  class WindowsIdentity;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebRequest/System.Net.<>c__DisplayClass78_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class WebRequest::$$c__DisplayClass78_0 : public ::Il2CppObject {
    public:
    // public System.Security.Principal.WindowsIdentity currentUser
    // Size: 0x8
    // Offset: 0x10
    System::Security::Principal::WindowsIdentity* currentUser;
    // Field size check
    static_assert(sizeof(System::Security::Principal::WindowsIdentity*) == 0x8);
    // public System.Net.WebRequest <>4__this
    // Size: 0x8
    // Offset: 0x18
    System::Net::WebRequest* $$4__this;
    // Field size check
    static_assert(sizeof(System::Net::WebRequest*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass78_0
    $$c__DisplayClass78_0(System::Security::Principal::WindowsIdentity* currentUser_ = {}, System::Net::WebRequest* $$4__this_ = {}) noexcept : currentUser{currentUser_}, $$4__this{$$4__this_} {}
    // Get instance field: public System.Security.Principal.WindowsIdentity currentUser
    System::Security::Principal::WindowsIdentity* _get_currentUser();
    // Set instance field: public System.Security.Principal.WindowsIdentity currentUser
    void _set_currentUser(System::Security::Principal::WindowsIdentity* value);
    // Get instance field: public System.Net.WebRequest <>4__this
    System::Net::WebRequest* _get_$$4__this();
    // Set instance field: public System.Net.WebRequest <>4__this
    void _set_$$4__this(System::Net::WebRequest* value);
    // System.Threading.Tasks.Task`1<System.IO.Stream> <GetRequestStreamAsync>b__1()
    // Offset: 0x15DB0C8
    System::Threading::Tasks::Task_1<System::IO::Stream*>* $GetRequestStreamAsync$b__1();
    // public System.Void .ctor()
    // Offset: 0x15DA8C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebRequest::$$c__DisplayClass78_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebRequest::$$c__DisplayClass78_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebRequest::$$c__DisplayClass78_0*, creationType>()));
    }
  }; // System.Net.WebRequest/System.Net.<>c__DisplayClass78_0
  #pragma pack(pop)
  static check_size<sizeof(WebRequest::$$c__DisplayClass78_0), 24 + sizeof(System::Net::WebRequest*)> __System_Net_WebRequest_$$c__DisplayClass78_0SizeCheck;
  static_assert(sizeof(WebRequest::$$c__DisplayClass78_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebRequest::$$c__DisplayClass78_0*, "System.Net", "WebRequest/<>c__DisplayClass78_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebRequest::$$c__DisplayClass78_0::$GetRequestStreamAsync$b__1
// Il2CppName: <GetRequestStreamAsync>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::IO::Stream*>* (System::Net::WebRequest::$$c__DisplayClass78_0::*)()>(&System::Net::WebRequest::$$c__DisplayClass78_0::$GetRequestStreamAsync$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest::$$c__DisplayClass78_0*), "<GetRequestStreamAsync>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::$$c__DisplayClass78_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
