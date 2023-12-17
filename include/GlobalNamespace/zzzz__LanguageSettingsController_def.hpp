#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DropdownSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LanguageSettingsController)
namespace GlobalNamespace {
class LanguageSO;
}
// Forward declare root types
namespace GlobalNamespace {
class LanguageSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LanguageSettingsController);
// Type: ::LanguageSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5590))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5605))
// CS Name: ::LanguageSettingsController*
class CORDL_TYPE LanguageSettingsController : public ::GlobalNamespace::DropdownSettingsController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::DropdownSettingsController)]{};

/// @brief Field _settingsValue offset 0x30
 __declspec(property(get=__get__settingsValue, put=__set__settingsValue)) ::GlobalNamespace::LanguageSO*  _settingsValue;

constexpr void __set__settingsValue(::GlobalNamespace::LanguageSO*  value) ;

constexpr ::GlobalNamespace::LanguageSO* __get__settingsValue() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LanguageSO*> __get__settingsValue() const;

/// @brief Method GetInitValues addr 0x22ab5c0 size 0xa8 virtual true final false
inline bool GetInitValues(ByRef<int32_t>  idx, ByRef<int32_t>  numberOfElements) ;

/// @brief Method ApplyValue addr 0x22ab668 size 0x90 virtual true final false
inline void ApplyValue(int32_t  idx) ;

/// @brief Method TextForValue addr 0x22ab6f8 size 0x64 virtual true final false
inline ::StringW TextForValue(int32_t  idx) ;

static inline ::GlobalNamespace::LanguageSettingsController* New_ctor() ;

/// @brief Method .ctor addr 0x22ab75c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LanguageSettingsController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LanguageSettingsController(LanguageSettingsController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LanguageSettingsController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LanguageSettingsController(LanguageSettingsController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LanguageSettingsController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LanguageSettingsController, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LanguageSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LanguageSettingsController*, "", "LanguageSettingsController");
