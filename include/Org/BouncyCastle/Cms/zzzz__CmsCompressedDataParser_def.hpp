#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsCompressedDataParser)
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsCompressedDataParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsCompressedDataParser);
// Type: Org.BouncyCastle.Cms::CmsCompressedDataParser
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(620))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(630))
// CS Name: ::Org.BouncyCastle.Cms::CmsCompressedDataParser*
class CORDL_TYPE CmsCompressedDataParser : public ::Org::BouncyCastle::Cms::CmsContentInfoParser {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Cms::CmsContentInfoParser)]{};

static inline ::Org::BouncyCastle::Cms::CmsCompressedDataParser* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  compressedData) ;

/// @brief Method .ctor addr 0x11dcf38 size 0x78 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  compressedData) ;

static inline ::Org::BouncyCastle::Cms::CmsCompressedDataParser* New_ctor(::System::IO::Stream*  compressedData) ;

/// @brief Method .ctor addr 0x11dcfb0 size 0x4 virtual false final false
inline void _ctor(::System::IO::Stream*  compressedData) ;

/// @brief Method GetContent addr 0x11dcfb4 size 0x300 virtual false final false
inline ::Org::BouncyCastle::Cms::CmsTypedStream* GetContent() ;

// Ctor Parameters [CppParam { name: "", ty: "CmsCompressedDataParser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsCompressedDataParser(CmsCompressedDataParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsCompressedDataParser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsCompressedDataParser(CmsCompressedDataParser const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CmsCompressedDataParser()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsCompressedDataParser, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsCompressedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsCompressedDataParser*, "Org.BouncyCastle.Cms", "CmsCompressedDataParser");
