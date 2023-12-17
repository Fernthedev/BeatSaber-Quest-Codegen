#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__UriParser_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UriParser_BuiltInUriParser)
namespace System {
struct UriSyntaxFlags;
}
// Forward declare root types
namespace System {
class __UriParser__BuiltInUriParser;
}
// Write type traits
MARK_REF_PTR_T(::System::__UriParser__BuiltInUriParser);
// Type: ::BuiltInUriParser
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8887))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8886))
// CS Name: ::UriParser::BuiltInUriParser*
class CORDL_TYPE __UriParser__BuiltInUriParser : public ::System::UriParser {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::UriParser)]{};

static inline ::System::__UriParser__BuiltInUriParser* New_ctor(::StringW  lwrCaseScheme, int32_t  defaultPort, ::System::UriSyntaxFlags  syntaxFlags) ;

/// @brief Method .ctor addr 0x294bc84 size 0x80 virtual false final false
inline void _ctor(::StringW  lwrCaseScheme, int32_t  defaultPort, ::System::UriSyntaxFlags  syntaxFlags) ;

// Ctor Parameters [CppParam { name: "", ty: "__UriParser__BuiltInUriParser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__UriParser__BuiltInUriParser(__UriParser__BuiltInUriParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__UriParser__BuiltInUriParser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__UriParser__BuiltInUriParser(__UriParser__BuiltInUriParser const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __UriParser__BuiltInUriParser()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__UriParser__BuiltInUriParser, 0x28>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::__UriParser__BuiltInUriParser);
DEFINE_IL2CPP_ARG_TYPE(::System::__UriParser__BuiltInUriParser*, "System", "UriParser/BuiltInUriParser");
