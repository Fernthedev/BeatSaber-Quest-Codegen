#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeflateStreamNative)
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System::IO::Compression {
class __DeflateStreamNative__SafeDeflateStreamHandle;
}
namespace System::IO::Compression {
struct CompressionMode;
}
namespace System::IO {
class Stream;
}
namespace System {
class Exception;
}
namespace System::IO::Compression {
class __DeflateStreamNative__UnmanagedReadOrWrite;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::IO::Compression {
class DeflateStreamNative;
}
namespace System::IO::Compression {
class __DeflateStreamNative__SafeDeflateStreamHandle;
}
namespace System::IO::Compression {
class __DeflateStreamNative__UnmanagedReadOrWrite;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::DeflateStreamNative);
MARK_REF_PTR_T(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle);
MARK_REF_PTR_T(::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite);
// Type: ::UnmanagedReadOrWrite
namespace System::IO::Compression {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9551))
// CS Name: ::DeflateStreamNative::UnmanagedReadOrWrite*
class CORDL_TYPE __DeflateStreamNative__UnmanagedReadOrWrite : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x294432c size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x2944b84 size 0x14 virtual true final false
inline int32_t Invoke(::cordl_internals::intptr_t  buffer, int32_t  length, ::cordl_internals::intptr_t  data) ;

// Ctor Parameters [CppParam { name: "", ty: "__DeflateStreamNative__UnmanagedReadOrWrite", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DeflateStreamNative__UnmanagedReadOrWrite(__DeflateStreamNative__UnmanagedReadOrWrite && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DeflateStreamNative__UnmanagedReadOrWrite", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DeflateStreamNative__UnmanagedReadOrWrite(__DeflateStreamNative__UnmanagedReadOrWrite const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DeflateStreamNative__UnmanagedReadOrWrite()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite, 0x80>, "Size mismatch!");

} // namespace end def System::IO::Compression
// Type: ::SafeDeflateStreamHandle
namespace System::IO::Compression {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3334))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9552))
// CS Name: ::DeflateStreamNative::SafeDeflateStreamHandle*
class CORDL_TYPE __DeflateStreamNative__SafeDeflateStreamHandle : public ::System::Runtime::InteropServices::SafeHandle {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Runtime::InteropServices::SafeHandle)]{};

 __declspec(property(get=get_IsInvalid)) bool  IsInvalid;

/// @brief Method get_IsInvalid addr 0x2944b98 size 0x54 virtual true final false
inline bool get_IsInvalid() ;

static inline ::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle* New_ctor() ;

/// @brief Method .ctor addr 0x2944b28 size 0x58 virtual false final false
inline void _ctor() ;

/// @brief Method ReleaseHandle addr 0x2944bec size 0x88 virtual true final false
inline bool ReleaseHandle() ;

// Ctor Parameters [CppParam { name: "", ty: "__DeflateStreamNative__SafeDeflateStreamHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DeflateStreamNative__SafeDeflateStreamHandle(__DeflateStreamNative__SafeDeflateStreamHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DeflateStreamNative__SafeDeflateStreamHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DeflateStreamNative__SafeDeflateStreamHandle(__DeflateStreamNative__SafeDeflateStreamHandle const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DeflateStreamNative__SafeDeflateStreamHandle()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle, 0x20>, "Size mismatch!");

} // namespace end def System::IO::Compression
// Type: System.IO.Compression::DeflateStreamNative
namespace System::IO::Compression {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9553))
// CS Name: ::System.IO.Compression::DeflateStreamNative*
class CORDL_TYPE DeflateStreamNative : public ::System::Object {
public:
// Declarations
using SafeDeflateStreamHandle = ::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle;

using UnmanagedReadOrWrite = ::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field feeder offset 0x10
 __declspec(property(get=__get_feeder, put=__set_feeder)) ::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite*  feeder;

/// @brief Field base_stream offset 0x18
 __declspec(property(get=__get_base_stream, put=__set_base_stream)) ::System::IO::Stream*  base_stream;

/// @brief Field z_stream offset 0x20
 __declspec(property(get=__get_z_stream, put=__set_z_stream)) ::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*  z_stream;

/// @brief Field data offset 0x28
 __declspec(property(get=__get_data, put=__set_data)) ::System::Runtime::InteropServices::GCHandle  data;

/// @brief Field disposed offset 0x30
 __declspec(property(get=__get_disposed, put=__set_disposed)) bool  disposed;

/// @brief Field io_buffer offset 0x38
 __declspec(property(get=__get_io_buffer, put=__set_io_buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  io_buffer;

/// @brief Field last_error offset 0x40
 __declspec(property(get=__get_last_error, put=__set_last_error)) ::System::Exception*  last_error;

constexpr void __set_feeder(::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite*  value) ;

constexpr ::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite* __get_feeder() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite*> __get_feeder() const;

constexpr void __set_base_stream(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_base_stream() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_base_stream() const;

constexpr void __set_z_stream(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*  value) ;

constexpr ::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle* __get_z_stream() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*> __get_z_stream() const;

constexpr void __set_data(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr ::System::Runtime::InteropServices::GCHandle& __get_data() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __get_data() const;

constexpr void __set_disposed(bool  value) ;

constexpr bool& __get_disposed() ;

constexpr bool const& __get_disposed() const;

constexpr void __set_io_buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_io_buffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_io_buffer() const;

constexpr void __set_last_error(::System::Exception*  value) ;

constexpr ::System::Exception* __get_last_error() ;

constexpr ::cordl_internals::to_const_pointer<::System::Exception*> __get_last_error() const;

static inline ::System::IO::Compression::DeflateStreamNative* New_ctor() ;

/// @brief Method .ctor addr 0x2944324 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method Create addr 0x2942afc size 0x134 virtual false final false
static inline ::System::IO::Compression::DeflateStreamNative* Create(::System::IO::Stream*  compressedStream, ::System::IO::Compression::CompressionMode  mode, bool  gzip) ;

/// @brief Method Finalize addr 0x2944488 size 0x98 virtual true final false
inline void Finalize() ;

/// @brief Method Dispose addr 0x2942d9c size 0x104 virtual false final false
inline void Dispose(bool  disposing) ;

/// @brief Method Flush addr 0x29434ac size 0x54 virtual false final false
inline void Flush() ;

/// @brief Method ReadZStream addr 0x2942ee8 size 0x78 virtual false final false
inline int32_t ReadZStream(::cordl_internals::intptr_t  buffer, int32_t  length) ;

/// @brief Method WriteZStream addr 0x2943190 size 0x6c virtual false final false
inline void WriteZStream(::cordl_internals::intptr_t  buffer, int32_t  length) ;

/// @brief Method UnmanagedRead addr 0x29441ac size 0xbc virtual false final false
static inline int32_t UnmanagedRead(::cordl_internals::intptr_t  buffer, int32_t  length, ::cordl_internals::intptr_t  data) ;

/// @brief Method UnmanagedRead addr 0x29447b0 size 0x1a4 virtual false final false
inline int32_t UnmanagedRead(::cordl_internals::intptr_t  buffer, int32_t  length) ;

/// @brief Method UnmanagedWrite addr 0x2944268 size 0xbc virtual false final false
static inline int32_t UnmanagedWrite(::cordl_internals::intptr_t  buffer, int32_t  length, ::cordl_internals::intptr_t  data) ;

/// @brief Method UnmanagedWrite addr 0x2944954 size 0x1d4 virtual false final false
inline int32_t UnmanagedWrite(::cordl_internals::intptr_t  buffer, int32_t  length) ;

/// @brief Method CheckResult addr 0x2944584 size 0x134 virtual false final false
inline void CheckResult(int32_t  result, ::StringW  where) ;

/// @brief Method CreateZStream addr 0x29443f0 size 0x98 virtual false final false
static inline ::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle* CreateZStream(::System::IO::Compression::CompressionMode  compress, bool  gzip, ::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite*  feeder, ::cordl_internals::intptr_t  data) ;

/// @brief Method CloseZStream addr 0x2944b80 size 0x4 virtual false final false
static inline int32_t CloseZStream(::cordl_internals::intptr_t  stream) ;

/// @brief Method Flush addr 0x2944520 size 0x64 virtual false final false
static inline int32_t Flush(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*  stream) ;

/// @brief Method ReadZStream addr 0x29446b8 size 0x7c virtual false final false
static inline int32_t ReadZStream(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*  stream, ::cordl_internals::intptr_t  buffer, int32_t  length) ;

/// @brief Method WriteZStream addr 0x2944734 size 0x7c virtual false final false
static inline int32_t WriteZStream(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*  stream, ::cordl_internals::intptr_t  buffer, int32_t  length) ;

// Ctor Parameters [CppParam { name: "", ty: "DeflateStreamNative", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DeflateStreamNative(DeflateStreamNative && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeflateStreamNative", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeflateStreamNative(DeflateStreamNative const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DeflateStreamNative()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::DeflateStreamNative, 0x48>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::DeflateStreamNative);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::DeflateStreamNative*, "System.IO.Compression", "DeflateStreamNative");
NEED_NO_BOX(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*, "System.IO.Compression", "DeflateStreamNative/SafeDeflateStreamHandle");
NEED_NO_BOX(::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite*, "System.IO.Compression", "DeflateStreamNative/UnmanagedReadOrWrite");
