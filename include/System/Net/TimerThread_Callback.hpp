// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.TimerThread
#include "System/Net/TimerThread.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::TimerThread::Callback);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TimerThread::Callback*, "System.Net", "TimerThread/Callback");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.TimerThread/System.Net.Callback
  // [TokenAttribute] Offset: FFFFFFFF
  class TimerThread::Callback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B5895C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimerThread::Callback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::TimerThread::Callback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimerThread::Callback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Net.TimerThread/System.Net.Timer timer, System.Int32 timeNoticed, System.Object context)
    // Offset: 0x1B5896C
    void Invoke(::System::Net::TimerThread::Timer* timer, int timeNoticed, ::Il2CppObject* context);
    // public System.IAsyncResult BeginInvoke(System.Net.TimerThread/System.Net.Timer timer, System.Int32 timeNoticed, System.Object context, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B58DA0
    ::System::IAsyncResult* BeginInvoke(::System::Net::TimerThread::Timer* timer, int timeNoticed, ::Il2CppObject* context, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1B58E40
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.Net.TimerThread/System.Net.Callback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::TimerThread::Callback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::TimerThread::Callback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::TimerThread::Callback::*)(::System::Net::TimerThread::Timer*, int, ::Il2CppObject*)>(&System::Net::TimerThread::Callback::Invoke)> {
  static const MethodInfo* get() {
    static auto* timer = &::il2cpp_utils::GetClassFromName("System.Net", "TimerThread/Timer")->byval_arg;
    static auto* timeNoticed = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread::Callback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timer, timeNoticed, context});
  }
};
// Writing MetadataGetter for method: System::Net::TimerThread::Callback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::TimerThread::Callback::*)(::System::Net::TimerThread::Timer*, int, ::Il2CppObject*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::TimerThread::Callback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* timer = &::il2cpp_utils::GetClassFromName("System.Net", "TimerThread/Timer")->byval_arg;
    static auto* timeNoticed = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread::Callback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timer, timeNoticed, context, callback, object});
  }
};
// Writing MetadataGetter for method: System::Net::TimerThread::Callback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::TimerThread::Callback::*)(::System::IAsyncResult*)>(&System::Net::TimerThread::Callback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread::Callback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
