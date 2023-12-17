#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StreamContent)
namespace System::Net {
class TransportContext;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::IO {
class Stream;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace System::Net::Http {
class StreamContent;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::StreamContent);
// Type: System.Net.Http::StreamContent
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14649))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14656))
// CS Name: ::System.Net.Http::StreamContent*
class CORDL_TYPE StreamContent : public ::System::Net::Http::HttpContent {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Net::Http::HttpContent)]{};

/// @brief Field content offset 0x28
 __declspec(property(get=__get_content, put=__set_content)) ::System::IO::Stream*  content;

/// @brief Field bufferSize offset 0x30
 __declspec(property(get=__get_bufferSize, put=__set_bufferSize)) int32_t  bufferSize;

/// @brief Field cancellationToken offset 0x38
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field startPosition offset 0x40
 __declspec(property(get=__get_startPosition, put=__set_startPosition)) int64_t  startPosition;

/// @brief Field contentCopied offset 0x48
 __declspec(property(get=__get_contentCopied, put=__set_contentCopied)) bool  contentCopied;

constexpr void __set_content(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_content() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_content() const;

constexpr void __set_bufferSize(int32_t  value) ;

constexpr int32_t& __get_bufferSize() ;

constexpr int32_t const& __get_bufferSize() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set_startPosition(int64_t  value) ;

constexpr int64_t& __get_startPosition() ;

constexpr int64_t const& __get_startPosition() const;

constexpr void __set_contentCopied(bool  value) ;

constexpr bool& __get_contentCopied() ;

constexpr bool const& __get_contentCopied() const;

static inline ::System::Net::Http::StreamContent* New_ctor(::System::IO::Stream*  content) ;

/// @brief Method .ctor addr 0x28343ec size 0x8 virtual false final false
inline void _ctor(::System::IO::Stream*  content) ;

static inline ::System::Net::Http::StreamContent* New_ctor(::System::IO::Stream*  content, int32_t  bufferSize) ;

/// @brief Method .ctor addr 0x28343f4 size 0xec virtual false final false
inline void _ctor(::System::IO::Stream*  content, int32_t  bufferSize) ;

static inline ::System::Net::Http::StreamContent* New_ctor(::System::IO::Stream*  content, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor addr 0x2830af4 size 0x28 virtual false final false
inline void _ctor(::System::IO::Stream*  content, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Dispose addr 0x28344e0 size 0x4c virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method SerializeToStreamAsync addr 0x283452c size 0xd8 virtual true final false
inline ::System::Threading::Tasks::Task* SerializeToStreamAsync(::System::IO::Stream*  stream, ::System::Net::TransportContext*  context) ;

/// @brief Method TryComputeLength addr 0x2834604 size 0x68 virtual true final false
inline bool TryComputeLength(ByRef<int64_t>  length) ;

// Ctor Parameters [CppParam { name: "", ty: "StreamContent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamContent(StreamContent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamContent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamContent(StreamContent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StreamContent()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::StreamContent, 0x50>, "Size mismatch!");

} // namespace end def System::Net::Http
NEED_NO_BOX(::System::Net::Http::StreamContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::StreamContent*, "System.Net.Http", "StreamContent");
