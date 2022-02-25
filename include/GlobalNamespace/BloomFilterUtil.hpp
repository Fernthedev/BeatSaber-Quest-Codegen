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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBitMask`1<T>
  template<typename T>
  class IBitMask_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomFilterUtil
  class BloomFilterUtil;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::BloomFilterUtil);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomFilterUtil*, "", "BloomFilterUtil");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BloomFilterUtil
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class BloomFilterUtil : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BloomFilterUtil::$$c__DisplayClass2_0_1<T>
    template<typename T>
    class $$c__DisplayClass2_0_1;
    // static private System.UInt32 MurmurHash2(System.String key)
    // Offset: 0x2971EE8
    static uint MurmurHash2(::StringW key);
    // static public T ToBloomFilter(System.String value, System.Int32 hashCount, System.Int32 hashBits)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T ToBloomFilter(::StringW value, int hashCount, int hashBits) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, GlobalNamespace::IBitMask_1<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomFilterUtil::ToBloomFilter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "BloomFilterUtil", "ToBloomFilter", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(hashCount), ::il2cpp_utils::ExtractType(hashBits)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, value, hashCount, hashBits);
    }
    // static public T ToBloomFilter(System.Collections.Generic.IEnumerable`1<System.String> strings, System.Int32 hashCount, System.Int32 hashBits)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T ToBloomFilter(System::Collections::Generic::IEnumerable_1<::StringW>* strings, int hashCount, int hashBits) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, GlobalNamespace::IBitMask_1<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomFilterUtil::ToBloomFilter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "BloomFilterUtil", "ToBloomFilter", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(strings), ::il2cpp_utils::ExtractType(hashCount), ::il2cpp_utils::ExtractType(hashBits)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, strings, hashCount, hashBits);
    }
    // static public T AddBloomFilterEntry(T bitMask, System.String value, System.Int32 hashCount, System.Int32 hashBits)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T AddBloomFilterEntry(T bitMask, ::StringW value, int hashCount, int hashBits) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, GlobalNamespace::IBitMask_1<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomFilterUtil::AddBloomFilterEntry");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "BloomFilterUtil", "AddBloomFilterEntry", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(bitMask), ::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(hashCount), ::il2cpp_utils::ExtractType(hashBits)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, bitMask, value, hashCount, hashBits);
    }
    // static public System.Boolean ContainsBloomFilterEntry(T bitMask, System.String value, System.Int32 hashCount, System.Int32 hashBits)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool ContainsBloomFilterEntry(T bitMask, ::StringW value, int hashCount, int hashBits) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, GlobalNamespace::IBitMask_1<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomFilterUtil::ContainsBloomFilterEntry");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "BloomFilterUtil", "ContainsBloomFilterEntry", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(bitMask), ::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(hashCount), ::il2cpp_utils::ExtractType(hashBits)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, bitMask, value, hashCount, hashBits);
    }
  }; // BloomFilterUtil
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomFilterUtil::MurmurHash2
// Il2CppName: MurmurHash2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::StringW)>(&GlobalNamespace::BloomFilterUtil::MurmurHash2)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFilterUtil*), "MurmurHash2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFilterUtil::ToBloomFilter
// Il2CppName: ToBloomFilter
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::BloomFilterUtil::ToBloomFilter
// Il2CppName: ToBloomFilter
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::BloomFilterUtil::AddBloomFilterEntry
// Il2CppName: AddBloomFilterEntry
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::BloomFilterUtil::ContainsBloomFilterEntry
// Il2CppName: ContainsBloomFilterEntry
// Cannot write MetadataGetter for generic methods!
