#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JSON)
namespace OVRSimpleJSON {
class JSONNode;
}
// Forward declare root types
namespace OVRSimpleJSON {
class JSON;
}
// Write type traits
MARK_REF_PTR_T(::OVRSimpleJSON::JSON);
// Type: OVRSimpleJSON::JSON
namespace OVRSimpleJSON {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8215))
// CS Name: ::OVRSimpleJSON::JSON*
class CORDL_TYPE JSON : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Parse addr 0x27cf0ec size 0x4 virtual false final false
static inline ::OVRSimpleJSON::JSONNode* Parse(::StringW  aJSON) ;

// Ctor Parameters [CppParam { name: "", ty: "JSON", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JSON(JSON && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JSON", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JSON(JSON const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JSON()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::JSON, 0x10>, "Size mismatch!");

} // namespace end def OVRSimpleJSON
NEED_NO_BOX(::OVRSimpleJSON::JSON);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSON*, "OVRSimpleJSON", "JSON");
