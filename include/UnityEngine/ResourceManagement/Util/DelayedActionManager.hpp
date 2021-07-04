// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: UnityEngine.ResourceManagement.Util.ComponentSingleton`1
#include "UnityEngine/ResourceManagement/Util/ComponentSingleton_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
  // Forward declaring type: LinkedListNode`1<T>
  template<typename T>
  class LinkedListNode_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::Util
namespace UnityEngine::ResourceManagement::Util {
  // Skipping declaration: DelegateInfo because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ResourceManagement.Util.DelayedActionManager
  class DelayedActionManager : public UnityEngine::ResourceManagement::Util::ComponentSingleton_1<UnityEngine::ResourceManagement::Util::DelayedActionManager*> {
    public:
    // Nested type: UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo
    struct DelegateInfo;
    // Size: 0x1C
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.ResourceManagement.Util.DelayedActionManager/DelegateInfo
    struct DelegateInfo/*, public System::ValueType*/ {
      public:
      // private System.Int32 m_Id
      // Size: 0x4
      // Offset: 0x0
      int m_Id;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Padding between fields: m_Id and: m_Delegate
      char __padding0[0x4] = {};
      // private System.Delegate m_Delegate
      // Size: 0x8
      // Offset: 0x8
      System::Delegate* m_Delegate;
      // Field size check
      static_assert(sizeof(System::Delegate*) == 0x8);
      // private System.Object[] m_Target
      // Size: 0x8
      // Offset: 0x10
      ::Array<::Il2CppObject*>* m_Target;
      // Field size check
      static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
      // [CompilerGeneratedAttribute] Offset: 0xDFCE18
      // private System.Single <InvocationTime>k__BackingField
      // Size: 0x4
      // Offset: 0x18
      float InvocationTime;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // Creating value type constructor for type: DelegateInfo
      constexpr DelegateInfo(int m_Id_ = {}, System::Delegate* m_Delegate_ = {}, ::Array<::Il2CppObject*>* m_Target_ = {}, float InvocationTime_ = {}) noexcept : m_Id{m_Id_}, m_Delegate{m_Delegate_}, m_Target{m_Target_}, InvocationTime{InvocationTime_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get static field: static private System.Int32 s_Id
      static int _get_s_Id();
      // Set static field: static private System.Int32 s_Id
      static void _set_s_Id(int value);
      // public System.Void .ctor(System.Delegate d, System.Single invocationTime, params System.Object[] p)
      // Offset: 0xF03028
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      DelegateInfo(System::Delegate* d, float invocationTime, ::Array<::Il2CppObject*>* p) {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo::.ctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(d), ::il2cpp_utils::ExtractType(invocationTime), ::il2cpp_utils::ExtractType(p)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, d, invocationTime, p);
      }
      // Creating initializer_list -> params proxy for: System.Void .ctor(System.Delegate d, System.Single invocationTime, params System.Object[] p)
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      DelegateInfo(System::Delegate* d, float invocationTime, std::initializer_list<::Il2CppObject*> p) {
        DelegateInfo(d, invocationTime, ::Array<::Il2CppObject*>::New(p));
      }
      // Creating TArgs -> initializer_list proxy for: System.Void .ctor(System.Delegate d, System.Single invocationTime, params System.Object[] p)
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary, class ...TParams>
      DelegateInfo(System::Delegate* d, float invocationTime, TParams&&... p) {
        DelegateInfo(d, invocationTime, {p...});
      }
      // public System.Single get_InvocationTime()
      // Offset: 0xF030B0
      float get_InvocationTime();
      // private System.Void set_InvocationTime(System.Single value)
      // Offset: 0xF030B8
      void set_InvocationTime(float value);
      // public System.Void Invoke()
      // Offset: 0xF030C8
      void Invoke();
      // public override System.String ToString()
      // Offset: 0xF030C0
      // Implemented from: System.ValueType
      // Base method: System.String ValueType::ToString()
      ::Il2CppString* ToString();
    }; // UnityEngine.ResourceManagement.Util.DelayedActionManager/DelegateInfo
    #pragma pack(pop)
    static check_size<sizeof(DelayedActionManager::DelegateInfo), 24 + sizeof(float)> __UnityEngine_ResourceManagement_Util_DelayedActionManager_DelegateInfoSizeCheck;
    static_assert(sizeof(DelayedActionManager::DelegateInfo) == 0x1C);
    // private System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.DelayedActionManager/DelegateInfo>[] m_Actions
    // Size: 0x8
    // Offset: 0x18
    ::Array<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>*>* m_Actions;
    // Field size check
    static_assert(sizeof(::Array<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>*>*) == 0x8);
    // private System.Collections.Generic.LinkedList`1<UnityEngine.ResourceManagement.Util.DelayedActionManager/DelegateInfo> m_DelayedActions
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::LinkedList_1<UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>* m_DelayedActions;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::LinkedList_1<UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>*) == 0x8);
    // private System.Collections.Generic.Stack`1<System.Collections.Generic.LinkedListNode`1<UnityEngine.ResourceManagement.Util.DelayedActionManager/DelegateInfo>> m_NodeCache
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Stack_1<System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>*>* m_NodeCache;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Stack_1<System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>*>*) == 0x8);
    // private System.Int32 m_CollectionIndex
    // Size: 0x4
    // Offset: 0x30
    int m_CollectionIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_DestroyOnCompletion
    // Size: 0x1
    // Offset: 0x34
    bool m_DestroyOnCompletion;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: DelayedActionManager
    DelayedActionManager(::Array<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>*>* m_Actions_ = {}, System::Collections::Generic::LinkedList_1<UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>* m_DelayedActions_ = {}, System::Collections::Generic::Stack_1<System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>*>* m_NodeCache_ = {}, int m_CollectionIndex_ = {}, bool m_DestroyOnCompletion_ = {}) noexcept : m_Actions{m_Actions_}, m_DelayedActions{m_DelayedActions_}, m_NodeCache{m_NodeCache_}, m_CollectionIndex{m_CollectionIndex_}, m_DestroyOnCompletion{m_DestroyOnCompletion_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Collections.Generic.LinkedListNode`1<UnityEngine.ResourceManagement.Util.DelayedActionManager/DelegateInfo> GetNode(ref UnityEngine.ResourceManagement.Util.DelayedActionManager/DelegateInfo del)
    // Offset: 0x19CDDF4
    System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>* GetNode(UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo& del);
    // static public System.Void Clear()
    // Offset: 0x19CDECC
    static void Clear();
    // private System.Void DestroyWhenComplete()
    // Offset: 0x19CDF3C
    void DestroyWhenComplete();
    // static public System.Void AddAction(System.Delegate action, System.Single delay, params System.Object[] parameters)
    // Offset: 0x19CDF48
    static void AddAction(System::Delegate* action, float delay, ::Array<::Il2CppObject*>* parameters);
    // Creating initializer_list -> params proxy for: System.Void AddAction(System.Delegate action, System.Single delay, params System.Object[] parameters)
    static void AddAction(System::Delegate* action, float delay, std::initializer_list<::Il2CppObject*> parameters);
    // Creating TArgs -> initializer_list proxy for: System.Void AddAction(System.Delegate action, System.Single delay, params System.Object[] parameters)
    template<class ...TParams>
    static void AddAction(System::Delegate* action, float delay, TParams&&... parameters) {
      AddAction(action, delay, {parameters...});
    }
    // private System.Void AddActionInternal(System.Delegate action, System.Single delay, params System.Object[] parameters)
    // Offset: 0x19CDFC4
    void AddActionInternal(System::Delegate* action, float delay, ::Array<::Il2CppObject*>* parameters);
    // Creating initializer_list -> params proxy for: System.Void AddActionInternal(System.Delegate action, System.Single delay, params System.Object[] parameters)
    void AddActionInternal(System::Delegate* action, float delay, std::initializer_list<::Il2CppObject*> parameters);
    // Creating TArgs -> initializer_list proxy for: System.Void AddActionInternal(System.Delegate action, System.Single delay, params System.Object[] parameters)
    template<class ...TParams>
    void AddActionInternal(System::Delegate* action, float delay, TParams&&... parameters) {
      AddActionInternal(action, delay, {parameters...});
    }
    // static public System.Boolean get_IsActive()
    // Offset: 0x19CE248
    static bool get_IsActive();
    // static public System.Boolean Wait(System.Single timeout, System.Single timeAdvanceAmount)
    // Offset: 0x19CE348
    static bool Wait(float timeout, float timeAdvanceAmount);
    // private System.Void LateUpdate()
    // Offset: 0x19CE6F0
    void LateUpdate();
    // private System.Void InternalLateUpdate(System.Single t)
    // Offset: 0x19CE47C
    void InternalLateUpdate(float t);
    // private System.Void OnApplicationQuit()
    // Offset: 0x19CE8CC
    void OnApplicationQuit();
    // public System.Void .ctor()
    // Offset: 0x19CE978
    // Implemented from: UnityEngine.ResourceManagement.Util.ComponentSingleton`1
    // Base method: System.Void ComponentSingleton_1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DelayedActionManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::Util::DelayedActionManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DelayedActionManager*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.Util.DelayedActionManager
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::DelayedActionManager*, "UnityEngine.ResourceManagement.Util", "DelayedActionManager");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo, "UnityEngine.ResourceManagement.Util", "DelayedActionManager/DelegateInfo");
// Writing includes for template specializations
#include "System/Delegate.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::GetNode
// Il2CppName: GetNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::LinkedListNode_1<UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo>* (UnityEngine::ResourceManagement::Util::DelayedActionManager::*)(UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo&)>(&UnityEngine::ResourceManagement::Util::DelayedActionManager::GetNode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DelayedActionManager*), "GetNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ResourceManagement::Util::DelayedActionManager::DelegateInfo&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ResourceManagement::Util::DelayedActionManager::Clear)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DelayedActionManager*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::DestroyWhenComplete
// Il2CppName: DestroyWhenComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::DelayedActionManager::*)()>(&UnityEngine::ResourceManagement::Util::DelayedActionManager::DestroyWhenComplete)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DelayedActionManager*), "DestroyWhenComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::AddAction
// Il2CppName: AddAction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Delegate*, float, ::Array<::Il2CppObject*>*)>(&UnityEngine::ResourceManagement::Util::DelayedActionManager::AddAction)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DelayedActionManager*), "AddAction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Delegate*>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppObject*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::AddActionInternal
// Il2CppName: AddActionInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::DelayedActionManager::*)(System::Delegate*, float, ::Array<::Il2CppObject*>*)>(&UnityEngine::ResourceManagement::Util::DelayedActionManager::AddActionInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DelayedActionManager*), "AddActionInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Delegate*>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppObject*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::get_IsActive
// Il2CppName: get_IsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::ResourceManagement::Util::DelayedActionManager::get_IsActive)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DelayedActionManager*), "get_IsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::Wait
// Il2CppName: Wait
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float, float)>(&UnityEngine::ResourceManagement::Util::DelayedActionManager::Wait)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DelayedActionManager*), "Wait", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::DelayedActionManager::*)()>(&UnityEngine::ResourceManagement::Util::DelayedActionManager::LateUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DelayedActionManager*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::InternalLateUpdate
// Il2CppName: InternalLateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::DelayedActionManager::*)(float)>(&UnityEngine::ResourceManagement::Util::DelayedActionManager::InternalLateUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DelayedActionManager*), "InternalLateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::OnApplicationQuit
// Il2CppName: OnApplicationQuit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::DelayedActionManager::*)()>(&UnityEngine::ResourceManagement::Util::DelayedActionManager::OnApplicationQuit)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DelayedActionManager*), "OnApplicationQuit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DelayedActionManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
