#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteJumpStartScaleUp)
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class NoteControllerBase;
}
namespace GlobalNamespace {
class NoteJump;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteJumpStartScaleUp;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteJumpStartScaleUp);
// Type: ::NoteJumpStartScaleUp
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4779))
// CS Name: ::NoteJumpStartScaleUp*
class CORDL_TYPE NoteJumpStartScaleUp : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _fullScaleJumpPart offset 0x18
 __declspec(property(get=__get__fullScaleJumpPart, put=__set__fullScaleJumpPart)) float_t  _fullScaleJumpPart;

/// @brief Field _targetTransform offset 0x20
 __declspec(property(get=__get__targetTransform, put=__set__targetTransform)) ::UnityEngine::Transform*  _targetTransform;

/// @brief Field _noteController offset 0x28
 __declspec(property(get=__get__noteController, put=__set__noteController)) ::GlobalNamespace::NoteController*  _noteController;

/// @brief Field _noteJump offset 0x30
 __declspec(property(get=__get__noteJump, put=__set__noteJump)) ::GlobalNamespace::NoteJump*  _noteJump;

/// @brief Convert operator to "::GlobalNamespace::INoteControllerDidInitEvent"
constexpr operator  ::GlobalNamespace::INoteControllerDidInitEvent*() noexcept;

constexpr void __set__fullScaleJumpPart(float_t  value) ;

constexpr float_t& __get__fullScaleJumpPart() ;

constexpr float_t const& __get__fullScaleJumpPart() const;

constexpr void __set__targetTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__targetTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__targetTransform() const;

constexpr void __set__noteController(::GlobalNamespace::NoteController*  value) ;

constexpr ::GlobalNamespace::NoteController* __get__noteController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteController*> __get__noteController() const;

constexpr void __set__noteJump(::GlobalNamespace::NoteJump*  value) ;

constexpr ::GlobalNamespace::NoteJump* __get__noteJump() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteJump*> __get__noteJump() const;

/// @brief Method Awake addr 0x2389f44 size 0xc4 virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x238a164 size 0x18c virtual false final false
inline void OnDestroy() ;

/// @brief Method UpdateScale addr 0x238a008 size 0x15c virtual false final false
inline void UpdateScale(float_t  progress) ;

/// @brief Method HandleNoteJumpDidUpdateProgress addr 0x238a2f0 size 0x4 virtual false final false
inline void HandleNoteJumpDidUpdateProgress(float_t  progress) ;

/// @brief Method HandleNoteControllerDidInit addr 0x238a2f4 size 0xd8 virtual true final true
inline void HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase*  noteController) ;

static inline ::GlobalNamespace::NoteJumpStartScaleUp* New_ctor() ;

/// @brief Method .ctor addr 0x238a3cc size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NoteJumpStartScaleUp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteJumpStartScaleUp(NoteJumpStartScaleUp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteJumpStartScaleUp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteJumpStartScaleUp(NoteJumpStartScaleUp const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NoteJumpStartScaleUp()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteJumpStartScaleUp, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteJumpStartScaleUp);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteJumpStartScaleUp*, "", "NoteJumpStartScaleUp");
