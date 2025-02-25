// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTimeParse
#include "System/DateTimeParse.hpp"
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
  // Forward declaring type: __DTString
  struct __DTString;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.DateTimeParse/System.MatchNumberDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class DateTimeParse::MatchNumberDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: MatchNumberDelegate
    MatchNumberDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B5BC0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DateTimeParse::MatchNumberDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::DateTimeParse::MatchNumberDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DateTimeParse::MatchNumberDelegate*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(ref System.__DTString str, System.Int32 digitLen, out System.Int32 result)
    // Offset: 0x1B5B1CC
    bool Invoke(ByRef<System::__DTString> str, int digitLen, ByRef<int> result);
    // public System.IAsyncResult BeginInvoke(ref System.__DTString str, System.Int32 digitLen, out System.Int32 result, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B5BC1C
    System::IAsyncResult* BeginInvoke(ByRef<System::__DTString> str, int digitLen, ByRef<int> result, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref System.__DTString str, out System.Int32 result, System.IAsyncResult __result)
    // Offset: 0x1B5BCE8
    bool EndInvoke(ByRef<System::__DTString> str, ByRef<int> result, System::IAsyncResult* __result);
  }; // System.DateTimeParse/System.MatchNumberDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeParse::MatchNumberDelegate*, "System", "DateTimeParse/MatchNumberDelegate");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::DateTimeParse::MatchNumberDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::DateTimeParse::MatchNumberDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::DateTimeParse::MatchNumberDelegate::*)(ByRef<System::__DTString>, int, ByRef<int>)>(&System::DateTimeParse::MatchNumberDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "__DTString")->this_arg;
    static auto* digitLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeParse::MatchNumberDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, digitLen, result});
  }
};
// Writing MetadataGetter for method: System::DateTimeParse::MatchNumberDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::DateTimeParse::MatchNumberDelegate::*)(ByRef<System::__DTString>, int, ByRef<int>, System::AsyncCallback*, ::Il2CppObject*)>(&System::DateTimeParse::MatchNumberDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "__DTString")->this_arg;
    static auto* digitLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeParse::MatchNumberDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, digitLen, result, callback, object});
  }
};
// Writing MetadataGetter for method: System::DateTimeParse::MatchNumberDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::DateTimeParse::MatchNumberDelegate::*)(ByRef<System::__DTString>, ByRef<int>, System::IAsyncResult*)>(&System::DateTimeParse::MatchNumberDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "__DTString")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* __result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeParse::MatchNumberDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, result, __result});
  }
};
