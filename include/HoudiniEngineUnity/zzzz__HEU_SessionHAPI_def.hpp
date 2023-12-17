#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
CORDL_MODULE_EXPORT(HEU_SessionHAPI)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_SessionHAPI;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_SessionHAPI);
// Type: HoudiniEngineUnity::HEU_SessionHAPI
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9781))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9785))
// CS Name: ::HoudiniEngineUnity::HEU_SessionHAPI*
class CORDL_TYPE HEU_SessionHAPI : public ::HoudiniEngineUnity::HEU_SessionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::HoudiniEngineUnity::HEU_SessionBase)]{};

static inline ::HoudiniEngineUnity::HEU_SessionHAPI* New_ctor() ;

/// @brief Method .ctor addr 0x21a2a74 size 0x20 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_SessionHAPI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_SessionHAPI(HEU_SessionHAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_SessionHAPI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_SessionHAPI(HEU_SessionHAPI const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_SessionHAPI()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_SessionHAPI, 0x30>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_SessionHAPI);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_SessionHAPI*, "HoudiniEngineUnity", "HEU_SessionHAPI");
