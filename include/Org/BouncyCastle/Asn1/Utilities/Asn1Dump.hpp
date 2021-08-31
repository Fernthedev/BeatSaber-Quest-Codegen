// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Object
  class Asn1Object;
  // Forward declaring type: DerApplicationSpecific
  class DerApplicationSpecific;
  // Forward declaring type: Asn1Encodable
  class Asn1Encodable;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Utilities
namespace Org::BouncyCastle::Asn1::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Utilities.Asn1Dump
  // [TokenAttribute] Offset: FFFFFFFF
  class Asn1Dump : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Asn1Dump
    Asn1Dump() noexcept {}
    // Get static field: static private readonly System.String NewLine
    static ::Il2CppString* _get_NewLine();
    // Set static field: static private readonly System.String NewLine
    static void _set_NewLine(::Il2CppString* value);
    // static private System.Void .cctor()
    // Offset: 0x17C3EA8
    static void _cctor();
    // static private System.Void AsString(System.String indent, System.Boolean verbose, Org.BouncyCastle.Asn1.Asn1Object obj, System.Text.StringBuilder buf)
    // Offset: 0x17C0CA8
    static void AsString(::Il2CppString* indent, bool verbose, Org::BouncyCastle::Asn1::Asn1Object* obj, System::Text::StringBuilder* buf);
    // static private System.String outputApplicationSpecific(System.String type, System.String indent, System.Boolean verbose, Org.BouncyCastle.Asn1.DerApplicationSpecific app)
    // Offset: 0x17C345C
    static ::Il2CppString* outputApplicationSpecific(::Il2CppString* type, ::Il2CppString* indent, bool verbose, Org::BouncyCastle::Asn1::DerApplicationSpecific* app);
    // static public System.String DumpAsString(Org.BouncyCastle.Asn1.Asn1Encodable obj)
    // Offset: 0x17C3CA4
    static ::Il2CppString* DumpAsString(Org::BouncyCastle::Asn1::Asn1Encodable* obj);
    // static public System.String DumpAsString(Org.BouncyCastle.Asn1.Asn1Encodable obj, System.Boolean verbose)
    // Offset: 0x17C3D0C
    static ::Il2CppString* DumpAsString(Org::BouncyCastle::Asn1::Asn1Encodable* obj, bool verbose);
    // static private System.String dumpBinaryDataAsString(System.String indent, System.Byte[] bytes)
    // Offset: 0x17C31EC
    static ::Il2CppString* dumpBinaryDataAsString(::Il2CppString* indent, ::Array<uint8_t>* bytes);
    // static private System.String calculateAscString(System.Byte[] bytes, System.Int32 off, System.Int32 len)
    // Offset: 0x17C3DDC
    static ::Il2CppString* calculateAscString(::Array<uint8_t>* bytes, int off, int len);
  }; // Org.BouncyCastle.Asn1.Utilities.Asn1Dump
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Utilities::Asn1Dump*, "Org.BouncyCastle.Asn1.Utilities", "Asn1Dump");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Utilities::Asn1Dump::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Asn1::Utilities::Asn1Dump::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Utilities::Asn1Dump*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Utilities::Asn1Dump::AsString
// Il2CppName: AsString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, bool, Org::BouncyCastle::Asn1::Asn1Object*, System::Text::StringBuilder*)>(&Org::BouncyCastle::Asn1::Utilities::Asn1Dump::AsString)> {
  static const MethodInfo* get() {
    static auto* indent = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* verbose = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Object")->byval_arg;
    static auto* buf = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Utilities::Asn1Dump*), "AsString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{indent, verbose, obj, buf});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Utilities::Asn1Dump::outputApplicationSpecific
// Il2CppName: outputApplicationSpecific
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Il2CppString*, bool, Org::BouncyCastle::Asn1::DerApplicationSpecific*)>(&Org::BouncyCastle::Asn1::Utilities::Asn1Dump::outputApplicationSpecific)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* indent = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* verbose = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* app = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerApplicationSpecific")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Utilities::Asn1Dump*), "outputApplicationSpecific", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, indent, verbose, app});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Utilities::Asn1Dump::DumpAsString
// Il2CppName: DumpAsString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(Org::BouncyCastle::Asn1::Asn1Encodable*)>(&Org::BouncyCastle::Asn1::Utilities::Asn1Dump::DumpAsString)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Encodable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Utilities::Asn1Dump*), "DumpAsString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Utilities::Asn1Dump::DumpAsString
// Il2CppName: DumpAsString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(Org::BouncyCastle::Asn1::Asn1Encodable*, bool)>(&Org::BouncyCastle::Asn1::Utilities::Asn1Dump::DumpAsString)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Encodable")->byval_arg;
    static auto* verbose = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Utilities::Asn1Dump*), "DumpAsString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, verbose});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Utilities::Asn1Dump::dumpBinaryDataAsString
// Il2CppName: dumpBinaryDataAsString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Array<uint8_t>*)>(&Org::BouncyCastle::Asn1::Utilities::Asn1Dump::dumpBinaryDataAsString)> {
  static const MethodInfo* get() {
    static auto* indent = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Utilities::Asn1Dump*), "dumpBinaryDataAsString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{indent, bytes});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Utilities::Asn1Dump::calculateAscString
// Il2CppName: calculateAscString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Asn1::Utilities::Asn1Dump::calculateAscString)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Utilities::Asn1Dump*), "calculateAscString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, off, len});
  }
};
