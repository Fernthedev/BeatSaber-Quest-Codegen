#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(IncDecColorController)
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class ColorStepValuePicker;
}
// Forward declare root types
namespace GlobalNamespace {
class IncDecColorController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IncDecColorController);
// Type: ::IncDecColorController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16146))
// CS Name: ::IncDecColorController*
class CORDL_TYPE IncDecColorController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _stepValuePicker offset 0x18
 __declspec(property(get=__get__stepValuePicker, put=__set__stepValuePicker)) ::GlobalNamespace::ColorStepValuePicker*  _stepValuePicker;

 __declspec(property(put=set_enableDec)) bool  enableDec;

 __declspec(property(put=set_enableInc)) bool  enableInc;

 __declspec(property(put=set_color)) ::UnityEngine::Color  color;

constexpr void __set__stepValuePicker(::GlobalNamespace::ColorStepValuePicker*  value) ;

constexpr ::GlobalNamespace::ColorStepValuePicker* __get__stepValuePicker() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorStepValuePicker*> __get__stepValuePicker() const;

/// @brief Method set_enableDec addr 0x23e47b8 size 0x28 virtual false final false
inline void set_enableDec(bool  value) ;

/// @brief Method set_enableInc addr 0x23e47e0 size 0x28 virtual false final false
inline void set_enableInc(bool  value) ;

/// @brief Method set_color addr 0x23e4808 size 0x2c virtual false final false
inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method Awake addr 0x23e4834 size 0xb8 virtual true final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x23e48ec size 0x104 virtual false final false
inline void OnDestroy() ;

/// @brief Method IncButtonPressed addr 0x0 size 0xffffffffffffffff virtual true final false
inline void IncButtonPressed() ;

/// @brief Method DecButtonPressed addr 0x0 size 0xffffffffffffffff virtual true final false
inline void DecButtonPressed() ;

static inline ::GlobalNamespace::IncDecColorController* New_ctor() ;

/// @brief Method .ctor addr 0x23e49f0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IncDecColorController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IncDecColorController(IncDecColorController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IncDecColorController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IncDecColorController(IncDecColorController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IncDecColorController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IncDecColorController, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IncDecColorController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IncDecColorController*, "", "IncDecColorController");
