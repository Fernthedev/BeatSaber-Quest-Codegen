#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__BaseInput_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BaseInputOverride)
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
class BaseInputOverride;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::UI::BaseInputOverride);
// Type: UnityEngine.InputSystem.UI::BaseInputOverride
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13198))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6369))
// CS Name: ::UnityEngine.InputSystem.UI::BaseInputOverride*
class CORDL_TYPE BaseInputOverride : public ::UnityEngine::EventSystems::BaseInput {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::EventSystems::BaseInput)]{};

/// @brief Field <compositionString>k__BackingField offset 0x18
 __declspec(property(get=__get__compositionString_k__BackingField, put=__set__compositionString_k__BackingField)) ::StringW  _compositionString_k__BackingField;

 __declspec(property(get=get_compositionString)) ::StringW  compositionString;

constexpr void __set__compositionString_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__compositionString_k__BackingField() ;

constexpr ::StringW const& __get__compositionString_k__BackingField() const;

/// @brief Method get_compositionString addr 0x2acf728 size 0x8 virtual true final false
inline ::StringW get_compositionString() ;

static inline ::UnityEngine::InputSystem::UI::BaseInputOverride* New_ctor() ;

/// @brief Method .ctor addr 0x2acf730 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BaseInputOverride", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseInputOverride(BaseInputOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseInputOverride", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseInputOverride(BaseInputOverride const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseInputOverride()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::BaseInputOverride, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::UI
NEED_NO_BOX(::UnityEngine::InputSystem::UI::BaseInputOverride);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::BaseInputOverride*, "UnityEngine.InputSystem.UI", "BaseInputOverride");
