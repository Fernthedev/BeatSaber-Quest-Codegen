// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Bson.BsonToken
#include "Newtonsoft/Json/Bson/BsonToken.hpp"
// Including type: Newtonsoft.Json.Bson.BsonType
#include "Newtonsoft/Json/Bson/BsonType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonValue
  class BsonValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonValue);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonValue*, "Newtonsoft.Json.Bson", "BsonValue");
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Bson.BsonValue
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class BsonValue : public ::Newtonsoft::Json::Bson::BsonToken {
    public:
    public:
    // private readonly System.Object _value
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly Newtonsoft.Json.Bson.BsonType _type
    // Size: 0x1
    // Offset: 0x20
    ::Newtonsoft::Json::Bson::BsonType type;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Bson::BsonType) == 0x1);
    public:
    // Deleting conversion operator: operator ::Newtonsoft::Json::Bson::BsonToken*
    constexpr operator ::Newtonsoft::Json::Bson::BsonToken*() const noexcept = delete;
    // Get instance field reference: private readonly System.Object _value
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__value();
    // Get instance field reference: private readonly Newtonsoft.Json.Bson.BsonType _type
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Bson::BsonType& dyn__type();
    // public System.Void .ctor(System.Object value, Newtonsoft.Json.Bson.BsonType type)
    // Offset: 0x17CBF44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BsonValue* New_ctor(::Il2CppObject* value, ::Newtonsoft::Json::Bson::BsonType type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Bson::BsonValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BsonValue*, creationType>(value, type)));
    }
    // public override Newtonsoft.Json.Bson.BsonType get_Type()
    // Offset: 0x17CBF88
    // Implemented from: Newtonsoft.Json.Bson.BsonToken
    // Base method: Newtonsoft.Json.Bson.BsonType BsonToken::get_Type()
    ::Newtonsoft::Json::Bson::BsonType get_Type();
  }; // Newtonsoft.Json.Bson.BsonValue
  #pragma pack(pop)
  static check_size<sizeof(BsonValue), 32 + sizeof(::Newtonsoft::Json::Bson::BsonType)> __Newtonsoft_Json_Bson_BsonValueSizeCheck;
  static_assert(sizeof(BsonValue) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonValue::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Bson::BsonType (Newtonsoft::Json::Bson::BsonValue::*)()>(&Newtonsoft::Json::Bson::BsonValue::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonValue*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
