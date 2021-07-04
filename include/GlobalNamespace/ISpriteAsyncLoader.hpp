// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: ISpriteAsyncLoader
  class ISpriteAsyncLoader {
    public:
    // Creating value type constructor for type: ISpriteAsyncLoader
    ISpriteAsyncLoader() noexcept {}
    // public System.Threading.Tasks.Task`1<UnityEngine.Sprite> LoadSpriteAsync(System.String path, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* LoadSpriteAsync(::Il2CppString* path, System::Threading::CancellationToken cancellationToken);
  }; // ISpriteAsyncLoader
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ISpriteAsyncLoader*, "", "ISpriteAsyncLoader");
// Writing includes for template specializations
#include "System/Threading/CancellationToken.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ISpriteAsyncLoader::LoadSpriteAsync
// Il2CppName: LoadSpriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* (GlobalNamespace::ISpriteAsyncLoader::*)(::Il2CppString*, System::Threading::CancellationToken)>(&GlobalNamespace::ISpriteAsyncLoader::LoadSpriteAsync)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ISpriteAsyncLoader*), "LoadSpriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Threading::CancellationToken>()});
  }
};
