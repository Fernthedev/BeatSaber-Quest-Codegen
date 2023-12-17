#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_def.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentEffectsFilterPresetDropdown)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
struct EnvironmentEffectsFilterPreset;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentEffectsFilterPresetDropdown;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown);
// Type: ::EnvironmentEffectsFilterPresetDropdown
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4621)), TypeDefinitionIndex(TypeDefinitionIndex(5602)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5602), inst: 4736 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5603))
// CS Name: ::EnvironmentEffectsFilterPresetDropdown*
class CORDL_TYPE EnvironmentEffectsFilterPresetDropdown : public ::GlobalNamespace::ValueDropdownController_1<::GlobalNamespace::EnvironmentEffectsFilterPreset> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::ValueDropdownController_1<::GlobalNamespace::EnvironmentEffectsFilterPreset>)]{};

/// @brief Method GetNamedValues addr 0x22ab220 size 0x128 virtual true final false
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::EnvironmentEffectsFilterPreset,::StringW>*>* GetNamedValues() ;

static inline ::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown* New_ctor() ;

/// @brief Method .ctor addr 0x22ab348 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentEffectsFilterPresetDropdown", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentEffectsFilterPresetDropdown(EnvironmentEffectsFilterPresetDropdown && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentEffectsFilterPresetDropdown", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentEffectsFilterPresetDropdown(EnvironmentEffectsFilterPresetDropdown const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnvironmentEffectsFilterPresetDropdown()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*, "", "EnvironmentEffectsFilterPresetDropdown");
