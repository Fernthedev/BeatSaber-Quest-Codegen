// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebConnectionStream
#include "System/Net/WebConnectionStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: SimpleAsyncResult
  class SimpleAsyncResult;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebConnectionStream/<>c__DisplayClass76_0
  // [CompilerGeneratedAttribute] Offset: D88114
  class WebConnectionStream::$$c__DisplayClass76_0 : public ::Il2CppObject {
    public:
    // public System.Net.WebConnectionStream <>4__this
    // Size: 0x8
    // Offset: 0x10
    System::Net::WebConnectionStream* $$4__this;
    // Field size check
    static_assert(sizeof(System::Net::WebConnectionStream*) == 0x8);
    // public System.Net.SimpleAsyncResult result
    // Size: 0x8
    // Offset: 0x18
    System::Net::SimpleAsyncResult* result;
    // Field size check
    static_assert(sizeof(System::Net::SimpleAsyncResult*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass76_0
    $$c__DisplayClass76_0(System::Net::WebConnectionStream* $$4__this_ = {}, System::Net::SimpleAsyncResult* result_ = {}) noexcept : $$4__this{$$4__this_}, result{result_} {}
    // System.Void <SetHeadersAsync>b__0(System.IAsyncResult r)
    // Offset: 0x15C6968
    void $SetHeadersAsync$b__0(System::IAsyncResult* r);
    // public System.Void .ctor()
    // Offset: 0x15C6178
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebConnectionStream::$$c__DisplayClass76_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebConnectionStream::$$c__DisplayClass76_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebConnectionStream::$$c__DisplayClass76_0*, creationType>()));
    }
  }; // System.Net.WebConnectionStream/<>c__DisplayClass76_0
  #pragma pack(pop)
  static check_size<sizeof(WebConnectionStream::$$c__DisplayClass76_0), 24 + sizeof(System::Net::SimpleAsyncResult*)> __System_Net_WebConnectionStream_$$c__DisplayClass76_0SizeCheck;
  static_assert(sizeof(WebConnectionStream::$$c__DisplayClass76_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebConnectionStream::$$c__DisplayClass76_0*, "System.Net", "WebConnectionStream/<>c__DisplayClass76_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebConnectionStream::$$c__DisplayClass76_0::$SetHeadersAsync$b__0
// Il2CppName: <SetHeadersAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionStream::$$c__DisplayClass76_0::*)(System::IAsyncResult*)>(&System::Net::WebConnectionStream::$$c__DisplayClass76_0::$SetHeadersAsync$b__0)> {
  const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionStream::$$c__DisplayClass76_0*), "<SetHeadersAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionStream::$$c__DisplayClass76_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
