#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_OutputAttribute_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SerializableDictionary_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_OutputAttributeDictionary)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_OutputAttributeDictionary;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_OutputAttributeDictionary);
// Type: HoudiniEngineUnity::HEU_OutputAttributeDictionary
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9855), inst: 2576 }), TypeDefinitionIndex(TypeDefinitionIndex(9666))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9667))
// CS Name: ::HoudiniEngineUnity::HEU_OutputAttributeDictionary*
class CORDL_TYPE HEU_OutputAttributeDictionary : public ::HoudiniEngineUnity::HEU_SerializableDictionary_2<::StringW,::HoudiniEngineUnity::HEU_OutputAttribute*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::HoudiniEngineUnity::HEU_SerializableDictionary_2<::StringW,::HoudiniEngineUnity::HEU_OutputAttribute*>)]{};

static inline ::HoudiniEngineUnity::HEU_OutputAttributeDictionary* New_ctor() ;

/// @brief Method .ctor addr 0x21839e0 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_OutputAttributeDictionary", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_OutputAttributeDictionary(HEU_OutputAttributeDictionary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_OutputAttributeDictionary", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_OutputAttributeDictionary(HEU_OutputAttributeDictionary const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_OutputAttributeDictionary()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_OutputAttributeDictionary, 0x28>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_OutputAttributeDictionary);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_OutputAttributeDictionary*, "HoudiniEngineUnity", "HEU_OutputAttributeDictionary");
