// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebConnectionStream
#include "System/Net/WebConnectionStream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: SimpleAsyncResult
  class SimpleAsyncResult;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebConnectionStream::$$c__DisplayClass80_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnectionStream::$$c__DisplayClass80_0*, "System.Net", "WebConnectionStream/<>c__DisplayClass80_0");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebConnectionStream/System.Net.<>c__DisplayClass80_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class WebConnectionStream::$$c__DisplayClass80_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Net.SimpleAsyncResult result
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::SimpleAsyncResult* result;
    // Field size check
    static_assert(sizeof(::System::Net::SimpleAsyncResult*) == 0x8);
    // public System.Net.WebConnectionStream <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::System::Net::WebConnectionStream* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Net::WebConnectionStream*) == 0x8);
    // public System.Int32 length
    // Size: 0x4
    // Offset: 0x20
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: length and: bytes
    char __padding2[0x4] = {};
    // public System.Byte[] bytes
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> bytes;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.AsyncCallback <>9__1
    // Size: 0x8
    // Offset: 0x30
    ::System::AsyncCallback* $$9__1;
    // Field size check
    static_assert(sizeof(::System::AsyncCallback*) == 0x8);
    public:
    // Get instance field reference: public System.Net.SimpleAsyncResult result
    [[deprecated("Use field access instead!")]] ::System::Net::SimpleAsyncResult*& dyn_result();
    // Get instance field reference: public System.Net.WebConnectionStream <>4__this
    [[deprecated("Use field access instead!")]] ::System::Net::WebConnectionStream*& dyn_$$4__this();
    // Get instance field reference: public System.Int32 length
    [[deprecated("Use field access instead!")]] int& dyn_length();
    // Get instance field reference: public System.Byte[] bytes
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_bytes();
    // Get instance field reference: public System.AsyncCallback <>9__1
    [[deprecated("Use field access instead!")]] ::System::AsyncCallback*& dyn_$$9__1();
    // public System.Void .ctor()
    // Offset: 0x1B643A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebConnectionStream::$$c__DisplayClass80_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebConnectionStream::$$c__DisplayClass80_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebConnectionStream::$$c__DisplayClass80_0*, creationType>()));
    }
    // System.Void <WriteRequestAsync>b__0(System.Net.SimpleAsyncResult inner)
    // Offset: 0x1B64BF8
    void $WriteRequestAsync$b__0(::System::Net::SimpleAsyncResult* inner);
    // System.Void <WriteRequestAsync>b__1(System.IAsyncResult r)
    // Offset: 0x1B64D70
    void $WriteRequestAsync$b__1(::System::IAsyncResult* r);
  }; // System.Net.WebConnectionStream/System.Net.<>c__DisplayClass80_0
  #pragma pack(pop)
  static check_size<sizeof(WebConnectionStream::$$c__DisplayClass80_0), 48 + sizeof(::System::AsyncCallback*)> __System_Net_WebConnectionStream_$$c__DisplayClass80_0SizeCheck;
  static_assert(sizeof(WebConnectionStream::$$c__DisplayClass80_0) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebConnectionStream::$$c__DisplayClass80_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebConnectionStream::$$c__DisplayClass80_0::$WriteRequestAsync$b__0
// Il2CppName: <WriteRequestAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionStream::$$c__DisplayClass80_0::*)(::System::Net::SimpleAsyncResult*)>(&System::Net::WebConnectionStream::$$c__DisplayClass80_0::$WriteRequestAsync$b__0)> {
  static const MethodInfo* get() {
    static auto* inner = &::il2cpp_utils::GetClassFromName("System.Net", "SimpleAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionStream::$$c__DisplayClass80_0*), "<WriteRequestAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inner});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionStream::$$c__DisplayClass80_0::$WriteRequestAsync$b__1
// Il2CppName: <WriteRequestAsync>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionStream::$$c__DisplayClass80_0::*)(::System::IAsyncResult*)>(&System::Net::WebConnectionStream::$$c__DisplayClass80_0::$WriteRequestAsync$b__1)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionStream::$$c__DisplayClass80_0*), "<WriteRequestAsync>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
