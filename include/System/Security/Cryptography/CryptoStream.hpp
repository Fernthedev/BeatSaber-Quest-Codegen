// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.Security.Cryptography.CryptoStreamMode
#include "System/Security/Cryptography/CryptoStreamMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: ICryptoTransform
  class ICryptoTransform;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x5F
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.CryptoStream
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9CA68
  class CryptoStream : public System::IO::Stream {
    public:
    // Nested type: System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable
    struct HopToThreadPoolAwaitable;
    // Nested type: System::Security::Cryptography::CryptoStream::$ReadAsyncInternal$d__34
    struct $ReadAsyncInternal$d__34;
    // Nested type: System::Security::Cryptography::CryptoStream::$WriteAsyncInternal$d__37
    struct $WriteAsyncInternal$d__37;
    // private System.IO.Stream _stream
    // Size: 0x8
    // Offset: 0x28
    System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Security.Cryptography.ICryptoTransform _Transform
    // Size: 0x8
    // Offset: 0x30
    System::Security::Cryptography::ICryptoTransform* Transform;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::ICryptoTransform*) == 0x8);
    // private System.Byte[] _InputBuffer
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* InputBuffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 _InputBufferIndex
    // Size: 0x4
    // Offset: 0x40
    int InputBufferIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _InputBlockSize
    // Size: 0x4
    // Offset: 0x44
    int InputBlockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte[] _OutputBuffer
    // Size: 0x8
    // Offset: 0x48
    ::Array<uint8_t>* OutputBuffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 _OutputBufferIndex
    // Size: 0x4
    // Offset: 0x50
    int OutputBufferIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _OutputBlockSize
    // Size: 0x4
    // Offset: 0x54
    int OutputBlockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Security.Cryptography.CryptoStreamMode _transformMode
    // Size: 0x4
    // Offset: 0x58
    System::Security::Cryptography::CryptoStreamMode transformMode;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::CryptoStreamMode) == 0x4);
    // private System.Boolean _canRead
    // Size: 0x1
    // Offset: 0x5C
    bool canRead;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _canWrite
    // Size: 0x1
    // Offset: 0x5D
    bool canWrite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _finalBlockTransformed
    // Size: 0x1
    // Offset: 0x5E
    bool finalBlockTransformed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CryptoStream
    CryptoStream(System::IO::Stream* stream_ = {}, System::Security::Cryptography::ICryptoTransform* Transform_ = {}, ::Array<uint8_t>* InputBuffer_ = {}, int InputBufferIndex_ = {}, int InputBlockSize_ = {}, ::Array<uint8_t>* OutputBuffer_ = {}, int OutputBufferIndex_ = {}, int OutputBlockSize_ = {}, System::Security::Cryptography::CryptoStreamMode transformMode_ = {}, bool canRead_ = {}, bool canWrite_ = {}, bool finalBlockTransformed_ = {}) noexcept : stream{stream_}, Transform{Transform_}, InputBuffer{InputBuffer_}, InputBufferIndex{InputBufferIndex_}, InputBlockSize{InputBlockSize_}, OutputBuffer{OutputBuffer_}, OutputBufferIndex{OutputBufferIndex_}, OutputBlockSize{OutputBlockSize_}, transformMode{transformMode_}, canRead{canRead_}, canWrite{canWrite_}, finalBlockTransformed{finalBlockTransformed_} {}
    // Get instance field: private System.IO.Stream _stream
    System::IO::Stream* _get__stream();
    // Set instance field: private System.IO.Stream _stream
    void _set__stream(System::IO::Stream* value);
    // Get instance field: private System.Security.Cryptography.ICryptoTransform _Transform
    System::Security::Cryptography::ICryptoTransform* _get__Transform();
    // Set instance field: private System.Security.Cryptography.ICryptoTransform _Transform
    void _set__Transform(System::Security::Cryptography::ICryptoTransform* value);
    // Get instance field: private System.Byte[] _InputBuffer
    ::Array<uint8_t>* _get__InputBuffer();
    // Set instance field: private System.Byte[] _InputBuffer
    void _set__InputBuffer(::Array<uint8_t>* value);
    // Get instance field: private System.Int32 _InputBufferIndex
    int _get__InputBufferIndex();
    // Set instance field: private System.Int32 _InputBufferIndex
    void _set__InputBufferIndex(int value);
    // Get instance field: private System.Int32 _InputBlockSize
    int _get__InputBlockSize();
    // Set instance field: private System.Int32 _InputBlockSize
    void _set__InputBlockSize(int value);
    // Get instance field: private System.Byte[] _OutputBuffer
    ::Array<uint8_t>* _get__OutputBuffer();
    // Set instance field: private System.Byte[] _OutputBuffer
    void _set__OutputBuffer(::Array<uint8_t>* value);
    // Get instance field: private System.Int32 _OutputBufferIndex
    int _get__OutputBufferIndex();
    // Set instance field: private System.Int32 _OutputBufferIndex
    void _set__OutputBufferIndex(int value);
    // Get instance field: private System.Int32 _OutputBlockSize
    int _get__OutputBlockSize();
    // Set instance field: private System.Int32 _OutputBlockSize
    void _set__OutputBlockSize(int value);
    // Get instance field: private System.Security.Cryptography.CryptoStreamMode _transformMode
    System::Security::Cryptography::CryptoStreamMode _get__transformMode();
    // Set instance field: private System.Security.Cryptography.CryptoStreamMode _transformMode
    void _set__transformMode(System::Security::Cryptography::CryptoStreamMode value);
    // Get instance field: private System.Boolean _canRead
    bool _get__canRead();
    // Set instance field: private System.Boolean _canRead
    void _set__canRead(bool value);
    // Get instance field: private System.Boolean _canWrite
    bool _get__canWrite();
    // Set instance field: private System.Boolean _canWrite
    void _set__canWrite(bool value);
    // Get instance field: private System.Boolean _finalBlockTransformed
    bool _get__finalBlockTransformed();
    // Set instance field: private System.Boolean _finalBlockTransformed
    void _set__finalBlockTransformed(bool value);
    // public System.Boolean get_HasFlushedFinalBlock()
    // Offset: 0x1988A6C
    bool get_HasFlushedFinalBlock();
    // public System.Void .ctor(System.IO.Stream stream, System.Security.Cryptography.ICryptoTransform transform, System.Security.Cryptography.CryptoStreamMode mode)
    // Offset: 0x19885BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CryptoStream* New_ctor(System::IO::Stream* stream, System::Security::Cryptography::ICryptoTransform* transform, System::Security::Cryptography::CryptoStreamMode mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::CryptoStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CryptoStream*, creationType>(stream, transform, mode)));
    }
    // public System.Void FlushFinalBlock()
    // Offset: 0x1988A74
    void FlushFinalBlock();
    // private System.Threading.Tasks.Task`1<System.Int32> ReadAsyncInternal(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1989710
    System::Threading::Tasks::Task_1<int>* ReadAsyncInternal(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task WriteAsyncInternal(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x198A044
    System::Threading::Tasks::Task* WriteAsyncInternal(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // public System.Void Clear()
    // Offset: 0x198A170
    void Clear();
    // private System.Void InitializeBuffer()
    // Offset: 0x198877C
    void InitializeBuffer();
    // public override System.Boolean get_CanRead()
    // Offset: 0x19888D4
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x19888DC
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x19888E4
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int64 get_Length()
    // Offset: 0x19888EC
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x198896C
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x19889EC
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Void Flush()
    // Offset: 0x1988CA8
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x1988CAC
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x1988D2C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Int32 Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x1988DAC
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(ByRef<::Array<uint8_t>*> buffer, int offset, int count);
    // public override System.Threading.Tasks.Task`1<System.Int32> ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1989468
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task`1<System.Int32> Stream::ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<int>* ReadAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x198984C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::Array<uint8_t>* buffer, int offset, int count);
    // public override System.Threading.Tasks.Task WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1989DA4
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task* WriteAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x198A180
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Security.Cryptography.CryptoStream
  #pragma pack(pop)
  static check_size<sizeof(CryptoStream), 94 + sizeof(bool)> __System_Security_Cryptography_CryptoStreamSizeCheck;
  static_assert(sizeof(CryptoStream) == 0x5F);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::CryptoStream*, "System.Security.Cryptography", "CryptoStream");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::get_HasFlushedFinalBlock
// Il2CppName: get_HasFlushedFinalBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::get_HasFlushedFinalBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "get_HasFlushedFinalBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::FlushFinalBlock
// Il2CppName: FlushFinalBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::FlushFinalBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "FlushFinalBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::ReadAsyncInternal
// Il2CppName: ReadAsyncInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<int>* (System::Security::Cryptography::CryptoStream::*)(::Array<uint8_t>*, int, int, System::Threading::CancellationToken)>(&System::Security::Cryptography::CryptoStream::ReadAsyncInternal)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "ReadAsyncInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::WriteAsyncInternal
// Il2CppName: WriteAsyncInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (System::Security::Cryptography::CryptoStream::*)(::Array<uint8_t>*, int, int, System::Threading::CancellationToken)>(&System::Security::Cryptography::CryptoStream::WriteAsyncInternal)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "WriteAsyncInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::InitializeBuffer
// Il2CppName: InitializeBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::InitializeBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "InitializeBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::get_CanSeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)(int64_t)>(&System::Security::Cryptography::CryptoStream::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)()>(&System::Security::Cryptography::CryptoStream::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Security::Cryptography::CryptoStream::*)(int64_t, System::IO::SeekOrigin)>(&System::Security::Cryptography::CryptoStream::Seek)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, origin});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)(int64_t)>(&System::Security::Cryptography::CryptoStream::SetLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::CryptoStream::*)(ByRef<::Array<uint8_t>*>, int, int)>(&System::Security::Cryptography::CryptoStream::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::ReadAsync
// Il2CppName: ReadAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<int>* (System::Security::Cryptography::CryptoStream::*)(::Array<uint8_t>*, int, int, System::Threading::CancellationToken)>(&System::Security::Cryptography::CryptoStream::ReadAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "ReadAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)(::Array<uint8_t>*, int, int)>(&System::Security::Cryptography::CryptoStream::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (System::Security::Cryptography::CryptoStream::*)(::Array<uint8_t>*, int, int, System::Threading::CancellationToken)>(&System::Security::Cryptography::CryptoStream::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::*)(bool)>(&System::Security::Cryptography::CryptoStream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
