#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResponseStream)
namespace System::Net {
class HttpListenerResponse;
}
namespace System {
class Object;
}
namespace System::IO {
class MemoryStream;
}
namespace System {
class IAsyncResult;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace System::Net {
class ResponseStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ResponseStream);
// Type: System.Net::ResponseStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9199))
// CS Name: ::System.Net::ResponseStream*
class CORDL_TYPE ResponseStream : public ::System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::IO::Stream)]{};

/// @brief Field response offset 0x28
 __declspec(property(get=__get_response, put=__set_response)) ::System::Net::HttpListenerResponse*  response;

/// @brief Field ignore_errors offset 0x30
 __declspec(property(get=__get_ignore_errors, put=__set_ignore_errors)) bool  ignore_errors;

/// @brief Field disposed offset 0x31
 __declspec(property(get=__get_disposed, put=__set_disposed)) bool  disposed;

/// @brief Field trailer_sent offset 0x32
 __declspec(property(get=__get_trailer_sent, put=__set_trailer_sent)) bool  trailer_sent;

/// @brief Field stream offset 0x38
 __declspec(property(get=__get_stream, put=__set_stream)) ::System::IO::Stream*  stream;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

constexpr void __set_response(::System::Net::HttpListenerResponse*  value) ;

constexpr ::System::Net::HttpListenerResponse* __get_response() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerResponse*> __get_response() const;

constexpr void __set_ignore_errors(bool  value) ;

constexpr bool& __get_ignore_errors() ;

constexpr bool const& __get_ignore_errors() const;

constexpr void __set_disposed(bool  value) ;

constexpr bool& __get_disposed() ;

constexpr bool const& __get_disposed() const;

constexpr void __set_trailer_sent(bool  value) ;

constexpr bool& __get_trailer_sent() ;

constexpr bool const& __get_trailer_sent() const;

constexpr void __set_stream(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_stream() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_stream() const;

static inline void setStaticF_crlf(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_crlf() ;

static inline ::System::Net::ResponseStream* New_ctor(::System::IO::Stream*  stream, ::System::Net::HttpListenerResponse*  response, bool  ignore_errors) ;

/// @brief Method .ctor addr 0x29d6240 size 0x84 virtual false final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Net::HttpListenerResponse*  response, bool  ignore_errors) ;

/// @brief Method get_CanRead addr 0x29d62c4 size 0x8 virtual true final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x29d62cc size 0x8 virtual true final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0x29d62d4 size 0x8 virtual true final false
inline bool get_CanWrite() ;

/// @brief Method get_Length addr 0x29d62dc size 0x40 virtual true final false
inline int64_t get_Length() ;

/// @brief Method get_Position addr 0x29d631c size 0x40 virtual true final false
inline int64_t get_Position() ;

/// @brief Method set_Position addr 0x29d635c size 0x40 virtual true final false
inline void set_Position(int64_t  value) ;

/// @brief Method Close addr 0x29d639c size 0x264 virtual true final false
inline void Close() ;

/// @brief Method GetHeaders addr 0x29d6600 size 0x15c virtual false final false
inline ::System::IO::MemoryStream* GetHeaders(bool  closing) ;

/// @brief Method Flush addr 0x29d6908 size 0x4 virtual true final false
inline void Flush() ;

/// @brief Method GetChunkSizeBytes addr 0x29d675c size 0xf0 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetChunkSizeBytes(int32_t  size, bool  final) ;

/// @brief Method InternalWrite addr 0x29d684c size 0xbc virtual false final false
inline void InternalWrite(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Write addr 0x29d690c size 0x308 virtual true final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method BeginWrite addr 0x29d6c14 size 0x244 virtual true final false
inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  cback, ::System::Object*  state) ;

/// @brief Method EndWrite addr 0x29d6e58 size 0x22c virtual true final false
inline void EndWrite(::System::IAsyncResult*  ares) ;

/// @brief Method Read addr 0x29d7084 size 0x40 virtual true final false
inline int32_t Read(ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method BeginRead addr 0x29d70c4 size 0x40 virtual true final false
inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  cback, ::System::Object*  state) ;

/// @brief Method EndRead addr 0x29d7104 size 0x40 virtual true final false
inline int32_t EndRead(::System::IAsyncResult*  ares) ;

/// @brief Method Seek addr 0x29d7144 size 0x40 virtual true final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength addr 0x29d7184 size 0x40 virtual true final false
inline void SetLength(int64_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ResponseStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ResponseStream(ResponseStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ResponseStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ResponseStream(ResponseStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ResponseStream()  = default;
public:


// Fields

// Static field crlf


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ResponseStream, 0x40>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::ResponseStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ResponseStream*, "System.Net", "ResponseStream");
