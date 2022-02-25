// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IDiffieHellmanKeyPair
  class IDiffieHellmanKeyPair;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::IDiffieHellmanKeyPair);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IDiffieHellmanKeyPair*, "", "IDiffieHellmanKeyPair");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IDiffieHellmanKeyPair
  // [TokenAttribute] Offset: FFFFFFFF
  class IDiffieHellmanKeyPair {
    public:
    // public System.Byte[] get_publicKey()
    // Offset: 0xFFFFFFFF
    ::ArrayW<uint8_t> get_publicKey();
    // public System.Threading.Tasks.Task`1<System.Byte[]> GetPreMasterSecretAsync(System.Byte[] clientPublicKey)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* GetPreMasterSecretAsync(::ArrayW<uint8_t> clientPublicKey);
    // public System.Byte[] GetPreMasterSecret(System.Byte[] clientPublicKey)
    // Offset: 0xFFFFFFFF
    ::ArrayW<uint8_t> GetPreMasterSecret(::ArrayW<uint8_t> clientPublicKey);
  }; // IDiffieHellmanKeyPair
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IDiffieHellmanKeyPair::get_publicKey
// Il2CppName: get_publicKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::IDiffieHellmanKeyPair::*)()>(&GlobalNamespace::IDiffieHellmanKeyPair::get_publicKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IDiffieHellmanKeyPair*), "get_publicKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IDiffieHellmanKeyPair::GetPreMasterSecretAsync
// Il2CppName: GetPreMasterSecretAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (GlobalNamespace::IDiffieHellmanKeyPair::*)(::ArrayW<uint8_t>)>(&GlobalNamespace::IDiffieHellmanKeyPair::GetPreMasterSecretAsync)> {
  static const MethodInfo* get() {
    static auto* clientPublicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IDiffieHellmanKeyPair*), "GetPreMasterSecretAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clientPublicKey});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IDiffieHellmanKeyPair::GetPreMasterSecret
// Il2CppName: GetPreMasterSecret
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::IDiffieHellmanKeyPair::*)(::ArrayW<uint8_t>)>(&GlobalNamespace::IDiffieHellmanKeyPair::GetPreMasterSecret)> {
  static const MethodInfo* get() {
    static auto* clientPublicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IDiffieHellmanKeyPair*), "GetPreMasterSecret", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clientPublicKey});
  }
};
