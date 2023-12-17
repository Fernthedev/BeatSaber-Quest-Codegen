#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CmsContentInfoParser)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfoParser;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsContentInfoParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsContentInfoParser);
// Type: Org.BouncyCastle.Cms::CmsContentInfoParser
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(620))
// CS Name: ::Org.BouncyCastle.Cms::CmsContentInfoParser*
class CORDL_TYPE CmsContentInfoParser : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field contentInfo offset 0x10
 __declspec(property(get=__get_contentInfo, put=__set_contentInfo)) ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*  contentInfo;

/// @brief Field data offset 0x18
 __declspec(property(get=__get_data, put=__set_data)) ::System::IO::Stream*  data;

constexpr void __set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* __get_contentInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*> __get_contentInfo() const;

constexpr void __set_data(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_data() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_data() const;

static inline ::Org::BouncyCastle::Cms::CmsContentInfoParser* New_ctor(::System::IO::Stream*  data) ;

/// @brief Method .ctor addr 0x11da548 size 0x248 virtual false final false
inline void _ctor(::System::IO::Stream*  data) ;

/// @brief Method Close addr 0x11da790 size 0x5c virtual false final false
inline void Close() ;

// Ctor Parameters [CppParam { name: "", ty: "CmsContentInfoParser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsContentInfoParser(CmsContentInfoParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsContentInfoParser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsContentInfoParser(CmsContentInfoParser const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CmsContentInfoParser()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsContentInfoParser, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsContentInfoParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsContentInfoParser*, "Org.BouncyCastle.Cms", "CmsContentInfoParser");
