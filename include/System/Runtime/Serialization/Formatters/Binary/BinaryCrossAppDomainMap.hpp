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
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainMap
  // [TokenAttribute] Offset: FFFFFFFF
  class BinaryCrossAppDomainMap : public ::Il2CppObject {
    public:
    // System.Int32 crossAppDomainArrayIndex
    // Size: 0x4
    // Offset: 0x10
    int crossAppDomainArrayIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BinaryCrossAppDomainMap
    BinaryCrossAppDomainMap(int crossAppDomainArrayIndex_ = {}) noexcept : crossAppDomainArrayIndex{crossAppDomainArrayIndex_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return crossAppDomainArrayIndex;
    }
    // Get instance field reference: System.Int32 crossAppDomainArrayIndex
    int& dyn_crossAppDomainArrayIndex();
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x161CADC
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0x161CB1C
    void Dump();
    // System.Void .ctor()
    // Offset: 0x161CAD4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryCrossAppDomainMap* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryCrossAppDomainMap*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainMap
  #pragma pack(pop)
  static check_size<sizeof(BinaryCrossAppDomainMap), 16 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainMapSizeCheck;
  static_assert(sizeof(BinaryCrossAppDomainMap) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap*, "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainMap");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap::*)(System::Runtime::Serialization::Formatters::Binary::__BinaryParser*)>(&System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap::Read)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "__BinaryParser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap::Dump
// Il2CppName: Dump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap::*)()>(&System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap::Dump)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap*), "Dump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
