#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsTypedStream)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Cms {
class __CmsTypedStream__FullReaderStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
namespace Org::BouncyCastle::Cms {
class __CmsTypedStream__FullReaderStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsTypedStream);
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream);
// Type: ::FullReaderStream
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(452))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(662))
// CS Name: ::CmsTypedStream::FullReaderStream*
class CORDL_TYPE __CmsTypedStream__FullReaderStream : public ::Org::BouncyCastle::Utilities::IO::FilterStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Org::BouncyCastle::Utilities::IO::FilterStream)]{};

static inline ::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream* New_ctor(::System::IO::Stream*  input) ;

/// @brief Method .ctor addr 0x11ffff8 size 0x8 virtual false final false
inline void _ctor(::System::IO::Stream*  input) ;

/// @brief Method Read addr 0x1200010 size 0xc virtual true final false
inline int32_t Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len) ;

// Ctor Parameters [CppParam { name: "", ty: "__CmsTypedStream__FullReaderStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CmsTypedStream__FullReaderStream(__CmsTypedStream__FullReaderStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CmsTypedStream__FullReaderStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CmsTypedStream__FullReaderStream(__CmsTypedStream__FullReaderStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CmsTypedStream__FullReaderStream()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
// Type: Org.BouncyCastle.Cms::CmsTypedStream
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(663))
// CS Name: ::Org.BouncyCastle.Cms::CmsTypedStream*
class CORDL_TYPE CmsTypedStream : public ::System::Object {
public:
// Declarations
using FullReaderStream = ::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field BufferSize offset 0x0
static constexpr int32_t  BufferSize{static_cast<int32_t>(0x8000)};

/// @brief Field _oid offset 0x10
 __declspec(property(get=__get__oid, put=__set__oid)) ::StringW  _oid;

/// @brief Field _in offset 0x18
 __declspec(property(get=__get__in, put=__set__in)) ::System::IO::Stream*  _in;

 __declspec(property(get=get_ContentType)) ::StringW  ContentType;

 __declspec(property(get=get_ContentStream)) ::System::IO::Stream*  ContentStream;

constexpr void __set__oid(::StringW  value) ;

constexpr ::StringW& __get__oid() ;

constexpr ::StringW const& __get__oid() const;

constexpr void __set__in(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get__in() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get__in() const;

static inline ::Org::BouncyCastle::Cms::CmsTypedStream* New_ctor(::System::IO::Stream*  inStream) ;

/// @brief Method .ctor addr 0x11ffeb4 size 0x80 virtual false final false
inline void _ctor(::System::IO::Stream*  inStream) ;

static inline ::Org::BouncyCastle::Cms::CmsTypedStream* New_ctor(::StringW  oid, ::System::IO::Stream*  inStream) ;

/// @brief Method .ctor addr 0x11ee154 size 0x8 virtual false final false
inline void _ctor(::StringW  oid, ::System::IO::Stream*  inStream) ;

static inline ::Org::BouncyCastle::Cms::CmsTypedStream* New_ctor(::StringW  oid, ::System::IO::Stream*  inStream, int32_t  bufSize) ;

/// @brief Method .ctor addr 0x11fff34 size 0xc4 virtual false final false
inline void _ctor(::StringW  oid, ::System::IO::Stream*  inStream, int32_t  bufSize) ;

/// @brief Method get_ContentType addr 0x1200000 size 0x8 virtual false final false
inline ::StringW get_ContentType() ;

/// @brief Method get_ContentStream addr 0x1200008 size 0x8 virtual false final false
inline ::System::IO::Stream* get_ContentStream() ;

/// @brief Method Drain addr 0x11ee15c size 0x68 virtual false final false
inline void Drain() ;

// Ctor Parameters [CppParam { name: "", ty: "CmsTypedStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsTypedStream(CmsTypedStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsTypedStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsTypedStream(CmsTypedStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CmsTypedStream()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsTypedStream, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsTypedStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsTypedStream*, "Org.BouncyCastle.Cms", "CmsTypedStream");
NEED_NO_BOX(::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream*, "Org.BouncyCastle.Cms", "CmsTypedStream/FullReaderStream");
