// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.InteropServices.GCHandle
#include "System/Runtime/InteropServices/GCHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO::Compression
namespace System::IO::Compression {
  // Forward declaring type: CompressionMode
  struct CompressionMode;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.DeflateStreamNative
  // [TokenAttribute] Offset: FFFFFFFF
  class DeflateStreamNative : public ::Il2CppObject {
    public:
    // Nested type: System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite
    class UnmanagedReadOrWrite;
    // Nested type: System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle
    class SafeDeflateStreamHandle;
    // private System.IO.Compression.DeflateStreamNative/System.IO.Compression.UnmanagedReadOrWrite feeder
    // Size: 0x8
    // Offset: 0x10
    System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite* feeder;
    // Field size check
    static_assert(sizeof(System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite*) == 0x8);
    // private System.IO.Stream base_stream
    // Size: 0x8
    // Offset: 0x18
    System::IO::Stream* base_stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.IO.Compression.DeflateStreamNative/System.IO.Compression.SafeDeflateStreamHandle z_stream
    // Size: 0x8
    // Offset: 0x20
    System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle* z_stream;
    // Field size check
    static_assert(sizeof(System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle*) == 0x8);
    // private System.Runtime.InteropServices.GCHandle data
    // Size: 0x4
    // Offset: 0x28
    System::Runtime::InteropServices::GCHandle data;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::GCHandle) == 0x4);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x2C
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: io_buffer
    char __padding4[0x3] = {};
    // private System.Byte[] io_buffer
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* io_buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: DeflateStreamNative
    DeflateStreamNative(System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite* feeder_ = {}, System::IO::Stream* base_stream_ = {}, System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle* z_stream_ = {}, System::Runtime::InteropServices::GCHandle data_ = {}, bool disposed_ = {}, ::Array<uint8_t>* io_buffer_ = {}) noexcept : feeder{feeder_}, base_stream{base_stream_}, z_stream{z_stream_}, data{data_}, disposed{disposed_}, io_buffer{io_buffer_} {}
    // Get instance field reference: private System.IO.Compression.DeflateStreamNative/System.IO.Compression.UnmanagedReadOrWrite feeder
    System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite*& dyn_feeder();
    // Get instance field reference: private System.IO.Stream base_stream
    System::IO::Stream*& dyn_base_stream();
    // Get instance field reference: private System.IO.Compression.DeflateStreamNative/System.IO.Compression.SafeDeflateStreamHandle z_stream
    System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle*& dyn_z_stream();
    // Get instance field reference: private System.Runtime.InteropServices.GCHandle data
    System::Runtime::InteropServices::GCHandle& dyn_data();
    // Get instance field reference: private System.Boolean disposed
    bool& dyn_disposed();
    // Get instance field reference: private System.Byte[] io_buffer
    ::Array<uint8_t>*& dyn_io_buffer();
    // static public System.IO.Compression.DeflateStreamNative Create(System.IO.Stream compressedStream, System.IO.Compression.CompressionMode mode, System.Boolean gzip)
    // Offset: 0x18BDDB0
    static System::IO::Compression::DeflateStreamNative* Create(System::IO::Stream* compressedStream, System::IO::Compression::CompressionMode mode, bool gzip);
    // public System.Void Dispose(System.Boolean disposing)
    // Offset: 0x18BDF54
    void Dispose(bool disposing);
    // public System.Void Flush()
    // Offset: 0x18BE624
    void Flush();
    // public System.Int32 ReadZStream(System.IntPtr buffer, System.Int32 length)
    // Offset: 0x18BE068
    int ReadZStream(System::IntPtr buffer, int length);
    // public System.Void WriteZStream(System.IntPtr buffer, System.Int32 length)
    // Offset: 0x18BE2FC
    void WriteZStream(System::IntPtr buffer, int length);
    // static private System.Int32 UnmanagedRead(System.IntPtr buffer, System.Int32 length, System.IntPtr data)
    // Offset: 0x18BF9A8
    static int UnmanagedRead(System::IntPtr buffer, int length, System::IntPtr data);
    // private System.Int32 UnmanagedRead(System.IntPtr buffer, System.Int32 length)
    // Offset: 0x18BFEA0
    int UnmanagedRead(System::IntPtr buffer, int length);
    // static private System.Int32 UnmanagedWrite(System.IntPtr buffer, System.Int32 length, System.IntPtr data)
    // Offset: 0x18BFA74
    static int UnmanagedWrite(System::IntPtr buffer, int length, System::IntPtr data);
    // private System.Int32 UnmanagedWrite(System.IntPtr buffer, System.Int32 length)
    // Offset: 0x18BFFC0
    int UnmanagedWrite(System::IntPtr buffer, int length);
    // static private System.Void CheckResult(System.Int32 result, System.String where)
    // Offset: 0x18BFCD4
    static void CheckResult(int result, ::Il2CppString* where);
    // static private System.IO.Compression.DeflateStreamNative/System.IO.Compression.SafeDeflateStreamHandle CreateZStream(System.IO.Compression.CompressionMode compress, System.Boolean gzip, System.IO.Compression.DeflateStreamNative/System.IO.Compression.UnmanagedReadOrWrite feeder, System.IntPtr data)
    // Offset: 0x18BFB58
    static System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle* CreateZStream(System::IO::Compression::CompressionMode compress, bool gzip, System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite* feeder, System::IntPtr data);
    // static private System.Int32 CloseZStream(System.IntPtr stream)
    // Offset: 0x18C0168
    static int CloseZStream(System::IntPtr stream);
    // static private System.Int32 Flush(System.IO.Compression.DeflateStreamNative/System.IO.Compression.SafeDeflateStreamHandle stream)
    // Offset: 0x18BFC64
    static int Flush(System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle* stream);
    // static private System.Int32 ReadZStream(System.IO.Compression.DeflateStreamNative/System.IO.Compression.SafeDeflateStreamHandle stream, System.IntPtr buffer, System.Int32 length)
    // Offset: 0x18BFDA0
    static int ReadZStream(System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle* stream, System::IntPtr buffer, int length);
    // static private System.Int32 WriteZStream(System.IO.Compression.DeflateStreamNative/System.IO.Compression.SafeDeflateStreamHandle stream, System.IntPtr buffer, System.Int32 length)
    // Offset: 0x18BFE20
    static int WriteZStream(System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle* stream, System::IntPtr buffer, int length);
    // private System.Void .ctor()
    // Offset: 0x18BFB40
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeflateStreamNative* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Compression::DeflateStreamNative::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeflateStreamNative*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x18BFBF8
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.IO.Compression.DeflateStreamNative
  #pragma pack(pop)
  static check_size<sizeof(DeflateStreamNative), 48 + sizeof(::Array<uint8_t>*)> __System_IO_Compression_DeflateStreamNativeSizeCheck;
  static_assert(sizeof(DeflateStreamNative) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::Compression::DeflateStreamNative*, "System.IO.Compression", "DeflateStreamNative");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Compression::DeflateStreamNative* (*)(System::IO::Stream*, System::IO::Compression::CompressionMode, bool)>(&System::IO::Compression::DeflateStreamNative::Create)> {
  static const MethodInfo* get() {
    static auto* compressedStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "CompressionMode")->byval_arg;
    static auto* gzip = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{compressedStream, mode, gzip});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStreamNative::*)(bool)>(&System::IO::Compression::DeflateStreamNative::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStreamNative::*)()>(&System::IO::Compression::DeflateStreamNative::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::ReadZStream
// Il2CppName: ReadZStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::DeflateStreamNative::*)(System::IntPtr, int)>(&System::IO::Compression::DeflateStreamNative::ReadZStream)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative*), "ReadZStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, length});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::WriteZStream
// Il2CppName: WriteZStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStreamNative::*)(System::IntPtr, int)>(&System::IO::Compression::DeflateStreamNative::WriteZStream)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative*), "WriteZStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, length});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::UnmanagedRead
// Il2CppName: UnmanagedRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IntPtr, int, System::IntPtr)>(&System::IO::Compression::DeflateStreamNative::UnmanagedRead)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative*), "UnmanagedRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, length, data});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::UnmanagedRead
// Il2CppName: UnmanagedRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::DeflateStreamNative::*)(System::IntPtr, int)>(&System::IO::Compression::DeflateStreamNative::UnmanagedRead)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative*), "UnmanagedRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, length});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::UnmanagedWrite
// Il2CppName: UnmanagedWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IntPtr, int, System::IntPtr)>(&System::IO::Compression::DeflateStreamNative::UnmanagedWrite)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative*), "UnmanagedWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, length, data});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::UnmanagedWrite
// Il2CppName: UnmanagedWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::DeflateStreamNative::*)(System::IntPtr, int)>(&System::IO::Compression::DeflateStreamNative::UnmanagedWrite)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative*), "UnmanagedWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, length});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::CheckResult
// Il2CppName: CheckResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::Il2CppString*)>(&System::IO::Compression::DeflateStreamNative::CheckResult)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* where = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative*), "CheckResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, where});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::CreateZStream
// Il2CppName: CreateZStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle* (*)(System::IO::Compression::CompressionMode, bool, System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite*, System::IntPtr)>(&System::IO::Compression::DeflateStreamNative::CreateZStream)> {
  static const MethodInfo* get() {
    static auto* compress = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "CompressionMode")->byval_arg;
    static auto* gzip = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* feeder = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "DeflateStreamNative/UnmanagedReadOrWrite")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative*), "CreateZStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{compress, gzip, feeder, data});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::CloseZStream
// Il2CppName: CloseZStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IntPtr)>(&System::IO::Compression::DeflateStreamNative::CloseZStream)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative*), "CloseZStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle*)>(&System::IO::Compression::DeflateStreamNative::Flush)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "DeflateStreamNative/SafeDeflateStreamHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::ReadZStream
// Il2CppName: ReadZStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle*, System::IntPtr, int)>(&System::IO::Compression::DeflateStreamNative::ReadZStream)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "DeflateStreamNative/SafeDeflateStreamHandle")->byval_arg;
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative*), "ReadZStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, buffer, length});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::WriteZStream
// Il2CppName: WriteZStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle*, System::IntPtr, int)>(&System::IO::Compression::DeflateStreamNative::WriteZStream)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "DeflateStreamNative/SafeDeflateStreamHandle")->byval_arg;
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative*), "WriteZStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, buffer, length});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStreamNative::*)()>(&System::IO::Compression::DeflateStreamNative::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
