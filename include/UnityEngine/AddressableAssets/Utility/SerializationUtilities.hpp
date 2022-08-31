// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AddressableAssets::Utility
namespace UnityEngine::AddressableAssets::Utility {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.Utility
namespace UnityEngine::AddressableAssets::Utility {
  // Forward declaring type: SerializationUtilities
  class SerializationUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::Utility::SerializationUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Utility::SerializationUtilities*, "UnityEngine.AddressableAssets.Utility", "SerializationUtilities");
// Type namespace: UnityEngine.AddressableAssets.Utility
namespace UnityEngine::AddressableAssets::Utility {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.Utility.SerializationUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class SerializationUtilities : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::AddressableAssets::Utility::SerializationUtilities::ObjectType
    struct ObjectType;
    // static System.Int32 ReadInt32FromByteArray(System.Byte[] data, System.Int32 offset)
    // Offset: 0x2AECBAC
    static int ReadInt32FromByteArray(::ArrayW<uint8_t> data, int offset);
    // static System.Int32 WriteInt32ToByteArray(System.Byte[] data, System.Int32 val, System.Int32 offset)
    // Offset: 0x2AECC2C
    static int WriteInt32ToByteArray(::ArrayW<uint8_t> data, int val, int offset);
    // static System.Object ReadObjectFromByteArray(System.Byte[] keyData, System.Int32 dataIndex)
    // Offset: 0x2AECCBC
    static ::Il2CppObject* ReadObjectFromByteArray(::ArrayW<uint8_t> keyData, int dataIndex);
    // static System.Int32 WriteObjectToByteList(System.Object obj, System.Collections.Generic.List`1<System.Byte> buffer)
    // Offset: 0x2AED2B8
    static int WriteObjectToByteList(::Il2CppObject* obj, ::System::Collections::Generic::List_1<uint8_t>* buffer);
  }; // UnityEngine.AddressableAssets.Utility.SerializationUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Utility::SerializationUtilities::ReadInt32FromByteArray
// Il2CppName: ReadInt32FromByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, int)>(&UnityEngine::AddressableAssets::Utility::SerializationUtilities::ReadInt32FromByteArray)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Utility::SerializationUtilities*), "ReadInt32FromByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Utility::SerializationUtilities::WriteInt32ToByteArray
// Il2CppName: WriteInt32ToByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, int, int)>(&UnityEngine::AddressableAssets::Utility::SerializationUtilities::WriteInt32ToByteArray)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Utility::SerializationUtilities*), "WriteInt32ToByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, val, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Utility::SerializationUtilities::ReadObjectFromByteArray
// Il2CppName: ReadObjectFromByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<uint8_t>, int)>(&UnityEngine::AddressableAssets::Utility::SerializationUtilities::ReadObjectFromByteArray)> {
  static const MethodInfo* get() {
    static auto* keyData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dataIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Utility::SerializationUtilities*), "ReadObjectFromByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyData, dataIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Utility::SerializationUtilities::WriteObjectToByteList
// Il2CppName: WriteObjectToByteList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppObject*, ::System::Collections::Generic::List_1<uint8_t>*)>(&UnityEngine::AddressableAssets::Utility::SerializationUtilities::WriteObjectToByteList)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Utility::SerializationUtilities*), "WriteObjectToByteList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, buffer});
  }
};
