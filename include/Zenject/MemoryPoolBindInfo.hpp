// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PoolExpandMethods
#include "Zenject/PoolExpandMethods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.MemoryPoolBindInfo
  // [NoReflectionBakingAttribute] Offset: DDC534
  class MemoryPoolBindInfo : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDDE8FC
    // private Zenject.PoolExpandMethods <ExpandMethod>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    Zenject::PoolExpandMethods ExpandMethod;
    // Field size check
    static_assert(sizeof(Zenject::PoolExpandMethods) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDDE90C
    // private System.Int32 <InitialSize>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int InitialSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDDE91C
    // private System.Int32 <MaxSize>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int MaxSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MemoryPoolBindInfo
    MemoryPoolBindInfo(Zenject::PoolExpandMethods ExpandMethod_ = {}, int InitialSize_ = {}, int MaxSize_ = {}) noexcept : ExpandMethod{ExpandMethod_}, InitialSize{InitialSize_}, MaxSize{MaxSize_} {}
    // public Zenject.PoolExpandMethods get_ExpandMethod()
    // Offset: 0x16DC7A0
    Zenject::PoolExpandMethods get_ExpandMethod();
    // public System.Void set_ExpandMethod(Zenject.PoolExpandMethods value)
    // Offset: 0x16DC7A8
    void set_ExpandMethod(Zenject::PoolExpandMethods value);
    // public System.Int32 get_InitialSize()
    // Offset: 0x16DC7B0
    int get_InitialSize();
    // public System.Void set_InitialSize(System.Int32 value)
    // Offset: 0x16DC7B8
    void set_InitialSize(int value);
    // public System.Int32 get_MaxSize()
    // Offset: 0x16DC7C0
    int get_MaxSize();
    // public System.Void set_MaxSize(System.Int32 value)
    // Offset: 0x16DC7C8
    void set_MaxSize(int value);
    // public System.Void .ctor()
    // Offset: 0x16DC770
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryPoolBindInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolBindInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryPoolBindInfo*, creationType>()));
    }
  }; // Zenject.MemoryPoolBindInfo
  #pragma pack(pop)
  static check_size<sizeof(MemoryPoolBindInfo), 24 + sizeof(int)> __Zenject_MemoryPoolBindInfoSizeCheck;
  static_assert(sizeof(MemoryPoolBindInfo) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::MemoryPoolBindInfo*, "Zenject", "MemoryPoolBindInfo");
// Writing includes for template specializations
// Writing MetadataGetter for method: Zenject::MemoryPoolBindInfo::get_ExpandMethod
// Il2CppName: get_ExpandMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::PoolExpandMethods (Zenject::MemoryPoolBindInfo::*)()>(&Zenject::MemoryPoolBindInfo::get_ExpandMethod)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MemoryPoolBindInfo*), "get_ExpandMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MemoryPoolBindInfo::set_ExpandMethod
// Il2CppName: set_ExpandMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MemoryPoolBindInfo::*)(Zenject::PoolExpandMethods)>(&Zenject::MemoryPoolBindInfo::set_ExpandMethod)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MemoryPoolBindInfo*), "set_ExpandMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::PoolExpandMethods>()});
  }
};
// Writing MetadataGetter for method: Zenject::MemoryPoolBindInfo::get_InitialSize
// Il2CppName: get_InitialSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::MemoryPoolBindInfo::*)()>(&Zenject::MemoryPoolBindInfo::get_InitialSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MemoryPoolBindInfo*), "get_InitialSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MemoryPoolBindInfo::set_InitialSize
// Il2CppName: set_InitialSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MemoryPoolBindInfo::*)(int)>(&Zenject::MemoryPoolBindInfo::set_InitialSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MemoryPoolBindInfo*), "set_InitialSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Zenject::MemoryPoolBindInfo::get_MaxSize
// Il2CppName: get_MaxSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::MemoryPoolBindInfo::*)()>(&Zenject::MemoryPoolBindInfo::get_MaxSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MemoryPoolBindInfo*), "get_MaxSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MemoryPoolBindInfo::set_MaxSize
// Il2CppName: set_MaxSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MemoryPoolBindInfo::*)(int)>(&Zenject::MemoryPoolBindInfo::set_MaxSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MemoryPoolBindInfo*), "set_MaxSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Zenject::MemoryPoolBindInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
