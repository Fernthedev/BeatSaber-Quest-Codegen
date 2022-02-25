// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::Utils
namespace UnityEngine::TestTools::Utils {
  // Forward declaring type: IAssemblyLoadProxy
  class IAssemblyLoadProxy;
  // Forward declaring type: IAssemblyWrapper
  class IAssemblyWrapper;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Forward declaring type: PlayerTestAssemblyProvider
  class PlayerTestAssemblyProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider*, "UnityEngine.TestTools.Utils", "PlayerTestAssemblyProvider");
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Utils.PlayerTestAssemblyProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerTestAssemblyProvider : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.TestTools.Utils.IAssemblyLoadProxy m_AssemblyLoadProxy
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::TestTools::Utils::IAssemblyLoadProxy* m_AssemblyLoadProxy;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::Utils::IAssemblyLoadProxy*) == 0x8);
    // private readonly System.Collections.Generic.List`1<System.String> m_AssembliesToLoad
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<::StringW>* m_AssembliesToLoad;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.TestTools.Utils.IAssemblyWrapper> m_LoadedAssemblies
    static System::Collections::Generic::List_1<UnityEngine::TestTools::Utils::IAssemblyWrapper*>* _get_m_LoadedAssemblies();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.TestTools.Utils.IAssemblyWrapper> m_LoadedAssemblies
    static void _set_m_LoadedAssemblies(System::Collections::Generic::List_1<UnityEngine::TestTools::Utils::IAssemblyWrapper*>* value);
    // Get instance field reference: private UnityEngine.TestTools.Utils.IAssemblyLoadProxy m_AssemblyLoadProxy
    UnityEngine::TestTools::Utils::IAssemblyLoadProxy*& dyn_m_AssemblyLoadProxy();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<System.String> m_AssembliesToLoad
    System::Collections::Generic::List_1<::StringW>*& dyn_m_AssembliesToLoad();
    // System.Void .ctor(UnityEngine.TestTools.Utils.IAssemblyLoadProxy assemblyLoadProxy, System.Collections.Generic.List`1<System.String> assembliesToLoad)
    // Offset: 0x2A41BC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerTestAssemblyProvider* New_ctor(UnityEngine::TestTools::Utils::IAssemblyLoadProxy* assemblyLoadProxy, System::Collections::Generic::List_1<::StringW>* assembliesToLoad) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerTestAssemblyProvider*, creationType>(assemblyLoadProxy, assembliesToLoad)));
    }
    // public System.Collections.Generic.List`1<UnityEngine.TestTools.Utils.IAssemblyWrapper> GetUserAssemblies()
    // Offset: 0x2A41E88
    System::Collections::Generic::List_1<UnityEngine::TestTools::Utils::IAssemblyWrapper*>* GetUserAssemblies();
    // private System.Void LoadAssemblies()
    // Offset: 0x2A41BFC
    void LoadAssemblies();
  }; // UnityEngine.TestTools.Utils.PlayerTestAssemblyProvider
  #pragma pack(pop)
  static check_size<sizeof(PlayerTestAssemblyProvider), 24 + sizeof(System::Collections::Generic::List_1<::StringW>*)> __UnityEngine_TestTools_Utils_PlayerTestAssemblyProviderSizeCheck;
  static_assert(sizeof(PlayerTestAssemblyProvider) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider::GetUserAssemblies
// Il2CppName: GetUserAssemblies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::TestTools::Utils::IAssemblyWrapper*>* (UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider::*)()>(&UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider::GetUserAssemblies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider*), "GetUserAssemblies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider::LoadAssemblies
// Il2CppName: LoadAssemblies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider::*)()>(&UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider::LoadAssemblies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::PlayerTestAssemblyProvider*), "LoadAssemblies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
