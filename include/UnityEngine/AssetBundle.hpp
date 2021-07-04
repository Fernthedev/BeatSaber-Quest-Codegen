// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AssetBundleCreateRequest
  class AssetBundleCreateRequest;
  // Forward declaring type: AssetBundleRequest
  class AssetBundleRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AssetBundle
  // [NativeHeaderAttribute] Offset: DBA8D8
  // [NativeHeaderAttribute] Offset: DBA8D8
  // [NativeHeaderAttribute] Offset: DBA8D8
  // [NativeHeaderAttribute] Offset: DBA8D8
  // [NativeHeaderAttribute] Offset: DBA8D8
  // [NativeHeaderAttribute] Offset: DBA8D8
  // [NativeHeaderAttribute] Offset: DBA8D8
  // [NativeHeaderAttribute] Offset: DBA8D8
  // [NativeHeaderAttribute] Offset: DBA8D8
  // [NativeHeaderAttribute] Offset: DBA8D8
  // [ExcludeFromPresetAttribute] Offset: DBA8D8
  // [NativeHeaderAttribute] Offset: DBA8D8
  class AssetBundle : public UnityEngine::Object {
    public:
    // Creating value type constructor for type: AssetBundle
    AssetBundle() noexcept {}
    // static UnityEngine.AssetBundleCreateRequest LoadFromFileAsync_Internal(System.String path, System.UInt32 crc, System.UInt64 offset)
    // Offset: 0x23EFCE4
    static UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync_Internal(::Il2CppString* path, uint crc, uint64_t offset);
    // static public UnityEngine.AssetBundleCreateRequest LoadFromFileAsync(System.String path)
    // Offset: 0x23EFD3C
    static UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::Il2CppString* path);
    // static public UnityEngine.AssetBundleCreateRequest LoadFromFileAsync(System.String path, System.UInt32 crc)
    // Offset: 0x23EFD84
    static UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::Il2CppString* path, uint crc);
    // static UnityEngine.AssetBundle LoadFromFile_Internal(System.String path, System.UInt32 crc, System.UInt64 offset)
    // Offset: 0x23EFDD8
    static UnityEngine::AssetBundle* LoadFromFile_Internal(::Il2CppString* path, uint crc, uint64_t offset);
    // static public UnityEngine.AssetBundle LoadFromFile(System.String path)
    // Offset: 0x23EFE30
    static UnityEngine::AssetBundle* LoadFromFile(::Il2CppString* path);
    // public UnityEngine.Object LoadAsset(System.String name)
    // Offset: 0x23EFE78
    UnityEngine::Object* LoadAsset(::Il2CppString* name);
    // public T LoadAsset(System.String name)
    // Offset: 0xFFFFFFFF
    template<class T>
    T LoadAsset(::Il2CppString* name) {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AssetBundle::LoadAsset");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "LoadAsset", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(name)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___generic__method, name);
    }
    // public UnityEngine.Object LoadAsset(System.String name, System.Type type)
    // Offset: 0x23EFF08
    UnityEngine::Object* LoadAsset(::Il2CppString* name, System::Type* type);
    // private UnityEngine.Object LoadAsset_Internal(System.String name, System.Type type)
    // Offset: 0x23F0018
    UnityEngine::Object* LoadAsset_Internal(::Il2CppString* name, System::Type* type);
    // public UnityEngine.AssetBundleRequest LoadAssetAsync(System.String name)
    // Offset: 0xFFFFFFFF
    template<class T>
    UnityEngine::AssetBundleRequest* LoadAssetAsync(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AssetBundle::LoadAssetAsync");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "LoadAssetAsync", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(name)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::AssetBundleRequest*, false>(this, ___generic__method, name);
    }
    // public UnityEngine.AssetBundleRequest LoadAssetAsync(System.String name, System.Type type)
    // Offset: 0x23F0070
    UnityEngine::AssetBundleRequest* LoadAssetAsync(::Il2CppString* name, System::Type* type);
    // public UnityEngine.AssetBundleRequest LoadAssetWithSubAssetsAsync(System.String name, System.Type type)
    // Offset: 0x23F01D8
    UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync(::Il2CppString* name, System::Type* type);
    // public UnityEngine.AssetBundleRequest LoadAllAssetsAsync()
    // Offset: 0xFFFFFFFF
    template<class T>
    UnityEngine::AssetBundleRequest* LoadAllAssetsAsync() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AssetBundle::LoadAllAssetsAsync");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "LoadAllAssetsAsync", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::AssetBundleRequest*, false>(this, ___generic__method);
    }
    // public UnityEngine.AssetBundleRequest LoadAllAssetsAsync(System.Type type)
    // Offset: 0x23F0340
    UnityEngine::AssetBundleRequest* LoadAllAssetsAsync(System::Type* type);
    // private UnityEngine.AssetBundleRequest LoadAssetAsync_Internal(System.String name, System.Type type)
    // Offset: 0x23F0180
    UnityEngine::AssetBundleRequest* LoadAssetAsync_Internal(::Il2CppString* name, System::Type* type);
    // public System.Void Unload(System.Boolean unloadAllLoadedObjects)
    // Offset: 0x23F0404
    void Unload(bool unloadAllLoadedObjects);
    // public System.String[] GetAllAssetNames()
    // Offset: 0x23F0454
    ::Array<::Il2CppString*>* GetAllAssetNames();
    // public System.String[] GetAllScenePaths()
    // Offset: 0x23F0494
    ::Array<::Il2CppString*>* GetAllScenePaths();
    // private UnityEngine.AssetBundleRequest LoadAssetWithSubAssetsAsync_Internal(System.String name, System.Type type)
    // Offset: 0x23F02E8
    UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync_Internal(::Il2CppString* name, System::Type* type);
    // private System.Void .ctor()
    // Offset: 0x23EFC7C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetBundle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AssetBundle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetBundle*, creationType>()));
    }
  }; // UnityEngine.AssetBundle
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AssetBundle*, "UnityEngine", "AssetBundle");
// Writing includes for template specializations
#include "System/Type.hpp"
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadFromFileAsync_Internal
// Il2CppName: LoadFromFileAsync_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AssetBundleCreateRequest* (*)(::Il2CppString*, uint, uint64_t)>(&UnityEngine::AssetBundle::LoadFromFileAsync_Internal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "LoadFromFileAsync_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<uint64_t>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadFromFileAsync
// Il2CppName: LoadFromFileAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AssetBundleCreateRequest* (*)(::Il2CppString*)>(&UnityEngine::AssetBundle::LoadFromFileAsync)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "LoadFromFileAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadFromFileAsync
// Il2CppName: LoadFromFileAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AssetBundleCreateRequest* (*)(::Il2CppString*, uint)>(&UnityEngine::AssetBundle::LoadFromFileAsync)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "LoadFromFileAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadFromFile_Internal
// Il2CppName: LoadFromFile_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AssetBundle* (*)(::Il2CppString*, uint, uint64_t)>(&UnityEngine::AssetBundle::LoadFromFile_Internal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "LoadFromFile_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<uint64_t>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadFromFile
// Il2CppName: LoadFromFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AssetBundle* (*)(::Il2CppString*)>(&UnityEngine::AssetBundle::LoadFromFile)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "LoadFromFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadAsset
// Il2CppName: LoadAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object* (UnityEngine::AssetBundle::*)(::Il2CppString*)>(&UnityEngine::AssetBundle::LoadAsset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "LoadAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadAsset
// Il2CppName: LoadAsset
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadAsset
// Il2CppName: LoadAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object* (UnityEngine::AssetBundle::*)(::Il2CppString*, System::Type*)>(&UnityEngine::AssetBundle::LoadAsset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "LoadAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadAsset_Internal
// Il2CppName: LoadAsset_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object* (UnityEngine::AssetBundle::*)(::Il2CppString*, System::Type*)>(&UnityEngine::AssetBundle::LoadAsset_Internal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "LoadAsset_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadAssetAsync
// Il2CppName: LoadAssetAsync
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadAssetAsync
// Il2CppName: LoadAssetAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AssetBundleRequest* (UnityEngine::AssetBundle::*)(::Il2CppString*, System::Type*)>(&UnityEngine::AssetBundle::LoadAssetAsync)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "LoadAssetAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadAssetWithSubAssetsAsync
// Il2CppName: LoadAssetWithSubAssetsAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AssetBundleRequest* (UnityEngine::AssetBundle::*)(::Il2CppString*, System::Type*)>(&UnityEngine::AssetBundle::LoadAssetWithSubAssetsAsync)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "LoadAssetWithSubAssetsAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadAllAssetsAsync
// Il2CppName: LoadAllAssetsAsync
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadAllAssetsAsync
// Il2CppName: LoadAllAssetsAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AssetBundleRequest* (UnityEngine::AssetBundle::*)(System::Type*)>(&UnityEngine::AssetBundle::LoadAllAssetsAsync)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "LoadAllAssetsAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadAssetAsync_Internal
// Il2CppName: LoadAssetAsync_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AssetBundleRequest* (UnityEngine::AssetBundle::*)(::Il2CppString*, System::Type*)>(&UnityEngine::AssetBundle::LoadAssetAsync_Internal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "LoadAssetAsync_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::Unload
// Il2CppName: Unload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AssetBundle::*)(bool)>(&UnityEngine::AssetBundle::Unload)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "Unload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::GetAllAssetNames
// Il2CppName: GetAllAssetNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (UnityEngine::AssetBundle::*)()>(&UnityEngine::AssetBundle::GetAllAssetNames)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "GetAllAssetNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::GetAllScenePaths
// Il2CppName: GetAllScenePaths
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (UnityEngine::AssetBundle::*)()>(&UnityEngine::AssetBundle::GetAllScenePaths)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "GetAllScenePaths", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadAssetWithSubAssetsAsync_Internal
// Il2CppName: LoadAssetWithSubAssetsAsync_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AssetBundleRequest* (UnityEngine::AssetBundle::*)(::Il2CppString*, System::Type*)>(&UnityEngine::AssetBundle::LoadAssetWithSubAssetsAsync_Internal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "LoadAssetWithSubAssetsAsync_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
