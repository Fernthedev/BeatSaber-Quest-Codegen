// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: BinaryTypeEnum
  struct BinaryTypeEnum;
  // Forward declaring type: WriteObjectInfo
  class WriteObjectInfo;
  // Forward declaring type: ObjectWriter
  class ObjectWriter;
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
  // Forward declaring type: ObjectReader
  class ObjectReader;
  // Forward declaring type: BinaryAssemblyInfo
  class BinaryAssemblyInfo;
  // Forward declaring type: InternalPrimitiveTypeE
  struct InternalPrimitiveTypeE;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryConverter
  class BinaryConverter : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BinaryConverter
    BinaryConverter() noexcept {}
    // static System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum GetBinaryTypeInfo(System.Type type, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.String typeName, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, out System.Object typeInformation, out System.Int32 assemId)
    // Offset: 0x1606CA0
    static System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum GetBinaryTypeInfo(System::Type* type, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::Il2CppString* typeName, System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, ::Il2CppObject*& typeInformation, int& assemId);
    // static System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum GetParserBinaryTypeInfo(System.Type type, out System.Object typeInformation)
    // Offset: 0x16073F4
    static System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum GetParserBinaryTypeInfo(System::Type* type, ::Il2CppObject*& typeInformation);
    // static System.Void WriteTypeInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, System.Object typeInformation, System.Int32 assemId, System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x1606224
    static void WriteTypeInfo(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::Il2CppObject* typeInformation, int assemId, System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // static System.Object ReadTypeInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, System.Runtime.Serialization.Formatters.Binary.__BinaryParser input, out System.Int32 assemId)
    // Offset: 0x1606834
    static ::Il2CppObject* ReadTypeInfo(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input, int& assemId);
    // static System.Void TypeFromInfo(System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, System.Object typeInformation, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, out System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE primitiveTypeEnum, out System.String typeString, out System.Type type, out System.Boolean isVariant)
    // Offset: 0x1607750
    static void TypeFromInfo(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::Il2CppObject* typeInformation, System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& primitiveTypeEnum, ::Il2CppString*& typeString, System::Type*& type, bool& isVariant);
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryConverter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryConverter*, "System.Runtime.Serialization.Formatters.Binary", "BinaryConverter");
// Writing includes for template specializations
#include "System/Type.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/WriteObjectInfo.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/ObjectWriter.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/BinaryTypeEnum.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/__BinaryWriter.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/__BinaryParser.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/ObjectReader.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/BinaryAssemblyInfo.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryConverter::GetBinaryTypeInfo
// Il2CppName: GetBinaryTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum (*)(System::Type*, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::Il2CppString*, System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, ::Il2CppObject*&, int&)>(&System::Runtime::Serialization::Formatters::Binary::BinaryConverter::GetBinaryTypeInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryConverter*), "GetBinaryTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*&>(), ::il2cpp_utils::ExtractIndependentType<int&>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryConverter::GetParserBinaryTypeInfo
// Il2CppName: GetParserBinaryTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum (*)(System::Type*, ::Il2CppObject*&)>(&System::Runtime::Serialization::Formatters::Binary::BinaryConverter::GetParserBinaryTypeInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryConverter*), "GetParserBinaryTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*&>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryConverter::WriteTypeInfo
// Il2CppName: WriteTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Il2CppObject*, int, System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&System::Runtime::Serialization::Formatters::Binary::BinaryConverter::WriteTypeInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryConverter*), "WriteTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryConverter::ReadTypeInfo
// Il2CppName: ReadTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, int&)>(&System::Runtime::Serialization::Formatters::Binary::BinaryConverter::ReadTypeInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryConverter*), "ReadTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), ::il2cpp_utils::ExtractIndependentType<int&>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryConverter::TypeFromInfo
// Il2CppName: TypeFromInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Il2CppObject*, System::Runtime::Serialization::Formatters::Binary::ObjectReader*, System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE&, ::Il2CppString*&, System::Type*&, bool&)>(&System::Runtime::Serialization::Formatters::Binary::BinaryConverter::TypeFromInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryConverter*), "TypeFromInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::ObjectReader*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE&>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*&>(), ::il2cpp_utils::ExtractIndependentType<System::Type*&>(), ::il2cpp_utils::ExtractIndependentType<bool&>()});
  }
};
