// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.BaseInvokableCall
#include "UnityEngine/Events/BaseInvokableCall.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction
  class UnityAction;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Events.InvokableCall
  // [TokenAttribute] Offset: FFFFFFFF
  class InvokableCall : public UnityEngine::Events::BaseInvokableCall {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xDB9548
    // private UnityEngine.Events.UnityAction Delegate
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Events::UnityAction* Delegate;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityAction*) == 0x8);
    // Creating value type constructor for type: InvokableCall
    InvokableCall(UnityEngine::Events::UnityAction* Delegate_ = {}) noexcept : Delegate{Delegate_} {}
    // Creating conversion operator: operator UnityEngine::Events::UnityAction*
    constexpr operator UnityEngine::Events::UnityAction*() const noexcept {
      return Delegate;
    }
    // Get instance field reference: private UnityEngine.Events.UnityAction Delegate
    UnityEngine::Events::UnityAction*& dyn_Delegate();
    // private System.Void add_Delegate(UnityEngine.Events.UnityAction value)
    // Offset: 0x1C52864
    void add_Delegate(UnityEngine::Events::UnityAction* value);
    // private System.Void remove_Delegate(UnityEngine.Events.UnityAction value)
    // Offset: 0x1C52908
    void remove_Delegate(UnityEngine::Events::UnityAction* value);
    // public System.Void .ctor(UnityEngine.Events.UnityAction action)
    // Offset: 0x1C52A84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvokableCall* New_ctor(UnityEngine::Events::UnityAction* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::InvokableCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvokableCall*, creationType>(action)));
    }
    // public System.Void Invoke()
    // Offset: 0x1C52AF4
    void Invoke();
    // public System.Void .ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    // Offset: 0x1C529AC
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::.ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvokableCall* New_ctor(::Il2CppObject* target, System::Reflection::MethodInfo* theFunction) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::InvokableCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvokableCall*, creationType>(target, theFunction)));
    }
    // public override System.Void Invoke(System.Object[] args)
    // Offset: 0x1C52AB4
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::Invoke(System.Object[] args)
    void Invoke(::Array<::Il2CppObject*>* args);
    // public override System.Boolean Find(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0x1C52B34
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Boolean BaseInvokableCall::Find(System.Object targetObj, System.Reflection.MethodInfo method)
    bool Find(::Il2CppObject* targetObj, System::Reflection::MethodInfo* method);
  }; // UnityEngine.Events.InvokableCall
  #pragma pack(pop)
  static check_size<sizeof(InvokableCall), 16 + sizeof(UnityEngine::Events::UnityAction*)> __UnityEngine_Events_InvokableCallSizeCheck;
  static_assert(sizeof(InvokableCall) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::InvokableCall*, "UnityEngine.Events", "InvokableCall");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Events::InvokableCall::add_Delegate
// Il2CppName: add_Delegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::InvokableCall::*)(UnityEngine::Events::UnityAction*)>(&UnityEngine::Events::InvokableCall::add_Delegate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::InvokableCall*), "add_Delegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::InvokableCall::remove_Delegate
// Il2CppName: remove_Delegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::InvokableCall::*)(UnityEngine::Events::UnityAction*)>(&UnityEngine::Events::InvokableCall::remove_Delegate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::InvokableCall*), "remove_Delegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::InvokableCall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Events::InvokableCall::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::InvokableCall::*)()>(&UnityEngine::Events::InvokableCall::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::InvokableCall*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::InvokableCall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Events::InvokableCall::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::InvokableCall::*)(::Array<::Il2CppObject*>*)>(&UnityEngine::Events::InvokableCall::Invoke)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::InvokableCall*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::InvokableCall::Find
// Il2CppName: Find
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Events::InvokableCall::*)(::Il2CppObject*, System::Reflection::MethodInfo*)>(&UnityEngine::Events::InvokableCall::Find)> {
  static const MethodInfo* get() {
    static auto* targetObj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::InvokableCall*), "Find", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetObj, method});
  }
};
