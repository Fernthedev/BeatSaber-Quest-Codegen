#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IncDecSettingsController)
namespace GlobalNamespace {
class StepValuePicker;
}
// Forward declare root types
namespace GlobalNamespace {
class IncDecSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IncDecSettingsController);
// Type: ::IncDecSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16147))
// CS Name: ::IncDecSettingsController*
class CORDL_TYPE IncDecSettingsController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _stepValuePicker offset 0x18
 __declspec(property(get=__get__stepValuePicker, put=__set__stepValuePicker)) ::GlobalNamespace::StepValuePicker*  _stepValuePicker;

 __declspec(property(put=set_enableDec)) bool  enableDec;

 __declspec(property(put=set_enableInc)) bool  enableInc;

 __declspec(property(put=set_text)) ::StringW  text;

constexpr void __set__stepValuePicker(::GlobalNamespace::StepValuePicker*  value) ;

constexpr ::GlobalNamespace::StepValuePicker* __get__stepValuePicker() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StepValuePicker*> __get__stepValuePicker() const;

/// @brief Method set_enableDec addr 0x23e49f8 size 0x28 virtual false final false
inline void set_enableDec(bool  value) ;

/// @brief Method set_enableInc addr 0x23e4a40 size 0x28 virtual false final false
inline void set_enableInc(bool  value) ;

/// @brief Method set_text addr 0x23e4a88 size 0x2c virtual false final false
inline void set_text(::StringW  value) ;

/// @brief Method Awake addr 0x23e4ad8 size 0xb8 virtual true final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x23e4cc8 size 0x104 virtual false final false
inline void OnDestroy() ;

/// @brief Method IncButtonPressed addr 0x0 size 0xffffffffffffffff virtual true final false
inline void IncButtonPressed() ;

/// @brief Method DecButtonPressed addr 0x0 size 0xffffffffffffffff virtual true final false
inline void DecButtonPressed() ;

static inline ::GlobalNamespace::IncDecSettingsController* New_ctor() ;

/// @brief Method .ctor addr 0x23e4f04 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IncDecSettingsController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IncDecSettingsController(IncDecSettingsController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IncDecSettingsController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IncDecSettingsController(IncDecSettingsController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IncDecSettingsController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IncDecSettingsController, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IncDecSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IncDecSettingsController*, "", "IncDecSettingsController");
