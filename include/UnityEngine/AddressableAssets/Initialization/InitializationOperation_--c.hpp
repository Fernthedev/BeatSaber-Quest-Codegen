// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AddressableAssets.Initialization.InitializationOperation
#include "UnityEngine/AddressableAssets/Initialization/InitializationOperation.hpp"
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
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: IResourceProvider
  class IResourceProvider;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.Initialization
namespace UnityEngine::AddressableAssets::Initialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c
  // [CompilerGeneratedAttribute] Offset: E027BC
  class InitializationOperation::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c <>9
    static UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c <>9
    static void _set_$$9(UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider,System.Boolean> <>9__13_0
    static System::Func_2<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* _get_$$9__13_0();
    // Set static field: static public System.Func`2<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider,System.Boolean> <>9__13_0
    static void _set_$$9__13_0(System::Func_2<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x13F5C68
    static void _cctor();
    // System.Boolean <Execute>b__13_0(UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider rp)
    // Offset: 0x13F5CD4
    bool $Execute$b__13_0(UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* rp);
    // public System.Void .ctor()
    // Offset: 0x13F5CCC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitializationOperation::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitializationOperation::$$c*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.Initialization.InitializationOperation/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c*, "UnityEngine.AddressableAssets.Initialization", "InitializationOperation/<>c");
// Writing includes for template specializations
#include "UnityEngine/ResourceManagement/ResourceProviders/IResourceProvider.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c::$Execute$b__13_0
// Il2CppName: <Execute>b__13_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c::*)(UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*)>(&UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c::$Execute$b__13_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c*), "<Execute>b__13_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::InitializationOperation::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
