// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.SimpleAsyncResult
#include "System/Net/SimpleAsyncResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::SimpleAsyncResult::$$c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::SimpleAsyncResult::$$c__DisplayClass9_0*, "System.Net", "SimpleAsyncResult/<>c__DisplayClass9_0");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.SimpleAsyncResult/System.Net.<>c__DisplayClass9_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SimpleAsyncResult::$$c__DisplayClass9_0 : public ::Il2CppObject {
    public:
    public:
    // public System.AsyncCallback cb
    // Size: 0x8
    // Offset: 0x10
    ::System::AsyncCallback* cb;
    // Field size check
    static_assert(sizeof(::System::AsyncCallback*) == 0x8);
    // public System.Net.SimpleAsyncResult <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::System::Net::SimpleAsyncResult* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Net::SimpleAsyncResult*) == 0x8);
    public:
    // Get instance field reference: public System.AsyncCallback cb
    [[deprecated("Use field access instead!")]] ::System::AsyncCallback*& dyn_cb();
    // Get instance field reference: public System.Net.SimpleAsyncResult <>4__this
    [[deprecated("Use field access instead!")]] ::System::Net::SimpleAsyncResult*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x1B78D74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleAsyncResult::$$c__DisplayClass9_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::SimpleAsyncResult::$$c__DisplayClass9_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleAsyncResult::$$c__DisplayClass9_0*, creationType>()));
    }
    // System.Void <.ctor>b__0(System.Net.SimpleAsyncResult result)
    // Offset: 0x1B79638
    void $_ctor$b__0(::System::Net::SimpleAsyncResult* result);
  }; // System.Net.SimpleAsyncResult/System.Net.<>c__DisplayClass9_0
  #pragma pack(pop)
  static check_size<sizeof(SimpleAsyncResult::$$c__DisplayClass9_0), 24 + sizeof(::System::Net::SimpleAsyncResult*)> __System_Net_SimpleAsyncResult_$$c__DisplayClass9_0SizeCheck;
  static_assert(sizeof(SimpleAsyncResult::$$c__DisplayClass9_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::$$c__DisplayClass9_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::$$c__DisplayClass9_0::$_ctor$b__0
// Il2CppName: <.ctor>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::SimpleAsyncResult::$$c__DisplayClass9_0::*)(::System::Net::SimpleAsyncResult*)>(&System::Net::SimpleAsyncResult::$$c__DisplayClass9_0::$_ctor$b__0)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Net", "SimpleAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult::$$c__DisplayClass9_0*), "<.ctor>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
