#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MeasureOutput)
namespace UnityEngine::Yoga {
struct YogaSize;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class MeasureOutput;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Yoga::MeasureOutput);
// Type: UnityEngine.Yoga::MeasureOutput
namespace UnityEngine::Yoga {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15361))
// CS Name: ::UnityEngine.Yoga::MeasureOutput*
class CORDL_TYPE MeasureOutput : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Make addr 0x2ea4e14 size 0x4 virtual false final false
static inline ::UnityEngine::Yoga::YogaSize Make(float_t  width, float_t  height) ;

// Ctor Parameters [CppParam { name: "", ty: "MeasureOutput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MeasureOutput(MeasureOutput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeasureOutput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeasureOutput(MeasureOutput const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MeasureOutput()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::MeasureOutput, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Yoga
NEED_NO_BOX(::UnityEngine::Yoga::MeasureOutput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::MeasureOutput*, "UnityEngine.Yoga", "MeasureOutput");
