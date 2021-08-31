// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Concurrent
namespace System::Collections::Concurrent {
  // Forward declaring type: ConcurrentDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ConcurrentDictionary_2;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.NameCache
  // [TokenAttribute] Offset: FFFFFFFF
  class NameCache : public ::Il2CppObject {
    public:
    // private System.String name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: NameCache
    NameCache(::Il2CppString* name_ = {}) noexcept : name{name_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return name;
    }
    // Get static field: static private System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Object> ht
    static System::Collections::Concurrent::ConcurrentDictionary_2<::Il2CppString*, ::Il2CppObject*>* _get_ht();
    // Set static field: static private System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Object> ht
    static void _set_ht(System::Collections::Concurrent::ConcurrentDictionary_2<::Il2CppString*, ::Il2CppObject*>* value);
    // Get instance field reference: private System.String name
    ::Il2CppString*& dyn_name();
    // static private System.Void .cctor()
    // Offset: 0x1618678
    static void _cctor();
    // System.Object GetCachedValue(System.String name)
    // Offset: 0x1618530
    ::Il2CppObject* GetCachedValue(::Il2CppString* name);
    // System.Void SetCachedValue(System.Object value)
    // Offset: 0x16185DC
    void SetCachedValue(::Il2CppObject* value);
    // public System.Void .ctor()
    // Offset: 0x1618670
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameCache* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::NameCache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameCache*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.NameCache
  #pragma pack(pop)
  static check_size<sizeof(NameCache), 16 + sizeof(::Il2CppString*)> __System_Runtime_Serialization_Formatters_Binary_NameCacheSizeCheck;
  static_assert(sizeof(NameCache) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::NameCache*, "System.Runtime.Serialization.Formatters.Binary", "NameCache");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::NameCache::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Serialization::Formatters::Binary::NameCache::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::NameCache*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::NameCache::GetCachedValue
// Il2CppName: GetCachedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::Formatters::Binary::NameCache::*)(::Il2CppString*)>(&System::Runtime::Serialization::Formatters::Binary::NameCache::GetCachedValue)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::NameCache*), "GetCachedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::NameCache::SetCachedValue
// Il2CppName: SetCachedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::NameCache::*)(::Il2CppObject*)>(&System::Runtime::Serialization::Formatters::Binary::NameCache::SetCachedValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::NameCache*), "SetCachedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::NameCache::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
