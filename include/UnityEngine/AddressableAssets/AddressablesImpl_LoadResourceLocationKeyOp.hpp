// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.AddressablesImpl
#include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationBase_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeyOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeyOp*, "UnityEngine.AddressableAssets", "AddressablesImpl/LoadResourceLocationKeyOp");
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.LoadResourceLocationKeyOp
  // [TokenAttribute] Offset: FFFFFFFF
  class AddressablesImpl::LoadResourceLocationKeyOp : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> {
    public:
    public:
    // private System.Object m_Keys
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppObject* m_Keys;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> m_locations
    // Size: 0x8
    // Offset: 0x88
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* m_locations;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*) == 0x8);
    // private UnityEngine.AddressableAssets.AddressablesImpl m_Addressables
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;
    // Field size check
    static_assert(sizeof(::UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // private System.Type m_ResourceType
    // Size: 0x8
    // Offset: 0x98
    ::System::Type* m_ResourceType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: private System.Object m_Keys
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_m_Keys();
    // Get instance field reference: private System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> m_locations
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& dyn_m_locations();
    // Get instance field reference: private UnityEngine.AddressableAssets.AddressablesImpl m_Addressables
    [[deprecated("Use field access instead!")]] ::UnityEngine::AddressableAssets::AddressablesImpl*& dyn_m_Addressables();
    // Get instance field reference: private System.Type m_ResourceType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_m_ResourceType();
    // public System.Void .ctor()
    // Offset: 0x18C9844
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressablesImpl::LoadResourceLocationKeyOp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeyOp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressablesImpl::LoadResourceLocationKeyOp*, creationType>()));
    }
    // public System.Void Init(UnityEngine.AddressableAssets.AddressablesImpl aa, System.Type t, System.Object keys)
    // Offset: 0x18C9894
    void Init(::UnityEngine::AddressableAssets::AddressablesImpl* aa, ::System::Type* t, ::Il2CppObject* keys);
    // protected override System.String get_DebugName()
    // Offset: 0x18CDA80
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.String AsyncOperationBase_1::get_DebugName()
    ::StringW get_DebugName();
    // override System.Boolean InvokeWaitForCompletion()
    // Offset: 0x18CDAA0
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Boolean AsyncOperationBase_1::InvokeWaitForCompletion()
    bool InvokeWaitForCompletion();
    // protected override System.Void Execute()
    // Offset: 0x18CDB1C
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Execute()
    void Execute();
  }; // UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.LoadResourceLocationKeyOp
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeyOp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeyOp::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeyOp::*)(::UnityEngine::AddressableAssets::AddressablesImpl*, ::System::Type*, ::Il2CppObject*)>(&UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeyOp::Init)> {
  static const MethodInfo* get() {
    static auto* aa = &::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets", "AddressablesImpl")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* keys = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeyOp*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aa, t, keys});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeyOp::get_DebugName
// Il2CppName: get_DebugName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeyOp::*)()>(&UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeyOp::get_DebugName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeyOp*), "get_DebugName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeyOp::InvokeWaitForCompletion
// Il2CppName: InvokeWaitForCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeyOp::*)()>(&UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeyOp::InvokeWaitForCompletion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeyOp*), "InvokeWaitForCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeyOp::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeyOp::*)()>(&UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeyOp::Execute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::LoadResourceLocationKeyOp*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
