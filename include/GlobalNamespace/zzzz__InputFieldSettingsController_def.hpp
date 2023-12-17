#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InputFieldSettingsController)
namespace HMUI {
class InputFieldView;
}
namespace GlobalNamespace {
class StringSO;
}
// Forward declare root types
namespace GlobalNamespace {
class InputFieldSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InputFieldSettingsController);
// Type: ::InputFieldSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5595))
// CS Name: ::InputFieldSettingsController*
class CORDL_TYPE InputFieldSettingsController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _inputFieldView offset 0x18
 __declspec(property(get=__get__inputFieldView, put=__set__inputFieldView)) ::HMUI::InputFieldView*  _inputFieldView;

/// @brief Field _settingsValue offset 0x20
 __declspec(property(get=__get__settingsValue, put=__set__settingsValue)) ::GlobalNamespace::StringSO*  _settingsValue;

constexpr void __set__inputFieldView(::HMUI::InputFieldView*  value) ;

constexpr ::HMUI::InputFieldView* __get__inputFieldView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::InputFieldView*> __get__inputFieldView() const;

constexpr void __set__settingsValue(::GlobalNamespace::StringSO*  value) ;

constexpr ::GlobalNamespace::StringSO* __get__settingsValue() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StringSO*> __get__settingsValue() const;

/// @brief Method Awake addr 0x22aaaa0 size 0x98 virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x22aab38 size 0x98 virtual false final false
inline void OnDestroy() ;

/// @brief Method OnEnable addr 0x22aabd0 size 0x54 virtual false final false
inline void OnEnable() ;

/// @brief Method HandleInputFieldDidChange addr 0x22aac24 size 0x5c virtual true final false
inline void HandleInputFieldDidChange(::HMUI::InputFieldView*  inputFieldView) ;

static inline ::GlobalNamespace::InputFieldSettingsController* New_ctor() ;

/// @brief Method .ctor addr 0x22aac80 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputFieldSettingsController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputFieldSettingsController(InputFieldSettingsController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputFieldSettingsController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputFieldSettingsController(InputFieldSettingsController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputFieldSettingsController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InputFieldSettingsController, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InputFieldSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InputFieldSettingsController*, "", "InputFieldSettingsController");
