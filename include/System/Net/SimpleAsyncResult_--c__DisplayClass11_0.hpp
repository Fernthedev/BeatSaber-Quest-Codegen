// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.SimpleAsyncResult
#include "System/Net/SimpleAsyncResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: SimpleAsyncCallback
  class SimpleAsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.SimpleAsyncResult/<>c__DisplayClass11_0
  // [CompilerGeneratedAttribute] Offset: D880F4
  class SimpleAsyncResult::$$c__DisplayClass11_0 : public ::Il2CppObject {
    public:
    // public System.Func`2<System.Net.SimpleAsyncResult,System.Boolean> func
    // Size: 0x8
    // Offset: 0x10
    System::Func_2<System::Net::SimpleAsyncResult*, bool>* func;
    // Field size check
    static_assert(sizeof(System::Func_2<System::Net::SimpleAsyncResult*, bool>*) == 0x8);
    // public System.Object locker
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* locker;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Net.SimpleAsyncCallback callback
    // Size: 0x8
    // Offset: 0x20
    System::Net::SimpleAsyncCallback* callback;
    // Field size check
    static_assert(sizeof(System::Net::SimpleAsyncCallback*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass11_0
    $$c__DisplayClass11_0(System::Func_2<System::Net::SimpleAsyncResult*, bool>* func_ = {}, ::Il2CppObject* locker_ = {}, System::Net::SimpleAsyncCallback* callback_ = {}) noexcept : func{func_}, locker{locker_}, callback{callback_} {}
    // System.Boolean <RunWithLock>b__0(System.Net.SimpleAsyncResult inner)
    // Offset: 0x1499E8C
    bool $RunWithLock$b__0(System::Net::SimpleAsyncResult* inner);
    // System.Void <RunWithLock>b__1(System.Net.SimpleAsyncResult inner)
    // Offset: 0x1499F14
    void $RunWithLock$b__1(System::Net::SimpleAsyncResult* inner);
    // public System.Void .ctor()
    // Offset: 0x14999CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleAsyncResult::$$c__DisplayClass11_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::SimpleAsyncResult::$$c__DisplayClass11_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleAsyncResult::$$c__DisplayClass11_0*, creationType>()));
    }
  }; // System.Net.SimpleAsyncResult/<>c__DisplayClass11_0
  #pragma pack(pop)
  static check_size<sizeof(SimpleAsyncResult::$$c__DisplayClass11_0), 32 + sizeof(System::Net::SimpleAsyncCallback*)> __System_Net_SimpleAsyncResult_$$c__DisplayClass11_0SizeCheck;
  static_assert(sizeof(SimpleAsyncResult::$$c__DisplayClass11_0) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::SimpleAsyncResult::$$c__DisplayClass11_0*, "System.Net", "SimpleAsyncResult/<>c__DisplayClass11_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::$$c__DisplayClass11_0::$RunWithLock$b__0
// Il2CppName: <RunWithLock>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::SimpleAsyncResult::$$c__DisplayClass11_0::*)(System::Net::SimpleAsyncResult*)>(&System::Net::SimpleAsyncResult::$$c__DisplayClass11_0::$RunWithLock$b__0)> {
  const MethodInfo* get() {
    static auto* inner = &::il2cpp_utils::GetClassFromName("System.Net", "SimpleAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult::$$c__DisplayClass11_0*), "<RunWithLock>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inner});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::$$c__DisplayClass11_0::$RunWithLock$b__1
// Il2CppName: <RunWithLock>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::SimpleAsyncResult::$$c__DisplayClass11_0::*)(System::Net::SimpleAsyncResult*)>(&System::Net::SimpleAsyncResult::$$c__DisplayClass11_0::$RunWithLock$b__1)> {
  const MethodInfo* get() {
    static auto* inner = &::il2cpp_utils::GetClassFromName("System.Net", "SimpleAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult::$$c__DisplayClass11_0*), "<RunWithLock>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inner});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::$$c__DisplayClass11_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
