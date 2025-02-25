// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HMCache`2<K, V>
  template<typename K, typename V>
  class HMCache_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SimpleTextureLoader
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleTextureLoader : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::SimpleTextureLoader::$LoadTextureCoroutine$d__2
    class $LoadTextureCoroutine$d__2;
    // Creating value type constructor for type: SimpleTextureLoader
    SimpleTextureLoader() noexcept {}
    // Get static field: static private HMCache`2<System.String,UnityEngine.Texture2D> _cache
    static GlobalNamespace::HMCache_2<::Il2CppString*, UnityEngine::Texture2D*>* _get__cache();
    // Set static field: static private HMCache`2<System.String,UnityEngine.Texture2D> _cache
    static void _set__cache(GlobalNamespace::HMCache_2<::Il2CppString*, UnityEngine::Texture2D*>* value);
    // static private System.Void .cctor()
    // Offset: 0x10983CC
    static void _cctor();
    // static public System.Void LoadTexture(System.String filePath, System.Boolean useCache, System.Action`1<UnityEngine.Texture2D> finishedCallback)
    // Offset: 0x109824C
    static void LoadTexture(::Il2CppString* filePath, bool useCache, System::Action_1<UnityEngine::Texture2D*>* finishedCallback);
    // static public System.Collections.IEnumerator LoadTextureCoroutine(System.String filePath, System.Boolean useCache, System.Action`1<UnityEngine.Texture2D> finishedCallback)
    // Offset: 0x1098318
    static System::Collections::IEnumerator* LoadTextureCoroutine(::Il2CppString* filePath, bool useCache, System::Action_1<UnityEngine::Texture2D*>* finishedCallback);
  }; // SimpleTextureLoader
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleTextureLoader*, "", "SimpleTextureLoader");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SimpleTextureLoader::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SimpleTextureLoader::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleTextureLoader*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleTextureLoader::LoadTexture
// Il2CppName: LoadTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, bool, System::Action_1<UnityEngine::Texture2D*>*)>(&GlobalNamespace::SimpleTextureLoader::LoadTexture)> {
  static const MethodInfo* get() {
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* useCache = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* finishedCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleTextureLoader*), "LoadTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filePath, useCache, finishedCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleTextureLoader::LoadTextureCoroutine
// Il2CppName: LoadTextureCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (*)(::Il2CppString*, bool, System::Action_1<UnityEngine::Texture2D*>*)>(&GlobalNamespace::SimpleTextureLoader::LoadTextureCoroutine)> {
  static const MethodInfo* get() {
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* useCache = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* finishedCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleTextureLoader*), "LoadTextureCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filePath, useCache, finishedCallback});
  }
};
