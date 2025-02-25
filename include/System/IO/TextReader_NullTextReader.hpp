// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.TextReader
#include "System/IO/TextReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.TextReader/System.IO.NullTextReader
  // [TokenAttribute] Offset: FFFFFFFF
  class TextReader::NullTextReader : public System::IO::TextReader {
    public:
    // Creating value type constructor for type: NullTextReader
    NullTextReader() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1833D38
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextReader::NullTextReader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::TextReader::NullTextReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextReader::NullTextReader*, creationType>()));
    }
    // public override System.Int32 Read(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1833F60
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Read(System.Char[] buffer, System.Int32 index, System.Int32 count)
    int Read(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.String ReadLine()
    // Offset: 0x1833F68
    // Implemented from: System.IO.TextReader
    // Base method: System.String TextReader::ReadLine()
    ::Il2CppString* ReadLine();
  }; // System.IO.TextReader/System.IO.NullTextReader
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::TextReader::NullTextReader*, "System.IO", "TextReader/NullTextReader");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::TextReader::NullTextReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::TextReader::NullTextReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::TextReader::NullTextReader::*)(::Array<::Il2CppChar>*, int, int)>(&System::IO::TextReader::NullTextReader::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader::NullTextReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::TextReader::NullTextReader::ReadLine
// Il2CppName: ReadLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::TextReader::NullTextReader::*)()>(&System::IO::TextReader::NullTextReader::ReadLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader::NullTextReader*), "ReadLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
