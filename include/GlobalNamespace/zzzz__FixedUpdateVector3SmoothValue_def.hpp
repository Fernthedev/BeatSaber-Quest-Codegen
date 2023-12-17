#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FixedUpdateSmoothValue_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FixedUpdateVector3SmoothValue)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FixedUpdateVector3SmoothValue;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FixedUpdateVector3SmoothValue);
// Type: ::FixedUpdateVector3SmoothValue
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(14333)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14333), inst: 412 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14334))
// CS Name: ::FixedUpdateVector3SmoothValue*
class CORDL_TYPE FixedUpdateVector3SmoothValue : public ::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>)]{};

static inline ::GlobalNamespace::FixedUpdateVector3SmoothValue* New_ctor(float_t  smooth) ;

/// @brief Method .ctor addr 0x20ef5e4 size 0x58 virtual false final false
inline void _ctor(float_t  smooth) ;

/// @brief Method Interpolate addr 0x20ef63c size 0x28 virtual true final false
inline ::UnityEngine::Vector3 Interpolate(::UnityEngine::Vector3  value0, ::UnityEngine::Vector3  value1, float_t  t) ;

// Ctor Parameters [CppParam { name: "", ty: "FixedUpdateVector3SmoothValue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedUpdateVector3SmoothValue(FixedUpdateVector3SmoothValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedUpdateVector3SmoothValue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedUpdateVector3SmoothValue(FixedUpdateVector3SmoothValue const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FixedUpdateVector3SmoothValue()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FixedUpdateVector3SmoothValue, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FixedUpdateVector3SmoothValue);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FixedUpdateVector3SmoothValue*, "", "FixedUpdateVector3SmoothValue");
