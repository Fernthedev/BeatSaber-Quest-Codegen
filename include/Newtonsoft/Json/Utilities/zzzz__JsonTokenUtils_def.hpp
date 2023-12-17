#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JsonTokenUtils)
namespace Newtonsoft::Json {
struct JsonToken;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class JsonTokenUtils;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::JsonTokenUtils);
// Type: Newtonsoft.Json.Utilities::JsonTokenUtils
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11848))
// CS Name: ::Newtonsoft.Json.Utilities::JsonTokenUtils*
class CORDL_TYPE JsonTokenUtils : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method IsEndToken addr 0x2656308 size 0x10 virtual false final false
static inline bool IsEndToken(::Newtonsoft::Json::JsonToken  token) ;

/// @brief Method IsStartToken addr 0x2656108 size 0x10 virtual false final false
static inline bool IsStartToken(::Newtonsoft::Json::JsonToken  token) ;

/// @brief Method IsPrimitiveToken addr 0x2659da4 size 0x24 virtual false final false
static inline bool IsPrimitiveToken(::Newtonsoft::Json::JsonToken  token) ;

// Ctor Parameters [CppParam { name: "", ty: "JsonTokenUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonTokenUtils(JsonTokenUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonTokenUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonTokenUtils(JsonTokenUtils const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JsonTokenUtils()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::JsonTokenUtils, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::JsonTokenUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::JsonTokenUtils*, "Newtonsoft.Json.Utilities", "JsonTokenUtils");
