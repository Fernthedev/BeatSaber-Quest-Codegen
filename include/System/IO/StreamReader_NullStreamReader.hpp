// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.StreamReader
#include "System/IO/StreamReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.StreamReader/System.IO.NullStreamReader
  // [TokenAttribute] Offset: FFFFFFFF
  class StreamReader::NullStreamReader : public System::IO::StreamReader {
    public:
    // Creating value type constructor for type: NullStreamReader
    NullStreamReader() noexcept {}
    // public override System.IO.Stream get_BaseStream()
    // Offset: 0x19855C8
    // Implemented from: System.IO.StreamReader
    // Base method: System.IO.Stream StreamReader::get_BaseStream()
    System::IO::Stream* get_BaseStream();
    // public override System.Text.Encoding get_CurrentEncoding()
    // Offset: 0x1985630
    // Implemented from: System.IO.StreamReader
    // Base method: System.Text.Encoding StreamReader::get_CurrentEncoding()
    System::Text::Encoding* get_CurrentEncoding();
    // System.Void .ctor()
    // Offset: 0x1985528
    // Implemented from: System.IO.StreamReader
    // Base method: System.Void StreamReader::.ctor()
    // Base method: System.Void TextReader::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader::NullStreamReader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::NullStreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader::NullStreamReader*, creationType>()));
    }
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1985638
    // Implemented from: System.IO.StreamReader
    // Base method: System.Void StreamReader::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Int32 Peek()
    // Offset: 0x198563C
    // Implemented from: System.IO.StreamReader
    // Base method: System.Int32 StreamReader::Peek()
    int Peek();
    // public override System.Int32 Read()
    // Offset: 0x1985644
    // Implemented from: System.IO.StreamReader
    // Base method: System.Int32 StreamReader::Read()
    int Read();
    // public override System.Int32 Read(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x198564C
    // Implemented from: System.IO.StreamReader
    // Base method: System.Int32 StreamReader::Read(System.Char[] buffer, System.Int32 index, System.Int32 count)
    int Read(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.String ReadLine()
    // Offset: 0x1985654
    // Implemented from: System.IO.StreamReader
    // Base method: System.String StreamReader::ReadLine()
    ::Il2CppString* ReadLine();
    // public override System.String ReadToEnd()
    // Offset: 0x198565C
    // Implemented from: System.IO.StreamReader
    // Base method: System.String StreamReader::ReadToEnd()
    ::Il2CppString* ReadToEnd();
    // override System.Int32 ReadBuffer()
    // Offset: 0x19856AC
    // Implemented from: System.IO.StreamReader
    // Base method: System.Int32 StreamReader::ReadBuffer()
    int ReadBuffer();
  }; // System.IO.StreamReader/System.IO.NullStreamReader
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::StreamReader::NullStreamReader*, "System.IO", "StreamReader/NullStreamReader");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::StreamReader::NullStreamReader::get_BaseStream
// Il2CppName: get_BaseStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream* (System::IO::StreamReader::NullStreamReader::*)()>(&System::IO::StreamReader::NullStreamReader::get_BaseStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader::NullStreamReader*), "get_BaseStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::NullStreamReader::get_CurrentEncoding
// Il2CppName: get_CurrentEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding* (System::IO::StreamReader::NullStreamReader::*)()>(&System::IO::StreamReader::NullStreamReader::get_CurrentEncoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader::NullStreamReader*), "get_CurrentEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::NullStreamReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamReader::NullStreamReader::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamReader::NullStreamReader::*)(bool)>(&System::IO::StreamReader::NullStreamReader::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader::NullStreamReader*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::NullStreamReader::Peek
// Il2CppName: Peek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::StreamReader::NullStreamReader::*)()>(&System::IO::StreamReader::NullStreamReader::Peek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader::NullStreamReader*), "Peek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::NullStreamReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::StreamReader::NullStreamReader::*)()>(&System::IO::StreamReader::NullStreamReader::Read)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader::NullStreamReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::NullStreamReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::StreamReader::NullStreamReader::*)(::Array<::Il2CppChar>*, int, int)>(&System::IO::StreamReader::NullStreamReader::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader::NullStreamReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::NullStreamReader::ReadLine
// Il2CppName: ReadLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::StreamReader::NullStreamReader::*)()>(&System::IO::StreamReader::NullStreamReader::ReadLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader::NullStreamReader*), "ReadLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::NullStreamReader::ReadToEnd
// Il2CppName: ReadToEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::StreamReader::NullStreamReader::*)()>(&System::IO::StreamReader::NullStreamReader::ReadToEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader::NullStreamReader*), "ReadToEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::NullStreamReader::ReadBuffer
// Il2CppName: ReadBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::StreamReader::NullStreamReader::*)()>(&System::IO::StreamReader::NullStreamReader::ReadBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader::NullStreamReader*), "ReadBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
