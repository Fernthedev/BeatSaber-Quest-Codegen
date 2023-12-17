#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_HAPIFunctions)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_HAPIFunctions;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_HAPIFunctions);
// Type: HoudiniEngineUnity::HEU_HAPIFunctions
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9725))
// CS Name: ::HoudiniEngineUnity::HEU_HAPIFunctions*
class CORDL_TYPE HEU_HAPIFunctions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

// Ctor Parameters [CppParam { name: "", ty: "HEU_HAPIFunctions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_HAPIFunctions(HEU_HAPIFunctions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HAPIFunctions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_HAPIFunctions(HEU_HAPIFunctions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_HAPIFunctions()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HAPIFunctions, 0x10>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HAPIFunctions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HAPIFunctions*, "HoudiniEngineUnity", "HEU_HAPIFunctions");
