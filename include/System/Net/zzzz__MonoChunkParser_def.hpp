#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoChunkParser)
namespace System::Text {
class StringBuilder;
}
namespace System::Net {
class __MonoChunkParser__Chunk;
}
namespace System::Net {
struct __MonoChunkParser__State;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace System::Net {
struct __MonoChunkParser__State;
}
namespace System::Net {
class MonoChunkParser;
}
namespace System::Net {
class __MonoChunkParser__Chunk;
}
// Write type traits
MARK_VAL_T(::System::Net::__MonoChunkParser__State);
MARK_REF_PTR_T(::System::Net::MonoChunkParser);
MARK_REF_PTR_T(::System::Net::__MonoChunkParser__Chunk);
// Type: ::State
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9191))
// CS Name: ::MonoChunkParser::State
struct CORDL_TYPE __MonoChunkParser__State : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____MonoChunkParser__State_Unwrapped
enum struct ____MonoChunkParser__State_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_PartialSize = static_cast<int32_t>(0x1),
__E_Body = static_cast<int32_t>(0x2),
__E_BodyFinished = static_cast<int32_t>(0x3),
__E_Trailer = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Net::__MonoChunkParser__State const None;

/// @brief Field PartialSize value: static_cast<int32_t>(0x1)
static ::System::Net::__MonoChunkParser__State const PartialSize;

/// @brief Field Body value: static_cast<int32_t>(0x2)
static ::System::Net::__MonoChunkParser__State const Body;

/// @brief Field BodyFinished value: static_cast<int32_t>(0x3)
static ::System::Net::__MonoChunkParser__State const BodyFinished;

/// @brief Field Trailer value: static_cast<int32_t>(0x4)
static ::System::Net::__MonoChunkParser__State const Trailer;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____MonoChunkParser__State_Unwrapped () const noexcept {
return std::bit_cast<____MonoChunkParser__State_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __MonoChunkParser__State(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MonoChunkParser__State(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MonoChunkParser__State()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__MonoChunkParser__State, 0x4>, "Size mismatch!");

} // namespace end def System::Net
// Type: ::Chunk
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9192))
// CS Name: ::MonoChunkParser::Chunk*
class CORDL_TYPE __MonoChunkParser__Chunk : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field Bytes offset 0x10
 __declspec(property(get=__get_Bytes, put=__set_Bytes)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Bytes;

/// @brief Field Offset offset 0x18
 __declspec(property(get=__get_Offset, put=__set_Offset)) int32_t  Offset;

constexpr void __set_Bytes(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_Bytes() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_Bytes() const;

constexpr void __set_Offset(int32_t  value) ;

constexpr int32_t& __get_Offset() ;

constexpr int32_t const& __get_Offset() const;

static inline ::System::Net::__MonoChunkParser__Chunk* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  chunk) ;

/// @brief Method .ctor addr 0x29d48bc size 0x28 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  chunk) ;

/// @brief Method Read addr 0x29d3dc0 size 0x60 virtual false final false
inline int32_t Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size) ;

// Ctor Parameters [CppParam { name: "", ty: "__MonoChunkParser__Chunk", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MonoChunkParser__Chunk(__MonoChunkParser__Chunk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MonoChunkParser__Chunk", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MonoChunkParser__Chunk(__MonoChunkParser__Chunk const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MonoChunkParser__Chunk()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__MonoChunkParser__Chunk, 0x20>, "Size mismatch!");

} // namespace end def System::Net
// Type: System.Net::MonoChunkParser
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9193))
// CS Name: ::System.Net::MonoChunkParser*
class CORDL_TYPE MonoChunkParser : public ::System::Object {
public:
// Declarations
using Chunk = ::System::Net::__MonoChunkParser__Chunk;

using State = ::System::Net::__MonoChunkParser__State;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field headers offset 0x10
 __declspec(property(get=__get_headers, put=__set_headers)) ::System::Net::WebHeaderCollection*  headers;

/// @brief Field chunkSize offset 0x18
 __declspec(property(get=__get_chunkSize, put=__set_chunkSize)) int32_t  chunkSize;

/// @brief Field chunkRead offset 0x1c
 __declspec(property(get=__get_chunkRead, put=__set_chunkRead)) int32_t  chunkRead;

/// @brief Field totalWritten offset 0x20
 __declspec(property(get=__get_totalWritten, put=__set_totalWritten)) int32_t  totalWritten;

/// @brief Field state offset 0x24
 __declspec(property(get=__get_state, put=__set_state)) ::System::Net::__MonoChunkParser__State  state;

/// @brief Field saved offset 0x28
 __declspec(property(get=__get_saved, put=__set_saved)) ::System::Text::StringBuilder*  saved;

/// @brief Field sawCR offset 0x30
 __declspec(property(get=__get_sawCR, put=__set_sawCR)) bool  sawCR;

/// @brief Field gotit offset 0x31
 __declspec(property(get=__get_gotit, put=__set_gotit)) bool  gotit;

/// @brief Field trailerState offset 0x34
 __declspec(property(get=__get_trailerState, put=__set_trailerState)) int32_t  trailerState;

/// @brief Field chunks offset 0x38
 __declspec(property(get=__get_chunks, put=__set_chunks)) ::System::Collections::ArrayList*  chunks;

 __declspec(property(get=get_WantMore)) bool  WantMore;

 __declspec(property(get=get_DataAvailable)) bool  DataAvailable;

 __declspec(property(get=get_ChunkLeft)) int32_t  ChunkLeft;

constexpr void __set_headers(::System::Net::WebHeaderCollection*  value) ;

constexpr ::System::Net::WebHeaderCollection* __get_headers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> __get_headers() const;

constexpr void __set_chunkSize(int32_t  value) ;

constexpr int32_t& __get_chunkSize() ;

constexpr int32_t const& __get_chunkSize() const;

constexpr void __set_chunkRead(int32_t  value) ;

constexpr int32_t& __get_chunkRead() ;

constexpr int32_t const& __get_chunkRead() const;

constexpr void __set_totalWritten(int32_t  value) ;

constexpr int32_t& __get_totalWritten() ;

constexpr int32_t const& __get_totalWritten() const;

constexpr void __set_state(::System::Net::__MonoChunkParser__State  value) ;

constexpr ::System::Net::__MonoChunkParser__State& __get_state() ;

constexpr ::System::Net::__MonoChunkParser__State const& __get_state() const;

constexpr void __set_saved(::System::Text::StringBuilder*  value) ;

constexpr ::System::Text::StringBuilder* __get_saved() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> __get_saved() const;

constexpr void __set_sawCR(bool  value) ;

constexpr bool& __get_sawCR() ;

constexpr bool const& __get_sawCR() const;

constexpr void __set_gotit(bool  value) ;

constexpr bool& __get_gotit() ;

constexpr bool const& __get_gotit() const;

constexpr void __set_trailerState(int32_t  value) ;

constexpr int32_t& __get_trailerState() ;

constexpr int32_t const& __get_trailerState() const;

constexpr void __set_chunks(::System::Collections::ArrayList*  value) ;

constexpr ::System::Collections::ArrayList* __get_chunks() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> __get_chunks() const;

static inline ::System::Net::MonoChunkParser* New_ctor(::System::Net::WebHeaderCollection*  headers) ;

/// @brief Method .ctor addr 0x29d39ec size 0xb8 virtual false final false
inline void _ctor(::System::Net::WebHeaderCollection*  headers) ;

/// @brief Method Read addr 0x29d3aa4 size 0x4 virtual false final false
inline int32_t Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method ReadFromChunks addr 0x29d3aa8 size 0x318 virtual false final false
inline int32_t ReadFromChunks(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method Write addr 0x29d3e20 size 0x20 virtual false final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method InternalWrite addr 0x29d3e40 size 0x13c virtual false final false
inline void InternalWrite(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, ByRef<int32_t>  offset, int32_t  size) ;

/// @brief Method get_WantMore addr 0x29d4788 size 0x28 virtual false final false
inline bool get_WantMore() ;

/// @brief Method get_DataAvailable addr 0x29d47b0 size 0x100 virtual false final false
inline bool get_DataAvailable() ;

/// @brief Method get_ChunkLeft addr 0x29d48b0 size 0xc virtual false final false
inline int32_t get_ChunkLeft() ;

/// @brief Method ReadBody addr 0x29d4284 size 0x138 virtual false final false
inline ::System::Net::__MonoChunkParser__State ReadBody(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, ByRef<int32_t>  offset, int32_t  size) ;

/// @brief Method GetChunkSize addr 0x29d3f7c size 0x308 virtual false final false
inline ::System::Net::__MonoChunkParser__State GetChunkSize(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, ByRef<int32_t>  offset, int32_t  size) ;

/// @brief Method RemoveChunkExtension addr 0x29d493c size 0x48 virtual false final false
static inline ::StringW RemoveChunkExtension(::StringW  input) ;

/// @brief Method ReadCRLF addr 0x29d43bc size 0x100 virtual false final false
inline ::System::Net::__MonoChunkParser__State ReadCRLF(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, ByRef<int32_t>  offset, int32_t  size) ;

/// @brief Method ReadTrailer addr 0x29d44bc size 0x2cc virtual false final false
inline ::System::Net::__MonoChunkParser__State ReadTrailer(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, ByRef<int32_t>  offset, int32_t  size) ;

/// @brief Method ThrowProtocolViolation addr 0x29d48e4 size 0x58 virtual false final false
static inline void ThrowProtocolViolation(::StringW  message) ;

// Ctor Parameters [CppParam { name: "", ty: "MonoChunkParser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoChunkParser(MonoChunkParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoChunkParser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoChunkParser(MonoChunkParser const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MonoChunkParser()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::MonoChunkParser, 0x40>, "Size mismatch!");

} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__MonoChunkParser__State, "System.Net", "MonoChunkParser/State");
NEED_NO_BOX(::System::Net::MonoChunkParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::MonoChunkParser*, "System.Net", "MonoChunkParser");
NEED_NO_BOX(::System::Net::__MonoChunkParser__Chunk);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__MonoChunkParser__Chunk*, "System.Net", "MonoChunkParser/Chunk");
