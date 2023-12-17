#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Motion)
// Forward declare root types
namespace UnityEngine {
class Motion;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Motion);
// Type: UnityEngine::Motion
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10200))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14868))
// CS Name: ::UnityEngine::Motion*
class CORDL_TYPE Motion : public ::UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::Object)]{};

/// @brief Field <isAnimatorMotion>k__BackingField offset 0x18
 __declspec(property(get=__get__isAnimatorMotion_k__BackingField, put=__set__isAnimatorMotion_k__BackingField)) bool  _isAnimatorMotion_k__BackingField;

 __declspec(property(get=get_isLooping)) bool  isLooping;

constexpr void __set__isAnimatorMotion_k__BackingField(bool  value) ;

constexpr bool& __get__isAnimatorMotion_k__BackingField() ;

constexpr bool const& __get__isAnimatorMotion_k__BackingField() const;

static inline ::UnityEngine::Motion* New_ctor() ;

/// @brief Method .ctor addr 0x2c90634 size 0x58 virtual false final false
inline void _ctor() ;

/// @brief Method get_isLooping addr 0x2c9068c size 0x3c virtual false final false
inline bool get_isLooping() ;

// Ctor Parameters [CppParam { name: "", ty: "Motion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Motion(Motion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Motion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Motion(Motion const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Motion()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Motion, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Motion);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Motion*, "UnityEngine", "Motion");
