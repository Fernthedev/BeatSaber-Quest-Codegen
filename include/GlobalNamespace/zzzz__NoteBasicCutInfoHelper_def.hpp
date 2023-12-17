#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteBasicCutInfoHelper)
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
struct SaberType;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteBasicCutInfoHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteBasicCutInfoHelper);
// Type: ::NoteBasicCutInfoHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15023))
// CS Name: ::NoteBasicCutInfoHelper*
class CORDL_TYPE NoteBasicCutInfoHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kMinBladeSpeedForCut offset 0x0
static constexpr float_t  kMinBladeSpeedForCut{2.0};

/// @brief Method GetBasicCutInfo addr 0x12a3df8 size 0x198 virtual false final false
static inline void GetBasicCutInfo(::UnityEngine::Transform*  noteTransform, ::GlobalNamespace::ColorType  colorType, ::GlobalNamespace::NoteCutDirection  cutDirection, ::GlobalNamespace::SaberType  saberType, float_t  saberBladeSpeed, ::UnityEngine::Vector3  cutDirVec, float_t  cutAngleTolerance, ByRef<bool>  directionOK, ByRef<bool>  speedOK, ByRef<bool>  saberTypeOK, ByRef<float_t>  cutDirDeviation, ByRef<float_t>  cutDirAngle) ;

// Ctor Parameters [CppParam { name: "", ty: "NoteBasicCutInfoHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBasicCutInfoHelper(NoteBasicCutInfoHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBasicCutInfoHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBasicCutInfoHelper(NoteBasicCutInfoHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NoteBasicCutInfoHelper()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteBasicCutInfoHelper, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteBasicCutInfoHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteBasicCutInfoHelper*, "", "NoteBasicCutInfoHelper");
