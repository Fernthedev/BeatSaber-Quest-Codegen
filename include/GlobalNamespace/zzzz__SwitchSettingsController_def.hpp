#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SwitchSettingsController)
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class SwitchSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SwitchSettingsController);
// Type: ::SwitchSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16155))
// CS Name: ::SwitchSettingsController*
class CORDL_TYPE SwitchSettingsController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _toggle offset 0x18
 __declspec(property(get=__get__toggle, put=__set__toggle)) ::UnityEngine::UI::Toggle*  _toggle;

/// @brief Field _on offset 0x20
 __declspec(property(get=__get__on, put=__set__on)) bool  _on;

constexpr void __set__toggle(::UnityEngine::UI::Toggle*  value) ;

constexpr ::UnityEngine::UI::Toggle* __get__toggle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> __get__toggle() const;

constexpr void __set__on(bool  value) ;

constexpr bool& __get__on() ;

constexpr bool const& __get__on() const;

/// @brief Method GetInitValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool GetInitValue() ;

/// @brief Method ApplyValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ApplyValue(bool  value) ;

/// @brief Method Awake addr 0x23e5984 size 0xa8 virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x23e5a2c size 0xa8 virtual false final false
inline void OnDestroy() ;

/// @brief Method OnEnable addr 0x23e5ad4 size 0x3c virtual false final false
inline void OnEnable() ;

/// @brief Method RefreshUI addr 0x23e5b10 size 0x24 virtual false final false
inline void RefreshUI() ;

/// @brief Method HandleToggleValueDidChange addr 0x23e5b34 size 0x10 virtual false final false
inline void HandleToggleValueDidChange(bool  value) ;

static inline ::GlobalNamespace::SwitchSettingsController* New_ctor() ;

/// @brief Method .ctor addr 0x23e4260 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SwitchSettingsController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SwitchSettingsController(SwitchSettingsController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SwitchSettingsController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SwitchSettingsController(SwitchSettingsController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SwitchSettingsController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SwitchSettingsController, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SwitchSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SwitchSettingsController*, "", "SwitchSettingsController");
