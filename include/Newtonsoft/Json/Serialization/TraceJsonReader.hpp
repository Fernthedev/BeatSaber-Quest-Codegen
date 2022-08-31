// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.JsonReader
#include "Newtonsoft/Json/JsonReader.hpp"
// Including type: Newtonsoft.Json.IJsonLineInfo
#include "Newtonsoft/Json/IJsonLineInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonTextWriter
  class JsonTextWriter;
  // Skipping declaration: JsonToken because it is already included!
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: StringWriter
  class StringWriter;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Skipping declaration: Nullable`1 because it is already included!
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: TraceJsonReader
  class TraceJsonReader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::TraceJsonReader);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::TraceJsonReader*, "Newtonsoft.Json.Serialization", "TraceJsonReader");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Serialization.TraceJsonReader
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class TraceJsonReader : public ::Newtonsoft::Json::JsonReader/*, public ::Newtonsoft::Json::IJsonLineInfo*/ {
    public:
    public:
    // private readonly Newtonsoft.Json.JsonReader _innerReader
    // Size: 0x8
    // Offset: 0x78
    ::Newtonsoft::Json::JsonReader* innerReader;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::JsonReader*) == 0x8);
    // private readonly Newtonsoft.Json.JsonTextWriter _textWriter
    // Size: 0x8
    // Offset: 0x80
    ::Newtonsoft::Json::JsonTextWriter* textWriter;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::JsonTextWriter*) == 0x8);
    // private readonly System.IO.StringWriter _sw
    // Size: 0x8
    // Offset: 0x88
    ::System::IO::StringWriter* sw;
    // Field size check
    static_assert(sizeof(::System::IO::StringWriter*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Newtonsoft::Json::IJsonLineInfo
    operator ::Newtonsoft::Json::IJsonLineInfo() noexcept {
      return *reinterpret_cast<::Newtonsoft::Json::IJsonLineInfo*>(this);
    }
    // Creating interface conversion operator: i_IJsonLineInfo
    inline ::Newtonsoft::Json::IJsonLineInfo* i_IJsonLineInfo() noexcept {
      return reinterpret_cast<::Newtonsoft::Json::IJsonLineInfo*>(this);
    }
    // Get instance field reference: private readonly Newtonsoft.Json.JsonReader _innerReader
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::JsonReader*& dyn__innerReader();
    // Get instance field reference: private readonly Newtonsoft.Json.JsonTextWriter _textWriter
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::JsonTextWriter*& dyn__textWriter();
    // Get instance field reference: private readonly System.IO.StringWriter _sw
    [[deprecated("Use field access instead!")]] ::System::IO::StringWriter*& dyn__sw();
    // private System.Int32 Newtonsoft.Json.IJsonLineInfo.get_LineNumber()
    // Offset: 0x20BDCDC
    int Newtonsoft_Json_IJsonLineInfo_get_LineNumber();
    // private System.Int32 Newtonsoft.Json.IJsonLineInfo.get_LinePosition()
    // Offset: 0x20BDDA4
    int Newtonsoft_Json_IJsonLineInfo_get_LinePosition();
    // public System.Void .ctor(Newtonsoft.Json.JsonReader innerReader)
    // Offset: 0x20BD650
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceJsonReader* New_ctor(::Newtonsoft::Json::JsonReader* innerReader) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::TraceJsonReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraceJsonReader*, creationType>(innerReader)));
    }
    // public System.String GetDeserializedJsonMessage()
    // Offset: 0x20BD77C
    ::StringW GetDeserializedJsonMessage();
    // private System.Boolean Newtonsoft.Json.IJsonLineInfo.HasLineInfo()
    // Offset: 0x20BDC18
    bool Newtonsoft_Json_IJsonLineInfo_HasLineInfo();
    // public override System.Int32 get_Depth()
    // Offset: 0x20BDB54
    // Implemented from: Newtonsoft.Json.JsonReader
    // Base method: System.Int32 JsonReader::get_Depth()
    int get_Depth();
    // public override System.String get_Path()
    // Offset: 0x20BDB74
    // Implemented from: Newtonsoft.Json.JsonReader
    // Base method: System.String JsonReader::get_Path()
    ::StringW get_Path();
    // public override Newtonsoft.Json.JsonToken get_TokenType()
    // Offset: 0x20BDB94
    // Implemented from: Newtonsoft.Json.JsonReader
    // Base method: Newtonsoft.Json.JsonToken JsonReader::get_TokenType()
    ::Newtonsoft::Json::JsonToken get_TokenType();
    // public override System.Object get_Value()
    // Offset: 0x20BDBB4
    // Implemented from: Newtonsoft.Json.JsonReader
    // Base method: System.Object JsonReader::get_Value()
    ::Il2CppObject* get_Value();
    // public override System.Type get_ValueType()
    // Offset: 0x20BDBD4
    // Implemented from: Newtonsoft.Json.JsonReader
    // Base method: System.Type JsonReader::get_ValueType()
    ::System::Type* get_ValueType();
    // public override System.Boolean Read()
    // Offset: 0x20BD79C
    // Implemented from: Newtonsoft.Json.JsonReader
    // Base method: System.Boolean JsonReader::Read()
    bool Read();
    // public override System.Nullable`1<System.Int32> ReadAsInt32()
    // Offset: 0x20BD804
    // Implemented from: Newtonsoft.Json.JsonReader
    // Base method: System.Nullable`1<System.Int32> JsonReader::ReadAsInt32()
    ::System::Nullable_1<int> ReadAsInt32();
    // public override System.String ReadAsString()
    // Offset: 0x20BD86C
    // Implemented from: Newtonsoft.Json.JsonReader
    // Base method: System.String JsonReader::ReadAsString()
    ::StringW ReadAsString();
    // public override System.Byte[] ReadAsBytes()
    // Offset: 0x20BD8D4
    // Implemented from: Newtonsoft.Json.JsonReader
    // Base method: System.Byte[] JsonReader::ReadAsBytes()
    ::ArrayW<uint8_t> ReadAsBytes();
    // public override System.Nullable`1<System.Decimal> ReadAsDecimal()
    // Offset: 0x20BD940
    // Implemented from: Newtonsoft.Json.JsonReader
    // Base method: System.Nullable`1<System.Decimal> JsonReader::ReadAsDecimal()
    ::System::Nullable_1<::System::Decimal> ReadAsDecimal();
    // public override System.Nullable`1<System.Double> ReadAsDouble()
    // Offset: 0x20BD99C
    // Implemented from: Newtonsoft.Json.JsonReader
    // Base method: System.Nullable`1<System.Double> JsonReader::ReadAsDouble()
    ::System::Nullable_1<double> ReadAsDouble();
    // public override System.Nullable`1<System.Boolean> ReadAsBoolean()
    // Offset: 0x20BDA14
    // Implemented from: Newtonsoft.Json.JsonReader
    // Base method: System.Nullable`1<System.Boolean> JsonReader::ReadAsBoolean()
    ::System::Nullable_1<bool> ReadAsBoolean();
    // public override System.Nullable`1<System.DateTime> ReadAsDateTime()
    // Offset: 0x20BDA80
    // Implemented from: Newtonsoft.Json.JsonReader
    // Base method: System.Nullable`1<System.DateTime> JsonReader::ReadAsDateTime()
    ::System::Nullable_1<::System::DateTime> ReadAsDateTime();
    // public override System.Nullable`1<System.DateTimeOffset> ReadAsDateTimeOffset()
    // Offset: 0x20BDAF8
    // Implemented from: Newtonsoft.Json.JsonReader
    // Base method: System.Nullable`1<System.DateTimeOffset> JsonReader::ReadAsDateTimeOffset()
    ::System::Nullable_1<::System::DateTimeOffset> ReadAsDateTimeOffset();
    // public override System.Void Close()
    // Offset: 0x20BDBF4
    // Implemented from: Newtonsoft.Json.JsonReader
    // Base method: System.Void JsonReader::Close()
    void Close();
  }; // Newtonsoft.Json.Serialization.TraceJsonReader
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonReader::Newtonsoft_Json_IJsonLineInfo_get_LineNumber
// Il2CppName: Newtonsoft.Json.IJsonLineInfo.get_LineNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&Newtonsoft::Json::Serialization::TraceJsonReader::Newtonsoft_Json_IJsonLineInfo_get_LineNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonReader*), "Newtonsoft.Json.IJsonLineInfo.get_LineNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonReader::Newtonsoft_Json_IJsonLineInfo_get_LinePosition
// Il2CppName: Newtonsoft.Json.IJsonLineInfo.get_LinePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&Newtonsoft::Json::Serialization::TraceJsonReader::Newtonsoft_Json_IJsonLineInfo_get_LinePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonReader*), "Newtonsoft.Json.IJsonLineInfo.get_LinePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonReader::GetDeserializedJsonMessage
// Il2CppName: GetDeserializedJsonMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&Newtonsoft::Json::Serialization::TraceJsonReader::GetDeserializedJsonMessage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonReader*), "GetDeserializedJsonMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonReader::Newtonsoft_Json_IJsonLineInfo_HasLineInfo
// Il2CppName: Newtonsoft.Json.IJsonLineInfo.HasLineInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&Newtonsoft::Json::Serialization::TraceJsonReader::Newtonsoft_Json_IJsonLineInfo_HasLineInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonReader*), "Newtonsoft.Json.IJsonLineInfo.HasLineInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonReader::get_Depth
// Il2CppName: get_Depth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&Newtonsoft::Json::Serialization::TraceJsonReader::get_Depth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonReader*), "get_Depth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonReader::get_Path
// Il2CppName: get_Path
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&Newtonsoft::Json::Serialization::TraceJsonReader::get_Path)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonReader*), "get_Path", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonReader::get_TokenType
// Il2CppName: get_TokenType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonToken (Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&Newtonsoft::Json::Serialization::TraceJsonReader::get_TokenType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonReader*), "get_TokenType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonReader::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&Newtonsoft::Json::Serialization::TraceJsonReader::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonReader*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonReader::get_ValueType
// Il2CppName: get_ValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&Newtonsoft::Json::Serialization::TraceJsonReader::get_ValueType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonReader*), "get_ValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&Newtonsoft::Json::Serialization::TraceJsonReader::Read)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsInt32
// Il2CppName: ReadAsInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int> (Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsInt32)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonReader*), "ReadAsInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsString
// Il2CppName: ReadAsString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonReader*), "ReadAsString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsBytes
// Il2CppName: ReadAsBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonReader*), "ReadAsBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDecimal
// Il2CppName: ReadAsDecimal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::Decimal> (Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDecimal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonReader*), "ReadAsDecimal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDouble
// Il2CppName: ReadAsDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<double> (Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDouble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonReader*), "ReadAsDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsBoolean
// Il2CppName: ReadAsBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsBoolean)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonReader*), "ReadAsBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDateTime
// Il2CppName: ReadAsDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDateTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonReader*), "ReadAsDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDateTimeOffset
// Il2CppName: ReadAsDateTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDateTimeOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonReader*), "ReadAsDateTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::TraceJsonReader::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&Newtonsoft::Json::Serialization::TraceJsonReader::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::TraceJsonReader*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
