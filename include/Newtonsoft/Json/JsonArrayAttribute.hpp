// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.JsonContainerAttribute
#include "Newtonsoft/Json/JsonContainerAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonArrayAttribute
  class JsonArrayAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::JsonArrayAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonArrayAttribute*, "Newtonsoft.Json", "JsonArrayAttribute");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.JsonArrayAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10C0BF4
  // [AttributeUsageAttribute] Offset: 10C0BF4
  class JsonArrayAttribute : public ::Newtonsoft::Json::JsonContainerAttribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x17DB3E4
    // Implemented from: Newtonsoft.Json.JsonContainerAttribute
    // Base method: System.Void JsonContainerAttribute::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonArrayAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonArrayAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonArrayAttribute*, creationType>()));
    }
  }; // Newtonsoft.Json.JsonArrayAttribute
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::JsonArrayAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
