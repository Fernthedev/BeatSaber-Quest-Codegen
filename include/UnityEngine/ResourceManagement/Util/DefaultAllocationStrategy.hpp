// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ResourceManagement.Util.IAllocationStrategy
#include "UnityEngine/ResourceManagement/Util/IAllocationStrategy.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.Util.DefaultAllocationStrategy
  class DefaultAllocationStrategy : public ::Il2CppObject/*, public UnityEngine::ResourceManagement::Util::IAllocationStrategy*/ {
    public:
    // Creating value type constructor for type: DefaultAllocationStrategy
    DefaultAllocationStrategy() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::ResourceManagement::Util::IAllocationStrategy
    operator UnityEngine::ResourceManagement::Util::IAllocationStrategy() noexcept {
      return *reinterpret_cast<UnityEngine::ResourceManagement::Util::IAllocationStrategy*>(this);
    }
    // public System.Object New(System.Type type, System.Int32 typeHash)
    // Offset: 0x19CDDDC
    ::Il2CppObject* New(System::Type* type, int typeHash);
    // public System.Void Release(System.Int32 typeHash, System.Object obj)
    // Offset: 0x19CDDE8
    void Release(int typeHash, ::Il2CppObject* obj);
    // public System.Void .ctor()
    // Offset: 0x19CDDEC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultAllocationStrategy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultAllocationStrategy*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.Util.DefaultAllocationStrategy
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy*, "UnityEngine.ResourceManagement.Util", "DefaultAllocationStrategy");
// Writing includes for template specializations
#include "System/Type.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::New
// Il2CppName: New
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::*)(System::Type*, int)>(&UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::New)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy*), "New", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::*)(int, ::Il2CppObject*)>(&UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::Release)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
