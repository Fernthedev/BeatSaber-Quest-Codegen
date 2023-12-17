#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ValidationUtils)
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class ValidationUtils;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::ValidationUtils);
// Type: Newtonsoft.Json.Utilities::ValidationUtils
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11902))
// CS Name: ::Newtonsoft.Json.Utilities::ValidationUtils*
class CORDL_TYPE ValidationUtils : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ArgumentNotNull addr 0x2655820 size 0x54 virtual false final false
static inline void ArgumentNotNull(::System::Object*  value, ::StringW  parameterName) ;

// Ctor Parameters [CppParam { name: "", ty: "ValidationUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValidationUtils(ValidationUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValidationUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValidationUtils(ValidationUtils const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ValidationUtils()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ValidationUtils, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ValidationUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ValidationUtils*, "Newtonsoft.Json.Utilities", "ValidationUtils");
