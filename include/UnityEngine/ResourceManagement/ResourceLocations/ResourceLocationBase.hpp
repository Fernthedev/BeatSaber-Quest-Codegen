// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation
#include "UnityEngine/ResourceManagement/ResourceLocations/IResourceLocation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: ResourceLocationBase
  class ResourceLocationBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*, "UnityEngine.ResourceManagement.ResourceLocations", "ResourceLocationBase");
// Type namespace: UnityEngine.ResourceManagement.ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase
  // [TokenAttribute] Offset: FFFFFFFF
  class ResourceLocationBase : public ::Il2CppObject/*, public ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*/ {
    public:
    public:
    // private System.String m_Name
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_Id
    // Size: 0x8
    // Offset: 0x18
    ::StringW m_Id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_ProviderId
    // Size: 0x8
    // Offset: 0x20
    ::StringW m_ProviderId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Object m_Data
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* m_Data;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 m_DependencyHashCode
    // Size: 0x4
    // Offset: 0x30
    int m_DependencyHashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_HashCode
    // Size: 0x4
    // Offset: 0x34
    int m_HashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Type m_Type
    // Size: 0x8
    // Offset: 0x38
    ::System::Type* m_Type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> m_Dependencies
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* m_Dependencies;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*) == 0x8);
    // private System.String m_PrimaryKey
    // Size: 0x8
    // Offset: 0x48
    ::StringW m_PrimaryKey;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation
    operator ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation() noexcept {
      return *reinterpret_cast<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(this);
    }
    // Creating interface conversion operator: i_IResourceLocation
    inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* i_IResourceLocation() noexcept {
      return reinterpret_cast<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(this);
    }
    // Get instance field reference: private System.String m_Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Name();
    // Get instance field reference: private System.String m_Id
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Id();
    // Get instance field reference: private System.String m_ProviderId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_ProviderId();
    // Get instance field reference: private System.Object m_Data
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_m_Data();
    // Get instance field reference: private System.Int32 m_DependencyHashCode
    [[deprecated("Use field access instead!")]] int& dyn_m_DependencyHashCode();
    // Get instance field reference: private System.Int32 m_HashCode
    [[deprecated("Use field access instead!")]] int& dyn_m_HashCode();
    // Get instance field reference: private System.Type m_Type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_m_Type();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> m_Dependencies
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*& dyn_m_Dependencies();
    // Get instance field reference: private System.String m_PrimaryKey
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_PrimaryKey();
    // public System.String get_InternalId()
    // Offset: 0x1F34E00
    ::StringW get_InternalId();
    // public System.String get_ProviderId()
    // Offset: 0x1F34E08
    ::StringW get_ProviderId();
    // public System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> get_Dependencies()
    // Offset: 0x1F34E10
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* get_Dependencies();
    // public System.Boolean get_HasDependencies()
    // Offset: 0x1F34E18
    bool get_HasDependencies();
    // public System.Object get_Data()
    // Offset: 0x1F34E74
    ::Il2CppObject* get_Data();
    // public System.Void set_Data(System.Object value)
    // Offset: 0x1F34E7C
    void set_Data(::Il2CppObject* value);
    // public System.String get_PrimaryKey()
    // Offset: 0x1F34E84
    ::StringW get_PrimaryKey();
    // public System.Void set_PrimaryKey(System.String value)
    // Offset: 0x1F34E8C
    void set_PrimaryKey(::StringW value);
    // public System.Int32 get_DependencyHashCode()
    // Offset: 0x1F34E94
    int get_DependencyHashCode();
    // public System.Type get_ResourceType()
    // Offset: 0x1F34E9C
    ::System::Type* get_ResourceType();
    // public System.Void .ctor(System.String name, System.String id, System.String providerId, System.Type t, params UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation[] dependencies)
    // Offset: 0x1F34F04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceLocationBase* New_ctor(::StringW name, ::StringW id, ::StringW providerId, ::System::Type* t, ::ArrayW<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> dependencies) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceLocationBase*, creationType>(name, id, providerId, t, dependencies)));
    }
    // public System.Int32 Hash(System.Type t)
    // Offset: 0x1F34EA4
    int Hash(::System::Type* t);
    // public System.Void ComputeDependencyHash()
    // Offset: 0x1F35100
    void ComputeDependencyHash();
    // public override System.String ToString()
    // Offset: 0x1F34EFC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase
  #pragma pack(pop)
  static check_size<sizeof(ResourceLocationBase), 72 + sizeof(::StringW)> __UnityEngine_ResourceManagement_ResourceLocations_ResourceLocationBaseSizeCheck;
  static_assert(sizeof(ResourceLocationBase) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::get_InternalId
// Il2CppName: get_InternalId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::*)()>(&UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::get_InternalId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*), "get_InternalId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::get_ProviderId
// Il2CppName: get_ProviderId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::*)()>(&UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::get_ProviderId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*), "get_ProviderId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::get_Dependencies
// Il2CppName: get_Dependencies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* (UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::*)()>(&UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::get_Dependencies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*), "get_Dependencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::get_HasDependencies
// Il2CppName: get_HasDependencies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::*)()>(&UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::get_HasDependencies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*), "get_HasDependencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::*)()>(&UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::set_Data
// Il2CppName: set_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::*)(::Il2CppObject*)>(&UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::set_Data)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*), "set_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::get_PrimaryKey
// Il2CppName: get_PrimaryKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::*)()>(&UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::get_PrimaryKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*), "get_PrimaryKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::set_PrimaryKey
// Il2CppName: set_PrimaryKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::*)(::StringW)>(&UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::set_PrimaryKey)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*), "set_PrimaryKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::get_DependencyHashCode
// Il2CppName: get_DependencyHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::*)()>(&UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::get_DependencyHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*), "get_DependencyHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::get_ResourceType
// Il2CppName: get_ResourceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::*)()>(&UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::get_ResourceType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*), "get_ResourceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::Hash
// Il2CppName: Hash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::*)(::System::Type*)>(&UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::Hash)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*), "Hash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::ComputeDependencyHash
// Il2CppName: ComputeDependencyHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::*)()>(&UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::ComputeDependencyHash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*), "ComputeDependencyHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::*)()>(&UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
