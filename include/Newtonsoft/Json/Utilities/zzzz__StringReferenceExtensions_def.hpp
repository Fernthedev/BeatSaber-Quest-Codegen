#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringReferenceExtensions)
namespace Newtonsoft::Json::Utilities {
struct StringReference;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class StringReferenceExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::StringReferenceExtensions);
// Type: Newtonsoft.Json.Utilities::StringReferenceExtensions
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11867))
// CS Name: ::Newtonsoft.Json.Utilities::StringReferenceExtensions*
class CORDL_TYPE StringReferenceExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method IndexOf addr 0x265ba80 size 0x84 virtual false final false
static inline int32_t IndexOf(::Newtonsoft::Json::Utilities::StringReference  s, char16_t  c, int32_t  startIndex, int32_t  length) ;

/// @brief Method StartsWith addr 0x265bb04 size 0xb4 virtual false final false
static inline bool StartsWith(::Newtonsoft::Json::Utilities::StringReference  s, ::StringW  text) ;

/// @brief Method EndsWith addr 0x265bbb8 size 0xb8 virtual false final false
static inline bool EndsWith(::Newtonsoft::Json::Utilities::StringReference  s, ::StringW  text) ;

// Ctor Parameters [CppParam { name: "", ty: "StringReferenceExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StringReferenceExtensions(StringReferenceExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringReferenceExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringReferenceExtensions(StringReferenceExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StringReferenceExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::StringReferenceExtensions, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::StringReferenceExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::StringReferenceExtensions*, "Newtonsoft.Json.Utilities", "StringReferenceExtensions");
