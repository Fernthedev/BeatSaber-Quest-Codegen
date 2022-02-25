// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationBase_1.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.ICachable
#include "UnityEngine/ResourceManagement/AsyncOperations/ICachable.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Skipping declaration: GroupOperationSettings because it is already included!
  // Skipping declaration: DownloadStatus because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: GroupOperation
  class GroupOperation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*, "UnityEngine.ResourceManagement.AsyncOperations", "GroupOperation");
// Type namespace: UnityEngine.ResourceManagement.AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ResourceManagement.AsyncOperations.GroupOperation
  // [TokenAttribute] Offset: FFFFFFFF
  class GroupOperation : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>/*, public UnityEngine::ResourceManagement::AsyncOperations::ICachable*/ {
    public:
    // Nested type: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GroupOperationSettings
    struct GroupOperationSettings;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/UnityEngine.ResourceManagement.AsyncOperations.GroupOperationSettings
    // [TokenAttribute] Offset: FFFFFFFF
    // [FlagsAttribute] Offset: FFFFFFFF
    struct GroupOperationSettings/*, public System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: GroupOperationSettings
      constexpr GroupOperationSettings(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/UnityEngine.ResourceManagement.AsyncOperations.GroupOperationSettings None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/UnityEngine.ResourceManagement.AsyncOperations.GroupOperationSettings None
      static UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GroupOperationSettings _get_None();
      // Set static field: static public UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/UnityEngine.ResourceManagement.AsyncOperations.GroupOperationSettings None
      static void _set_None(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GroupOperationSettings value);
      // static field const value: static public UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/UnityEngine.ResourceManagement.AsyncOperations.GroupOperationSettings ReleaseDependenciesOnFailure
      static constexpr const int ReleaseDependenciesOnFailure = 1;
      // Get static field: static public UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/UnityEngine.ResourceManagement.AsyncOperations.GroupOperationSettings ReleaseDependenciesOnFailure
      static UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GroupOperationSettings _get_ReleaseDependenciesOnFailure();
      // Set static field: static public UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/UnityEngine.ResourceManagement.AsyncOperations.GroupOperationSettings ReleaseDependenciesOnFailure
      static void _set_ReleaseDependenciesOnFailure(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GroupOperationSettings value);
      // static field const value: static public UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/UnityEngine.ResourceManagement.AsyncOperations.GroupOperationSettings AllowFailedDependencies
      static constexpr const int AllowFailedDependencies = 2;
      // Get static field: static public UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/UnityEngine.ResourceManagement.AsyncOperations.GroupOperationSettings AllowFailedDependencies
      static UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GroupOperationSettings _get_AllowFailedDependencies();
      // Set static field: static public UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/UnityEngine.ResourceManagement.AsyncOperations.GroupOperationSettings AllowFailedDependencies
      static void _set_AllowFailedDependencies(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GroupOperationSettings value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/UnityEngine.ResourceManagement.AsyncOperations.GroupOperationSettings
    #pragma pack(pop)
    static check_size<sizeof(GroupOperation::GroupOperationSettings), 0 + sizeof(int)> __UnityEngine_ResourceManagement_AsyncOperations_GroupOperation_GroupOperationSettingsSizeCheck;
    static_assert(sizeof(GroupOperation::GroupOperationSettings) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> m_InternalOnComplete
    // Size: 0x8
    // Offset: 0x80
    System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* m_InternalOnComplete;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*) == 0x8);
    // private System.Int32 m_LoadedCount
    // Size: 0x4
    // Offset: 0x88
    int m_LoadedCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/UnityEngine.ResourceManagement.AsyncOperations.GroupOperationSettings m_Settings
    // Size: 0x4
    // Offset: 0x8C
    UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GroupOperationSettings m_Settings;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GroupOperationSettings) == 0x4);
    // private System.String debugName
    // Size: 0x8
    // Offset: 0x90
    ::StringW debugName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 <UnityEngine.ResourceManagement.AsyncOperations.ICachable.Hash>k__BackingField
    // Size: 0x4
    // Offset: 0x98
    int Hash;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.HashSet`1<System.String> m_CachedDependencyLocations
    // Size: 0x8
    // Offset: 0xA0
    System::Collections::Generic::HashSet_1<::StringW>* m_CachedDependencyLocations;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::StringW>*) == 0x8);
    public:
    // Creating interface conversion operator: operator UnityEngine::ResourceManagement::AsyncOperations::ICachable
    operator UnityEngine::ResourceManagement::AsyncOperations::ICachable() noexcept {
      return *reinterpret_cast<UnityEngine::ResourceManagement::AsyncOperations::ICachable*>(this);
    }
    // static field const value: static private System.Int32 k_MaxDisplayedLocationLength
    static constexpr const int k_MaxDisplayedLocationLength = 45;
    // Get static field: static private System.Int32 k_MaxDisplayedLocationLength
    static int _get_k_MaxDisplayedLocationLength();
    // Set static field: static private System.Int32 k_MaxDisplayedLocationLength
    static void _set_k_MaxDisplayedLocationLength(int value);
    // Get instance field reference: private System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> m_InternalOnComplete
    System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& dyn_m_InternalOnComplete();
    // Get instance field reference: private System.Int32 m_LoadedCount
    int& dyn_m_LoadedCount();
    // Get instance field reference: private UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/UnityEngine.ResourceManagement.AsyncOperations.GroupOperationSettings m_Settings
    UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GroupOperationSettings& dyn_m_Settings();
    // Get instance field reference: private System.String debugName
    ::StringW& dyn_debugName();
    // Get instance field reference: private System.Int32 <UnityEngine.ResourceManagement.AsyncOperations.ICachable.Hash>k__BackingField
    int& dyn_$UnityEngine_ResourceManagement_AsyncOperations_ICachable_Hash$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.String> m_CachedDependencyLocations
    System::Collections::Generic::HashSet_1<::StringW>*& dyn_m_CachedDependencyLocations();
    // private System.Int32 UnityEngine.ResourceManagement.AsyncOperations.ICachable.get_Hash()
    // Offset: 0x1E1EC34
    int UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Hash();
    // private System.Void UnityEngine.ResourceManagement.AsyncOperations.ICachable.set_Hash(System.Int32 value)
    // Offset: 0x1E1EC3C
    void UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Hash(int value);
    // System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> GetDependentOps()
    // Offset: 0x1E1EC44
    System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* GetDependentOps();
    // private System.Boolean DependenciesAreUnchanged(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> deps)
    // Offset: 0x1E1F1DC
    bool DependenciesAreUnchanged(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps);
    // private System.Void CompleteIfDependenciesComplete()
    // Offset: 0x1E1F7B0
    void CompleteIfDependenciesComplete();
    // public System.Void Init(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> operations, System.Boolean releaseDependenciesOnFailure, System.Boolean allowFailedDependencies)
    // Offset: 0x1E1FDE4
    void Init(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* operations, bool releaseDependenciesOnFailure, bool allowFailedDependencies);
    // public System.Void Init(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> operations, UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/UnityEngine.ResourceManagement.AsyncOperations.GroupOperationSettings settings)
    // Offset: 0x1E1FE8C
    void Init(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* operations, UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GroupOperationSettings settings);
    // private System.Void OnOperationCompleted(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle op)
    // Offset: 0x1E1FF0C
    void OnOperationCompleted(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);
    // protected override System.String get_DebugName()
    // Offset: 0x1E1F33C
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.String AsyncOperationBase_1::get_DebugName()
    ::StringW get_DebugName();
    // protected override System.Single get_Progress()
    // Offset: 0x1E1FBDC
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Single AsyncOperationBase_1::get_Progress()
    float get_Progress();
    // public System.Void .ctor()
    // Offset: 0x1E1E5E0
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GroupOperation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GroupOperation*, creationType>()));
    }
    // override System.Boolean InvokeWaitForCompletion()
    // Offset: 0x1E1E6BC
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Boolean AsyncOperationBase_1::InvokeWaitForCompletion()
    bool InvokeWaitForCompletion();
    // protected override System.Void GetDependencies(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> deps)
    // Offset: 0x1E1EC88
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::GetDependencies(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> deps)
    void GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps);
    // override System.Void ReleaseDependencies()
    // Offset: 0x1E1ECF0
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::ReleaseDependencies()
    void ReleaseDependencies();
    // override UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus GetDownloadStatus(System.Collections.Generic.HashSet`1<System.Object> visited)
    // Offset: 0x1E1EF5C
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus AsyncOperationBase_1::GetDownloadStatus(System.Collections.Generic.HashSet`1<System.Object> visited)
    UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(System::Collections::Generic::HashSet_1<::Il2CppObject*>* visited);
    // protected override System.Void Execute()
    // Offset: 0x1E1F588
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Execute()
    void Execute();
    // protected override System.Void Destroy()
    // Offset: 0x1E1FBCC
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Destroy()
    void Destroy();
  }; // UnityEngine.ResourceManagement.AsyncOperations.GroupOperation
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GroupOperationSettings, "UnityEngine.ResourceManagement.AsyncOperations", "GroupOperation/GroupOperationSettings");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Hash
// Il2CppName: UnityEngine.ResourceManagement.AsyncOperations.ICachable.get_Hash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Hash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*), "UnityEngine.ResourceManagement.AsyncOperations.ICachable.get_Hash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Hash
// Il2CppName: UnityEngine.ResourceManagement.AsyncOperations.ICachable.set_Hash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(int)>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Hash)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*), "UnityEngine.ResourceManagement.AsyncOperations.ICachable.set_Hash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDependentOps
// Il2CppName: GetDependentOps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDependentOps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*), "GetDependentOps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::DependenciesAreUnchanged
// Il2CppName: DependenciesAreUnchanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::DependenciesAreUnchanged)> {
  static const MethodInfo* get() {
    static auto* deps = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*), "DependenciesAreUnchanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deps});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::CompleteIfDependenciesComplete
// Il2CppName: CompleteIfDependenciesComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::CompleteIfDependenciesComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*), "CompleteIfDependenciesComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*, bool, bool)>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Init)> {
  static const MethodInfo* get() {
    static auto* operations = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")})->byval_arg;
    static auto* releaseDependenciesOnFailure = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* allowFailedDependencies = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{operations, releaseDependenciesOnFailure, allowFailedDependencies});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*, UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GroupOperationSettings)>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Init)> {
  static const MethodInfo* get() {
    static auto* operations = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")})->byval_arg;
    static auto* settings = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "GroupOperation/GroupOperationSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{operations, settings});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::OnOperationCompleted
// Il2CppName: OnOperationCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::OnOperationCompleted)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*), "OnOperationCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::get_DebugName
// Il2CppName: get_DebugName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::get_DebugName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*), "get_DebugName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::get_Progress
// Il2CppName: get_Progress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::get_Progress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*), "get_Progress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::InvokeWaitForCompletion
// Il2CppName: InvokeWaitForCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::InvokeWaitForCompletion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*), "InvokeWaitForCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDependencies
// Il2CppName: GetDependencies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDependencies)> {
  static const MethodInfo* get() {
    static auto* deps = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*), "GetDependencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deps});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::ReleaseDependencies
// Il2CppName: ReleaseDependencies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::ReleaseDependencies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*), "ReleaseDependencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDownloadStatus
// Il2CppName: GetDownloadStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(System::Collections::Generic::HashSet_1<::Il2CppObject*>*)>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDownloadStatus)> {
  static const MethodInfo* get() {
    static auto* visited = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*), "GetDownloadStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{visited});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Execute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Destroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
