#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatFxGroupEffectCollectionTarget)
namespace GlobalNamespace {
class FloatFxGroupEffectTarget;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatFxGroupEffectCollectionTarget;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatFxGroupEffectCollectionTarget);
// Type: ::FloatFxGroupEffectCollectionTarget
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4909))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4904))
// CS Name: ::FloatFxGroupEffectCollectionTarget*
class CORDL_TYPE FloatFxGroupEffectCollectionTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::FloatFxGroupEffectTarget)]{};

/// @brief Field _floatFxGroupEffectTargets offset 0x18
 __declspec(property(get=__get__floatFxGroupEffectTargets, put=__set__floatFxGroupEffectTargets)) ::ArrayW<::GlobalNamespace::FloatFxGroupEffectTarget*,::Array<::GlobalNamespace::FloatFxGroupEffectTarget*>*>  _floatFxGroupEffectTargets;

constexpr void __set__floatFxGroupEffectTargets(::ArrayW<::GlobalNamespace::FloatFxGroupEffectTarget*,::Array<::GlobalNamespace::FloatFxGroupEffectTarget*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::FloatFxGroupEffectTarget*,::Array<::GlobalNamespace::FloatFxGroupEffectTarget*>*>& __get__floatFxGroupEffectTargets() ;

constexpr ::ArrayW<::GlobalNamespace::FloatFxGroupEffectTarget*,::Array<::GlobalNamespace::FloatFxGroupEffectTarget*>*> const& __get__floatFxGroupEffectTargets() const;

/// @brief Method SetValue addr 0x23a5820 size 0x74 virtual true final false
inline void SetValue(float_t  value) ;

/// @brief Method TriggerValue addr 0x23a5894 size 0x74 virtual true final false
inline void TriggerValue(float_t  value) ;

static inline ::GlobalNamespace::FloatFxGroupEffectCollectionTarget* New_ctor() ;

/// @brief Method .ctor addr 0x23a5908 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffectCollectionTarget", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatFxGroupEffectCollectionTarget(FloatFxGroupEffectCollectionTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffectCollectionTarget", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatFxGroupEffectCollectionTarget(FloatFxGroupEffectCollectionTarget const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FloatFxGroupEffectCollectionTarget()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxGroupEffectCollectionTarget, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxGroupEffectCollectionTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxGroupEffectCollectionTarget*, "", "FloatFxGroupEffectCollectionTarget");
