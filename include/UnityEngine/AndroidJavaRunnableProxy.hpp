// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AndroidJavaProxy
#include "UnityEngine/AndroidJavaProxy.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaRunnable
  class AndroidJavaRunnable;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AndroidJavaRunnableProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class AndroidJavaRunnableProxy : public UnityEngine::AndroidJavaProxy {
    public:
    // private UnityEngine.AndroidJavaRunnable mRunnable
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AndroidJavaRunnable* mRunnable;
    // Field size check
    static_assert(sizeof(UnityEngine::AndroidJavaRunnable*) == 0x8);
    // Creating value type constructor for type: AndroidJavaRunnableProxy
    AndroidJavaRunnableProxy(UnityEngine::AndroidJavaRunnable* mRunnable_ = {}) noexcept : mRunnable{mRunnable_} {}
    // Creating conversion operator: operator UnityEngine::AndroidJavaRunnable*
    constexpr operator UnityEngine::AndroidJavaRunnable*() const noexcept {
      return mRunnable;
    }
    // Get instance field: private UnityEngine.AndroidJavaRunnable mRunnable
    UnityEngine::AndroidJavaRunnable* _get_mRunnable();
    // Set instance field: private UnityEngine.AndroidJavaRunnable mRunnable
    void _set_mRunnable(UnityEngine::AndroidJavaRunnable* value);
    // public System.Void .ctor(UnityEngine.AndroidJavaRunnable runnable)
    // Offset: 0x23B0A24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaRunnableProxy* New_ctor(UnityEngine::AndroidJavaRunnable* runnable) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaRunnableProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaRunnableProxy*, creationType>(runnable)));
    }
    // public System.Void run()
    // Offset: 0x23B0AA8
    void run();
  }; // UnityEngine.AndroidJavaRunnableProxy
  #pragma pack(pop)
  static check_size<sizeof(AndroidJavaRunnableProxy), 32 + sizeof(UnityEngine::AndroidJavaRunnable*)> __UnityEngine_AndroidJavaRunnableProxySizeCheck;
  static_assert(sizeof(AndroidJavaRunnableProxy) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJavaRunnableProxy*, "UnityEngine", "AndroidJavaRunnableProxy");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AndroidJavaRunnableProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaRunnableProxy::run
// Il2CppName: run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AndroidJavaRunnableProxy::*)()>(&UnityEngine::AndroidJavaRunnableProxy::run)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaRunnableProxy*), "run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
