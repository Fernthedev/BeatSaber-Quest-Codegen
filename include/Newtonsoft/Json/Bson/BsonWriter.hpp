// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.JsonWriter
#include "Newtonsoft/Json/JsonWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonToken
  class BsonToken;
  // Forward declaring type: BsonType
  struct BsonType;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonWriter
  class BsonWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonWriter*, "Newtonsoft.Json.Bson", "BsonWriter");
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Bson.BsonWriter
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class BsonWriter : public ::Newtonsoft::Json::JsonWriter {
    public:
    public:
    // private Newtonsoft.Json.Bson.BsonToken _root
    // Size: 0x8
    // Offset: 0x60
    ::Newtonsoft::Json::Bson::BsonToken* root;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Bson::BsonToken*) == 0x8);
    // private Newtonsoft.Json.Bson.BsonToken _parent
    // Size: 0x8
    // Offset: 0x68
    ::Newtonsoft::Json::Bson::BsonToken* parent;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Bson::BsonToken*) == 0x8);
    // private System.String _propertyName
    // Size: 0x8
    // Offset: 0x70
    ::StringW propertyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private Newtonsoft.Json.Bson.BsonToken _root
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Bson::BsonToken*& dyn__root();
    // Get instance field reference: private Newtonsoft.Json.Bson.BsonToken _parent
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Bson::BsonToken*& dyn__parent();
    // Get instance field reference: private System.String _propertyName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__propertyName();
    // private System.Void AddValue(System.Object value, Newtonsoft.Json.Bson.BsonType type)
    // Offset: 0x17CBF90
    void AddValue(::Il2CppObject* value, ::Newtonsoft::Json::Bson::BsonType type);
    // System.Void AddToken(Newtonsoft.Json.Bson.BsonToken token)
    // Offset: 0x17CC00C
    void AddToken(::Newtonsoft::Json::Bson::BsonToken* token);
    // public System.Void WriteObjectId(System.Byte[] value)
    // Offset: 0x17CC1D4
    void WriteObjectId(::ArrayW<uint8_t> value);
    // public System.Void WriteRegex(System.String pattern, System.String options)
    // Offset: 0x17CC2A0
    void WriteRegex(::StringW pattern, ::StringW options);
  }; // Newtonsoft.Json.Bson.BsonWriter
  #pragma pack(pop)
  static check_size<sizeof(BsonWriter), 112 + sizeof(::StringW)> __Newtonsoft_Json_Bson_BsonWriterSizeCheck;
  static_assert(sizeof(BsonWriter) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonWriter::AddValue
// Il2CppName: AddValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonWriter::*)(::Il2CppObject*, ::Newtonsoft::Json::Bson::BsonType)>(&Newtonsoft::Json::Bson::BsonWriter::AddValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Bson", "BsonType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonWriter*), "AddValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, type});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonWriter::AddToken
// Il2CppName: AddToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonWriter::*)(::Newtonsoft::Json::Bson::BsonToken*)>(&Newtonsoft::Json::Bson::BsonWriter::AddToken)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Bson", "BsonToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonWriter*), "AddToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonWriter::WriteObjectId
// Il2CppName: WriteObjectId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonWriter::*)(::ArrayW<uint8_t>)>(&Newtonsoft::Json::Bson::BsonWriter::WriteObjectId)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonWriter*), "WriteObjectId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonWriter::WriteRegex
// Il2CppName: WriteRegex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonWriter::*)(::StringW, ::StringW)>(&Newtonsoft::Json::Bson::BsonWriter::WriteRegex)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonWriter*), "WriteRegex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern, options});
  }
};
